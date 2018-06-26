#pragma once

#include <QDialog>
#include "ui_settingsDialog.h"

class settingsDialog : public QDialog, public Ui::settingsDialog
{
	Q_OBJECT

public:
	settingsDialog(QWidget *parent = Q_NULLPTR);
	~settingsDialog();
};
