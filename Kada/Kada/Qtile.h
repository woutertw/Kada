#pragma once

#include <QtWidgets/QWidget>
#include <Qpainter>
#include <QPixmap>
#include <QPainter>
#include <Qevent>
#include <QtGUI>

class QTile : public QWidget
{
	Q_OBJECT


		Q_PROPERTY(QString Imageid READ getImagename WRITE setImage)

public:
	QTile(QWidget *parent = Q_NULLPTR);
	QString getImagename();

protected:
	void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
	void mouseReleaseEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
	void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;

	public slots:
	void setImage(QString image);


signals:
	void clicks();


private:
	QPixmap pixmap;
	QString Imageid;
	QString clicked = "1";
};
