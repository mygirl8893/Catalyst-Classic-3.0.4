/********************************************************************************
** Form generated from reading UI file 'receiveframe.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVEFRAME_H
#define UI_RECEIVEFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "gui/QRLabel.h"

QT_BEGIN_NAMESPACE

class Ui_ReceiveFrame
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *m_addressEdit;
    QToolButton *m_copyButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *m_showKeyButton;
    QSpacerItem *horizontalSpacer;
    QFrame *m_keyFrame;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *m_keyEdit;
    QToolButton *m_copyKeyButton;
    QHBoxLayout *horizontalLayout_4;
    WalletGui::QRLabel *m_qrLabel;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QFrame *ReceiveFrame)
    {
        if (ReceiveFrame->objectName().isEmpty())
            ReceiveFrame->setObjectName(QStringLiteral("ReceiveFrame"));
        ReceiveFrame->resize(846, 592);
        ReceiveFrame->setFrameShape(QFrame::StyledPanel);
        ReceiveFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(ReceiveFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(ReceiveFrame);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        m_addressEdit = new QLineEdit(ReceiveFrame);
        m_addressEdit->setObjectName(QStringLiteral("m_addressEdit"));
        m_addressEdit->setReadOnly(true);

        horizontalLayout->addWidget(m_addressEdit);

        m_copyButton = new QToolButton(ReceiveFrame);
        m_copyButton->setObjectName(QStringLiteral("m_copyButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/copy"), QSize(), QIcon::Normal, QIcon::Off);
        m_copyButton->setIcon(icon);

        horizontalLayout->addWidget(m_copyButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        m_showKeyButton = new QPushButton(ReceiveFrame);
        m_showKeyButton->setObjectName(QStringLiteral("m_showKeyButton"));
        m_showKeyButton->setCheckable(true);

        horizontalLayout_2->addWidget(m_showKeyButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        m_keyFrame = new QFrame(ReceiveFrame);
        m_keyFrame->setObjectName(QStringLiteral("m_keyFrame"));
        m_keyFrame->setMinimumSize(QSize(0, 40));
        m_keyFrame->setFrameShape(QFrame::NoFrame);
        m_keyFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(m_keyFrame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        m_keyEdit = new QLineEdit(m_keyFrame);
        m_keyEdit->setObjectName(QStringLiteral("m_keyEdit"));

        horizontalLayout_3->addWidget(m_keyEdit);

        m_copyKeyButton = new QToolButton(m_keyFrame);
        m_copyKeyButton->setObjectName(QStringLiteral("m_copyKeyButton"));
        m_copyKeyButton->setIcon(icon);

        horizontalLayout_3->addWidget(m_copyKeyButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        m_qrLabel = new WalletGui::QRLabel(m_keyFrame);
        m_qrLabel->setObjectName(QStringLiteral("m_qrLabel"));

        horizontalLayout_4->addWidget(m_qrLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout->addWidget(m_keyFrame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(ReceiveFrame);
        QObject::connect(m_copyButton, SIGNAL(clicked()), ReceiveFrame, SLOT(copyAddress()));
        QObject::connect(m_showKeyButton, SIGNAL(clicked()), ReceiveFrame, SLOT(showKeyClicked()));
        QObject::connect(m_copyKeyButton, SIGNAL(clicked()), ReceiveFrame, SLOT(copyKey()));

        QMetaObject::connectSlotsByName(ReceiveFrame);
    } // setupUi

    void retranslateUi(QFrame *ReceiveFrame)
    {
        ReceiveFrame->setWindowTitle(QApplication::translate("ReceiveFrame", "Frame", Q_NULLPTR));
        label->setText(QApplication::translate("ReceiveFrame", "Address:", Q_NULLPTR));
        m_copyButton->setText(QApplication::translate("ReceiveFrame", "...", Q_NULLPTR));
        m_showKeyButton->setText(QApplication::translate("ReceiveFrame", "Show private key", Q_NULLPTR));
        m_copyKeyButton->setText(QApplication::translate("ReceiveFrame", "...", Q_NULLPTR));
        m_qrLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ReceiveFrame: public Ui_ReceiveFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVEFRAME_H
