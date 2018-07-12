/********************************************************************************
** Form generated from reading UI file 'messagesframe.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGESFRAME_H
#define UI_MESSAGESFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MessagesFrame
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *m_messagesView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_replyButton;

    void setupUi(QFrame *MessagesFrame)
    {
        if (MessagesFrame->objectName().isEmpty())
            MessagesFrame->setObjectName(QStringLiteral("MessagesFrame"));
        MessagesFrame->resize(675, 359);
        MessagesFrame->setFrameShape(QFrame::StyledPanel);
        MessagesFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(MessagesFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_messagesView = new QTreeView(MessagesFrame);
        m_messagesView->setObjectName(QStringLiteral("m_messagesView"));
        m_messagesView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        m_messagesView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::CurrentChanged|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        m_messagesView->setAlternatingRowColors(true);
        m_messagesView->setRootIsDecorated(false);
        m_messagesView->setUniformRowHeights(true);
        m_messagesView->setItemsExpandable(false);
        m_messagesView->setSortingEnabled(false);
        m_messagesView->header()->setCascadingSectionResizes(true);
        m_messagesView->header()->setProperty("showSortIndicator", QVariant(false));

        verticalLayout->addWidget(m_messagesView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_replyButton = new QPushButton(MessagesFrame);
        m_replyButton->setObjectName(QStringLiteral("m_replyButton"));

        horizontalLayout->addWidget(m_replyButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(MessagesFrame);
        QObject::connect(m_messagesView, SIGNAL(doubleClicked(QModelIndex)), MessagesFrame, SLOT(messageDoubleClicked(QModelIndex)));
        QObject::connect(m_replyButton, SIGNAL(clicked()), MessagesFrame, SLOT(replyClicked()));

        QMetaObject::connectSlotsByName(MessagesFrame);
    } // setupUi

    void retranslateUi(QFrame *MessagesFrame)
    {
        MessagesFrame->setWindowTitle(QApplication::translate("MessagesFrame", "Frame", Q_NULLPTR));
        m_replyButton->setText(QApplication::translate("MessagesFrame", "Reply", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MessagesFrame: public Ui_MessagesFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGESFRAME_H
