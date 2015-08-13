#ifndef MYQTPROJECT_H
#define MYQTPROJECT_H

#include <QtGui/QMainWindow>
#include "ui_myqtproject.h"

class MyQtProject : public QMainWindow
{
	Q_OBJECT

public:
	MyQtProject(QWidget *parent = 0, Qt::WFlags flags = 0);
	~MyQtProject();

private:
	Ui::MyQtProjectClass ui;
};

#endif // MYQTPROJECT_H
