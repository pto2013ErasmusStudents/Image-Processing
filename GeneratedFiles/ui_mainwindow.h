/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionExit;
    QAction *actionBinary_format;
    QAction *actionText_format;
    QAction *actionClose;
    QAction *actionClose_all;
    QAction *actionUndo_Ctrl_Z;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(789, 474);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/witch.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setDocumentMode(true);
        MainWindow->setTabShape(QTabWidget::Rounded);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/icons/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/icons/door_out.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon2);
        actionBinary_format = new QAction(MainWindow);
        actionBinary_format->setObjectName(QStringLiteral("actionBinary_format"));
        actionBinary_format->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/icons/picture_save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBinary_format->setIcon(icon3);
        actionText_format = new QAction(MainWindow);
        actionText_format->setObjectName(QStringLiteral("actionText_format"));
        actionText_format->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/icons/layer_save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionText_format->setIcon(icon4);
        actionText_format->setIconVisibleInMenu(true);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionClose->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/icons/picture_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon5);
        actionClose_all = new QAction(MainWindow);
        actionClose_all->setObjectName(QStringLiteral("actionClose_all"));
        actionUndo_Ctrl_Z = new QAction(MainWindow);
        actionUndo_Ctrl_Z->setObjectName(QStringLiteral("actionUndo_Ctrl_Z"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 789, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionText_format);
        menuFile->addAction(actionBinary_format);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionUndo_Ctrl_Z);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionBinary_format->setText(QApplication::translate("MainWindow", "Save Binary", 0));
        actionText_format->setText(QApplication::translate("MainWindow", "Save ASCII", 0));
        actionClose->setText(QApplication::translate("MainWindow", "Close", 0));
        actionClose_all->setText(QApplication::translate("MainWindow", "Close all", 0));
        actionUndo_Ctrl_Z->setText(QApplication::translate("MainWindow", "Undo (Ctrl+Z)", 0));
        actionUndo_Ctrl_Z->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
