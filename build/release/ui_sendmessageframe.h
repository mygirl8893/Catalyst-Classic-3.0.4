/********************************************************************************
** Form generated from reading UI file 'sendmessageframe.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDMESSAGEFRAME_H
#define UI_SENDMESSAGEFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SendMessageFrame
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *m_addressEdit;
    QToolButton *m_addressBookButton;
    QToolButton *m_pasteButton;
    QLabel *label_3;
    QTextEdit *m_messageTextEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *m_addReplyToCheck;
    QGridLayout *gridLayout;
    QSlider *m_mixinSlider;
    QLabel *label_2;
    QLineEdit *m_mixinEdit;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QDoubleSpinBox *m_feeSpin;
    QHBoxLayout *horizontalLayout;
    QPushButton *m_sendButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *m_tickerLabel;

    void setupUi(QFrame *SendMessageFrame)
    {
        if (SendMessageFrame->objectName().isEmpty())
            SendMessageFrame->setObjectName(QStringLiteral("SendMessageFrame"));
        SendMessageFrame->resize(773, 575);
        SendMessageFrame->setFrameShape(QFrame::NoFrame);
        SendMessageFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(SendMessageFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(SendMessageFrame);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        m_addressEdit = new QLineEdit(SendMessageFrame);
        m_addressEdit->setObjectName(QStringLiteral("m_addressEdit"));

        horizontalLayout_2->addWidget(m_addressEdit);

        m_addressBookButton = new QToolButton(SendMessageFrame);
        m_addressBookButton->setObjectName(QStringLiteral("m_addressBookButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        m_addressBookButton->setIcon(icon);

        horizontalLayout_2->addWidget(m_addressBookButton);

        m_pasteButton = new QToolButton(SendMessageFrame);
        m_pasteButton->setObjectName(QStringLiteral("m_pasteButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/paste"), QSize(), QIcon::Normal, QIcon::Off);
        m_pasteButton->setIcon(icon1);

        horizontalLayout_2->addWidget(m_pasteButton);


        verticalLayout->addLayout(horizontalLayout_2);

        label_3 = new QLabel(SendMessageFrame);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        m_messageTextEdit = new QTextEdit(SendMessageFrame);
        m_messageTextEdit->setObjectName(QStringLiteral("m_messageTextEdit"));
        m_messageTextEdit->setHtml(QLatin1String("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>"));

        verticalLayout->addWidget(m_messageTextEdit);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        m_addReplyToCheck = new QCheckBox(SendMessageFrame);
        m_addReplyToCheck->setObjectName(QStringLiteral("m_addReplyToCheck"));

        horizontalLayout_3->addWidget(m_addReplyToCheck);


        verticalLayout->addLayout(horizontalLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 5, -1, -1);
        m_mixinSlider = new QSlider(SendMessageFrame);
        m_mixinSlider->setObjectName(QStringLiteral("m_mixinSlider"));
        m_mixinSlider->setMaximumSize(QSize(200, 16777215));
        m_mixinSlider->setMaximum(10);
        m_mixinSlider->setPageStep(1);
        m_mixinSlider->setValue(1);
        m_mixinSlider->setTracking(false);
        m_mixinSlider->setOrientation(Qt::Horizontal);
        m_mixinSlider->setTickPosition(QSlider::TicksBothSides);
        m_mixinSlider->setTickInterval(1);

        gridLayout->addWidget(m_mixinSlider, 1, 1, 1, 1);

        label_2 = new QLabel(SendMessageFrame);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        m_mixinEdit = new QLineEdit(SendMessageFrame);
        m_mixinEdit->setObjectName(QStringLiteral("m_mixinEdit"));
        m_mixinEdit->setMaximumSize(QSize(30, 16777215));
        m_mixinEdit->setText(QStringLiteral(""));
        m_mixinEdit->setMaxLength(5);
        m_mixinEdit->setAlignment(Qt::AlignCenter);
        m_mixinEdit->setReadOnly(true);

        gridLayout->addWidget(m_mixinEdit, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(298, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 3, 1, 1);

        label_4 = new QLabel(SendMessageFrame);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        m_feeSpin = new QDoubleSpinBox(SendMessageFrame);
        m_feeSpin->setObjectName(QStringLiteral("m_feeSpin"));
        m_feeSpin->setDecimals(8);
        m_feeSpin->setMinimum(1.001);
        m_feeSpin->setMaximum(1e+18);
        m_feeSpin->setSingleStep(0.01);
        m_feeSpin->setValue(1.001);

        gridLayout->addWidget(m_feeSpin, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_sendButton = new QPushButton(SendMessageFrame);
        m_sendButton->setObjectName(QStringLiteral("m_sendButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/send"), QSize(), QIcon::Normal, QIcon::Off);
        m_sendButton->setIcon(icon2);

        horizontalLayout->addWidget(m_sendButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        m_tickerLabel = new QLabel(SendMessageFrame);
        m_tickerLabel->setObjectName(QStringLiteral("m_tickerLabel"));
        m_tickerLabel->setText(QStringLiteral(""));

        horizontalLayout->addWidget(m_tickerLabel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SendMessageFrame);
        QObject::connect(m_addressBookButton, SIGNAL(clicked()), SendMessageFrame, SLOT(addressBookClicked()));
        QObject::connect(m_pasteButton, SIGNAL(clicked()), SendMessageFrame, SLOT(pasteClicked()));
        QObject::connect(m_sendButton, SIGNAL(clicked()), SendMessageFrame, SLOT(sendClicked()));
        QObject::connect(m_mixinSlider, SIGNAL(valueChanged(int)), SendMessageFrame, SLOT(mixinValueChanged(int)));
        QObject::connect(m_addressEdit, SIGNAL(textChanged(QString)), SendMessageFrame, SLOT(addressEdited(QString)));

        QMetaObject::connectSlotsByName(SendMessageFrame);
    } // setupUi

    void retranslateUi(QFrame *SendMessageFrame)
    {
        SendMessageFrame->setWindowTitle(QApplication::translate("SendMessageFrame", "Frame", Q_NULLPTR));
        label->setText(QApplication::translate("SendMessageFrame", "Send To:", Q_NULLPTR));
        m_addressBookButton->setText(QApplication::translate("SendMessageFrame", "...", Q_NULLPTR));
        m_pasteButton->setText(QApplication::translate("SendMessageFrame", "...", Q_NULLPTR));
        label_3->setText(QApplication::translate("SendMessageFrame", "Encrypted message:", Q_NULLPTR));
        m_addReplyToCheck->setText(QApplication::translate("SendMessageFrame", "Add \"Reply To\"", Q_NULLPTR));
        label_2->setText(QApplication::translate("SendMessageFrame", "Anonimity level:", Q_NULLPTR));
        label_4->setText(QApplication::translate("SendMessageFrame", "Fee:", Q_NULLPTR));
        m_sendButton->setText(QApplication::translate("SendMessageFrame", "Send", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SendMessageFrame: public Ui_SendMessageFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDMESSAGEFRAME_H
