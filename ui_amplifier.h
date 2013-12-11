/********************************************************************************
** Form generated from reading UI file 'amplifier.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMPLIFIER_H
#define UI_AMPLIFIER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Amplifier
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *advancedButton;
    QPushButton *setButton;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSlider *dial;
    QSpinBox *spinBox;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QSlider *dial_2;
    QSpinBox *spinBox_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QSlider *dial_3;
    QSpinBox *spinBox_3;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_4;
    QSlider *dial_4;
    QSpinBox *spinBox_4;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_5;
    QSlider *dial_5;
    QSpinBox *spinBox_5;
    QLabel *label_5;

    void setupUi(QMainWindow *Amplifier)
    {
        if (Amplifier->objectName().isEmpty())
            Amplifier->setObjectName(QString::fromUtf8("Amplifier"));
        Amplifier->resize(400, 175);
        centralwidget = new QWidget(Amplifier);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_6 = new QVBoxLayout(centralwidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setMinimumSize(QSize(180, 0));
        comboBox->setMaxVisibleItems(12);

        horizontalLayout_2->addWidget(comboBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        advancedButton = new QPushButton(centralwidget);
        advancedButton->setObjectName(QString::fromUtf8("advancedButton"));

        horizontalLayout_2->addWidget(advancedButton);

        setButton = new QPushButton(centralwidget);
        setButton->setObjectName(QString::fromUtf8("setButton"));
        setButton->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(setButton->sizePolicy().hasHeightForWidth());
        setButton->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(setButton);


        verticalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        dial = new QSlider(centralwidget);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setMaximum(255);
        dial->setTickPosition(QSlider::TicksBothSides);
        dial->setTickInterval(25);
        dial->setProperty("notchTarget", QVariant(12.75));
        dial->setProperty("notchesVisible", QVariant(true));

        verticalLayout->addWidget(dial, 0, Qt::AlignHCenter);

        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(255);

        verticalLayout->addWidget(spinBox);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        dial_2 = new QSlider(centralwidget);
        dial_2->setObjectName(QString::fromUtf8("dial_2"));
        dial_2->setMaximum(255);
        dial_2->setTickPosition(QSlider::TicksBothSides);
        dial_2->setTickInterval(25);
        dial_2->setProperty("notchTarget", QVariant(12.75));
        dial_2->setProperty("notchesVisible", QVariant(true));

        verticalLayout_2->addWidget(dial_2, 0, Qt::AlignHCenter);

        spinBox_2 = new QSpinBox(centralwidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMaximum(255);

        verticalLayout_2->addWidget(spinBox_2);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        dial_3 = new QSlider(centralwidget);
        dial_3->setObjectName(QString::fromUtf8("dial_3"));
        dial_3->setMaximum(255);
        dial_3->setTickPosition(QSlider::TicksBothSides);
        dial_3->setTickInterval(25);
        dial_3->setProperty("notchTarget", QVariant(12.75));
        dial_3->setProperty("notchesVisible", QVariant(true));

        verticalLayout_3->addWidget(dial_3, 0, Qt::AlignHCenter);

        spinBox_3 = new QSpinBox(centralwidget);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setMaximum(255);

        verticalLayout_3->addWidget(spinBox_3);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        dial_4 = new QSlider(centralwidget);
        dial_4->setObjectName(QString::fromUtf8("dial_4"));
        dial_4->setMaximum(255);
        dial_4->setTickPosition(QSlider::TicksBothSides);
        dial_4->setTickInterval(25);
        dial_4->setProperty("notchTarget", QVariant(12.75));
        dial_4->setProperty("notchesVisible", QVariant(true));

        verticalLayout_4->addWidget(dial_4, 0, Qt::AlignHCenter);

        spinBox_4 = new QSpinBox(centralwidget);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
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
        dial_5->setMaximum(255);
        dial_5->setTickPosition(QSlider::TicksBothSides);
        dial_5->setTickInterval(25);
        dial_5->setProperty("notchTarget", QVariant(12.75));
        dial_5->setProperty("notchesVisible", QVariant(true));

        verticalLayout_5->addWidget(dial_5, 0, Qt::AlignHCenter);

        spinBox_5 = new QSpinBox(centralwidget);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setMaximum(255);

        verticalLayout_5->addWidget(spinBox_5);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout);

        Amplifier->setCentralWidget(centralwidget);
#ifndef QT_NO_SHORTCUT
        label_6->setBuddy(comboBox);
        label->setBuddy(spinBox);
        label_2->setBuddy(spinBox_2);
        label_3->setBuddy(spinBox_3);
        label_4->setBuddy(spinBox_4);
        label_5->setBuddy(spinBox_5);
#endif // QT_NO_SHORTCUT

        retranslateUi(Amplifier);
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

        QMetaObject::connectSlotsByName(Amplifier);
    } // setupUi

    void retranslateUi(QMainWindow *Amplifier)
    {
        Amplifier->setWindowTitle(QApplication::translate("Amplifier", "Amplifier", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        Amplifier->setAccessibleName(QApplication::translate("Amplifier", "Amplifier's settings window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        Amplifier->setAccessibleDescription(QApplication::translate("Amplifier", "Allows you to set amplifier's settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_6->setText(QApplication::translate("Amplifier", "&Amplifier:", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Amplifier", "Fender '57 Deluxe", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amplifier", "Fender '59 Bassman", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amplifier", "Fender '57 Champ", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amplifier", "Fender '65 Deluxe Reverb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amplifier", "Fender '65 Princeton", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amplifier", "Fender '65 Twin Reverb", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amplifier", "Fender Super-Sonic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amplifier", "British 60's", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amplifier", "British 70's", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amplifier", "British 80's", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amplifier", "American 90's", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Amplifier", "Metal 2000", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_ACCESSIBILITY
        comboBox->setAccessibleName(QApplication::translate("Amplifier", "Amplifier", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboBox->setAccessibleDescription(QApplication::translate("Amplifier", "Allows you to choose amplifier to emulate", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        advancedButton->setAccessibleName(QApplication::translate("Amplifier", "Advanced button", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        advancedButton->setAccessibleDescription(QApplication::translate("Amplifier", "Opens window winth advanced settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        advancedButton->setText(QApplication::translate("Amplifier", "A&dvanced", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        setButton->setAccessibleName(QApplication::translate("Amplifier", "Set button", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        setButton->setAccessibleDescription(QApplication::translate("Amplifier", "Sends changes to the amplifier", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        setButton->setText(QApplication::translate("Amplifier", "Set", 0, QApplication::UnicodeUTF8));
        setButton->setShortcut(QApplication::translate("Amplifier", "Return", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        dial->setAccessibleName(QApplication::translate("Amplifier", "Gain dial", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        dial->setAccessibleDescription(QApplication::translate("Amplifier", "Allows you to choose gain level", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox->setAccessibleName(QApplication::translate("Amplifier", "Gain box", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox->setAccessibleDescription(QApplication::translate("Amplifier", "Allows you to precisely enter the level of gain", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label->setText(QApplication::translate("Amplifier", "&Gain", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        dial_2->setAccessibleName(QApplication::translate("Amplifier", "Volume dial", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        dial_2->setAccessibleDescription(QApplication::translate("Amplifier", "Allows you to choose volume level", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox_2->setAccessibleName(QApplication::translate("Amplifier", "Volume box", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox_2->setAccessibleDescription(QApplication::translate("Amplifier", "Allows you to precisely enter the level of volume", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_2->setText(QApplication::translate("Amplifier", "&Volume", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        dial_3->setAccessibleName(QApplication::translate("Amplifier", "Treble dial", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        dial_3->setAccessibleDescription(QApplication::translate("Amplifier", "Allows you to choose treble level", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox_3->setAccessibleName(QApplication::translate("Amplifier", "Treble box", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox_3->setAccessibleDescription(QApplication::translate("Amplifier", "Allows you to precisely enter the level of treble", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_3->setText(QApplication::translate("Amplifier", "&Treble", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        dial_4->setAccessibleName(QApplication::translate("Amplifier", "Middle tones dial", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        dial_4->setAccessibleDescription(QApplication::translate("Amplifier", "Allows you to choose middle tones level", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox_4->setAccessibleName(QApplication::translate("Amplifier", "Middle tones box", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox_4->setAccessibleDescription(QApplication::translate("Amplifier", "Allows you to precisely enter the level of middle tones", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_4->setText(QApplication::translate("Amplifier", "&Middle", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        dial_5->setAccessibleName(QApplication::translate("Amplifier", "Bass dial", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        dial_5->setAccessibleDescription(QApplication::translate("Amplifier", "Allows you to choose the bass level", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox_5->setAccessibleName(QApplication::translate("Amplifier", "Bass box", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox_5->setAccessibleDescription(QApplication::translate("Amplifier", "Allows you to precisely enter the level of bass", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_5->setText(QApplication::translate("Amplifier", "&Bass", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Amplifier: public Ui_Amplifier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMPLIFIER_H
