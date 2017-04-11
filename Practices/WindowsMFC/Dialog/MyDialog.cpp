// MyDialog.cpp : implementation file
//

#include "stdafx.h"
#include "Dialog.h"
#include "MyDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMyDialog dialog


CMyDialog::CMyDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CMyDialog::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMyDialog)
	m_Edit1 = _T("");
	m_Edit2 = _T("");
	//}}AFX_DATA_INIT
}


void CMyDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMyDialog)
	DDX_Text(pDX, IDC_EDIT1, m_Edit1);
	DDX_Text(pDX, IDC_EDIT2, m_Edit2);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CMyDialog, CDialog)
	//{{AFX_MSG_MAP(CMyDialog)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyDialog message handlers
void CMyDialog::OnOK( )
{
	MessageBox("你单击了OK按钮");		//显示消息框
	CDialog::OnOK( );
}

void CMyDialog::OnButton1() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);		//把控件上的数据写入成员变量	
}

void CMyDialog::OnButton2() 
{
	// TODO: Add your control notification handler code here
		m_Edit2=m_Edit1;
		UpdateData(FALSE);		//成员变量的数据传送到控件上	
}
