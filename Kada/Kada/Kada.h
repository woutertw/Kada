#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Kada.h"
#include "QtaddDialog.h"

class Kada : public QMainWindow
{
	Q_OBJECT

private slots:
	void on_BananaTile_clicks();
	void on_musicTile_clicks();

public:
	Kada(QWidget *parent = Q_NULLPTR);


private:
	Ui::KadaClass ui;	
};
