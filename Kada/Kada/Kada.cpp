#include "Kada.h"

Kada::Kada(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}


void Kada::on_BananaTile_clicks() {
}

void Kada::on_musicTile_clicks() {
	QtaddDialog dialog(this);
	dialog.exec();
}