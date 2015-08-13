#ifndef __MODEL_VIEW_H__
#define __MODEL_VIEW_H__

#include <QtGui/QWidget>
#include <QtGui/QGraphicsView>

class QListWidget;
class QTreeWidget;
class QTableWidget;
class QTabWidget;

class SimpleModeView : public QWidget
{
	Q_OBJECT
public:
	SimpleModeView();
	~SimpleModeView();

	void init();

private:
	QListWidget* m_listWidget;
	QTreeWidget* m_treeWidget;
	QTableWidget* m_tableWidget;
	QTabWidget* m_tab;
};

class CustomModeView : QGraphicsView
{
	Q_OBJECT
public:
	CustomModeView();
	~CustomModeView();

};

#endif