/********************************************************************************
** Form generated from reading UI file 'SettingsWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWINDOW_H
#define UI_SETTINGSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "QTile.h"

QT_BEGIN_NAMESPACE

class Ui_SettingsWindow
{
public:
    QWidget *centralwidget;
    QTile *qTile;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SettingsWindow)
    {
        if (SettingsWindow->objectName().isEmpty())
            SettingsWindow->setObjectName(QStringLiteral("SettingsWindow"));
        SettingsWindow->resize(800, 600);
        centralwidget = new QWidget(SettingsWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        qTile = new QTile(centralwidget);
        qTile->setObjectName(QStringLiteral("qTile"));
        qTile->setGeometry(QRect(370, 200, 100, 100));
        SettingsWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SettingsWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        SettingsWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SettingsWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SettingsWindow->setStatusBar(statusbar);

        retranslateUi(SettingsWindow);

        QMetaObject::connectSlotsByName(SettingsWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SettingsWindow)
    {
        SettingsWindow->setWindowTitle(QApplication::translate("SettingsWindow", "MainWindow", Q_NULLPTR));
        qTile->setProperty("Imageid", QVariant(QApplication::translate("SettingsWindow", "banana", Q_NULLPTR)));
    } // retranslateUi

};

namespace Ui {
    class SettingsWindow: public Ui_SettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWINDOW_H
