#ifndef __TRANY_ICON_H__
#define __TRANY_ICON_H__

#include <QtGui/QWidget>

class TrayIconWidget : public QWidget
{
	Q_OBJECT
public:
	TrayIconWidget(QWidget* parent = NULL);
	~TrayIconWidget();

	void show();
	bool winEvent( MSG * message, long * result ) override;

signals:
	void hoverEnter();
	void hoverLeave();

public slots:
	void on_hoverEnter();
	void on_hoverLeave();

private:
	void _addTrayIcon();
	void _removeTrayIcon();
	void _processMousemove();
};

#endif