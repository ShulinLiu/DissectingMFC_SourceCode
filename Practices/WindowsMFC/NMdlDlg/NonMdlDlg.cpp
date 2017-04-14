// NonMdlDlg.cpp : implementation file
//

#include "stdafx.h"
#include "NMdlDlg.h"
#include "NonMdlDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CNonMdlDlg dialog


CNonMdlDlg::CNonMdlDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CNonMdlDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CNonMdlDlg)
	m_inputEdit = _T("");
	//}}AFX_DATA_INIT
	m_bActive=FALSE;			//对话框打开标志处值为FALSE
}


void CNonMdlDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CNonMdlDlg)
	DDX_Text(pDX, IDC_EDIT1, m_inputEdit);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CNonMdlDlg, CDialog)
	//{{AFX_MSG_MAP(CNonMdlDlg)
	ON_BN_CLICKED(IDC_BUTTON1, OnCancel)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNonMdlDlg message handlers

void CNonMdlDlg::OnCancel() 
{
	// TODO: Add your control notification handler code here
	m_bActive=FALSE;
	DestroyWindow();	
	CDialog::OnCancel();
}

BOOL CNonMdlDlg::Create() 
{
	// TODO: Add your specialized code here and/or call the base class
	m_bActive=TRUE;			//创建对话框时把打开标志置为TRUE
	return CDialog::Create(CNonMdlDlg::IDD);
}
