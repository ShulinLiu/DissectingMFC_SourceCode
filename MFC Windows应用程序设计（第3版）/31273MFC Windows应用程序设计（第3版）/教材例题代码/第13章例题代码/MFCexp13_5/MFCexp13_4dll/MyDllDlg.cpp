// MyDllDlg.cpp : implementation file
//

#include "stdafx.h"
#include "resource.h"
#include "MyDllDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMyDllDlg dialog


CMyDllDlg::CMyDllDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMyDllDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMyDllDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CMyDllDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMyDllDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CMyDllDlg, CDialog)
	//{{AFX_MSG_MAP(CMyDllDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyDllDlg message handlers
