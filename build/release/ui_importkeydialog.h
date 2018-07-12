/********************************************************************************
** Form generated from reading UI file 'importkeydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTKEYDIALOG_H
#define UI_IMPORTKEYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ImportKeyDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *m_keyEdit;
    QLabel *label_2;
    QLineEdit *m_pathEdit;
    QToolButton *m_selectPathButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_cancelButton;
    QPushButton *m_okButton;

    void setupUi(QDialog *ImportKeyDialog)
    {
        if (ImportKeyDialog->objectName().isEmpty())
            ImportKeyDialog->setObjectName(QStringLiteral("ImportKeyDialog"));
        ImportKeyDialog->resize(647, 131);
        verticalLayout = new QVBoxLayout(ImportKeyDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(ImportKeyDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        m_keyEdit = new QLineEdit(ImportKeyDialog);
        m_keyEdit->setObjectName(QStringLiteral("m_keyEdit"));

        gridLayout->addWidget(m_keyEdit, 0, 1, 1, 2);

        label_2 = new QLabel(ImportKeyDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        m_pathEdit = new QLineEdit(ImportKeyDialog);
        m_pathEdit->setObjectName(QStringLiteral("m_pathEdit"));

        gridLayout->addWidget(m_pathEdit, 1, 1, 1, 1);

        m_selectPathButton = new QToolButton(ImportKeyDialog);
        m_selectPathButton->setObjectName(QStringLiteral("m_selectPathButton"));

        gridLayout->addWidget(m_selectPathButton, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_cancelButton = new QPushButton(ImportKeyDialog);
        m_cancelButton->setObjectName(QStringLiteral("m_cancelButton"));

        horizontalLayout->addWidget(m_cancelButton);

        m_okButton = new QPushButton(ImportKeyDialog);
        m_okButton->setObjectName(QStringLiteral("m_okButton"));

        horizontalLayout->addWidget(m_okButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ImportKeyDialog);
        QObject::connect(m_selectPathButton, SIGNAL(clicked()), ImportKeyDialog, SLOT(selectPathClicked()));
        QObject::connect(m_okButton, SIGNAL(clicked()), ImportKeyDialog, SLOT(accept()));
        QObject::connect(m_cancelButton, SIGNAL(clicked()), ImportKeyDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ImportKeyDialog);
    } // setupUi

    void retranslateUi(QDialog *ImportKeyDialog)
    {
        ImportKeyDialog->setWindowTitle(QApplication::translate("ImportKeyDialog", "Import private key", Q_NULLPTR));
        label->setText(QApplication::translate("ImportKeyDialog", "Key:", Q_NULLPTR));
        label_2->setText(QApplication::translate("ImportKeyDialog", "Wallet path:", Q_NULLPTR));
        m_selectPathButton->setText(QApplication::translate("ImportKeyDialog", "...", Q_NULLPTR));
        m_cancelButton->setText(QApplication::translate("ImportKeyDialog", "Cancel", Q_NULLPTR));
        m_okButton->setText(QApplication::translate("ImportKeyDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ImportKeyDialog: public Ui_ImportKeyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTKEYDIALOG_H
