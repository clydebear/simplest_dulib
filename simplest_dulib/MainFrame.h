#pragma once

/*
�������������ͨ������������������GetWindowClassName��GetSkinFile��GetSkinFolder����xml����xml�ļ����ɽ��档
ͨ��Notify�Ⱥ���������Ϣ��Ӧ���ٶ�dulib��mfc��Ϣ�������
*/
class CMainFrame : public WindowImplBase
{
public:
	CMainFrame(void);
	~CMainFrame(void);
public:
	virtual LPCTSTR    GetWindowClassName() const { return _T("MainFrame"); }
	virtual CDuiString GetSkinFile() { return _T("CMainFrame.xml"); }//Ƥ���ļ���Ӧ���ļ���
	virtual CDuiString GetSkinFolder() { return _T("UISkin"); }  //exe�ļ�����Ƥ���ļ�
	virtual void InitWindow();
	virtual void Notify(TNotifyUI& msg);

};