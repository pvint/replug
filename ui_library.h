/********************************************************************************
** Form generated from reading UI file 'library.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARY_H
#define UI_LIBRARY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFontComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Library
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QPushButton *pushButton;
    QListWidget *listWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QFontComboBox *fontComboBox;
    QLabel *label_5;
    QSpinBox *spinBox;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *Library)
    {
        if (Library->objectName().isEmpty())
            Library->setObjectName(QString::fromUtf8("Library"));
        Library->resize(480, 550);
        verticalLayout_3 = new QVBoxLayout(Library);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Library);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        listWidget = new QListWidget(Library);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(Library);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(Library);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setTextInteractionFlags(Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(label_3);

        pushButton = new QPushButton(Library);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        listWidget_2 = new QListWidget(Library);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));

        verticalLayout_2->addWidget(listWidget_2);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_4 = new QLabel(Library);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        fontComboBox = new QFontComboBox(Library);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));

        horizontalLayout_2->addWidget(fontComboBox);

        label_5 = new QLabel(Library);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        spinBox = new QSpinBox(Library);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(32);

        horizontalLayout_2->addWidget(spinBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(listWidget);
        label_2->setBuddy(listWidget_2);
        label_4->setBuddy(fontComboBox);
        label_5->setBuddy(spinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(pushButton, listWidget);
        QWidget::setTabOrder(listWidget, listWidget_2);

        retranslateUi(Library);

        QMetaObject::connectSlotsByName(Library);
    } // setupUi

    void retranslateUi(QDialog *Library)
    {
        Library->setWindowTitle(QApplication::translate("Library", "PLUG Library", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        Library->setAccessibleName(QApplication::translate("Library", "Library window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        Library->setAccessibleDescription(QApplication::translate("Library", "Allows to quickly load presets from amplifier and files", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label->setText(QApplication::translate("Library", "&Amplifier:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        listWidget->setAccessibleName(QApplication::translate("Library", "Presets from amplifier", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        listWidget->setAccessibleDescription(QApplication::translate("Library", "This list shows presets on ampplifier", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_2->setText(QApplication::translate("Library", "&Files from:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Library", "[choose directory]", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        pushButton->setAccessibleName(QApplication::translate("Library", "Choose directory", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton->setAccessibleDescription(QApplication::translate("Library", "Choose directory where preset files are stored", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        pushButton->setText(QApplication::translate("Library", "&...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        listWidget_2->setAccessibleName(QApplication::translate("Library", "Presets from files", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        listWidget_2->setAccessibleDescription(QApplication::translate("Library", "This list shows presets from files", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_4->setText(QApplication::translate("Library", "F&ont", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        fontComboBox->setAccessibleName(QApplication::translate("Library", "Choose font", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        fontComboBox->setAccessibleDescription(QApplication::translate("Library", "Allows to choose font which will be used to display presets", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_5->setText(QApplication::translate("Library", "&Size", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        spinBox->setAccessibleName(QApplication::translate("Library", "Choose font size", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        spinBox->setAccessibleDescription(QApplication::translate("Library", "Allows to choose font size which will be used to display presets", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
    } // retranslateUi

};

namespace Ui {
    class Library: public Ui_Library {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARY_H
