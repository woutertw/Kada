/********************************************************************************
** Form generated from reading UI file 'Kada.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KADA_H
#define UI_KADA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "QTile.h"

QT_BEGIN_NAMESPACE

class Ui_KadaClass
{
public:
    QWidget *centralWidget;
    QTile *statisticsTile;
    QTile *settingsTile;
    QTile *musicTile;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *KadaClass)
    {
        if (KadaClass->objectName().isEmpty())
            KadaClass->setObjectName(QStringLiteral("KadaClass"));
        KadaClass->resize(1280, 800);
        centralWidget = new QWidget(KadaClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        statisticsTile = new QTile(centralWidget);
        statisticsTile->setObjectName(QStringLiteral("statisticsTile"));
        statisticsTile->setGeometry(QRect(1017, 300, 100, 100));
        statisticsTile->setMinimumSize(QSize(100, 100));
        settingsTile = new QTile(centralWidget);
        settingsTile->setObjectName(QStringLiteral("settingsTile"));
        settingsTile->setGeometry(QRect(163, 300, 100, 100));
        musicTile = new QTile(centralWidget);
        musicTile->setObjectName(QStringLiteral("musicTile"));
        musicTile->setGeometry(QRect(590, 300, 100, 100));
        KadaClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(KadaClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1280, 26));
        KadaClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(KadaClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        KadaClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(KadaClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        KadaClass->setStatusBar(statusBar);

        retranslateUi(KadaClass);

        QMetaObject::connectSlotsByName(KadaClass);
    } // setupUi

    void retranslateUi(QMainWindow *KadaClass)
    {
        KadaClass->setWindowTitle(QApplication::translate("KadaClass", "Kada", Q_NULLPTR));
        statisticsTile->setProperty("Imageid", QVariant(QApplication::translate("KadaClass", "statistics", Q_NULLPTR)));
        settingsTile->setProperty("Imageid", QVariant(QApplication::translate("KadaClass", "settings", Q_NULLPTR)));
        musicTile->setProperty("Imageid", QVariant(QApplication::translate("KadaClass", "musicc", Q_NULLPTR)));
    } // retranslateUi

};

namespace Ui {
    class KadaClass: public Ui_KadaClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KADA_H
