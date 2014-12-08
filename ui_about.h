/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->resize(320, 200);
        verticalLayout = new QVBoxLayout(About);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(About);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_6 = new QLabel(About);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_6);

        label_2 = new QLabel(About);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(About);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font2;
        font2.setPointSize(8);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_4 = new QLabel(About);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font3;
        font3.setPointSize(8);
        font3.setBold(false);
        font3.setWeight(50);
        label_4->setFont(font3);
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setOpenExternalLinks(true);
        label_4->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(About);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setOpenExternalLinks(true);
        label_5->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout->addWidget(label_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(About);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(About);
        QObject::connect(pushButton, SIGNAL(clicked()), About, SLOT(close()));

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "About RePlug", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        About->setAccessibleName(QApplication::translate("About", "About window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        About->setAccessibleDescription(QApplication::translate("About", "Provides information about program's version and author", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        label->setAccessibleName(QApplication::translate("About", "RePlug", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        label->setAccessibleDescription(QApplication::translate("About", "Program's name", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label->setText(QApplication::translate("About", "RePlug", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        label_6->setAccessibleName(QApplication::translate("About", "Version 1.0.999", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        label_6->setAccessibleDescription(QApplication::translate("About", "Program's version", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_6->setText(QApplication::translate("About", "version 1.1", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        label_2->setAccessibleName(QApplication::translate("About", "by \"piorekf\" plug@piorekf.org", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        label_2->setAccessibleDescription(QApplication::translate("About", "Info about the author", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_2->setText(QApplication::translate("About", "by 'piorekf' <plug@piorekf.org>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        label_3->setAccessibleName(QApplication::translate("About", "Licensed under GPLv3", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        label_3->setAccessibleDescription(QApplication::translate("About", "License information", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_3->setText(QApplication::translate("About", "Licensed under GPLv3", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        label_4->setAccessibleName(QApplication::translate("About", "homepage: http://piorekf.org/plug", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        label_4->setAccessibleDescription(QApplication::translate("About", "Program's homepage address", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_4->setText(QApplication::translate("About", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">homepage: <a href=\"http://piorekf.org/plug/\"><span style=\" text-decoration: underline; color:#508ed8;\">http://piorekf.org/plug/</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        label_5->setAccessibleName(QApplication::translate("About", "Source page: https://bitbucket.org/piorekf/plug", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        label_5->setAccessibleDescription(QApplication::translate("About", "Address of a page where program's source can be found", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_5->setText(QApplication::translate("About", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">source page: <a href=\"https://bitbucket.org/piorekf/plug/\"><span style=\" text-decoration: underline; color:#508ed8;\">https://bitbucket.org/piorekf/plug/</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        pushButton->setAccessibleName(QApplication::translate("About", "OK", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton->setAccessibleDescription(QApplication::translate("About", "Close \"About\" window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        pushButton->setText(QApplication::translate("About", "OK", 0, QApplication::UnicodeUTF8));
        pushButton->setShortcut(QApplication::translate("About", "Return, Esc", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
