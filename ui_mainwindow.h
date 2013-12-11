/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionConnect;
    QAction *actionDisconnect;
    QAction *actionAbout;
    QAction *actionSave_to_amplifier;
    QAction *action_Load_from_amplifier;
    QAction *actionSave_effects;
    QAction *actionCheck_for_Updates;
    QAction *action_Options;
    QAction *actionL_oad_from_file;
    QAction *actionS_ave_to_file;
    QAction *action_Library_view;
    QAction *action_Update_firmware;
    QAction *action_Default_effects;
    QAction *action_Quick_presets;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *Amplifier;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *EffectButton1;
    QPushButton *EffectButton2;
    QPushButton *EffectButton3;
    QPushButton *EffectButton4;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuConnection;
    QMenu *menuSettings;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(350, 200);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionExit->setShortcutContext(Qt::ApplicationShortcut);
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QString::fromUtf8("actionConnect"));
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QString::fromUtf8("actionDisconnect"));
        actionDisconnect->setEnabled(false);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionSave_to_amplifier = new QAction(MainWindow);
        actionSave_to_amplifier->setObjectName(QString::fromUtf8("actionSave_to_amplifier"));
        actionSave_to_amplifier->setEnabled(false);
        actionSave_to_amplifier->setShortcutContext(Qt::ApplicationShortcut);
        action_Load_from_amplifier = new QAction(MainWindow);
        action_Load_from_amplifier->setObjectName(QString::fromUtf8("action_Load_from_amplifier"));
        action_Load_from_amplifier->setEnabled(false);
        action_Load_from_amplifier->setShortcutContext(Qt::ApplicationShortcut);
        actionSave_effects = new QAction(MainWindow);
        actionSave_effects->setObjectName(QString::fromUtf8("actionSave_effects"));
        actionSave_effects->setEnabled(false);
        actionSave_effects->setShortcutContext(Qt::ApplicationShortcut);
        actionCheck_for_Updates = new QAction(MainWindow);
        actionCheck_for_Updates->setObjectName(QString::fromUtf8("actionCheck_for_Updates"));
        action_Options = new QAction(MainWindow);
        action_Options->setObjectName(QString::fromUtf8("action_Options"));
        actionL_oad_from_file = new QAction(MainWindow);
        actionL_oad_from_file->setObjectName(QString::fromUtf8("actionL_oad_from_file"));
        actionL_oad_from_file->setShortcutContext(Qt::ApplicationShortcut);
        actionS_ave_to_file = new QAction(MainWindow);
        actionS_ave_to_file->setObjectName(QString::fromUtf8("actionS_ave_to_file"));
        action_Library_view = new QAction(MainWindow);
        action_Library_view->setObjectName(QString::fromUtf8("action_Library_view"));
        action_Library_view->setEnabled(false);
        action_Library_view->setShortcutContext(Qt::ApplicationShortcut);
        action_Update_firmware = new QAction(MainWindow);
        action_Update_firmware->setObjectName(QString::fromUtf8("action_Update_firmware"));
        action_Default_effects = new QAction(MainWindow);
        action_Default_effects->setObjectName(QString::fromUtf8("action_Default_effects"));
        action_Default_effects->setShortcutContext(Qt::ApplicationShortcut);
        action_Quick_presets = new QAction(MainWindow);
        action_Quick_presets->setObjectName(QString::fromUtf8("action_Quick_presets"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Amplifier = new QPushButton(centralWidget);
        Amplifier->setObjectName(QString::fromUtf8("Amplifier"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Amplifier->sizePolicy().hasHeightForWidth());
        Amplifier->setSizePolicy(sizePolicy);
        Amplifier->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(Amplifier);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        EffectButton1 = new QPushButton(centralWidget);
        EffectButton1->setObjectName(QString::fromUtf8("EffectButton1"));
        sizePolicy.setHeightForWidth(EffectButton1->sizePolicy().hasHeightForWidth());
        EffectButton1->setSizePolicy(sizePolicy);
        EffectButton1->setMinimumSize(QSize(75, 25));

        horizontalLayout_2->addWidget(EffectButton1);

        EffectButton2 = new QPushButton(centralWidget);
        EffectButton2->setObjectName(QString::fromUtf8("EffectButton2"));
        sizePolicy.setHeightForWidth(EffectButton2->sizePolicy().hasHeightForWidth());
        EffectButton2->setSizePolicy(sizePolicy);
        EffectButton2->setMinimumSize(QSize(75, 25));

        horizontalLayout_2->addWidget(EffectButton2);

        EffectButton3 = new QPushButton(centralWidget);
        EffectButton3->setObjectName(QString::fromUtf8("EffectButton3"));
        sizePolicy.setHeightForWidth(EffectButton3->sizePolicy().hasHeightForWidth());
        EffectButton3->setSizePolicy(sizePolicy);
        EffectButton3->setMinimumSize(QSize(75, 25));

        horizontalLayout_2->addWidget(EffectButton3);

        EffectButton4 = new QPushButton(centralWidget);
        EffectButton4->setObjectName(QString::fromUtf8("EffectButton4"));
        sizePolicy.setHeightForWidth(EffectButton4->sizePolicy().hasHeightForWidth());
        EffectButton4->setSizePolicy(sizePolicy);
        EffectButton4->setMinimumSize(QSize(75, 25));

        horizontalLayout_2->addWidget(EffectButton4);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 350, 20));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuConnection = new QMenu(menuBar);
        menuConnection->setObjectName(QString::fromUtf8("menuConnection"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuConnection->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionL_oad_from_file);
        menuFile->addAction(actionS_ave_to_file);
        menuFile->addSeparator();
        menuFile->addAction(action_Load_from_amplifier);
        menuFile->addAction(actionSave_to_amplifier);
        menuFile->addSeparator();
        menuFile->addAction(actionSave_effects);
        menuFile->addAction(action_Library_view);
        menuFile->addSeparator();
        menuFile->addAction(action_Update_firmware);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionCheck_for_Updates);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuConnection->addAction(actionConnect);
        menuConnection->addAction(actionDisconnect);
        menuSettings->addAction(action_Quick_presets);
        menuSettings->addAction(action_Default_effects);
        menuSettings->addAction(action_Options);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PLUG", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        MainWindow->setAccessibleName(QApplication::translate("MainWindow", "Main window: NONE", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        MainWindow->setAccessibleDescription(QApplication::translate("MainWindow", "Main window containing menus and buttons to open amplifier's and effect's windows", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        actionExit->setText(QApplication::translate("MainWindow", "E&xit", 0, QApplication::UnicodeUTF8));
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionConnect->setText(QApplication::translate("MainWindow", "&Connect", 0, QApplication::UnicodeUTF8));
        actionConnect->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionDisconnect->setText(QApplication::translate("MainWindow", "&Disconnect", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "&About", 0, QApplication::UnicodeUTF8));
        actionSave_to_amplifier->setText(QApplication::translate("MainWindow", "&Save to amplifier", 0, QApplication::UnicodeUTF8));
        actionSave_to_amplifier->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        action_Load_from_amplifier->setText(QApplication::translate("MainWindow", "&Load from amplifier", 0, QApplication::UnicodeUTF8));
        action_Load_from_amplifier->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", 0, QApplication::UnicodeUTF8));
        actionSave_effects->setText(QApplication::translate("MainWindow", "Save &effects", 0, QApplication::UnicodeUTF8));
        actionSave_effects->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", 0, QApplication::UnicodeUTF8));
        actionCheck_for_Updates->setText(QApplication::translate("MainWindow", "Check for &Updates", 0, QApplication::UnicodeUTF8));
        action_Options->setText(QApplication::translate("MainWindow", "&Options", 0, QApplication::UnicodeUTF8));
        action_Options->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionL_oad_from_file->setText(QApplication::translate("MainWindow", "L&oad from file", 0, QApplication::UnicodeUTF8));
        actionL_oad_from_file->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+L", 0, QApplication::UnicodeUTF8));
        actionS_ave_to_file->setText(QApplication::translate("MainWindow", "S&ave to file", 0, QApplication::UnicodeUTF8));
        actionS_ave_to_file->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", 0, QApplication::UnicodeUTF8));
        action_Library_view->setText(QApplication::translate("MainWindow", "&Library view", 0, QApplication::UnicodeUTF8));
        action_Library_view->setShortcut(QApplication::translate("MainWindow", "Shift+L", 0, QApplication::UnicodeUTF8));
        action_Update_firmware->setText(QApplication::translate("MainWindow", "&Update firmware", 0, QApplication::UnicodeUTF8));
        action_Update_firmware->setShortcut(QApplication::translate("MainWindow", "Ctrl+U", 0, QApplication::UnicodeUTF8));
        action_Default_effects->setText(QApplication::translate("MainWindow", "&Default effects", 0, QApplication::UnicodeUTF8));
        action_Default_effects->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", 0, QApplication::UnicodeUTF8));
        action_Quick_presets->setText(QApplication::translate("MainWindow", "Quick &presets", 0, QApplication::UnicodeUTF8));
        action_Quick_presets->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        centralWidget->setAccessibleName(QApplication::translate("MainWindow", "Container with buttons", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        centralWidget->setAccessibleDescription(QApplication::translate("MainWindow", "This container holds buttons to open amplifier's and effect's windows", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        Amplifier->setAccessibleName(QApplication::translate("MainWindow", "Amplifier", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        Amplifier->setAccessibleDescription(QApplication::translate("MainWindow", "This button opens window to set amplifier", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        Amplifier->setText(QApplication::translate("MainWindow", "&Amplifier", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        EffectButton1->setAccessibleName(QApplication::translate("MainWindow", "Effect 1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        EffectButton1->setAccessibleDescription(QApplication::translate("MainWindow", "This button opens window to set effect 1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        EffectButton1->setText(QApplication::translate("MainWindow", "Effect &1", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        EffectButton2->setAccessibleName(QApplication::translate("MainWindow", "Effect 2", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        EffectButton2->setAccessibleDescription(QApplication::translate("MainWindow", "This button opens window to set effect 2", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        EffectButton2->setText(QApplication::translate("MainWindow", "Effect &2", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        EffectButton3->setAccessibleName(QApplication::translate("MainWindow", "Effect 3", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        EffectButton3->setAccessibleDescription(QApplication::translate("MainWindow", "This button opens window to set effect 3", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        EffectButton3->setText(QApplication::translate("MainWindow", "Effect &3", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        EffectButton4->setAccessibleName(QApplication::translate("MainWindow", "Effect 4", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        EffectButton4->setAccessibleDescription(QApplication::translate("MainWindow", "This button opens window to set effect 4", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        EffectButton4->setText(QApplication::translate("MainWindow", "Effect &4", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        menuBar->setAccessibleName(QApplication::translate("MainWindow", "Menu bar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        menuBar->setAccessibleDescription(QApplication::translate("MainWindow", "Bar holding different menus", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        menuFile->setAccessibleName(QApplication::translate("MainWindow", "File menu", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        menuFile->setAccessibleDescription(QApplication::translate("MainWindow", "Menu holding various options", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        menuHelp->setAccessibleName(QApplication::translate("MainWindow", "Help menu", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        menuHelp->setAccessibleDescription(QApplication::translate("MainWindow", "Menu holding help options", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        menuConnection->setAccessibleName(QApplication::translate("MainWindow", "Connection menu", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        menuConnection->setAccessibleDescription(QApplication::translate("MainWindow", "Menu holding options to connect and disconnect from the device", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        menuConnection->setTitle(QApplication::translate("MainWindow", "&Connection", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        menuSettings->setAccessibleName(QApplication::translate("MainWindow", "Settings menu", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        menuSettings->setAccessibleDescription(QApplication::translate("MainWindow", "Menu holding different settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        menuSettings->setTitle(QApplication::translate("MainWindow", "&Settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        statusBar->setAccessibleName(QApplication::translate("MainWindow", "Status bar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        statusBar->setAccessibleDescription(QApplication::translate("MainWindow", "This bar display various notifications", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
