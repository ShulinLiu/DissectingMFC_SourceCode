// NonMdlDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MFCexp11_6.h"
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
	m_iputEdit = _T("");
	//}}AFX_DATA_INIT
	m_bActive=FALSE;			//对话框打开标志处值为FALSE
}


void CNonMdlDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CNonMdlDlg)
	DDX_Text(pDX, IDC_EDIT1, m_iputEdit);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CNonMdlDlg, CDialog)
	//{{AFX_MSG_MAP(CNonMdlDlg)
	ON_WM_CREATE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNonMdlDlg message handlers

void CNonMdlDlg::OnCancel() 
{
	// TODO: Add extra cleanup here
	m_bActive=FALSE;
	DestroyWindow();	
	CDialog::OnCancel();
}

int CNonMdlDlg::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CDialog::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	// TODO: Add your specialized creation code here
	return 0;
}

BOOL CNonMdlDlg::Create()
{
	m_bActive=TRUE;			//创建对话框时把打开标志置为TRUE
	return CDialog::Create(CNonMdlDlg::IDD);

}
