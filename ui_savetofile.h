/********************************************************************************
** Form generated from reading UI file 'savetofile.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVETOFILE_H
#define UI_SAVETOFILE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SaveToFile
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *SaveToFile)
    {
        if (SaveToFile->objectName().isEmpty())
            SaveToFile->setObjectName(QString::fromUtf8("SaveToFile"));
        SaveToFile->resize(333, 168);
        verticalLayout = new QVBoxLayout(SaveToFile);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(SaveToFile);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(SaveToFile);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        label_3 = new QLabel(SaveToFile);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_3 = new QLineEdit(SaveToFile);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_2->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(SaveToFile);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(SaveToFile);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(SaveToFile);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_3 = new QPushButton(SaveToFile);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_4->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(SaveToFile);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_4->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_4);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(lineEdit_2);
        label_3->setBuddy(lineEdit_3);
        label->setBuddy(lineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_3);
        QWidget::setTabOrder(pushButton_3, lineEdit);

        retranslateUi(SaveToFile);

        QMetaObject::connectSlotsByName(SaveToFile);
    } // setupUi

    void retranslateUi(QDialog *SaveToFile)
    {
        SaveToFile->setWindowTitle(QApplication::translate("SaveToFile", "Save to File", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        SaveToFile->setAccessibleName(QApplication::translate("SaveToFile", "Save to file window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        SaveToFile->setAccessibleDescription(QApplication::translate("SaveToFile", "Allows you to save current settings to a file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_2->setText(QApplication::translate("SaveToFile", "&Name:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit_2->setAccessibleName(QApplication::translate("SaveToFile", "Name", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        lineEdit_2->setAccessibleDescription(QApplication::translate("SaveToFile", "Allows you to set the name of the preset", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_3->setText(QApplication::translate("SaveToFile", "&Author:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit_3->setAccessibleName(QApplication::translate("SaveToFile", "Author", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        lineEdit_3->setAccessibleDescription(QApplication::translate("SaveToFile", "Allows you to set the author of the preset", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label->setText(QApplication::translate("SaveToFile", "Save &to:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit->setAccessibleName(QApplication::translate("SaveToFile", "Path to a file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        lineEdit->setAccessibleDescription(QApplication::translate("SaveToFile", "Enter the path and file name where to save the preset", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton->setAccessibleName(QApplication::translate("SaveToFile", "Choose path and file name", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton->setAccessibleDescription(QApplication::translate("SaveToFile", "Allows you to choose path and filename of the preset", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        pushButton->setText(QApplication::translate("SaveToFile", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        pushButton_3->setAccessibleName(QApplication::translate("SaveToFile", "Cancel", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton_3->setAccessibleDescription(QApplication::translate("SaveToFile", "Do not save anything and close this window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        pushButton_3->setText(QApplication::translate("SaveToFile", "&Cancel", 0, QApplication::UnicodeUTF8));
        pushButton_3->setShortcut(QApplication::translate("SaveToFile", "Esc", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        pushButton_2->setAccessibleName(QApplication::translate("SaveToFile", "Save", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton_2->setAccessibleDescription(QApplication::translate("SaveToFile", "Save preset and close this window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        pushButton_2->setText(QApplication::translate("SaveToFile", "&Save", 0, QApplication::UnicodeUTF8));
        pushButton_2->setShortcut(QApplication::translate("SaveToFile", "Return", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SaveToFile: public Ui_SaveToFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVETOFILE_H
