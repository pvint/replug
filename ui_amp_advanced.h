/********************************************************************************
** Form generated from reading UI file 'amp_advanced.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMP_ADVANCED_H
#define UI_AMP_ADVANCED_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Amp_Advanced
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QSlider *dial;
    QSpinBox *spinBox;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_4;
    QSlider *dial_2;
    QSpinBox *spinBox_2;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_5;
    QSlider *dial_3;
    QSpinBox *spinBox_3;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_8;
    QSlider *dial_6;
    QSpinBox *spinBox_6;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_9;
    QSlider *dial_7;
    QSpinBox *spinBox_7;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_7;
    QSlider *dial_5;
    QSpinBox *spinBox_5;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_6;
    QSlider *dial_4;
    QSpinBox *spinBox_4;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_10;
    QSlider *dial_8;
    QSpinBox *spinBox_8;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *Amp_Advanced)
    {
        if (Amp_Advanced->objectName().isEmpty())
            Amp_Advanced->setObjectName(QString::fromUtf8("Amp_Advanced"));
        Amp_Advanced->resize(413, 303);
        verticalLayout = new QVBoxLayout(Amp_Advanced);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(Amp_Advanced);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label);

        comboBox = new QComboBox(Amp_Advanced);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMaxVisibleItems(13);

        horizontalLayout_4->addWidget(comboBox);

        label_2 = new QLabel(Amp_Advanced);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_2);

        comboBox_2 = new QComboBox(Amp_Advanced);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_4->addWidget(comboBox_2);

        checkBox = new QCheckBox(Amp_Advanced);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_4->addWidget(checkBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        dial = new QSlider(Amp_Advanced);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setMaximum(255);
        dial->setValue(128);
        dial->setTickPosition(QSlider::TicksBothSides);
        dial->setTickInterval(25);
        dial->setProperty("notchTarget", QVariant(12.75));
        dial->setProperty("notchesVisible", QVariant(true));

        verticalLayout_3->addWidget(dial, 0, Qt::AlignHCenter);

        spinBox = new QSpinBox(Amp_Advanced);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(255);
        spinBox->setValue(128);

        verticalLayout_3->addWidget(spinBox);

        label_3 = new QLabel(Amp_Advanced);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        dial_2 = new QSlider(Amp_Advanced);
        dial_2->setObjectName(QString::fromUtf8("dial_2"));
        dial_2->setMaximum(255);
        dial_2->setValue(128);
        dial_2->setTickPosition(QSlider::TicksBothSides);
        dial_2->setTickInterval(25);
        dial_2->setProperty("notchTarget", QVariant(12.75));
        dial_2->setProperty("notchesVisible", QVariant(true));

        verticalLayout_4->addWidget(dial_2, 0, Qt::AlignHCenter);

        spinBox_2 = new QSpinBox(Amp_Advanced);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMaximum(255);
        spinBox_2->setValue(128);

        verticalLayout_4->addWidget(spinBox_2);

        label_4 = new QLabel(Amp_Advanced);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        dial_3 = new QSlider(Amp_Advanced);
        dial_3->setObjectName(QString::fromUtf8("dial_3"));
        dial_3->setMaximum(255);
        dial_3->setValue(128);
        dial_3->setTickPosition(QSlider::TicksBothSides);
        dial_3->setTickInterval(25);
        dial_3->setProperty("notchTarget", QVariant(12.75));
        dial_3->setProperty("notchesVisible", QVariant(true));

        verticalLayout_5->addWidget(dial_3, 0, Qt::AlignHCenter);

        spinBox_3 = new QSpinBox(Amp_Advanced);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setMaximum(255);
        spinBox_3->setValue(128);

        verticalLayout_5->addWidget(spinBox_3);

        label_5 = new QLabel(Amp_Advanced);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        dial_6 = new QSlider(Amp_Advanced);
        dial_6->setObjectName(QString::fromUtf8("dial_6"));
        dial_6->setMaximum(255);
        dial_6->setValue(128);
        dial_6->setTickPosition(QSlider::TicksBothSides);
        dial_6->setTickInterval(25);
        dial_6->setProperty("notchTarget", QVariant(12.75));
        dial_6->setProperty("notchesVisible", QVariant(true));

        verticalLayout_8->addWidget(dial_6, 0, Qt::AlignHCenter);

        spinBox_6 = new QSpinBox(Amp_Advanced);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));
        spinBox_6->setMaximum(255);
        spinBox_6->setValue(128);

        verticalLayout_8->addWidget(spinBox_6);

        label_8 = new QLabel(Amp_Advanced);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_8);


        horizontalLayout->addLayout(verticalLayout_8);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        dial_7 = new QSlider(Amp_Advanced);
        dial_7->setObjectName(QString::fromUtf8("dial_7"));
        dial_7->setMaximum(2);
        dial_7->setValue(1);
        dial_7->setTickPosition(QSlider::TicksBothSides);
        dial_7->setTickInterval(1);
        dial_7->setProperty("notchTarget", QVariant(12.75));
        dial_7->setProperty("notchesVisible", QVariant(true));

        verticalLayout_9->addWidget(dial_7, 0, Qt::AlignHCenter);

        spinBox_7 = new QSpinBox(Amp_Advanced);
        spinBox_7->setObjectName(QString::fromUtf8("spinBox_7"));
        spinBox_7->setMaximum(2);
        spinBox_7->setValue(1);

        verticalLayout_9->addWidget(spinBox_7);

        label_9 = new QLabel(Amp_Advanced);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_9);


        horizontalLayout_2->addLayout(verticalLayout_9);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        dial_5 = new QSlider(Amp_Advanced);
        dial_5->setObjectName(QString::fromUtf8("dial_5"));
        dial_5->setEnabled(false);
        dial_5->setMaximum(9);
        dial_5->setValue(0);
        dial_5->setTickPosition(QSlider::TicksBothSides);
        dial_5->setTickInterval(1);
        dial_5->setProperty("notchTarget", QVariant(12.75));
        dial_5->setProperty("notchesVisible", QVariant(true));

        verticalLayout_7->addWidget(dial_5, 0, Qt::AlignHCenter);

        spinBox_5 = new QSpinBox(Amp_Advanced);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setEnabled(false);
        spinBox_5->setMaximum(9);
        spinBox_5->setValue(0);

        verticalLayout_7->addWidget(spinBox_5);

        label_7 = new QLabel(Amp_Advanced);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_7);


        horizontalLayout_2->addLayout(verticalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        dial_4 = new QSlider(Amp_Advanced);
        dial_4->setObjectName(QString::fromUtf8("dial_4"));
        dial_4->setEnabled(false);
        dial_4->setMaximum(255);
        dial_4->setValue(128);
        dial_4->setTickPosition(QSlider::TicksBothSides);
        dial_4->setTickInterval(25);
        dial_4->setProperty("notchTarget", QVariant(12.75));
        dial_4->setProperty("notchesVisible", QVariant(true));

        verticalLayout_6->addWidget(dial_4, 0, Qt::AlignHCenter);

        spinBox_4 = new QSpinBox(Amp_Advanced);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setEnabled(false);
        spinBox_4->setMaximum(255);
        spinBox_4->setValue(128);

        verticalLayout_6->addWidget(spinBox_4);

        label_6 = new QLabel(Amp_Advanced);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_6);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        dial_8 = new QSlider(Amp_Advanced);
        dial_8->setObjectName(QString::fromUtf8("dial_8"));
        dial_8->setMaximum(255);
        dial_8->setValue(0);
        dial_8->setTickPosition(QSlider::TicksBothSides);
        dial_8->setTickInterval(25);
        dial_8->setProperty("notchTarget", QVariant(12.75));
        dial_8->setProperty("notchesVisible", QVariant(true));

        verticalLayout_10->addWidget(dial_8, 0, Qt::AlignHCenter);

        spinBox_8 = new QSpinBox(Amp_Advanced);
        spinBox_8->setObjectName(QString::fromUtf8("spinBox_8"));
        spinBox_8->setMaximum(255);
        spinBox_8->setValue(0);

        verticalLayout_10->addWidget(spinBox_8);

        label_10 = new QLabel(Amp_Advanced);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_10);


        horizontalLayout_2->addLayout(verticalLayout_10);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton = new QPushButton(Amp_Advanced);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_3);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(comboBox);
        label_2->setBuddy(comboBox_2);
        label_3->setBuddy(spinBox);
        label_4->setBuddy(spinBox_2);
        label_5->setBuddy(spinBox_3);
        label_8->setBuddy(spinBox_6);
        label_9->setBuddy(spinBox_7);
        label_7->setBuddy(spinBox_5);
        label_6->setBuddy(spinBox_4);
        label_10->setBuddy(spinBox_8);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(comboBox, comboBox_2);
        QWidget::setTabOrder(comboBox_2, checkBox);
        QWidget::setTabOrder(checkBox, dial);
        QWidget::setTabOrder(dial, spinBox);
        QWidget::setTabOrder(spinBox, dial_2);
        QWidget::setTabOrder(dial_2, spinBox_2);
        QWidget::setTabOrder(spinBox_2, dial_3);
        QWidget::setTabOrder(dial_3, spinBox_3);
        QWidget::setTabOrder(spinBox_3, dial_6);
        QWidget::setTabOrder(dial_6, spinBox_6);
        QWidget::setTabOrder(spinBox_6, dial_7);
        QWidget::setTabOrder(dial_7, spinBox_7);
        QWidget::setTabOrder(spinBox_7, dial_5);
        QWidget::setTabOrder(dial_5, spinBox_5);
        QWidget::setTabOrder(spinBox_5, dial_4);
        QWidget::setTabOrder(dial_4, spinBox_4);
        QWidget::setTabOrder(spinBox_4, dial_8);
        QWidget::setTabOrder(dial_8, spinBox_8);
        QWidget::setTabOrder(spinBox_8, pushButton);

        retranslateUi(Amp_Advanced);
        QObject::connect(pushButton, SIGNAL(clicked()), Amp_Advanced, SLOT(accept()));
        QObject::connect(dial, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), dial, SLOT(setValue(int)));
        QObject::connect(dial_2, SIGNAL(valueChanged(int)), spinBox_2, SLOT(setValue(int)));
        QObject::connect(spinBox_2, SIGNAL(valueChanged(int)), dial_2, SLOT(setValue(int)));
        QObject::connect(dial_3, SIGNAL(valueChanged(int)), spinBox_3, SLOT(setValue(int)));
        QObject::connect(spinBox_3, SIGNAL(valueChanged(int)), dial_3, SLOT(setValue(int)));
        QObject::connect(dial_4, SIGNAL(valueChanged(int)), spinBox_4, SLOT(setValue(int)));
        QObject::connect(spinBox_4, SIGNAL(valueChanged(int)), dial_4, SLOT(setValue(int)));
        QObject::connect(dial_5, SIGNAL(valueChanged(int)), spinBox_5, SLOT(setValue(int)));
        QObject::connect(spinBox_5, SIGNAL(valueChanged(int)), dial_5, SLOT(setValue(int)));
        QObject::connect(dial_6, SIGNAL(valueChanged(int)), spinBox_6, SLOT(setValue(int)));
        QObject::connect(spinBox_6, SIGNAL(valueChanged(int)), dial_6, SLOT(setValue(int)));
        QObject::connect(dial_7, SIGNAL(valueChanged(int)), spinBox_7, SLOT(setValue(int)));
        QObject::connect(spinBox_7, SIGNAL(valueChanged(int)), dial_7, SLOT(setValue(int)));
        QObject::connect(dial_8, SIGNAL(valueChanged(int)), spinBox_8, SLOT(setValue(int)));
        QObject::connect(spinBox_8, SIGNAL(valueChanged(int)), dial_8, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(Amp_Advanced);
    } // setupUi

    void retranslateUi(QDialog *Amp_Advanced)
    {
        Amp_Advanced->setWindowTitle(QApplication::translate("Amp_Advanced", "Advanced Settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        Amp_Advanced->setAccessibleName(QApplication::translate("Amp_Advanced", "Amplifier's advanced settings window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        Amp_Advanced->setAccessibleDescription(QApplication::translate("Amp_Advanced", "Allows you to set some advanced options of the amplifier", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label->setText(QApplication::translate("Amp_Advanced", "&Cabinet:", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Amp_Advanced", "Off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amp_Advanced", "57DLX", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amp_Advanced", "BSSMN", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amp_Advanced", "65DLX", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amp_Advanced", "65PRN", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amp_Advanced", "CHAMP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amp_Advanced", "4x12M", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amp_Advanced", "2x12C", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amp_Advanced", "4x12G", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amp_Advanced", "65TWN", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amp_Advanced", "4x12V", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amp_Advanced", "SS212", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amp_Advanced", "SS112", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_ACCESSIBILITY
        comboBox->setAccessibleName(QApplication::translate("Amp_Advanced", "Cabinet", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboBox->setAccessibleDescription(QApplication::translate("Amp_Advanced", "Allows you to choose cabinet to simulate", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_2->setText(QApplication::translate("Amp_Advanced", "&Noise Gate:", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Amp_Advanced", "Off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amp_Advanced", "Low", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amp_Advanced", "Mid", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amp_Advanced", "High", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amp_Advanced", "Super", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amp_Advanced", "Custom", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_ACCESSIBILITY
        comboBox_2->setAccessibleName(QApplication::translate("Amp_Advanced", "Noise gate", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboBox_2->setAccessibleDescription(QApplication::translate("Amp_Advanced", "Allows you to choose noise gate settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        checkBox->setAccessibleName(QApplication::translate("Amp_Advanced", "Brightness", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        checkBox->setAccessibleDescription(QApplication::translate("Amp_Advanced", "Allows you to turn of/off brightness setting", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        checkBox->setText(QApplication::translate("Amp_Advanced", "&Brightness", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        dial->setAccessibleName(QApplication::translate("Amp_Advanced", "Master volume dial", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        dial->setAccessibleDescription(QApplication::translate("Amp_Advanced", "Allows you to choose master volume level", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox->setAccessibleName(QApplication::translate("Amp_Advanced", "Master volume box", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox->setAccessibleDescription(QApplication::translate("Amp_Advanced", "Allows you to precisely enter the level of master volume", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_3->setText(QApplication::translate("Amp_Advanced", "&Master Volume", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        dial_2->setAccessibleName(QApplication::translate("Amp_Advanced", "Gain 2 dial", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        dial_2->setAccessibleDescription(QApplication::translate("Amp_Advanced", "Allows you to choose gain 2 level", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox_2->setAccessibleName(QApplication::translate("Amp_Advanced", "Gain 2 box", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox_2->setAccessibleDescription(QApplication::translate("Amp_Advanced", "Allows you to precisely enter the level of gain 2", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_4->setText(QApplication::translate("Amp_Advanced", "&Gain 2", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        dial_3->setAccessibleName(QApplication::translate("Amp_Advanced", "Presence dial", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        dial_3->setAccessibleDescription(QApplication::translate("Amp_Advanced", "Allows you to choose presence level", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox_3->setAccessibleName(QApplication::translate("Amp_Advanced", "Presence box", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox_3->setAccessibleDescription(QApplication::translate("Amp_Advanced", "Allows you to precisely enter the level of presence", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_5->setText(QApplication::translate("Amp_Advanced", "&Presence", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        dial_6->setAccessibleName(QApplication::translate("Amp_Advanced", "Bias dial", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        dial_6->setAccessibleDescription(QApplication::translate("Amp_Advanced", "Allows you to choose bias level", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox_6->setAccessibleName(QApplication::translate("Amp_Advanced", "Bias box", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox_6->setAccessibleDescription(QApplication::translate("Amp_Advanced", "Allows you to precisely enter the level of bias", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_8->setText(QApplication::translate("Amp_Advanced", "&Bias", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        dial_7->setAccessibleName(QApplication::translate("Amp_Advanced", "Sag dial", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        dial_7->setAccessibleDescription(QApplication::translate("Amp_Advanced", "Allows you to choose sag level", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox_7->setAccessibleName(QApplication::translate("Amp_Advanced", "Sag box", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox_7->setAccessibleDescription(QApplication::translate("Amp_Advanced", "Allows you to precisely enter the level of sag", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_9->setText(QApplication::translate("Amp_Advanced", "&Sag", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        dial_5->setAccessibleName(QApplication::translate("Amp_Advanced", "Threshold dial", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        dial_5->setAccessibleDescription(QApplication::translate("Amp_Advanced", "Allows you to choose threshold level", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox_5->setAccessibleName(QApplication::translate("Amp_Advanced", "Threshold box", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox_5->setAccessibleDescription(QApplication::translate("Amp_Advanced", "Allows you to precisely enter the level of threshold", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_7->setText(QApplication::translate("Amp_Advanced", "&Threshold", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        dial_4->setAccessibleName(QApplication::translate("Amp_Advanced", "Depth dial", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        dial_4->setAccessibleDescription(QApplication::translate("Amp_Advanced", "Allows you to choose depth level", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox_4->setAccessibleName(QApplication::translate("Amp_Advanced", "Depth box", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox_4->setAccessibleDescription(QApplication::translate("Amp_Advanced", "Allows you to precisely enter the level of depth", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_6->setText(QApplication::translate("Amp_Advanced", "&Depth", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        dial_8->setAccessibleName(QApplication::translate("Amp_Advanced", "Bias dial", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        dial_8->setAccessibleDescription(QApplication::translate("Amp_Advanced", "Allows you to choose bias level", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox_8->setAccessibleName(QApplication::translate("Amp_Advanced", "Bias box", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox_8->setAccessibleDescription(QApplication::translate("Amp_Advanced", "Allows you to precisely enter the level of bias", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_10->setText(QApplication::translate("Amp_Advanced", "&USB Gain", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        pushButton->setAccessibleName(QApplication::translate("Amp_Advanced", "OK", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton->setAccessibleDescription(QApplication::translate("Amp_Advanced", "Close window. You must press \"Set\" button in the amplifier's windows to send changes to the amplifier.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        pushButton->setText(QApplication::translate("Amp_Advanced", "OK", 0, QApplication::UnicodeUTF8));
        pushButton->setShortcut(QApplication::translate("Amp_Advanced", "Return, Esc", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Amp_Advanced: public Ui_Amp_Advanced {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMP_ADVANCED_H
