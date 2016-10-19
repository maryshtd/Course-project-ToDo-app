#include "Controller.h"

Controller *Controller::ptr = NULL;

Controller::Controller()
{
	ptr = this;
}

Controller ::~Controller()
{}

BOOL CALLBACK Controller::DlgProc(HWND hWnd, UINT mess, WPARAM wParam, LPARAM lParam)
{
	switch (mess)
	{
		HANDLE_MSG(hWnd, WM_INITDIALOG, ptr->Cls_OnInitDialog);
		HANDLE_MSG(hWnd, WM_CLOSE, ptr->Cls_OnClose);
		HANDLE_MSG(hWnd, WM_COMMAND, ptr->Cls_OnCommand);
		HANDLE_MSG(hWnd, WM_TIMER, ptr->Cls_OnTimer);
		HANDLE_MSG(hWnd, WM_HSCROLL, ptr->Cls_OnHScroll);
		HANDLE_MSG(hWnd, WM_VSCROLL, ptr->Cls_OnVScroll);
	}
	return FALSE;
}
BOOL Controller::Cls_OnInitDialog(HWND hWnd, HWND hWndFocus, LPARAM lParam)
{

	return TRUE;
}
void Controller::Cls_OnCommand(HWND hWnd, int ctrlId, HWND ctrlHandle, UINT codeNotify)
{
	switch (ctrlId)
	{
	case IDOK:
		//SetWindowText(hEdit1, pm.Display());
		break;
	case IDCANCEL:
		EndDialog(hWnd, 0);
		break;
	}
}

void Controller::Cls_OnClose(HWND hWnd)
{
	EndDialog(hWnd, 0);
}
void Controller::Cls_OnTimer(HWND hWnd, UINT timerId)
{}
void Controller::Cls_OnVScroll(HWND hWnd, HWND ctrlHandle, UINT code, int pos)
{}
void Controller::Cls_OnHScroll(HWND hWnd, HWND ctrlHandle, UINT code, int pos)
{}