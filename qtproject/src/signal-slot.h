#ifndef __SIGNAL_SLOT_H__
#define __SIGNAL_SLOT_H__

#include <QtCore/QObject>

class SignalSlot : public QObject
{
	Q_OBJECT
public:
	SignalSlot()
	{
		QObject::connect(this, SIGNAL(oneSignal()), this, SLOT(on_oneSignal_slot()));
	}
	~SignalSlot()
	{

	}

signals:
	void oneSignal();

public slots:
	void on_oneSignal_slot()
	{

	}
};

#endif