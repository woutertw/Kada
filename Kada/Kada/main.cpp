#include "Kada.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Kada w;
	w.show();
	return a.exec();
}
