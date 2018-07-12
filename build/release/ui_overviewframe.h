/********************************************************************************
** Form generated from reading UI file 'overviewframe.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWFRAME_H
#define UI_OVERVIEWFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OverviewFrame
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QFrame *m_overviewWalletFrame;
    QGridLayout *gridLayout_2;
    QFrame *line;
    QLabel *m_actualBalanceLabel;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *m_tickerLabel1;
    QLabel *m_tickerLabel2;
    QLabel *m_pendingBalanceLabel;
    QLabel *m_tickerLabel3;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *m_unlockedDepositLabel;
    QLabel *m_tickerLabel4;
    QLabel *m_totalBalanceLabel;
    QLabel *m_lockedDepositLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *m_tickerLabel5;
    QLabel *label_9;
    QLabel *m_totalDepositLabel;
    QLabel *m_tickerLabel6;
    QLabel *label;
    QFrame *line_2;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer;
    QTreeView *m_recentTransactionsView;

    void setupUi(QFrame *OverviewFrame)
    {
        if (OverviewFrame->objectName().isEmpty())
            OverviewFrame->setObjectName(QStringLiteral("OverviewFrame"));
        OverviewFrame->resize(866, 590);
        OverviewFrame->setFrameShape(QFrame::StyledPanel);
        OverviewFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(OverviewFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setHorizontalSpacing(5);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 425, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 2, 1);

        m_overviewWalletFrame = new QFrame(OverviewFrame);
        m_overviewWalletFrame->setObjectName(QStringLiteral("m_overviewWalletFrame"));
        m_overviewWalletFrame->setMinimumSize(QSize(0, 320));
        m_overviewWalletFrame->setMaximumSize(QSize(16777215, 320));
        m_overviewWalletFrame->setFrameShape(QFrame::NoFrame);
        m_overviewWalletFrame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(m_overviewWalletFrame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        line = new QFrame(m_overviewWalletFrame);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 3, 0, 1, 4);

        m_actualBalanceLabel = new QLabel(m_overviewWalletFrame);
        m_actualBalanceLabel->setObjectName(QStringLiteral("m_actualBalanceLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        m_actualBalanceLabel->setFont(font);
        m_actualBalanceLabel->setText(QStringLiteral("0.00"));
        m_actualBalanceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(m_actualBalanceLabel, 1, 2, 1, 1);

        label_6 = new QLabel(m_overviewWalletFrame);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 4, 0, 1, 1);

        label_4 = new QLabel(m_overviewWalletFrame);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 2);

        m_tickerLabel1 = new QLabel(m_overviewWalletFrame);
        m_tickerLabel1->setObjectName(QStringLiteral("m_tickerLabel1"));
        m_tickerLabel1->setText(QStringLiteral(""));

        gridLayout_2->addWidget(m_tickerLabel1, 1, 3, 1, 1);

        m_tickerLabel2 = new QLabel(m_overviewWalletFrame);
        m_tickerLabel2->setObjectName(QStringLiteral("m_tickerLabel2"));
        m_tickerLabel2->setText(QStringLiteral(""));

        gridLayout_2->addWidget(m_tickerLabel2, 2, 3, 1, 1);

        m_pendingBalanceLabel = new QLabel(m_overviewWalletFrame);
        m_pendingBalanceLabel->setObjectName(QStringLiteral("m_pendingBalanceLabel"));
        m_pendingBalanceLabel->setFont(font);
        m_pendingBalanceLabel->setText(QStringLiteral("0.00"));
        m_pendingBalanceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(m_pendingBalanceLabel, 2, 2, 1, 1);

        m_tickerLabel3 = new QLabel(m_overviewWalletFrame);
        m_tickerLabel3->setObjectName(QStringLiteral("m_tickerLabel3"));
        m_tickerLabel3->setText(QStringLiteral(""));

        gridLayout_2->addWidget(m_tickerLabel3, 4, 3, 1, 1);

        label_2 = new QLabel(m_overviewWalletFrame);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label_7 = new QLabel(m_overviewWalletFrame);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 8, 0, 1, 1);

        m_unlockedDepositLabel = new QLabel(m_overviewWalletFrame);
        m_unlockedDepositLabel->setObjectName(QStringLiteral("m_unlockedDepositLabel"));
        m_unlockedDepositLabel->setFont(font);
        m_unlockedDepositLabel->setText(QStringLiteral("0.00"));
        m_unlockedDepositLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(m_unlockedDepositLabel, 8, 1, 1, 2);

        m_tickerLabel4 = new QLabel(m_overviewWalletFrame);
        m_tickerLabel4->setObjectName(QStringLiteral("m_tickerLabel4"));
        m_tickerLabel4->setText(QStringLiteral(""));

        gridLayout_2->addWidget(m_tickerLabel4, 7, 3, 1, 1);

        m_totalBalanceLabel = new QLabel(m_overviewWalletFrame);
        m_totalBalanceLabel->setObjectName(QStringLiteral("m_totalBalanceLabel"));
        m_totalBalanceLabel->setFont(font);
        m_totalBalanceLabel->setText(QStringLiteral("0.00"));
        m_totalBalanceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(m_totalBalanceLabel, 4, 2, 1, 1);

        m_lockedDepositLabel = new QLabel(m_overviewWalletFrame);
        m_lockedDepositLabel->setObjectName(QStringLiteral("m_lockedDepositLabel"));
        m_lockedDepositLabel->setFont(font);
        m_lockedDepositLabel->setText(QStringLiteral("0.00"));
        m_lockedDepositLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(m_lockedDepositLabel, 7, 1, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 6, 4, 1, 1);

        label_3 = new QLabel(m_overviewWalletFrame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout_2->addWidget(label_3, 6, 0, 1, 1);

        label_5 = new QLabel(m_overviewWalletFrame);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 7, 0, 1, 1);

        m_tickerLabel5 = new QLabel(m_overviewWalletFrame);
        m_tickerLabel5->setObjectName(QStringLiteral("m_tickerLabel5"));
        m_tickerLabel5->setText(QStringLiteral(""));

        gridLayout_2->addWidget(m_tickerLabel5, 8, 3, 1, 1);

        label_9 = new QLabel(m_overviewWalletFrame);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 10, 0, 1, 1);

        m_totalDepositLabel = new QLabel(m_overviewWalletFrame);
        m_totalDepositLabel->setObjectName(QStringLiteral("m_totalDepositLabel"));
        m_totalDepositLabel->setFont(font);
        m_totalDepositLabel->setText(QStringLiteral("0.00"));
        m_totalDepositLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(m_totalDepositLabel, 10, 1, 1, 2);

        m_tickerLabel6 = new QLabel(m_overviewWalletFrame);
        m_tickerLabel6->setObjectName(QStringLiteral("m_tickerLabel6"));
        m_tickerLabel6->setText(QStringLiteral(""));

        gridLayout_2->addWidget(m_tickerLabel6, 10, 3, 1, 1);

        label = new QLabel(m_overviewWalletFrame);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        line_2 = new QFrame(m_overviewWalletFrame);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 9, 0, 1, 4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 5, 0, 1, 4);


        gridLayout->addWidget(m_overviewWalletFrame, 0, 0, 1, 1);

        frame_2 = new QFrame(OverviewFrame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setMinimumSize(QSize(0, 0));
        frame_2->setMaximumSize(QSize(16777215, 16777215));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        horizontalLayout->addWidget(label_8);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        m_recentTransactionsView = new QTreeView(frame_2);
        m_recentTransactionsView->setObjectName(QStringLiteral("m_recentTransactionsView"));
        m_recentTransactionsView->setFocusPolicy(Qt::NoFocus);
        m_recentTransactionsView->setStyleSheet(QStringLiteral("background-color: transparent;"));
        m_recentTransactionsView->setFrameShape(QFrame::NoFrame);
        m_recentTransactionsView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        m_recentTransactionsView->setSelectionMode(QAbstractItemView::NoSelection);
        m_recentTransactionsView->setRootIsDecorated(false);
        m_recentTransactionsView->setUniformRowHeights(true);
        m_recentTransactionsView->setItemsExpandable(false);
        m_recentTransactionsView->setHeaderHidden(true);
        m_recentTransactionsView->setExpandsOnDoubleClick(false);

        verticalLayout->addWidget(m_recentTransactionsView);


        gridLayout->addWidget(frame_2, 0, 1, 4, 1);

        gridLayout->setColumnStretch(0, 40);
        gridLayout->setColumnStretch(1, 60);

        retranslateUi(OverviewFrame);

        QMetaObject::connectSlotsByName(OverviewFrame);
    } // setupUi

    void retranslateUi(QFrame *OverviewFrame)
    {
        OverviewFrame->setWindowTitle(QApplication::translate("OverviewFrame", "Frame", Q_NULLPTR));
        label_6->setText(QApplication::translate("OverviewFrame", "Total:", Q_NULLPTR));
        label_4->setText(QApplication::translate("OverviewFrame", "Unconfirmed:", Q_NULLPTR));
        label_2->setText(QApplication::translate("OverviewFrame", "Balance:", Q_NULLPTR));
        label_7->setText(QApplication::translate("OverviewFrame", "Unlocked:", Q_NULLPTR));
        label_3->setText(QApplication::translate("OverviewFrame", "Deposits", Q_NULLPTR));
        label_5->setText(QApplication::translate("OverviewFrame", "Locked:", Q_NULLPTR));
        label_9->setText(QApplication::translate("OverviewFrame", "Total:", Q_NULLPTR));
        label->setText(QApplication::translate("OverviewFrame", "Wallet", Q_NULLPTR));
        label_8->setText(QApplication::translate("OverviewFrame", "Recent transactions", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OverviewFrame: public Ui_OverviewFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWFRAME_H
