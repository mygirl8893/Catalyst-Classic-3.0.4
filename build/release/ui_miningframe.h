/********************************************************************************
** Form generated from reading UI file 'miningframe.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MININGFRAME_H
#define UI_MININGFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_MiningFrame
{
public:
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QComboBox *m_poolCombo;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *m_addPoolButton;
    QLabel *label;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_startButton;
    QPushButton *m_stopButton;
    QLabel *m_poolLabel;
    QLabel *label_3;
    QPushButton *m_delPoolButton;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *m_cpuCombo;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *m_stopSolo;
    QPushButton *m_startSolo;
    QLabel *m_soloLabel;
    QLabel *label_4;
    QButtonGroup *m_miningButtonGroup;
    QButtonGroup *m_soloButtonGroup;

    void setupUi(QFrame *MiningFrame)
    {
        if (MiningFrame->objectName().isEmpty())
            MiningFrame->setObjectName(QStringLiteral("MiningFrame"));
        MiningFrame->resize(760, 469);
        MiningFrame->setFrameShape(QFrame::StyledPanel);
        MiningFrame->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(MiningFrame);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_4, 3, 0, 1, 1);

        groupBox = new QGroupBox(MiningFrame);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        m_poolCombo = new QComboBox(groupBox);
        m_poolCombo->setObjectName(QStringLiteral("m_poolCombo"));
        m_poolCombo->setMinimumSize(QSize(150, 0));
        m_poolCombo->setEditable(false);

        gridLayout_3->addWidget(m_poolCombo, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(422, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 0, 4, 1, 1);

        m_addPoolButton = new QPushButton(groupBox);
        m_addPoolButton->setObjectName(QStringLiteral("m_addPoolButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/add"), QSize(), QIcon::Normal, QIcon::Off);
        m_addPoolButton->setIcon(icon);

        gridLayout_3->addWidget(m_addPoolButton, 0, 2, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(100, 0));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 4, 1, 1);

        m_startButton = new QPushButton(groupBox);
        m_miningButtonGroup = new QButtonGroup(MiningFrame);
        m_miningButtonGroup->setObjectName(QStringLiteral("m_miningButtonGroup"));
        m_miningButtonGroup->addButton(m_startButton);
        m_startButton->setObjectName(QStringLiteral("m_startButton"));
        m_startButton->setCheckable(true);

        gridLayout_2->addWidget(m_startButton, 0, 0, 1, 1);

        m_stopButton = new QPushButton(groupBox);
        m_miningButtonGroup->addButton(m_stopButton);
        m_stopButton->setObjectName(QStringLiteral("m_stopButton"));
        m_stopButton->setEnabled(false);
        m_stopButton->setCheckable(true);
        m_stopButton->setChecked(true);

        gridLayout_2->addWidget(m_stopButton, 0, 1, 1, 1);

        m_poolLabel = new QLabel(groupBox);
        m_poolLabel->setObjectName(QStringLiteral("m_poolLabel"));

        gridLayout_2->addWidget(m_poolLabel, 0, 3, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 5);

        m_delPoolButton = new QPushButton(groupBox);
        m_delPoolButton->setObjectName(QStringLiteral("m_delPoolButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        m_delPoolButton->setIcon(icon1);

        gridLayout_3->addWidget(m_delPoolButton, 0, 3, 1, 1);

        m_poolCombo->raise();
        label->raise();
        m_addPoolButton->raise();
        m_delPoolButton->raise();

        gridLayout_6->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(MiningFrame);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        m_cpuCombo = new QComboBox(groupBox_3);
        m_cpuCombo->setObjectName(QStringLiteral("m_cpuCombo"));

        gridLayout->addWidget(m_cpuCombo, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(587, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 1, 1);


        gridLayout_6->addWidget(groupBox_3, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(MiningFrame);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 0));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(555, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        m_stopSolo = new QPushButton(groupBox_2);
        m_soloButtonGroup = new QButtonGroup(MiningFrame);
        m_soloButtonGroup->setObjectName(QStringLiteral("m_soloButtonGroup"));
        m_soloButtonGroup->addButton(m_stopSolo);
        m_stopSolo->setObjectName(QStringLiteral("m_stopSolo"));
        m_stopSolo->setEnabled(false);
        m_stopSolo->setCheckable(true);
        m_stopSolo->setChecked(true);

        gridLayout_4->addWidget(m_stopSolo, 0, 1, 1, 1);

        m_startSolo = new QPushButton(groupBox_2);
        m_soloButtonGroup->addButton(m_startSolo);
        m_startSolo->setObjectName(QStringLiteral("m_startSolo"));
        m_startSolo->setEnabled(false);
        m_startSolo->setCheckable(true);

        gridLayout_4->addWidget(m_startSolo, 0, 0, 1, 1);

        m_soloLabel = new QLabel(groupBox_2);
        m_soloLabel->setObjectName(QStringLiteral("m_soloLabel"));

        gridLayout_4->addWidget(m_soloLabel, 0, 3, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_4->addWidget(label_4, 0, 2, 1, 1);


        gridLayout_6->addWidget(groupBox_2, 2, 0, 1, 1);


        retranslateUi(MiningFrame);
        QObject::connect(m_startButton, SIGNAL(toggled(bool)), m_startButton, SLOT(setDisabled(bool)));
        QObject::connect(m_stopButton, SIGNAL(toggled(bool)), m_stopButton, SLOT(setDisabled(bool)));
        QObject::connect(m_miningButtonGroup, SIGNAL(buttonClicked(QAbstractButton*)), MiningFrame, SLOT(startStopClicked(QAbstractButton*)));
        QObject::connect(m_soloButtonGroup, SIGNAL(buttonClicked(QAbstractButton*)), MiningFrame, SLOT(startStopSoloClicked(QAbstractButton*)));
        QObject::connect(m_addPoolButton, SIGNAL(clicked()), MiningFrame, SLOT(addPoolClicked()));
        QObject::connect(m_startSolo, SIGNAL(toggled(bool)), m_startSolo, SLOT(setDisabled(bool)));
        QObject::connect(m_stopSolo, SIGNAL(toggled(bool)), m_stopSolo, SLOT(setDisabled(bool)));
        QObject::connect(m_poolCombo, SIGNAL(currentIndexChanged(QString)), MiningFrame, SLOT(currentPoolChanged()));
        QObject::connect(m_delPoolButton, SIGNAL(clicked()), MiningFrame, SLOT(removePoolClicked()));
        QObject::connect(m_cpuCombo, SIGNAL(currentIndexChanged(QString)), MiningFrame, SLOT(setMiningThreads()));

        QMetaObject::connectSlotsByName(MiningFrame);
    } // setupUi

    void retranslateUi(QFrame *MiningFrame)
    {
        MiningFrame->setWindowTitle(QApplication::translate("MiningFrame", "Frame", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MiningFrame", "Pool mining", Q_NULLPTR));
        m_addPoolButton->setText(QApplication::translate("MiningFrame", "Add pool", Q_NULLPTR));
        label->setText(QApplication::translate("MiningFrame", "Select pool", Q_NULLPTR));
        m_startButton->setText(QApplication::translate("MiningFrame", "Start mining", Q_NULLPTR));
        m_stopButton->setText(QApplication::translate("MiningFrame", "Stop mining", Q_NULLPTR));
        m_poolLabel->setText(QApplication::translate("MiningFrame", "Stopped", Q_NULLPTR));
        label_3->setText(QApplication::translate("MiningFrame", "Mining status:", Q_NULLPTR));
        m_delPoolButton->setText(QApplication::translate("MiningFrame", "Remove pool", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MiningFrame", "Settings", Q_NULLPTR));
        label_2->setText(QApplication::translate("MiningFrame", "CPU cores", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MiningFrame", "Solo mining", Q_NULLPTR));
        m_stopSolo->setText(QApplication::translate("MiningFrame", "Stop mining", Q_NULLPTR));
        m_startSolo->setText(QApplication::translate("MiningFrame", "Start mining", Q_NULLPTR));
        m_soloLabel->setText(QApplication::translate("MiningFrame", "Stopped", Q_NULLPTR));
        label_4->setText(QApplication::translate("MiningFrame", "Mining status:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MiningFrame: public Ui_MiningFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MININGFRAME_H
