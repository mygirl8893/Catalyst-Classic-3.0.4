#include "DepositDetailsDialog.h"
#include "CurrencyAdapter.h"
#include "DepositModel.h"

#include "ui_depositdetailsdialog.h"

namespace WalletGui {

DepositDetailsDialog::DepositDetailsDialog(const QModelIndex &_index, QWidget* _parent) : QDialog(_parent),
  m_ui(new Ui::DepositDetailsDialog), m_detailsTemplate(
  "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
  "</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
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
  "<span style=\" font-weight:600;\">時間を費やす: </span>%14</p><br>\n"
  "</body></html>") {
  m_ui->setupUi(this);

  QModelIndex depositIndex = DepositModel::instance().index(_index.data(DepositModel::ROLE_ROW).toUInt(), 0);
  QString depositAmount = depositIndex.sibling(depositIndex.row(), DepositModel::COLUMN_AMOUNT).data().toString() + " " +
    CurrencyAdapter::instance().getCurrencyTicker().toUpper();
  QString depositInterest = depositIndex.sibling(depositIndex.row(), DepositModel::COLUMN_INTEREST).data().toString() + " " +
    CurrencyAdapter::instance().getCurrencyTicker().toUpper();
  QString depositSum = depositIndex.sibling(depositIndex.row(), DepositModel::COLUMN_SUM).data().toString() + " " +
    CurrencyAdapter::instance().getCurrencyTicker().toUpper();
  QString depositInfo = m_detailsTemplate.
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
  m_ui->m_detailsBrowser->setHtml(depositInfo);
}

DepositDetailsDialog::~DepositDetailsDialog() {
}

}

