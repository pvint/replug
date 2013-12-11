/********************************************************************************
** Form generated from reading UI file 'save_effects.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVE_EFFECTS_H
#define UI_SAVE_EFFECTS_H

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
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Save_effects
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Save_effects)
    {
        if (Save_effects->objectName().isEmpty())
            Save_effects->setObjectName(QString::fromUtf8("Save_effects"));
        Save_effects->resize(300, 250);
        verticalLayout_2 = new QVBoxLayout(Save_effects);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(Save_effects);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(Save_effects);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaxLength(23);

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(Save_effects);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        comboBox = new QComboBox(Save_effects);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMaxVisibleItems(12);

        horizontalLayout_3->addWidget(comboBox);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBox = new QCheckBox(Save_effects);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(Save_effects);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(Save_effects);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout->addWidget(checkBox_3);


        verticalLayout_2->addLayout(verticalLayout);

        label_3 = new QLabel(Save_effects);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        verticalLayout_2->addWidget(label_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_2 = new QPushButton(Save_effects);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_4->addWidget(pushButton_2);

        pushButton = new QPushButton(Save_effects);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);

        horizontalLayout_4->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_4);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit);
        label_2->setBuddy(comboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(Save_effects);

        QMetaObject::connectSlotsByName(Save_effects);
    } // setupUi

    void retranslateUi(QDialog *Save_effects)
    {
        Save_effects->setWindowTitle(QApplication::translate("Save_effects", "Save Effects", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Save_effects", "&Name:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Save_effects", "&Knob slot: ", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Save_effects", "A1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Save_effects", "A2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Save_effects", "A3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Save_effects", "B1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Save_effects", "B2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Save_effects", "B3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Save_effects", "C1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Save_effects", "C2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Save_effects", "C3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Save_effects", "D1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Save_effects", "D2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Save_effects", "D3", 0, QApplication::UnicodeUTF8)
        );
        checkBox->setText(QApplication::translate("Save_effects", "&Modulation", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("Save_effects", "&Delay", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("Save_effects", "&Reverb", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Save_effects", "<b>NOTE</b>: Modulation will be taken from \"Effect 2\" slot, Delay from \"Effect 3\" slot and Reverb from \"Effect4\" slot.", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Save_effects", "&Cancel", 0, QApplication::UnicodeUTF8));
        pushButton_2->setShortcut(QApplication::translate("Save_effects", "Esc", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Save_effects", "&Save", 0, QApplication::UnicodeUTF8));
        pushButton->setShortcut(QApplication::translate("Save_effects", "Return", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Save_effects: public Ui_Save_effects {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVE_EFFECTS_H
