#include "src/trayicon.h"
#include "src/winThread.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	TrayIconWidget trayicon;
	trayicon.show();

	return a.exec();
}
