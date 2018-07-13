#include <QDateTime>

#include "CurrencyAdapter.h"
#include "DepositModel.h"
#include "TransactionDetailsDialog.h"
#include "TransactionsModel.h"

#include "ui_transactiondetailsdialog.h"

namespace WalletGui {

TransactionDetailsDialog::TransactionDetailsDialog(const QModelIndex& _index, QWidget* _parent) : QDialog(_parent),
  m_ui(new Ui::TransactionDetailsDialog), m_detailsTemplate(
    "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
    "</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
    "<span style=\" font-weight:600;\">状態: </span>%1</p><br>\n"
    "<span style=\" font-weight:600;\">日付: </span>%2</p><br>\n"
    "<span style=\" font-weight:600;\">に: </span>%4</p><br>\n"
    "<span style=\" font-weight:600;\">量: </span>%5</p><br>\n"
    "<span style=\" font-weight:600;\">費用: </span>%6</p><br>\n"
    "<span style=\" font-weight:600;\">トランザクションハッシュ: </span>%8</p><br><br>\n"
    "%10"
    "</body></html>") {
  m_ui->setupUi(this);

  QModelIndex transactionIndex = TransactionsModel::instance().index(_index.data(TransactionsModel::ROLE_ROW).toInt(),
    _index.data(TransactionsModel::ROLE_ROW).toInt());

  quint64 numberOfConfirmations = transactionIndex.data(TransactionsModel::ROLE_NUMBER_OF_CONFIRMATIONS).value<quint64>();
  QString amountText = transactionIndex.sibling(transactionIndex.row(), TransactionsModel::COLUMN_AMOUNT).data().toString() + " " +
    CurrencyAdapter::instance().getCurrencyTicker().toUpper();
  QString feeText = CurrencyAdapter::instance().formatAmount(transactionIndex.data(TransactionsModel::ROLE_FEE).value<quint64>()) + " " +
    CurrencyAdapter::instance().getCurrencyTicker().toUpper();
  QStringList messageList = _index.data(TransactionsModel::ROLE_MESSAGES).toStringList();

  for (quint32 i = 0; i < messageList.size(); ++i) {
    messageList[i] = messageList[i].toHtmlEscaped().replace("\n", "<br/>");
  }

  CryptoNote::DepositId depositId = transactionIndex.data(TransactionsModel::ROLE_DEPOSIT_ID).value<CryptoNote::DepositId>();

  QString depositInfo;
  if (depositId != CryptoNote::WALLET_LEGACY_INVALID_DEPOSIT_ID) {
    QModelIndex depositIndex = DepositModel::instance().index(depositId, 0);
    QString depositAmount = depositIndex.sibling(depositIndex.row(), DepositModel::COLUMN_AMOUNT).data().toString() + " " +
      CurrencyAdapter::instance().getCurrencyTicker().toUpper();
    QString depositInterest = depositIndex.sibling(depositIndex.row(), DepositModel::COLUMN_INTEREST).data().toString() + " " +
      CurrencyAdapter::instance().getCurrencyTicker().toUpper();
    QString depositSum = depositIndex.sibling(depositIndex.row(), DepositModel::COLUMN_SUM).data().toString() + " " +
      CurrencyAdapter::instance().getCurrencyTicker().toUpper();
    QString depositInfoTemplate =
      "<span style=\" font-weight:600;\">銀行情報: </span></p><br>\n"
      "<span style=\" font-weight:600;\">状態: </span>%1</p><br>\n"
      "<span style=\" font-weight:600;\">量: </span>%2</p><br>\n"
      "<span style=\" font-weight:600;\">PoV: </span>%3</p><br>\n"
      "<span style=\" font-weight:600;\">和: </span>%4</p><br>\n"
      "<span style=\" font-weight:600;\">年PoVレート: </span>%5</p><br>\n"
      "<span style=\" font-weight:600;\">期間: </span>%6</p><br>\n"
      "<span style=\" font-weight:600;\">ロック解除の高さ: </span>%7</p><br>\n"
      "<span style=\" font-weight:600;\">予想されるロック解除時間: </span>%8</p><br>\n"
      "<span style=\" font-weight:600;\">トランザクションの作成: </span>%9</p><br>\n"
      "<span style=\" font-weight:600;\">高さを作成する: </span>%10</p><br>\n"
      "<span style=\" font-weight:600;\">時間を作成する: </span>%11</p><br>\n"
      "<span style=\" font-weight:600;\">支出取引: </span>%12</p><br>\n"
      "<span style=\" font-weight:600;\">支出の高さ: </span>%13</p><br>\n"
      "<span style=\" font-weight:600;\">時間を費やす: </span>%14</p><br>\n";
      depositInfo = depositInfoTemplate.
          arg(depositIndex.sibling(depositIndex.row(), DepositModel::COLUMN_STATE).data().toString()).
          arg(depositAmount).arg(depositInterest).arg(depositSum).
          arg(depositIndex.sibling(depositIndex.row(), DepositModel::COLUMN_YEAR_RATE).data().toString()).
          arg(depositIndex.sibling(depositIndex.row(), DepositModel::COLUMN_TERM).data().toString()).
          arg(depositIndex.sibling(depositIndex.row(), DepositModel::COLUMN_UNLOCK_HEIGHT).data().toString()).
          arg(depositIndex.sibling(depositIndex.row(), DepositModel::COLUMN_UNLOCK_TIME).data().toString()).
          arg(depositIndex.sibling(depositIndex.row(), DepositModel::COLUMN_CREATRING_TRANSACTION_HASH).data().toString()).
          arg(depositIndex.sibling(depositIndex.row(), DepositModel::COLUMN_CREATING_HEIGHT).data().toString()).
          arg(depositIndex.sibling(depositIndex.row(), DepositModel::COLUMN_CREATING_TIME).data().toString()).
          arg(depositIndex.sibling(depositIndex.row(), DepositModel::COLUMN_SPENDING_TRANSACTION_HASH).data().toString()).
          arg(depositIndex.sibling(depositIndex.row(), DepositModel::COLUMN_SPENDING_HEIGHT).data().toString()).
          arg(depositIndex.sibling(depositIndex.row(), DepositModel::COLUMN_SPENDING_TIME).data().toString());
  }

  m_ui->m_detailsBrowser->setHtml(m_detailsTemplate.arg(QString("%1 確認").arg(numberOfConfirmations)).
    arg(transactionIndex.sibling(transactionIndex.row(), TransactionsModel::COLUMN_DATE).data().toString()).arg(transactionIndex.sibling(transactionIndex.row(),
    TransactionsModel::COLUMN_ADDRESS).data().toString()).arg(amountText).arg(feeText).
    arg(transactionIndex.sibling(transactionIndex.row(), TransactionsModel::COLUMN_HASH).data().toString()).
    arg(messageList.join("<br/><br/>=========<br/><br/>")).
    arg(depositInfo));
}

TransactionDetailsDialog::~TransactionDetailsDialog() {
}

}
