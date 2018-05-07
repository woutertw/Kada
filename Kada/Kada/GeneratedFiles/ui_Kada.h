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
    QTile *BananaTile;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *KadaClass)
    {
        if (KadaClass->objectName().isEmpty())
            KadaClass->setObjectName(QStringLiteral("KadaClass"));
        KadaClass->resize(412, 275);
        centralWidget = new QWidget(KadaClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        BananaTile = new QTile(centralWidget);
        BananaTile->setObjectName(QStringLiteral("BananaTile"));
        BananaTile->setGeometry(QRect(0, 0, 100, 100));
        KadaClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(KadaClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 412, 26));
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
        BananaTile->setProperty("Imageid", QVariant(QApplication::translate("KadaClass", "banana", Q_NULLPTR)));
    } // retranslateUi

};

namespace Ui {
    class KadaClass: public Ui_KadaClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KADA_H
