// tmsDlg.cpp : implementation file
//

#include "stdafx.h"
#include "tms.h"
#include "tmsDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTmsDlg dialog

CTmsDlg::CTmsDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTmsDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CTmsDlg)
	m_esno = _T("");
	m_esex = _T("");
	m_ename = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTmsDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTmsDlg)
	DDX_Text(pDX, IDC_EDITsno, m_esno);
	DDX_Text(pDX, IDC_EDITsex, m_esex);
	DDX_Text(pDX, IDC_EDITname, m_ename);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CTmsDlg, CDialog)
	//{{AFX_MSG_MAP(CTmsDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTONtop, OnBUTTONtop)
	ON_BN_CLICKED(IDC_BUTTONbottom, OnBUTTONbottom)
	ON_BN_CLICKED(IDC_BUTTONnext, OnBUTTONnext)
	ON_BN_CLICKED(IDC_BUTTONpre, OnBUTTONpre)
	ON_BN_CLICKED(IDC_BUTTONadd, OnBUTTONadd)
	ON_BN_CLICKED(IDC_BUTTONdel, OnBUTTONdel)
	ON_BN_CLICKED(IDC_BUTTONedit, OnBUTTONedit)
	ON_BN_CLICKED(IDC_BUTTONrefresh, OnBUTTONrefresh)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTmsDlg message handlers

BOOL CTmsDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	m_db.Open(_T("tmsDSN"));
	m_rs.m_pDatabase=&m_db;
	m_rs.Open();
	m_esno = m_rs.m_sno;
	m_ename = m_rs.m_sname;
	m_esex = m_rs.m_sex;
	UpdateData(FALSE);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CTmsDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CTmsDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CTmsDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CTmsDlg::OnBUTTONtop() 
{
	// TODO: Add your control notification handler code here
	m_rs.MoveFirst();
	m_esno = m_rs.m_sno;
	m_ename = m_rs.m_sname;
	m_esex = m_rs.m_sex;
	UpdateData(FALSE);
}

void CTmsDlg::OnBUTTONbottom() 
{
	// TODO: Add your control notification handler code here
	m_rs.MoveLast();
	m_esno = m_rs.m_sno;
	m_ename = m_rs.m_sname;
	m_esex = m_rs.m_sex;
	UpdateData(FALSE);
}

void CTmsDlg::OnBUTTONnext() 
{
	// TODO: Add your control notification handler code here
	m_rs.MoveNext();
	if(m_rs.IsEOF())
		m_rs.MoveLast();
	m_esno = m_rs.m_sno;
	m_ename = m_rs.m_sname;
	m_esex = m_rs.m_sex;
	UpdateData(FALSE);
}

void CTmsDlg::OnBUTTONpre() 
{
	// TODO: Add your control notification handler code here
	m_rs.MovePrev();
	if(m_rs.IsBOF())
		m_rs.MoveFirst();
	m_esno = m_rs.m_sno;
	m_ename = m_rs.m_sname;
	m_esex = m_rs.m_sex;
	UpdateData(FALSE);
}

void CTmsDlg::OnOK() 
{
	// TODO: Add extra validation here
	m_rs.Close();
	m_db.Close();
	
	CDialog::OnOK();
}

void CTmsDlg::OnBUTTONadd() 
{
	// TODO: Add your control notification handler code here
	try { 
		m_rs.AddNew();
		UpdateData(TRUE);
		m_rs.m_sno=m_esno;
		m_rs.m_sname=m_ename;
		m_rs.m_sex=m_esex;
		m_rs.Update();
	}
	catch(CDBException * e) {
		AfxMessageBox(e->m_strError, MB_ICONEXCLAMATION);
		e->Delete();  
		m_rs.MoveFirst();
		m_esno = m_rs.m_sno;
		m_ename = m_rs.m_sname;
		m_esex = m_rs.m_sex;
		UpdateData(FALSE);
	}
}

void CTmsDlg::OnBUTTONdel() 
{
	// TODO: Add your control notification handler code here
	if(m_rs.IsEOF()||m_rs.IsBOF())
		return;
	try { 
		m_rs.Delete();
	}
	catch(CDBException * e) {
		AfxMessageBox(e->m_strError, MB_ICONEXCLAMATION);
		e->Delete();  
		return;
	}
	m_rs.MoveFirst();
	m_esno = m_rs.m_sno;
	m_ename = m_rs.m_sname;
	m_esex = m_rs.m_sex;
	UpdateData(FALSE);
}

void CTmsDlg::OnBUTTONedit() 
{
	// TODO: Add your control notification handler code here
	CString csSno,csSname,csSsex;
	csSno = m_rs.m_sno;
	csSname = m_rs.m_sname;
	csSsex = m_rs.m_sex;
	try { 
		m_rs.Edit();
		UpdateData(TRUE);
		m_rs.m_sno=m_esno;
		m_rs.m_sname=m_ename;
		m_rs.m_sex=m_esex;
		m_rs.Update();
	}
	catch(CDBException * e) {
		AfxMessageBox(e->m_strError, MB_ICONEXCLAMATION);
		e->Delete();  
		m_esno = csSno;
		m_ename = csSname;
		m_esex = csSsex;
		UpdateData(FALSE);
	}
}

void CTmsDlg::OnBUTTONrefresh() 
{
	// TODO: Add your control notification handler code here
	try { 
		m_rs.Requery();
	}
	catch(CDBException * e) {
		AfxMessageBox("Can not Requery!", MB_ICONEXCLAMATION);
		e->Delete();  
	}	
}
