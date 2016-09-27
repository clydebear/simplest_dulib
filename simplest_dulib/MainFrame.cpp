#include "stdafx.h"


CMainFrame::CMainFrame(void)
{

}

CMainFrame::~CMainFrame(void)
{

}


void CMainFrame::InitWindow()
{
	
}

void CMainFrame::Notify(TNotifyUI& msg)
{
	if (msg.sType == _T("selectchanged"))
	{
		
	
	}
	else if (msg.sType == _T("click"))
	{
		if (msg.pSender->GetName() == _T("btnMenu"))
		{
			
		}
		else if (msg.pSender->GetName() == _T("btClose"))
		{
			PostQuitMessage(0);
		}
	}

	__super::Notify(msg);
}
