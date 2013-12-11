/********************************************************************************
** Form generated from reading UI file 'saveonamp.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEONAMP_H
#define UI_SAVEONAMP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SaveOnAmp
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QMainWindow *SaveOnAmp)
    {
        if (SaveOnAmp->objectName().isEmpty())
            SaveOnAmp->setObjectName(QString::fromUtf8("SaveOnAmp"));
        SaveOnAmp->resize(300, 120);
        centralWidget = new QWidget(SaveOnAmp);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMaxVisibleItems(20);

        horizontalLayout_3->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaxLength(31);

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        SaveOnAmp->setCentralWidget(centralWidget);
#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(comboBox);
        label_3->setBuddy(lineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(SaveOnAmp);

        QMetaObject::connectSlotsByName(SaveOnAmp);
    } // setupUi

    void retranslateUi(QMainWindow *SaveOnAmp)
    {
        SaveOnAmp->setWindowTitle(QApplication::translate("SaveOnAmp", "Save on Amplifier", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        SaveOnAmp->setAccessibleName(QApplication::translate("SaveOnAmp", "Save on amplifier window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        SaveOnAmp->setAccessibleDescription(QApplication::translate("SaveOnAmp", "Allows you to set current settings on the amplifier", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_2->setText(QApplication::translate("SaveOnAmp", "S&lot:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        comboBox->setAccessibleName(QApplication::translate("SaveOnAmp", "Slot", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboBox->setAccessibleDescription(QApplication::translate("SaveOnAmp", "Select slot where current settings will be saved", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_3->setText(QApplication::translate("SaveOnAmp", "&Name:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit->setAccessibleName(QApplication::translate("SaveOnAmp", "Name", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        lineEdit->setAccessibleDescription(QApplication::translate("SaveOnAmp", "Select name for your preset", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton_2->setAccessibleName(QApplication::translate("SaveOnAmp", "Cancel", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton_2->setAccessibleDescription(QApplication::translate("SaveOnAmp", "Do not save anything and close this window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        pushButton_2->setText(QApplication::translate("SaveOnAmp", "&Cancel", 0, QApplication::UnicodeUTF8));
        pushButton_2->setShortcut(QApplication::translate("SaveOnAmp", "Esc", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        pushButton->setAccessibleName(QApplication::translate("SaveOnAmp", "Save", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton->setAccessibleDescription(QApplication::translate("SaveOnAmp", "Save preset and close this window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        pushButton->setText(QApplication::translate("SaveOnAmp", "&Save", 0, QApplication::UnicodeUTF8));
        pushButton->setShortcut(QApplication::translate("SaveOnAmp", "Return", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SaveOnAmp: public Ui_SaveOnAmp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEONAMP_H
