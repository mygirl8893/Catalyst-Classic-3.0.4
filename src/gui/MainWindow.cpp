#include <QCloseEvent>
#include <QFileDialog>
#include <QStandardPaths>
#include <QInputDialog>
#include <QMessageBox>
#include <QSystemTrayIcon>
#include <QDesktopServices>
#include <QTimer>
#include <QDebug>
#include <QDateTime>
#include <QFontDatabase>
#include <QToolButton>
#include <QPushButton>

#include <common/Base58.h>
#include <common/StringTools.h>
#include <common/Util.h>

#include "AboutDialog.h"
#include "AddressBookModel.h"
#include "AnimatedLabel.h"
#include "ChangePasswordDialog.h"
#include "CurrencyAdapter.h"
#include "ExitWidget.h"
#include "ImportKeyDialog.h"
#include "ExportTrackingKeyDialog.h"
#include "ImportTrackingKeyDialog.h"
#include "MainWindow.h"
#include "NewPasswordDialog.h"
#include "NodeAdapter.h"
#include "PasswordDialog.h"
#include "Settings.h"
#include "WalletAdapter.h"
#include "WalletEvents.h"
#include "SendFrame.h"
#include "InfoDialog.h"

#include "ui_mainwindow.h"

namespace WalletGui {

MainWindow* MainWindow::m_instance = nullptr;

MainWindow& MainWindow::instance() {
  if (m_instance == nullptr) {
    m_instance = new MainWindow;
  }

  return *m_instance;
}

MainWindow::MainWindow() : QMainWindow(), m_ui(new Ui::MainWindow), m_trayIcon(nullptr), m_tabActionGroup(new QActionGroup(this)),
  m_isAboutToQuit(false) {
  m_ui->setupUi(this);
  m_connectionStateIconLabel = new QPushButton();
  m_connectionStateIconLabel->setFlat(true); // Make the button look like a label, but clickable
  m_connectionStateIconLabel->setStyleSheet(".QPushButton { background-color: rgba(255, 255, 255, 0);}");
  m_connectionStateIconLabel->setMaximumSize(16, 16);
  m_encryptionStateIconLabel = new QLabel(this);
  m_synchronizationStateIconLabel = new AnimatedLabel(this);
  m_trackingModeIconLabel = new QLabel(this);

  connectToSignals();
  initUi();

  walletClosed();
}

MainWindow::~MainWindow() {
}

void MainWindow::connectToSignals() {
  connect(&WalletAdapter::instance(), &WalletAdapter::openWalletWithPasswordSignal, this, &MainWindow::askForWalletPassword, Qt::QueuedConnection);
  connect(&WalletAdapter::instance(), &WalletAdapter::changeWalletPasswordSignal, this, &MainWindow::encryptWallet, Qt::QueuedConnection);
  connect(&WalletAdapter::instance(), &WalletAdapter::walletSynchronizationProgressUpdatedSignal, this, &MainWindow::walletSynchronizationInProgress,
    Qt::QueuedConnection);
  connect(&WalletAdapter::instance(), &WalletAdapter::walletSynchronizationCompletedSignal, this, &MainWindow::walletSynchronized,
    Qt::QueuedConnection);
  connect(&WalletAdapter::instance(), &WalletAdapter::walletStateChangedSignal, this, &MainWindow::setStatusBarText);
  connect(&WalletAdapter::instance(), &WalletAdapter::walletInitCompletedSignal, this, &MainWindow::walletOpened);
  connect(&WalletAdapter::instance(), &WalletAdapter::walletCloseCompletedSignal, this, &MainWindow::walletClosed);
  connect(&WalletAdapter::instance(), &WalletAdapter::walletTransactionCreatedSignal, this, [this]() {
    QApplication::alert(this);
  });
  connect(&NodeAdapter::instance(), &NodeAdapter::peerCountUpdatedSignal, this, &MainWindow::peerCountUpdated, Qt::QueuedConnection);
  connect(m_ui->m_exitAction, &QAction::triggered, qApp, &QApplication::quit);
  connect(m_ui->m_sendFrame, &SendFrame::uriOpenSignal, this, &MainWindow::onUriOpenSignal, Qt::QueuedConnection);
}

void MainWindow::initUi() {
  setWindowTitle(QString("%1 Wallet %2").arg(CurrencyAdapter::instance().getCurrencyDisplayName()).arg(Settings::instance().getVersion()));
#ifdef Q_OS_WIN32
  if (QSystemTrayIcon::isSystemTrayAvailable()) {
    m_trayIcon = new QSystemTrayIcon(QPixmap(":images/cryptonote"), this);
    connect(m_trayIcon, &QSystemTrayIcon::activated, this, &MainWindow::trayActivated);
  }
#endif
  m_ui->m_aboutCryptonoteAction->setText(QString(tr("About %1 Wallet")).arg(CurrencyAdapter::instance().getCurrencyDisplayName()));

  m_ui->m_overviewFrame->hide();
  m_ui->m_sendFrame->hide();
  m_ui->m_receiveFrame->hide();
  m_ui->m_transactionsFrame->hide();
  m_ui->m_addressBookFrame->hide();
  m_ui->m_miningFrame->hide();
  m_ui->m_depositsFrame->hide();

  m_tabActionGroup->addAction(m_ui->m_overviewAction);
  m_tabActionGroup->addAction(m_ui->m_sendAction);
  m_tabActionGroup->addAction(m_ui->m_receiveAction);
  m_tabActionGroup->addAction(m_ui->m_transactionsAction);
  m_tabActionGroup->addAction(m_ui->m_addressBookAction);
  m_tabActionGroup->addAction(m_ui->m_miningAction);
  m_tabActionGroup->addAction(m_ui->m_depositsAction);

  m_ui->m_overviewAction->toggle();
  encryptedFlagChanged(false);
  statusBar()->addPermanentWidget(m_connectionStateIconLabel);
  statusBar()->addPermanentWidget(m_encryptionStateIconLabel);
  statusBar()->addPermanentWidget(m_synchronizationStateIconLabel);
  qobject_cast<AnimatedLabel*>(m_synchronizationStateIconLabel)->setSprite(QPixmap(":icons/sync_sprite"), QSize(16, 16), 5, 24);
  m_connectionStateIconLabel->setIcon(QPixmap(":icons/disconnected").scaled(16, 16, Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
  m_trackingModeIconLabel->setPixmap(QPixmap(":icons/tracking").scaledToHeight(16, Qt::SmoothTransformation));

#ifdef Q_OS_MAC
  installDockHandler();
#endif

#ifndef Q_OS_WIN
  m_ui->m_minimizeToTrayAction->deleteLater();
  m_ui->m_closeToTrayAction->deleteLater();
#endif
}

#ifdef Q_OS_WIN
void MainWindow::minimizeToTray(bool _on) {
  if (_on) {
    hide();
    m_trayIcon->show();
  } else {
    showNormal();
    activateWindow();
    m_trayIcon->hide();
  }
}
#endif

void MainWindow::scrollToTransaction(const QModelIndex& _index) {
  m_ui->m_transactionsAction->setChecked(true);
  m_ui->m_transactionsFrame->scrollToTransaction(_index);
}

void MainWindow::quit() {
  if (!m_isAboutToQuit) {
    ExitWidget* exitWidget = new ExitWidget(nullptr);
    exitWidget->show();
    m_isAboutToQuit = true;
    close();
  }
}

#ifdef Q_OS_MAC
void MainWindow::restoreFromDock() {
  if (m_isAboutToQuit) {
    return;
  }

  showNormal();
}
#endif

void MainWindow::closeEvent(QCloseEvent* _event) {
#ifdef Q_OS_WIN
  if (m_isAboutToQuit) {
    QMainWindow::closeEvent(_event);
    return;
  } else if (Settings::instance().isCloseToTrayEnabled()) {
    minimizeToTray(true);
    _event->ignore();
  } else {
    QApplication::quit();
    return;
  }
#elif defined(Q_OS_LINUX)
  if (!m_isAboutToQuit) {
    QApplication::quit();
    return;
  }
#endif
  QMainWindow::closeEvent(_event);

}

#ifdef Q_OS_WIN
void MainWindow::changeEvent(QEvent* _event) {
  QMainWindow::changeEvent(_event);
  if (!QSystemTrayIcon::isSystemTrayAvailable()) {
    QMainWindow::changeEvent(_event);
    return;
  }

  switch (_event->type()) {
  case QEvent::WindowStateChange:
    if(Settings::instance().isMinimizeToTrayEnabled()) {
      minimizeToTray(isMinimized());
    }
    break;
  default:
    break;
  }

  QMainWindow::changeEvent(_event);
}
#endif

bool MainWindow::event(QEvent* _event) {
  switch (static_cast<WalletEventType>(_event->type())) {
    case WalletEventType::ShowMessage:
    showMessage(static_cast<ShowMessageEvent*>(_event)->messageText(), static_cast<ShowMessageEvent*>(_event)->messageType());
    return true;
  }

  return QMainWindow::event(_event);
}

void MainWindow::createWallet() {
  QString filePath = QFileDialog::getSaveFileName(this, tr("New wallet file"),
  #ifdef Q_OS_WIN
      //QApplication::applicationDirPath(),
        QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation),

  #else
      QDir::homePath(),
  #endif
      tr("Wallets (*.wallet)")
      );

    if (!filePath.isEmpty() && !filePath.endsWith(".wallet")) {
      filePath.append(".wallet");
    }

    if (!filePath.isEmpty() && !QFile::exists(filePath)) {
      if (WalletAdapter::instance().isOpen()) {
        WalletAdapter::instance().close();
      }

      WalletAdapter::instance().setWalletFile(filePath);
      WalletAdapter::instance().open("");
    }
}

void MainWindow::openWallet() {
  QString filePath = QFileDialog::getOpenFileName(this, tr("Open .wallet/.keys file"),
#ifdef Q_OS_WIN
    //QApplication::applicationDirPath(),
      QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation),
#else
    QDir::homePath(),
#endif
    tr("Wallet (*.wallet *.keys)"));

  if (!filePath.isEmpty()) {

    if (QFile::exists(filePath) && (!filePath.endsWith(".keys") && !filePath.endsWith(".wallet") && !filePath.endsWith(".trackingwallet"))) {
      QMessageBox::warning(this, tr("Wrong wallet file extension"),
                                 tr("Wrong wallet file extension, wallet file should have \".wallet\", \".keys\" or \".trackingwallet\" extension."), QMessageBox::Ok);
      return;
    }

    if (WalletAdapter::instance().isOpen()) {
      WalletAdapter::instance().close();
    }

    WalletAdapter::instance().setWalletFile(filePath);
    WalletAdapter::instance().open("");
  }
}

void MainWindow::importKey() {
  ImportKeyDialog dlg(this);
  if (dlg.exec() == QDialog::Accepted) {
    QString keyString = dlg.getKeyString().trimmed();
    QString filePath = dlg.getFilePath();
    if (keyString.isEmpty() || filePath.isEmpty()) {
      return;
    }

    if (!filePath.endsWith(".wallet")) {
      filePath.append(".wallet");
    }

    uint64_t addressPrefix;
    std::string data;
    CryptoNote::AccountKeys keys;
    if (Tools::Base58::decode_addr(keyString.toStdString(), addressPrefix, data) && addressPrefix == CurrencyAdapter::instance().getAddressPrefix() &&
      data.size() == sizeof(keys)) {
      std::memcpy(&keys, data.data(), sizeof(keys));
      if (WalletAdapter::instance().isOpen()) {
        WalletAdapter::instance().close();
      }
      WalletAdapter::instance().setWalletFile(filePath);
      WalletAdapter::instance().createWithKeys(keys);
    } else {
      QMessageBox::warning(this, tr("Wallet keys are not valid"), tr("The private keys you entered are not valid."), QMessageBox::Ok);
    }
  }
}

void MainWindow::isTrackingMode() {
  m_ui->m_sendFrame->hide();
  m_ui->m_overviewAction->trigger();
  m_ui->m_sendAction->setEnabled(false);
  m_ui->m_openUriAction->setEnabled(false);
  //m_ui->m_showMnemonicSeedAction->setEnabled(false);
  m_trackingModeIconLabel->show();
}

void MainWindow::backupWallet() {
  QString filePath = QFileDialog::getSaveFileName(this, tr("Backup wallet to..."),
  #ifdef Q_OS_WIN
      //QApplication::applicationDirPath(),
        QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation),
  #else
      QDir::homePath(),
  #endif
      tr("Wallets (*.wallet)")
      );
    if (!filePath.isEmpty() && !filePath.endsWith(".wallet")) {
      filePath.append(".wallet");
    }

    if (!filePath.isEmpty() && !QFile::exists(filePath)) {
      WalletAdapter::instance().backup(filePath);
    }
}

void MainWindow::resetWallet() {
  Q_ASSERT(WalletAdapter::instance().isOpen());
  if (QMessageBox::warning(this, tr("Warning"), tr("Your wallet will be reset and restored from blockchain.\n"
    "Are you sure?"), QMessageBox::Ok, QMessageBox::Cancel) == QMessageBox::Ok) {
    WalletAdapter::instance().reset();
    WalletAdapter::instance().open("");
  }
}

void MainWindow::handlePaymentRequest(QString _request) {
  if (Settings::instance().isTrackingMode()) {
      isTrackingMode();
      return;
  }
  m_ui->m_sendAction->trigger();
  m_ui->m_sendFrame->parsePaymentRequest(_request);
  QWidget::activateWindow();
}

void MainWindow::onUriOpenSignal() {
  if (Settings::instance().isTrackingMode()) {
      isTrackingMode();
      return;
  }
  m_ui->m_sendAction->trigger();
}

void MainWindow::encryptWallet() {
  if (Settings::instance().isEncrypted()) {
    bool error = false;
    do {
      ChangePasswordDialog dlg(this);
      if (dlg.exec() == QDialog::Rejected) {
        return;
      }

      QString oldPassword = dlg.getOldPassword();
      QString newPassword = dlg.getNewPassword();
      error = !WalletAdapter::instance().changePassword(oldPassword, newPassword);
    } while (error);
  } else {
    NewPasswordDialog dlg(this);
    if (dlg.exec() == QDialog::Accepted) {
      QString password = dlg.getPassword();
      if (password.isEmpty()) {
        return;
      }

      encryptedFlagChanged(WalletAdapter::instance().changePassword("", password));
    }
  }
}

void MainWindow::aboutQt() {
  QMessageBox::aboutQt(this);
}

void MainWindow::setStartOnLogin(bool _on) {
  Settings::instance().setStartOnLoginEnabled(_on);
  m_ui->m_startOnLoginAction->setChecked(Settings::instance().isStartOnLoginEnabled());
}

void MainWindow::setMinimizeToTray(bool _on) {
#ifdef Q_OS_WIN
  Settings::instance().setMinimizeToTrayEnabled(_on);
#endif
}

void MainWindow::setCloseToTray(bool _on) {
#ifdef Q_OS_WIN
  Settings::instance().setCloseToTrayEnabled(_on);
#endif
}

void MainWindow::about() {
  AboutDialog dlg(this);
  dlg.exec();
}

void MainWindow::setStatusBarText(const QString& _text) {
  statusBar()->showMessage(_text);
}

void MainWindow::showMessage(const QString& _text, QtMsgType _type) {
  switch (_type) {
  case QtCriticalMsg:
    QMessageBox::critical(this, tr("Wallet error"), _text);
    break;
  case QtDebugMsg:
    QMessageBox::information(this, tr("Wallet"), _text);
    break;
  default:
    break;
  }
}

void MainWindow::askForWalletPassword(bool _error) {
  PasswordDialog dlg(_error, this);
  if (dlg.exec() == QDialog::Accepted) {
    QString password = dlg.getPassword();
    WalletAdapter::instance().open(password);
  }
}

void MainWindow::encryptedFlagChanged(bool _encrypted) {
  m_ui->m_encryptWalletAction->setEnabled(!_encrypted);
  m_ui->m_changePasswordAction->setEnabled(_encrypted);
  QString encryptionIconPath = _encrypted ? ":icons/encrypted" : ":icons/decrypted";
  QPixmap encryptionIcon = QPixmap(encryptionIconPath).scaled(16, 16, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
  m_encryptionStateIconLabel->setPixmap(encryptionIcon);
  QString encryptionLabelTooltip = _encrypted ? tr("Encrypted") : tr("Not encrypted");
  m_encryptionStateIconLabel->setToolTip(encryptionLabelTooltip);
}

void MainWindow::peerCountUpdated(quint64 _peerCount) {
  QString connectionIconPath = _peerCount > 0 ? ":icons/connected" : ":icons/disconnected";
  QPixmap connectionIcon = QPixmap(connectionIconPath).scaled(16, 16, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
  m_connectionStateIconLabel->setIcon(connectionIcon);
  m_connectionStateIconLabel->setToolTip(QString(tr("%1 peers").arg(_peerCount)));
}

void MainWindow::walletSynchronizationInProgress() {
  qobject_cast<AnimatedLabel*>(m_synchronizationStateIconLabel)->startAnimation();
  m_synchronizationStateIconLabel->setToolTip(tr("Synchronization in progress"));
}

void MainWindow::walletSynchronized(int _error, const QString& _error_text) {
  QPixmap syncIcon = QPixmap(":icons/synced").scaled(16, 16, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
  qobject_cast<AnimatedLabel*>(m_synchronizationStateIconLabel)->stopAnimation();
  m_synchronizationStateIconLabel->setPixmap(syncIcon);
  QString syncLabelTooltip = _error > 0 ? tr("Not synchronized") : tr("Synchronized");
  m_synchronizationStateIconLabel->setToolTip(syncLabelTooltip);
}

void MainWindow::walletOpened(bool _error, const QString& _error_text) {
  if (!_error) {
    m_encryptionStateIconLabel->show();
    m_synchronizationStateIconLabel->show();
    m_ui->m_backupWalletAction->setEnabled(true);
    m_ui->m_resetAction->setEnabled(true);
    m_ui->m_openUriAction->setEnabled(true);
    encryptedFlagChanged(Settings::instance().isEncrypted());

    QList<QAction*> tabActions = m_tabActionGroup->actions();
    Q_FOREACH(auto action, tabActions) {
      action->setEnabled(true);
    }

    m_ui->m_overviewAction->toggle();
    encryptedFlagChanged(false);
    statusBar()->addPermanentWidget(m_trackingModeIconLabel);
    m_trackingModeIconLabel->setPixmap(QPixmap(":icons/tracking").scaledToHeight(16, Qt::SmoothTransformation));
    m_trackingModeIconLabel->hide();
    m_trackingModeIconLabel->setToolTip(tr("トラッキングウォレット。 支出は利用できません"));
    QString connection = Settings::instance().getConnection();

  //if(connection.compare("remote") == 0) {
    //m_remoteModeIconLabel->show();
    //m_remoteModeIconLabel->setPixmap(QPixmap(":icons/remote_mode").scaledToHeight(16, Qt::SmoothTransformation));
  //}

    m_ui->m_overviewFrame->show();
  } else {
    walletClosed();
  }
}

void MainWindow::walletClosed() {
  m_ui->m_backupWalletAction->setEnabled(false);
  m_ui->m_encryptWalletAction->setEnabled(false);
  m_ui->m_changePasswordAction->setEnabled(false);
  m_ui->m_openUriAction->setEnabled(false);
  m_ui->m_overviewFrame->hide();
  m_ui->m_sendFrame->hide();
  m_ui->m_transactionsFrame->hide();
  m_ui->m_addressBookFrame->hide();
  m_ui->m_miningFrame->hide();
  m_ui->m_depositsFrame->hide();
  m_ui->m_resetAction->setEnabled(false);
  m_encryptionStateIconLabel->hide();
  m_trackingModeIconLabel->hide();
  m_synchronizationStateIconLabel->hide();
  QList<QAction*> tabActions = m_tabActionGroup->actions();
  Q_FOREACH(auto action, tabActions) {
    action->setEnabled(false);
  }
}

#ifdef Q_OS_WIN
void MainWindow::trayActivated(QSystemTrayIcon::ActivationReason _reason) {
  showNormal();
  m_trayIcon->hide();
}
#endif

}
