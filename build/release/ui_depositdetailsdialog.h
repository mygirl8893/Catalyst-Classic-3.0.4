/********************************************************************************
** Form generated from reading UI file 'depositdetailsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSITDETAILSDIALOG_H
#define UI_DEPOSITDETAILSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DepositDetailsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *m_detailsBrowser;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_closeButton;

    void setupUi(QDialog *DepositDetailsDialog)
    {
        if (DepositDetailsDialog->objectName().isEmpty())
            DepositDetailsDialog->setObjectName(QStringLiteral("DepositDetailsDialog"));
        DepositDetailsDialog->resize(736, 357);
        verticalLayout = new QVBoxLayout(DepositDetailsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_detailsBrowser = new QTextBrowser(DepositDetailsDialog);
        m_detailsBrowser->setObjectName(QStringLiteral("m_detailsBrowser"));

        verticalLayout->addWidget(m_detailsBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_closeButton = new QPushButton(DepositDetailsDialog);
        m_closeButton->setObjectName(QStringLiteral("m_closeButton"));

        horizontalLayout->addWidget(m_closeButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DepositDetailsDialog);
        QObject::connect(m_closeButton, SIGNAL(clicked()), DepositDetailsDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(DepositDetailsDialog);
    } // setupUi

    void retranslateUi(QDialog *DepositDetailsDialog)
    {
        DepositDetailsDialog->setWindowTitle(QApplication::translate("DepositDetailsDialog", "Deposit", Q_NULLPTR));
        m_closeButton->setText(QApplication::translate("DepositDetailsDialog", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DepositDetailsDialog: public Ui_DepositDetailsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSITDETAILSDIALOG_H
