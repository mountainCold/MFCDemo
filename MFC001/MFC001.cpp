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
	/*������ģ̬�Ի��� 
	1 ����һ�� CDialog ����
	2 ���ó���������� m_pMainWnd 
	3 ���öԻ����ID Create
	4 �ֶ���ʾ�Ի��� ShowWindow
	5 ����һ��ȫ�ַ�Χ��Ψһ�� CMyApp ����
	CDialog* pDialog = new CDialog;
	this->m_pMainWnd = pDialog;
	pDialog->Create(IDD_DIALOG1);
	pDialog->ShowWindow(SW_SHOWNORMAL);*/
	/*����һ��ģ̬�Ի���
	1 ����һ��CDialog ���� CDiaLog DiaLog(IDD_DIALOAG1);
	2 ���������� m_pMainWnd �����Բ��裩
	3 ����ģ̬�Ի��� DiaLog.DoMOdal();
	*/
	CMyDialog MyDialog;
	MyDialog.DoModal();
	return CWinApp::InitInstance();
}
CMyAPP myApp;