#include <afxwin.h>
#include "resource.h"
#include "CMyDialog.h"
class CMyAPP: public CWinApp
{

public:
	virtual BOOL InitInstance();
};


BOOL CMyAPP::InitInstance()
{
	/*创建非模态对话框 
	1 定义一个 CDialog 对象
	2 设置程序的主窗口 m_pMainWnd 
	3 设置对话框的ID Create
	4 手动显示对话框 ShowWindow
	5 设置一个全局范围的唯一的 CMyApp 对象
	CDialog* pDialog = new CDialog;
	this->m_pMainWnd = pDialog;
	pDialog->Create(IDD_DIALOG1);
	pDialog->ShowWindow(SW_SHOWNORMAL);*/
	/*创建一个模态对话框
	1 创建一个CDialog 对象 CDiaLog DiaLog(IDD_DIALOAG1);
	2 设置主窗口 m_pMainWnd （可以不设）
	3 创建模态对话框 DiaLog.DoMOdal();
	*/
	CMyDialog MyDialog;
	MyDialog.DoModal();
	return CWinApp::InitInstance();
}
CMyAPP myApp;