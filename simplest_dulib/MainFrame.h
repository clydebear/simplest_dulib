#pragma once

/*
定义主界面对象。通过重载三个基本函数GetWindowClassName、GetSkinFile、GetSkinFolder加载xml解析xml文件生成界面。
通过Notify等函数进行消息响应。百度dulib、mfc消息机制理解
*/
class CMainFrame : public WindowImplBase
{
public:
	CMainFrame(void);
	~CMainFrame(void);
public:
	virtual LPCTSTR    GetWindowClassName() const { return _T("MainFrame"); }
	virtual CDuiString GetSkinFile() { return _T("CMainFrame.xml"); }//皮肤文件对应的文件名
	virtual CDuiString GetSkinFolder() { return _T("UISkin"); }  //exe文件夹下皮肤文件
	virtual void InitWindow();
	virtual void Notify(TNotifyUI& msg);

};