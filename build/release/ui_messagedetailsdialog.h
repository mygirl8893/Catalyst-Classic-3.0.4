/********************************************************************************
** Form generated from reading UI file 'messagedetailsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEDETAILSDIALOG_H
#define UI_MESSAGEDETAILSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MessageDetailsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *m_heightLabel;
    QLabel *label_5;
    QLabel *m_hashLabel;
    QLabel *m_amountLabel;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *m_sizeLabel;
    QTextEdit *m_messageTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *m_replyButton;
    QPushButton *m_saveButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_prevButton;
    QPushButton *m_nextButton;
    QPushButton *m_okButton;

    void setupUi(QDialog *MessageDetailsDialog)
    {
        if (MessageDetailsDialog->objectName().isEmpty())
            MessageDetailsDialog->setObjectName(QStringLiteral("MessageDetailsDialog"));
        MessageDetailsDialog->resize(705, 493);
        verticalLayout = new QVBoxLayout(MessageDetailsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(MessageDetailsDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(20);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        m_heightLabel = new QLabel(frame);
        m_heightLabel->setObjectName(QStringLiteral("m_heightLabel"));

        gridLayout->addWidget(m_heightLabel, 0, 1, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        m_hashLabel = new QLabel(frame);
        m_hashLabel->setObjectName(QStringLiteral("m_hashLabel"));

        gridLayout->addWidget(m_hashLabel, 1, 1, 1, 1);

        m_amountLabel = new QLabel(frame);
        m_amountLabel->setObjectName(QStringLiteral("m_amountLabel"));

        gridLayout->addWidget(m_amountLabel, 2, 1, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        m_sizeLabel = new QLabel(frame);
        m_sizeLabel->setObjectName(QStringLiteral("m_sizeLabel"));

        gridLayout->addWidget(m_sizeLabel, 3, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addWidget(frame);

        m_messageTextEdit = new QTextEdit(MessageDetailsDialog);
        m_messageTextEdit->setObjectName(QStringLiteral("m_messageTextEdit"));
        m_messageTextEdit->setReadOnly(true);

        verticalLayout->addWidget(m_messageTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_replyButton = new QPushButton(MessageDetailsDialog);
        m_replyButton->setObjectName(QStringLiteral("m_replyButton"));
        m_replyButton->setAutoDefault(false);

        horizontalLayout->addWidget(m_replyButton);

        m_saveButton = new QPushButton(MessageDetailsDialog);
        m_saveButton->setObjectName(QStringLiteral("m_saveButton"));

        horizontalLayout->addWidget(m_saveButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_prevButton = new QPushButton(MessageDetailsDialog);
        m_prevButton->setObjectName(QStringLiteral("m_prevButton"));

        horizontalLayout->addWidget(m_prevButton);

        m_nextButton = new QPushButton(MessageDetailsDialog);
        m_nextButton->setObjectName(QStringLiteral("m_nextButton"));

        horizontalLayout->addWidget(m_nextButton);

        m_okButton = new QPushButton(MessageDetailsDialog);
        m_okButton->setObjectName(QStringLiteral("m_okButton"));
        m_okButton->setAutoDefault(true);

        horizontalLayout->addWidget(m_okButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(MessageDetailsDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), MessageDetailsDialog, SLOT(reject()));
        QObject::connect(m_replyButton, SIGNAL(clicked()), MessageDetailsDialog, SLOT(accept()));
        QObject::connect(m_prevButton, SIGNAL(clicked()), MessageDetailsDialog, SLOT(prevClicked()));
        QObject::connect(m_nextButton, SIGNAL(clicked()), MessageDetailsDialog, SLOT(nextClicked()));
        QObject::connect(m_saveButton, SIGNAL(clicked()), MessageDetailsDialog, SLOT(saveClicked()));

        m_okButton->setDefault(true);


        QMetaObject::connectSlotsByName(MessageDetailsDialog);
    } // setupUi

    void retranslateUi(QDialog *MessageDetailsDialog)
    {
        MessageDetailsDialog->setWindowTitle(QApplication::translate("MessageDetailsDialog", "Message", Q_NULLPTR));
        label->setText(QApplication::translate("MessageDetailsDialog", "Block height", Q_NULLPTR));
        m_heightLabel->setText(QString());
        label_5->setText(QApplication::translate("MessageDetailsDialog", "Amount", Q_NULLPTR));
        m_hashLabel->setText(QString());
        m_amountLabel->setText(QString());
        label_3->setText(QApplication::translate("MessageDetailsDialog", "Transaction hash", Q_NULLPTR));
        label_7->setText(QApplication::translate("MessageDetailsDialog", "Message size (bytes)", Q_NULLPTR));
        m_sizeLabel->setText(QString());
        m_replyButton->setText(QApplication::translate("MessageDetailsDialog", "Reply", Q_NULLPTR));
        m_saveButton->setText(QApplication::translate("MessageDetailsDialog", "Save to file", Q_NULLPTR));
        m_prevButton->setText(QApplication::translate("MessageDetailsDialog", "<<", Q_NULLPTR));
        m_nextButton->setText(QApplication::translate("MessageDetailsDialog", ">>", Q_NULLPTR));
        m_okButton->setText(QApplication::translate("MessageDetailsDialog", "Ok", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MessageDetailsDialog: public Ui_MessageDetailsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEDETAILSDIALOG_H
