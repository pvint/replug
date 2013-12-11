/********************************************************************************
** Form generated from reading UI file 'loadfromamp.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADFROMAMP_H
#define UI_LOADFROMAMP_H

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
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadFromAmp
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QMainWindow *LoadFromAmp)
    {
        if (LoadFromAmp->objectName().isEmpty())
            LoadFromAmp->setObjectName(QString::fromUtf8("LoadFromAmp"));
        LoadFromAmp->resize(300, 100);
        centralWidget = new QWidget(LoadFromAmp);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMaxVisibleItems(20);

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(17, 32, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        LoadFromAmp->setCentralWidget(centralWidget);
#ifndef QT_NO_SHORTCUT
        label->setBuddy(comboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(LoadFromAmp);

        QMetaObject::connectSlotsByName(LoadFromAmp);
    } // setupUi

    void retranslateUi(QMainWindow *LoadFromAmp)
    {
        LoadFromAmp->setWindowTitle(QApplication::translate("LoadFromAmp", "Load from Amplifier", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        LoadFromAmp->setAccessibleName(QApplication::translate("LoadFromAmp", "Load preset from amplifier", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        LoadFromAmp->setAccessibleDescription(QApplication::translate("LoadFromAmp", "Window which allows you to load presets from amplifier", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label->setText(QApplication::translate("LoadFromAmp", "&Slot:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        comboBox->setAccessibleName(QApplication::translate("LoadFromAmp", "Slot", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboBox->setAccessibleDescription(QApplication::translate("LoadFromAmp", "Choose which slot to load", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton_2->setAccessibleName(QApplication::translate("LoadFromAmp", "Cancel", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton_2->setAccessibleDescription(QApplication::translate("LoadFromAmp", "Quit window without loading anything", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        pushButton_2->setText(QApplication::translate("LoadFromAmp", "&Cancel", 0, QApplication::UnicodeUTF8));
        pushButton_2->setShortcut(QApplication::translate("LoadFromAmp", "Esc", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        pushButton->setAccessibleName(QApplication::translate("LoadFromAmp", "Load", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton->setAccessibleDescription(QApplication::translate("LoadFromAmp", "Load's selected setting from amplifier and closes the window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        pushButton->setText(QApplication::translate("LoadFromAmp", "&Load", 0, QApplication::UnicodeUTF8));
        pushButton->setShortcut(QApplication::translate("LoadFromAmp", "Return", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LoadFromAmp: public Ui_LoadFromAmp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADFROMAMP_H
