#pragma once

#include <QDialog>

namespace Ui {
class TransactionDetailsDialog;
}

namespace WalletGui {

class TransactionDetailsDialog : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(TransactionDetailsDialog)

public:
  TransactionDetailsDialog(const QModelIndex &_index, QWidget* _parent);
  ~TransactionDetailsDialog();

private:
  QScopedPointer<Ui::TransactionDetailsDialog> m_ui;
  const QString m_detailsTemplate;
};

}
