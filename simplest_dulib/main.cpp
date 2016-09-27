//windows���main����

#include "stdafx.h"


int APIENTRY _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow)
{
	CPaintManagerUI::SetInstance(hInstance);
	HRESULT Hr = ::CoInitialize(NULL);
	if (FAILED(Hr)) return 0;//CoInitialize��Windows�ṩ��API�������������� Windows�Ե��̵߳ķ�ʽ����com����
	CPaintManagerUI::SetResourcePath(CPaintManagerUI::GetInstancePath());
	CMainFrame *mainFrame = new CMainFrame;
	mainFrame->Create(NULL, _T("mainFrame"), UI_WNDSTYLE_FRAME, WS_EX_WINDOWEDGE);
	mainFrame->CenterWindow();
	mainFrame->ShowModal();
	if (mainFrame != NULL)
	{
		delete mainFrame;
	}
	::CoUninitialize();

	return 0;
}