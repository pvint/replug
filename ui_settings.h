/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QPushButton *pushButton;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->resize(480, 200);
        verticalLayout = new QVBoxLayout(Settings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBox = new QCheckBox(Settings);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setChecked(true);

        verticalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(Settings);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setChecked(true);

        verticalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(Settings);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(Settings);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        verticalLayout->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(Settings);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setChecked(true);

        verticalLayout->addWidget(checkBox_5);

        checkBox_6 = new QCheckBox(Settings);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setChecked(true);

        verticalLayout->addWidget(checkBox_6);

        pushButton = new QPushButton(Settings);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(Settings);
        QObject::connect(pushButton, SIGNAL(clicked()), Settings, SLOT(close()));

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        Settings->setAccessibleName(QApplication::translate("Settings", "Settings window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        Settings->setAccessibleDescription(QApplication::translate("Settings", "Here you can set some settings of this program", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        checkBox->setText(QApplication::translate("Settings", "Check for updates on startup", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("Settings", "Connect to the amplifier on startup", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("Settings", "Clicking any \"Set\" button sets everything", 0, QApplication::UnicodeUTF8));
        checkBox_4->setText(QApplication::translate("Settings", "Do not close Load/Save windows after loading/saving", 0, QApplication::UnicodeUTF8));
        checkBox_5->setText(QApplication::translate("Settings", "Open changed windows after loading/connecting", 0, QApplication::UnicodeUTF8));
        checkBox_6->setText(QApplication::translate("Settings", "Set default knob values when choosing effect", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        pushButton->setAccessibleName(QApplication::translate("Settings", "OK", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton->setAccessibleDescription(QApplication::translate("Settings", "Save settings and close this window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        pushButton->setText(QApplication::translate("Settings", "OK", 0, QApplication::UnicodeUTF8));
        pushButton->setShortcut(QApplication::translate("Settings", "Return, Esc", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
