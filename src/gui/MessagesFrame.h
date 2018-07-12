#pragma once

#include <QFrame>

namespace Ui {
class MessagesFrame;
}

namespace WalletGui {

class VisibleMessagesModel;

class MessagesFrame : public QFrame {
  Q_OBJECT

public:
  MessagesFrame(QWidget* _parent);
  ~MessagesFrame();

private:
  QScopedPointer<Ui::MessagesFrame> m_ui;
  QScopedPointer<VisibleMessagesModel> m_visibleMessagesModel;

  void currentMessageChanged(const QModelIndex& _currentIndex);

  Q_SLOT void messageDoubleClicked(const QModelIndex& _index);
  Q_SLOT void replyClicked();

Q_SIGNALS:
  void replyToSignal(const QModelIndex& _index);
};

}
