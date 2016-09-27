//windows编程main函数

#include "stdafx.h"


int APIENTRY _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow)
{
	CPaintManagerUI::SetInstance(hInstance);
	HRESULT Hr = ::CoInitialize(NULL);
	if (FAILED(Hr)) return 0;//CoInitialize是Windows提供的API函数，用来告诉 Windows以单线程的方式创建com对象。
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