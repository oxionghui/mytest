#include "trayicon.h"
#include <windows.h>
#include <winuser.h>
#include <QtGui/QIcon>

const int	KTrayIconId = 1;
const int	KTrayIconMsg = (WM_APP + 10);

TrayIconWidget::TrayIconWidget( QWidget* parent /*= NULL*/ )
: QWidget(parent)
{

}

TrayIconWidget::~TrayIconWidget()
{

}

void TrayIconWidget::show()
{
	_addTrayIcon();
}

void TrayIconWidget::on_hoverEnter()
{

}

void TrayIconWidget::on_hoverLeave()
{

}

bool TrayIconWidget::winEvent( MSG * message, long * result )
{
	if (message->message == KTrayIconMsg)
	{
		switch(message->lParam)
		{
			case WM_MOUSEMOVE:
				_processMousemove();
				break;
		}
	}

	return QWidget::winEvent(message, result);
}

void TrayIconWidget::_addTrayIcon()
{
	NOTIFYICONDATAW ncd = {0};
	ncd.cbSize = sizeof(NOTIFYICONDATAW);
	ncd.hWnd = winId();
	ncd.uID = KTrayIconId;
	const static GUID c_trayicon_id = { 0x3961542c, 0x37e7, 0x44e4, { 0xa0, 0xc2, 0xb3, 0x1d, 0x2c, 0xfd, 0x86, 0x16 } };
	ncd.guidItem = c_trayicon_id;

	ncd.uFlags = NIF_ICON | NIF_MESSAGE;
	QIcon icon(":theme/icon.png");
	ncd.hIcon = icon.pixmap(16, 16).toWinHICON();
	ncd.uCallbackMessage = KTrayIconMsg;

	Shell_NotifyIconW(NIM_ADD, &ncd);
}

void TrayIconWidget::_removeTrayIcon()
{
	NOTIFYICONDATAW ncd = {0};
	ncd.cbSize = sizeof(NOTIFYICONDATAW);
	ncd.hWnd = winId();
	ncd.uID = KTrayIconId;
	const static GUID c_trayicon_id = { 0x3961542c, 0x37e7, 0x44e4, { 0xa0, 0xc2, 0xb3, 0x1d, 0x2c, 0xfd, 0x86, 0x16 } };
	ncd.guidItem = c_trayicon_id;

	Shell_NotifyIconW(NIM_DELETE, &ncd);
}

void TrayIconWidget::_processMousemove()
{

}