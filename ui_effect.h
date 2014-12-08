/********************************************************************************
** Form generated from reading UI file 'effect.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EFFECT_H
#define UI_EFFECT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Effect
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
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
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QSlider *dial_4;
    QSpinBox *spinBox_4;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_5;
    QSlider *dial_5;
    QSpinBox *spinBox_5;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_7;
    QSlider *dial_6;
    QSpinBox *spinBox_6;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox;
    QPushButton *setButton;

    void setupUi(QMainWindow *Effect)
    {
        if (Effect->objectName().isEmpty())
            Effect->setObjectName(QString::fromUtf8("Effect"));
        Effect->resize(250, 300);
        centralwidget = new QWidget(Effect);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_6 = new QVBoxLayout(centralwidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_3->addWidget(label_7);

        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(200, 0));
        comboBox->setMaxVisibleItems(15);

        horizontalLayout_3->addWidget(comboBox);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCheckable(true);

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        dial = new QSlider(centralwidget);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setEnabled(false);
        dial->setMaximum(255);
        dial->setTickPosition(QSlider::TicksBothSides);
        dial->setTickInterval(25);
        dial->setProperty("notchTarget", QVariant(12.75));
        dial->setProperty("notchesVisible", QVariant(true));

        verticalLayout->addWidget(dial, 0, Qt::AlignHCenter);

        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setEnabled(false);
        spinBox->setMaximum(255);

        verticalLayout->addWidget(spinBox);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        dial_2 = new QSlider(centralwidget);
        dial_2->setObjectName(QString::fromUtf8("dial_2"));
        dial_2->setEnabled(false);
        dial_2->setMaximum(255);
        dial_2->setTickPosition(QSlider::TicksBothSides);
        dial_2->setTickInterval(25);
        dial_2->setProperty("notchTarget", QVariant(12.75));
        dial_2->setProperty("notchesVisible", QVariant(true));

        verticalLayout_2->addWidget(dial_2, 0, Qt::AlignHCenter);

        spinBox_2 = new QSpinBox(centralwidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setEnabled(false);
        spinBox_2->setMaximum(255);

        verticalLayout_2->addWidget(spinBox_2);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        dial_3 = new QSlider(centralwidget);
        dial_3->setObjectName(QString::fromUtf8("dial_3"));
        dial_3->setEnabled(false);
        dial_3->setMaximum(255);
        dial_3->setTickPosition(QSlider::TicksBothSides);
        dial_3->setTickInterval(25);
        dial_3->setProperty("notchTarget", QVariant(12.75));
        dial_3->setProperty("notchesVisible", QVariant(true));

        verticalLayout_3->addWidget(dial_3, 0, Qt::AlignHCenter);

        spinBox_3 = new QSpinBox(centralwidget);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setEnabled(false);
        spinBox_3->setMaximum(255);

        verticalLayout_3->addWidget(spinBox_3);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        dial_4 = new QSlider(centralwidget);
        dial_4->setObjectName(QString::fromUtf8("dial_4"));
        dial_4->setEnabled(false);
        dial_4->setMaximum(255);
        dial_4->setTickPosition(QSlider::TicksBothSides);
        dial_4->setTickInterval(25);
        dial_4->setProperty("notchTarget", QVariant(12.75));
        dial_4->setProperty("notchesVisible", QVariant(true));

        verticalLayout_4->addWidget(dial_4, 0, Qt::AlignHCenter);

        spinBox_4 = new QSpinBox(centralwidget);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setEnabled(false);
        spinBox_4->setMaximum(255);

        verticalLayout_4->addWidget(spinBox_4);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        dial_5 = new QSlider(centralwidget);
        dial_5->setObjectName(QString::fromUtf8("dial_5"));
        dial_5->setEnabled(false);
        dial_5->setMaximum(255);
        dial_5->setTickPosition(QSlider::TicksBothSides);
        dial_5->setTickInterval(25);
        dial_5->setProperty("notchTarget", QVariant(12.75));
        dial_5->setProperty("notchesVisible", QVariant(true));

        verticalLayout_5->addWidget(dial_5, 0, Qt::AlignHCenter);

        spinBox_5 = new QSpinBox(centralwidget);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setEnabled(false);
        spinBox_5->setMaximum(255);

        verticalLayout_5->addWidget(spinBox_5);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        dial_6 = new QSlider(centralwidget);
        dial_6->setObjectName(QString::fromUtf8("dial_6"));
        dial_6->setEnabled(false);
        dial_6->setMaximum(255);
        dial_6->setTickPosition(QSlider::TicksBothSides);
        dial_6->setTickInterval(25);
        dial_6->setProperty("notchTarget", QVariant(12.75));
        dial_6->setProperty("notchesVisible", QVariant(true));

        verticalLayout_7->addWidget(dial_6, 0, Qt::AlignHCenter);

        spinBox_6 = new QSpinBox(centralwidget);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));
        spinBox_6->setEnabled(false);
        spinBox_6->setMaximum(255);

        verticalLayout_7->addWidget(spinBox_6);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_6);


        horizontalLayout->addLayout(verticalLayout_7);


        verticalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setEnabled(false);

        horizontalLayout_4->addWidget(checkBox);

        setButton = new QPushButton(centralwidget);
        setButton->setObjectName(QString::fromUtf8("setButton"));
        setButton->setEnabled(false);

        horizontalLayout_4->addWidget(setButton);


        verticalLayout_6->addLayout(horizontalLayout_4);

        Effect->setCentralWidget(centralwidget);
#ifndef QT_NO_SHORTCUT
        label_7->setBuddy(comboBox);
        label->setBuddy(spinBox);
        label_2->setBuddy(spinBox_2);
        label_3->setBuddy(spinBox_3);
        label_4->setBuddy(spinBox_4);
        label_5->setBuddy(spinBox_5);
        label_6->setBuddy(spinBox_6);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(comboBox, dial);
        QWidget::setTabOrder(dial, spinBox);
        QWidget::setTabOrder(spinBox, dial_2);
        QWidget::setTabOrder(dial_2, spinBox_2);
        QWidget::setTabOrder(spinBox_2, dial_3);
        QWidget::setTabOrder(dial_3, spinBox_3);
        QWidget::setTabOrder(spinBox_3, dial_4);
        QWidget::setTabOrder(dial_4, spinBox_4);
        QWidget::setTabOrder(spinBox_4, dial_5);
        QWidget::setTabOrder(dial_5, spinBox_5);
        QWidget::setTabOrder(spinBox_5, dial_6);
        QWidget::setTabOrder(dial_6, spinBox_6);
        QWidget::setTabOrder(spinBox_6, checkBox);
        QWidget::setTabOrder(checkBox, setButton);

        retranslateUi(Effect);
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

        QMetaObject::connectSlotsByName(Effect);
    } // setupUi

    void retranslateUi(QMainWindow *Effect)
    {
        Effect->setWindowTitle(QApplication::translate("Effect", "Effect", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Effect", "&Effect:", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Effect", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[1] Overdrive", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[1] Wah", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[1] Touch Wah", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[1] Fuzz", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[1] Fuzz Touch Wah", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[1] Simple Compressor", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[1] Compressor", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[2] Sine Chorus", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[2] Triangle Chorus", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[2] Sine Flanger", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[2] Triangle Flanger", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[2] Vibratone", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[2] Vintage Tremolo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[2] Sine Tremolo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[2] Ring Modulator", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[2] Step Filter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[2] Phaser", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[2] Pitch Schifter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[3] Mono Delay", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[3] Mono Echo Filter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[3] Stereo Echo Filter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[3] Multitap Delay", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[3] Ping Pong Delay", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[3] Ducking Delay", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[3] Reverse Delay", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[3] Tape Delay", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[3] Stereo Tape Delay", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[4] Small Hall Reverb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[4] Large Hall Reverb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[4] Small Room Reverb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[4] Large Room Reverb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[4] Small Plate Reverb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[4] Large Plate Reverb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[4] Ambient Reverb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[4] Arena Reverb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[4] '63 Fender Spring Reverb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Effect", "[4] '65 Fender Spring Reverb", 0, QApplication::UnicodeUTF8)
        );
        pushButton->setText(QApplication::translate("Effect", "Off", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        checkBox->setText(QApplication::translate("Effect", "&after amplifier", 0, QApplication::UnicodeUTF8));
        setButton->setText(QApplication::translate("Effect", "Set", 0, QApplication::UnicodeUTF8));
        setButton->setShortcut(QApplication::translate("Effect", "Return", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Effect: public Ui_Effect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EFFECT_H
