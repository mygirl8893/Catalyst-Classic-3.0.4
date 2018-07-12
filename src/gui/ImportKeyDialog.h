#pragma once

#include <QDialog>

namespace Ui {
class ImportKeyDialog;
}

namespace WalletGui {

class ImportKeyDialog : public QDialog {
  Q_OBJECT

public:
  ImportKeyDialog(QWidget* _parent);
  ~ImportKeyDialog();

  QString getKeyString() const;
  QString getFilePath() const;

private:
  QScopedPointer<Ui::ImportKeyDialog> m_ui;

  Q_SLOT void selectPathClicked();
};

}
