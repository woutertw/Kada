#include "QTile.h"
#include "QTilePlugin.h"

#include <QtCore/QtPlugin>

QTilePlugin::QTilePlugin(QObject *parent)
	: QObject(parent)
{
	initialized = false;
}

void QTilePlugin::initialize(QDesignerFormEditorInterface * /*core*/)
{
	if (initialized)
		return;

	initialized = true;
}

bool QTilePlugin::isInitialized() const
{
	return initialized;
}

QWidget *QTilePlugin::createWidget(QWidget *parent)
{
	return new QTile(parent);
}

QString QTilePlugin::name() const
{
	return "QTile";
}

QString QTilePlugin::group() const
{
	return "My Plugins";
}

QIcon QTilePlugin::icon() const
{
	return QIcon();
}

QString QTilePlugin::toolTip() const
{
	return QString();
}

QString QTilePlugin::whatsThis() const
{
	return QString();
}

bool QTilePlugin::isContainer() const
{
	return false;
}

QString QTilePlugin::domXml() const
{
	return "<widget class=\"QTile\" name=\"qTile\">\n"
		" <property name=\"geometry\">\n"
		"  <rect>\n"
		"   <x>0</x>\n"
		"   <y>0</y>\n"
		"   <width>100</width>\n"
		"   <height>100</height>\n"
		"  </rect>\n"
		" </property>\n"
		"</widget>\n";
}

QString QTilePlugin::includeFile() const
{
	return "QTile.h";
}
