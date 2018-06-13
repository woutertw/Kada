#pragma once

#include <QDialog>
#include "ui_QtaddDialog.h"

class QtaddDialog : public QDialog, public Ui::QtaddDialog
{
	Q_OBJECT

public:
	QtaddDialog(QWidget *parent = Q_NULLPTR);
	~QtaddDialog();
};
