// RCDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Dialog.h"
#include "RCDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// RCDlg dialog


RCDlg::RCDlg(CWnd* pParent /*=NULL*/)
	: CDialog(RCDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(RCDlg)
	m_Edit1Val = _T("");
	m_Edit2Val = _T("");
	//}}AFX_DATA_INIT
}


void RCDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(RCDlg)
	DDX_Text(pDX, IDC_EDIT1, m_Edit1Val);
	DDX_Text(pDX, IDC_EDIT2, m_Edit2Val);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(RCDlg, CDialog)
	//{{AFX_MSG_MAP(RCDlg)
	ON_BN_CLICKED(IDC_BUTTON1, OnRead)
	ON_BN_CLICKED(IDC_BUTTON2, OnCopy)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// RCDlg message handlers

void RCDlg::OnRead() 
{
	UpdateData(TRUE);
	m_Edit2Val = m_Edit1Val;
	UpdateData(FALSE);
	
}

void RCDlg::OnCopy() 
{
	UpdateData(FALSE);
	
}
