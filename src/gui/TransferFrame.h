#pragma once

#include <QFrame>

namespace Ui {
class TransferFrame;
}

namespace WalletGui {

class DnsManager;

class TransferFrame : public QFrame {
  Q_OBJECT
  Q_DISABLE_COPY(TransferFrame)

public:
  TransferFrame(QWidget* _parent);
  ~TransferFrame();

  QString getAddress() const;
  QString getLabel() const;
  qreal getAmount() const;
  QString getAmountString() const;
  QString getComment() const;

  void disableRemoveButton(bool _disable);
  void setAddress(const QString& _address);
  void setLabel(QString _label);
  void setAmount(quint64 _amount);

protected:
  void timerEvent(QTimerEvent* _event) Q_DECL_OVERRIDE;

signals:
  void amountValueChangedSignal();
  void insertPaymentIDSignal(QString _paymentid);

private:
  QScopedPointer<Ui::TransferFrame> m_ui;
  DnsManager* m_aliasProvider;
  int m_addressInputTimer;

  void onAliasFound(const QString& _name, const QString& _address);

  Q_SLOT void addressBookClicked();
  Q_SLOT void addressEdited(const QString& _text);
  Q_SLOT void pasteClicked();
  Q_SLOT void amountValueChange();
};

}
