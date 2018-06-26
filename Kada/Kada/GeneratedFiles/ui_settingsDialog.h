/********************************************************************************
** Form generated from reading UI file 'settingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include "QTile.h"

QT_BEGIN_NAMESPACE

class Ui_settingsDialog
{
public:
    QTile *qTile;

    void setupUi(QDialog *settingsDialog)
    {
        if (settingsDialog->objectName().isEmpty())
            settingsDialog->setObjectName(QStringLiteral("settingsDialog"));
        settingsDialog->resize(400, 300);
        qTile = new QTile(settingsDialog);
        qTile->setObjectName(QStringLiteral("qTile"));
        qTile->setGeometry(QRect(150, 110, 100, 100));

        retranslateUi(settingsDialog);

        QMetaObject::connectSlotsByName(settingsDialog);
    } // setupUi

    void retranslateUi(QDialog *settingsDialog)
    {
        settingsDialog->setWindowTitle(QApplication::translate("settingsDialog", "Dialog", Q_NULLPTR));
        qTile->setProperty("Imageid", QVariant(QApplication::translate("settingsDialog", "settings", Q_NULLPTR)));
    } // retranslateUi

};

namespace Ui {
    class settingsDialog: public Ui_settingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
