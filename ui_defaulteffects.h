/********************************************************************************
** Form generated from reading UI file 'defaulteffects.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEFAULTEFFECTS_H
#define UI_DEFAULTEFFECTS_H

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
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DefaultEffects
{
public:
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSlider *dial;
    QSpinBox *spinBox;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QSlider *dial_2;
    QSpinBox *spinBox_2;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_3;
    QSlider *dial_3;
    QSpinBox *spinBox_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QSlider *dial_4;
    QSpinBox *spinBox_4;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_5;
    QSlider *dial_5;
    QSpinBox *spinBox_5;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_6;
    QSlider *dial_6;
    QSpinBox *spinBox_6;
    QLabel *label_6;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QComboBox *comboBox_2;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QComboBox *comboBox_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *DefaultEffects)
    {
        if (DefaultEffects->objectName().isEmpty())
            DefaultEffects->setObjectName(QString::fromUtf8("DefaultEffects"));
        DefaultEffects->resize(300, 450);
        verticalLayout_7 = new QVBoxLayout(DefaultEffects);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(DefaultEffects);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_3->addWidget(label_7);

        comboBox = new QComboBox(DefaultEffects);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(comboBox);


        verticalLayout_7->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        dial = new QSlider(DefaultEffects);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setEnabled(false);
        dial->setMaximum(255);
        dial->setTickPosition(QSlider::TicksBothSides);
        dial->setTickInterval(25);
        dial->setProperty("notchTarget", QVariant(12.75));
        dial->setProperty("notchesVisible", QVariant(true));

        verticalLayout->addWidget(dial, 0, Qt::AlignHCenter);

        spinBox = new QSpinBox(DefaultEffects);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setEnabled(false);
        spinBox->setMaximum(255);

        verticalLayout->addWidget(spinBox);

        label = new QLabel(DefaultEffects);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        dial_2 = new QSlider(DefaultEffects);
        dial_2->setObjectName(QString::fromUtf8("dial_2"));
        dial_2->setEnabled(false);
        dial_2->setMaximum(255);
        dial_2->setTickPosition(QSlider::TicksBothSides);
        dial_2->setTickInterval(25);
        dial_2->setProperty("notchTarget", QVariant(12.75));
        dial_2->setProperty("notchesVisible", QVariant(true));

        verticalLayout_2->addWidget(dial_2, 0, Qt::AlignHCenter);

        spinBox_2 = new QSpinBox(DefaultEffects);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setEnabled(false);
        spinBox_2->setMaximum(255);

        verticalLayout_2->addWidget(spinBox_2);

        label_2 = new QLabel(DefaultEffects);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        dial_3 = new QSlider(DefaultEffects);
        dial_3->setObjectName(QString::fromUtf8("dial_3"));
        dial_3->setEnabled(false);
        dial_3->setMaximum(255);
        dial_3->setTickPosition(QSlider::TicksBothSides);
        dial_3->setTickInterval(25);
        dial_3->setProperty("notchTarget", QVariant(12.75));
        dial_3->setProperty("notchesVisible", QVariant(true));

        verticalLayout_3->addWidget(dial_3, 0, Qt::AlignHCenter);

        spinBox_3 = new QSpinBox(DefaultEffects);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setEnabled(false);
        spinBox_3->setMaximum(255);

        verticalLayout_3->addWidget(spinBox_3);

        label_3 = new QLabel(DefaultEffects);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_7->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        dial_4 = new QSlider(DefaultEffects);
        dial_4->setObjectName(QString::fromUtf8("dial_4"));
        dial_4->setEnabled(false);
        dial_4->setMaximum(255);
        dial_4->setTickPosition(QSlider::TicksBothSides);
        dial_4->setTickInterval(25);
        dial_4->setProperty("notchTarget", QVariant(12.75));
        dial_4->setProperty("notchesVisible", QVariant(true));

        verticalLayout_4->addWidget(dial_4, 0, Qt::AlignHCenter);

        spinBox_4 = new QSpinBox(DefaultEffects);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setEnabled(false);
        spinBox_4->setMaximum(255);

        verticalLayout_4->addWidget(spinBox_4);

        label_4 = new QLabel(DefaultEffects);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_4);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        dial_5 = new QSlider(DefaultEffects);
        dial_5->setObjectName(QString::fromUtf8("dial_5"));
        dial_5->setEnabled(false);
        dial_5->setMaximum(255);
        dial_5->setTickPosition(QSlider::TicksBothSides);
        dial_5->setTickInterval(25);
        dial_5->setProperty("notchTarget", QVariant(12.75));
        dial_5->setProperty("notchesVisible", QVariant(true));

        verticalLayout_5->addWidget(dial_5, 0, Qt::AlignHCenter);

        spinBox_5 = new QSpinBox(DefaultEffects);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setEnabled(false);
        spinBox_5->setMaximum(255);

        verticalLayout_5->addWidget(spinBox_5);

        label_5 = new QLabel(DefaultEffects);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_5);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        dial_6 = new QSlider(DefaultEffects);
        dial_6->setObjectName(QString::fromUtf8("dial_6"));
        dial_6->setEnabled(false);
        dial_6->setMaximum(255);
        dial_6->setTickPosition(QSlider::TicksBothSides);
        dial_6->setTickInterval(25);
        dial_6->setProperty("notchTarget", QVariant(12.75));
        dial_6->setProperty("notchesVisible", QVariant(true));

        verticalLayout_6->addWidget(dial_6, 0, Qt::AlignHCenter);

        spinBox_6 = new QSpinBox(DefaultEffects);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));
        spinBox_6->setEnabled(false);
        spinBox_6->setMaximum(255);

        verticalLayout_6->addWidget(spinBox_6);

        label_6 = new QLabel(DefaultEffects);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_6);


        horizontalLayout_2->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout_2);

        checkBox = new QCheckBox(DefaultEffects);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setEnabled(false);

        verticalLayout_7->addWidget(checkBox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_8 = new QLabel(DefaultEffects);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_4->addWidget(label_8);

        comboBox_2 = new QComboBox(DefaultEffects);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_4->addWidget(comboBox_2);

        pushButton = new QPushButton(DefaultEffects);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_4->addWidget(pushButton);


        verticalLayout_7->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_9 = new QLabel(DefaultEffects);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_5->addWidget(label_9);

        comboBox_3 = new QComboBox(DefaultEffects);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        horizontalLayout_5->addWidget(comboBox_3);

        pushButton_2 = new QPushButton(DefaultEffects);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_5->addWidget(pushButton_2);


        verticalLayout_7->addLayout(horizontalLayout_5);

#ifndef QT_NO_SHORTCUT
        label_7->setBuddy(comboBox);
        label->setBuddy(spinBox);
        label_2->setBuddy(spinBox_2);
        label_3->setBuddy(spinBox_3);
        label_4->setBuddy(spinBox_4);
        label_5->setBuddy(spinBox_5);
        label_6->setBuddy(spinBox_6);
        label_8->setBuddy(comboBox_2);
        label_9->setBuddy(comboBox_3);
#endif // QT_NO_SHORTCUT

        retranslateUi(DefaultEffects);
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), dial, SLOT(setValue(int)));
        QObject::connect(dial, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(spinBox_2, SIGNAL(valueChanged(int)), dial_2, SLOT(setValue(int)));
        QObject::connect(dial_2, SIGNAL(valueChanged(int)), spinBox_2, SLOT(setValue(int)));
        QObject::connect(spinBox_3, SIGNAL(valueChanged(int)), dial_3, SLOT(setValue(int)));
        QObject::connect(dial_3, SIGNAL(valueChanged(int)), spinBox_3, SLOT(setValue(int)));
        QObject::connect(spinBox_4, SIGNAL(valueChanged(int)), dial_4, SLOT(setValue(int)));
        QObject::connect(dial_4, SIGNAL(valueChanged(int)), spinBox_4, SLOT(setValue(int)));
        QObject::connect(spinBox_5, SIGNAL(valueChanged(int)), dial_5, SLOT(setValue(int)));
        QObject::connect(dial_5, SIGNAL(valueChanged(int)), spinBox_5, SLOT(setValue(int)));
        QObject::connect(spinBox_6, SIGNAL(valueChanged(int)), dial_6, SLOT(setValue(int)));
        QObject::connect(dial_6, SIGNAL(valueChanged(int)), spinBox_6, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(DefaultEffects);
    } // setupUi

    void retranslateUi(QDialog *DefaultEffects)
    {
        DefaultEffects->setWindowTitle(QApplication::translate("DefaultEffects", "Default Effects", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        DefaultEffects->setAccessibleName(QApplication::translate("DefaultEffects", "Default effect's window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        DefaultEffects->setAccessibleDescription(QApplication::translate("DefaultEffects", "Here you can select default effects which will be loaded when keyboard shortcut is used", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_7->setText(QApplication::translate("DefaultEffects", "&Effect:", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("DefaultEffects", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[1] Overdrive", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[1] Fixed Wah", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[1] Touch Wah", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[1] Fuzz", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[1] Fuzz Touch Wah", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[1] Simple Compressor", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[1] Compressor", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[2] Sine Chorus", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[2] Triangle Chorus", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[2] Sine Flanger", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[2] Triangle Flanger", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[2] Vibratone", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[2] Vintage Tremolo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[2] Sine Tremolo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[2] Ring Modulator", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[2] Step Filter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[2] Phaser", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[2] Pitch Schifter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[3] Mono Delay", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[3] Mono Echo Filter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[3] Stereo Echo Filter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[3] Multitap Delay", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[3] Ping Pong Delay", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[3] Ducking Delay", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[3] Reverse Delay", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[3] Tape Delay", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[3] Stereo Tape Delay", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[4] Small Hall Reverb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[4] Large Hall Reverb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[4] Small Room Reverb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[4] Large Room Reverb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[4] Small Plate Reverb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[4] Large Plate Reverb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[4] Ambient Reverb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[4] Arena Reverb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[4] '63 Fender Spring Reverb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "[4] '65 Fender Spring Reverb", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_ACCESSIBILITY
        comboBox->setAccessibleName(QApplication::translate("DefaultEffects", "Default effect's effect", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboBox->setAccessibleDescription(QApplication::translate("DefaultEffects", "Allows to choose effect to be emulated", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        checkBox->setAccessibleName(QApplication::translate("DefaultEffects", "After amplifier", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        checkBox->setAccessibleDescription(QApplication::translate("DefaultEffects", "Set effect to be put virtually after emulated amplifier", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        checkBox->setText(QApplication::translate("DefaultEffects", "&after amplifier", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("DefaultEffects", "Copy settings from slot:", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("DefaultEffects", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "4", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_ACCESSIBILITY
        comboBox_2->setAccessibleName(QApplication::translate("DefaultEffects", "Copy from slot", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboBox_2->setAccessibleDescription(QApplication::translate("DefaultEffects", "Allows you to choose from which effect lot to copy effect settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton->setAccessibleName(QApplication::translate("DefaultEffects", "Copy", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton->setAccessibleDescription(QApplication::translate("DefaultEffects", "Copy selected slot's settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        pushButton->setText(QApplication::translate("DefaultEffects", "&Copy", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("DefaultEffects", "Save as default effect:", 0, QApplication::UnicodeUTF8));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("DefaultEffects", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DefaultEffects", "4", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_ACCESSIBILITY
        comboBox_3->setAccessibleName(QApplication::translate("DefaultEffects", "Save to slot", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboBox_3->setAccessibleDescription(QApplication::translate("DefaultEffects", "Choose for which slot save settings as a default effect", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton_2->setAccessibleName(QApplication::translate("DefaultEffects", "Save", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton_2->setAccessibleDescription(QApplication::translate("DefaultEffects", "Save settings as a default effect", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        pushButton_2->setText(QApplication::translate("DefaultEffects", "&Save", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DefaultEffects: public Ui_DefaultEffects {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEFAULTEFFECTS_H
