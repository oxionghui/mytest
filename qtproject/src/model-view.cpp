#include "model-view.h"
#include <QtGui/QListWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QTabWidget>
#include <QtGui/QGraphicsView>

SimpleModeView::SimpleModeView()
{
	//list
	m_listWidget = new QListWidget(this);
	m_listWidget->addItem("itme1");
	m_listWidget->addItem("itme2");
	m_listWidget->addItem("itme3");

	//tree
	m_treeWidget = new QTreeWidget(this);
	m_treeWidget->setColumnCount(1);
	m_treeWidget->setHeaderHidden(true);
	QTreeWidgetItem* root = new QTreeWidgetItem(m_treeWidget, QStringList("root"));
	QTreeWidgetItem* leaf = new QTreeWidgetItem(root, QStringList("leaf"));

	QList<QTreeWidgetItem*> listItems;
	listItems << root << leaf;
	m_treeWidget->insertTopLevelItems(0, listItems);

	//table
	m_tableWidget = new QTableWidget(this);
	m_tableWidget->setColumnCount(2);
	m_tableWidget->setRowCount(2);
	for (int i = 0; i < 2; ++i)
		for (int j = 0; j < 2; ++j)
		{
			QTableWidgetItem* item = new QTableWidgetItem(QString("Item%1 %2").arg(i).arg(j));
			m_tableWidget->setItem(i, j, item);
		}

		resize(400,600);
		m_tab = new QTabWidget(this);
		m_tab->setTabPosition(QTabWidget::West);

		m_tab->addTab(m_listWidget, "tab1");
		m_tab->addTab(m_treeWidget, "tab2");
		m_tab->addTab(m_tableWidget, "tab3");
		m_tab->setFixedSize(400,600);
}

SimpleModeView::~SimpleModeView()
{

}

void SimpleModeView::init()
{

}

CustomModeView::CustomModeView()
{
	
}

CustomModeView::~CustomModeView()
{

}
