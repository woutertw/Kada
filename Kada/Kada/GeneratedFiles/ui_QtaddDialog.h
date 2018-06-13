/********************************************************************************
** Form generated from reading UI file 'QtaddDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTADDDIALOG_H
#define UI_QTADDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include "QTile.h"

QT_BEGIN_NAMESPACE

class Ui_QtaddDialog
{
public:
    QTile *bananaTile;

    void setupUi(QDialog *QtaddDialog)
    {
        if (QtaddDialog->objectName().isEmpty())
            QtaddDialog->setObjectName(QStringLiteral("QtaddDialog"));
        QtaddDialog->resize(400, 300);
        bananaTile = new QTile(QtaddDialog);
        bananaTile->setObjectName(QStringLiteral("bananaTile"));
        bananaTile->setGeometry(QRect(90, 110, 100, 100));

        retranslateUi(QtaddDialog);

        QMetaObject::connectSlotsByName(QtaddDialog);
    } // setupUi

    void retranslateUi(QDialog *QtaddDialog)
    {
        QtaddDialog->setWindowTitle(QApplication::translate("QtaddDialog", "Dialog", Q_NULLPTR));
        bananaTile->setProperty("Imageid", QVariant(QApplication::translate("QtaddDialog", "banana", Q_NULLPTR)));
    } // retranslateUi

};

namespace Ui {
    class QtaddDialog: public Ui_QtaddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTADDDIALOG_H
