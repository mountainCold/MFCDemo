#pragma once
#include "stdafx.h"
#include "afxdialogex.h"
// CMyDialog 对话框

class CMyDialog : public CDialogEx
{
	// [ 不重要: 提供运行时类型识别机制 ]
	DECLARE_DYNAMIC(CMyDialog)

public:
	CMyDialog(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CMyDialog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	//用于支持数据的绑定与交换
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	//用于声明需要使用的消息映射机制
	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnClose();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	CString EditTest;
	CEdit IDCEdit1;
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};
