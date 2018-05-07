#include "QTile.h"

QTile::QTile(QWidget *parent)
	: QWidget(parent)
{


}

void QTile::paintEvent(QPaintEvent * event)
{
	QPainter painter(this);
	//QString file = "C:Users\s156771\Documents\Qttest\pics\banana.png";
	//QPixmap pixmap("C:/Users/s156771/Documents/Qttest/pics/banana.png");
	pixmap = QPixmap(":/Image/Images/" + Imageid + clicked + ".png");
	//pixmap = QPixmap(":/Image/Images/banana1.png"); //works
	painter.drawPixmap(0, 0, 100, 100, pixmap);
}


void QTile::mouseReleaseEvent(QMouseEvent *event)
{
	if (event->button() == Qt::LeftButton) {
		emit clicks();
		clicked = "1";
		update();
	}
}

void QTile::mousePressEvent(QMouseEvent *event)
{
	if (event->button() == Qt::LeftButton) {
		//click animation?
		clicked = "2";
		update();
	} 
}

void QTile::setImage(QString image) {
	Imageid = image;
}

QString QTile::getImagename()
{
	return Imageid;
}
