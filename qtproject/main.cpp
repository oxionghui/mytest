#include "myqtproject.h"
#include "src/trayicon.h"
#include <QtGui/QApplication>
#include "src/winThread.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	
// 	KWinThread winThread;
// 	winThread.start();
// 	winThread.resume();

	return a.exec();
}
