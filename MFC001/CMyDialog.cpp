// CMyDialog.cpp: 实现文件
//
#include "CMyDialog.h"
#include "afxdialogex.h"
#include "resource.h"

// CMyDialog 对话框

IMPLEMENT_DYNAMIC(CMyDialog, CDialogEx)

CMyDialog::CMyDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, EditTest(_T(""))
{

}

CMyDialog::~CMyDialog()
{
}

void CMyDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, EditTest);
	DDX_Control(pDX, IDC_EDIT1, IDCEdit1);
}


BEGIN_MESSAGE_MAP(CMyDialog, CDialogEx)
	ON_WM_CLOSE()
//	ON_WM_LBUTTONDBLCLK()
	ON_WM_LBUTTONDOWN()
	ON_EN_CHANGE(IDC_EDIT1, &CMyDialog::OnEnChangeEdit1)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()


// CMyDialog 消息处理程序


void CMyDialog::OnClose()
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	CDialogEx::OnClose();
}




void CMyDialog::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}




void CMyDialog::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
// 	POINT Point = { 0 };
// 	GetCursorPos(&Point);
// 	EditTest.Format(L"(%d ,%d)(%d ,%d)", point.x, point.y, Point.x, Point.y);
// 	UpdateData(FALSE);
	CDialogEx::OnMouseMove(nFlags, point);
}


void CMyDialog::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	POINT Point = { 0 };
	GetCursorPos(&Point);
	EditTest.Format(L"(%d ,%d)(%d ,%d)", point.x, point.y, Point.x, Point.y);
	UpdateData(FALSE);
	CDialogEx::OnLButtonDown(nFlags, point);
}

