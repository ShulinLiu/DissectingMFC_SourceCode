// AdoTestDlg.cpp : implementation file
//

#include "stdafx.h"
#include "AdoTest.h"
#include "AdoTestDlg.h"

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
// CAdoTestDlg dialog

CAdoTestDlg::CAdoTestDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CAdoTestDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAdoTestDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CAdoTestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAdoTestDlg)
	DDX_Control(pDX, IDC_LIST_STUINFO, m_listStuInfo);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAdoTestDlg, CDialog)
	//{{AFX_MSG_MAP(CAdoTestDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAdoTestDlg message handlers

BOOL CAdoTestDlg::OnInitDialog()
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
	m_listStuInfo.SetExtendedStyle(LVS_EX_GRIDLINES
		|LVS_EX_FULLROWSELECT);
	
	//设置列表视图为网格类型且全选状态
	m_listStuInfo.InsertColumn(0,"学号",LVCFMT_CENTER,80);
	m_listStuInfo.InsertColumn(1,"姓名",LVCFMT_CENTER,80);
	m_listStuInfo.InsertColumn(2,"性别",LVCFMT_CENTER,60);
	m_listStuInfo.InsertColumn(3,"年龄",LVCFMT_CENTER,60);
	m_listStuInfo.InsertColumn(4,"系别",LVCFMT_CENTER,120);

	AfxOleInit();
	ListStuInfo("select * from 学生信息表");
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CAdoTestDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CAdoTestDlg::OnPaint() 
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
HCURSOR CAdoTestDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CAdoTestDlg::ListStuInfo(CString strSQL)
{
	m_listStuInfo.DeleteAllItems();

	_ConnectionPtr m_pConnection;

	m_pConnection.CreateInstance(__uuidof(Connection));
	
	try
	{
		m_pConnection->Open("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=StudentData.accdb",
			          "","",adModeUnknown);
	}
	catch (_com_error e)
	{
		AfxMessageBox("数据库连接失败，确认数据库是否在当前路径下。");
		return;
	}
	
	_RecordsetPtr m_pRecordset;
	m_pRecordset.CreateInstance(__uuidof(Recordset));

	try
	{
		m_pRecordset->Open(
			_variant_t(strSQL ),
			m_pConnection.GetInterfacePtr(),
			adOpenDynamic,
			adLockOptimistic,
			adCmdText);
	}
	catch(_com_error *e)
	{
		AfxMessageBox(e->ErrorMessage());
	}

	_variant_t var;
	CString strTmp;
	for (int i=0; !m_pRecordset->adoEOF; i++)
	{
		var  = m_pRecordset->GetCollect("StudentID");
		strTmp = (LPCTSTR)_bstr_t(var);
		m_listStuInfo.InsertItem(i,strTmp);

		var  = m_pRecordset->GetCollect("StuName");
		strTmp = (LPCTSTR)_bstr_t(var);
		m_listStuInfo.SetItemText(i,1,strTmp);

		var  = m_pRecordset->GetCollect("StuSex");
		strTmp = (LPCTSTR)_bstr_t(var);
		m_listStuInfo.SetItemText(i,2,strTmp);

		var  = m_pRecordset->GetCollect("StuAge");
		strTmp = (LPCTSTR)_bstr_t(var);
		m_listStuInfo.SetItemText(i,3,strTmp);

		var  = m_pRecordset->GetCollect("StuDept");
		strTmp = (LPCTSTR)_bstr_t(var);
		m_listStuInfo.SetItemText(i,4,strTmp);

		m_pRecordset->MoveNext();
	}

	m_pRecordset->Close();
	m_pRecordset.Release();
	m_pRecordset = NULL;

	if(m_pRecordset->State)
		m_pConnection->Close();
	m_pRecordset = NULL;

	UpdateData(FALSE);
}
