#include "CurrencyAdapter.h"
#include "ConfirmSendDialog.h"

#include "ui_confirmsenddialog.h"

namespace WalletGui {

ConfirmSendDialog::ConfirmSendDialog(QWidget* _parent) : QDialog(_parent), m_ui(new Ui::ConfirmSendDialog) {
  m_ui->setupUi(this);
}

ConfirmSendDialog::~ConfirmSendDialog() {
}

void ConfirmSendDialog::showPasymentDetails(quint64 _total) {
    setWindowTitle(QString(tr("Confirm transmission %1 XAT")).arg(CurrencyAdapter::instance().formatAmount(_total)));
    QString amountText = m_ui->m_confirmLabel->text();
    m_ui->m_confirmLabel->setText(amountText.arg(CurrencyAdapter::instance().formatAmount(_total)));
}
void ConfirmSendDialog::showPaymentId(QString _paymentid) {
    m_ui->m_paymentIdLabel->setText(QString(tr("<html><head/><body><p>Payment ID: %1</p></body></html>")).arg(_paymentid));
}

void ConfirmSendDialog::confirmNoPaymentId() {
    m_ui->m_paymentIdLabel->setText(QString(tr("<html><head/><body><p>Are you sure you want to send？ <strong>Payment ID</strong>?</p></body></html>")));
}

}
