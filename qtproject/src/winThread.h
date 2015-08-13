#ifndef __WIN_THREAD_H__
#define __WIN_THREAD_H__

#include <Windows.h>
#include "process.h"

class KWinThread
{
public:
	KWinThread() : m_thread(NULL)
	{

	}

	~KWinThread()
	{

	}

	void start()
	{
		m_thread = (HANDLE)_beginthreadex(NULL, 0, ThreadWinPro, this, /*CREATE_SUSPENDED*/0, NULL);
	}

	void resume()
	{
		ResumeThread(m_thread);
	}

	void suspend()
	{
		SuspendThread(m_thread);
	}

	static unsigned _stdcall ThreadWinPro(void* /*pParam*/)
	{
		_endthreadex(0);
		return 0;
	}

private:
	HANDLE m_thread;
};

#endif