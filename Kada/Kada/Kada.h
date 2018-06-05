#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Kada.h"

class Kada : public QMainWindow
{
	Q_OBJECT


		private slots:
	void on_BananaTile_clicks();
public:
	Kada(QWidget *parent = Q_NULLPTR);

	void on_musicTile_clicked(void);

private:
	Ui::KadaClass ui;	
};
