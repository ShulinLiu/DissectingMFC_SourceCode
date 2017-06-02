// OdbcStudentDlg.cpp : implementation file
//

#include "stdafx.h"
#include "OdbcStudent.h"
#include "OdbcStudentDlg.h"

#include "StuInfoSet.h"
#include "StuInfoDlg.h"

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
// COdbcStudentDlg dialog

COdbcStudentDlg::COdbcStudentDlg(CWnd* pParent /*=NULL*/)
	: CDialog(COdbcStudentDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(COdbcStudentDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void COdbcStudentDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(COdbcStudentDlg)
	DDX_Control(pDX, IDC_LIST_STUINFO, m_listStuInfo);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(COdbcStudentDlg, CDialog)
	//{{AFX_MSG_MAP(COdbcStudentDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON_ADD, OnButtonAdd)
	ON_BN_CLICKED(IDC_BUTTON_MODIFY, OnButtonModify)
	ON_BN_CLICKED(IDC_BUTTON_DELETE, OnButtonDelete)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// COdbcStudentDlg message handlers

BOOL COdbcStudentDlg::OnInitDialog()
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
	
	//////////////////////////////////////////////////////////////////////////
	m_listStuInfo.SetExtendedStyle(LVS_EX_GRIDLINES
		|LVS_EX_FULLROWSELECT);

	//设置列表视图为网格类型且全选状态
	m_listStuInfo.InsertColumn(0,"学号",LVCFMT_CENTER,80);
	m_listStuInfo.InsertColumn(1,"姓名",LVCFMT_CENTER,80);
	m_listStuInfo.InsertColumn(2,"性别",LVCFMT_CENTER,60);
	m_listStuInfo.InsertColumn(3,"年龄",LVCFMT_CENTER,60);
	m_listStuInfo.InsertColumn(4,"系别",LVCFMT_CENTER,120);

	ListStuInfo("SELECT * FROM 学生信息表");
	//////////////////////////////////////////////////////////////////////////

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void COdbcStudentDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void COdbcStudentDlg::OnPaint() 
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
HCURSOR COdbcStudentDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void COdbcStudentDlg::ListStuInfo(CString strSQL)
{
	m_listStuInfo.DeleteAllItems();

	CStuInfoSet stuInfoSet;
	if(!stuInfoSet.Open(CRecordset::dynaset,strSQL,CRecordset::readOnly))
	{
		AfxMessageBox("连接数据源失败！");
		return;
	}

	CString strTmp;
	for (int i=0; !stuInfoSet.IsEOF();++i)
	{
		m_listStuInfo.InsertItem(i,stuInfoSet.m_StudentID);
		m_listStuInfo.SetItemText(i,1,stuInfoSet.m_StuName);
		m_listStuInfo.SetItemText(i,2,stuInfoSet.m_StuSex);
		strTmp.Format("%d",stuInfoSet.m_StuAge);
		m_listStuInfo.SetItemText(i,3,strTmp);
		m_listStuInfo.SetItemText(i,4,stuInfoSet.m_StuDept);
		stuInfoSet.MoveNext();
	}

	stuInfoSet.Close();
	UpdateData(FALSE);
}

void COdbcStudentDlg::OnButtonAdd() 
{
	// TODO: Add your control notification handler code here
	CStuInfoDlg stuInfoDlg;

	if (stuInfoDlg.DoModal() != IDOK)
	{
		return;
	}

	//获得对话框类对象中的关联变量的数据，如果在ONOK中没有调用UpdateData(True)
	//的话将无法获得
	m_strNum = stuInfoDlg.m_strNum;
	m_strName = stuInfoDlg.m_strName;
	m_uintAge = stuInfoDlg.m_uintAge;
	m_strSex = stuInfoDlg.m_strSex;
	m_strDept = stuInfoDlg.m_strDept;

	CDatabase db;
	if (!db.Open("学生信息数据源"))
	{
		AfxMessageBox("连接到数据源失败！");
		return;
	}

	CString strSQL;
	strSQL.Format("INSERT INTO 学生信息表 VALUES('%s','%s','%s','%d','%s')",
		m_strNum,m_strName,m_strSex,m_uintAge,m_strDept);
	db.ExecuteSQL(strSQL);
	db.Close();

	/*通过记录集完成数据添加操作
	CStuInfoSet* pSet = new CStuInfoSet;
	pSet->Open();

	if (pSet->CanAppend())
	{
		pSet->AddNew();
		pSet->m_StudentID = m_strNum;
		pSet->m_StuName = m_strName;
		pSet->m_StuSex = m_strSex;
		pSet->m_StuAge = m_uintAge;
		pSet->m_StuDept = m_strDept;
		pSet->Update();
	}
	pSet->Close();
	delete pSet;
	*/

	ListStuInfo("SELECT * FROM 学生信息表");
}

void COdbcStudentDlg::OnButtonModify() 
{
	// TODO: Add your control notification handler code here
	int n = m_listStuInfo.GetSelectionMark();
	if(n == -1)
		return;

	m_strNum = m_listStuInfo.GetItemText(n,0);
	m_strName = m_listStuInfo.GetItemText(n,1);
	m_strSex = m_listStuInfo.GetItemText(n,2);
	m_uintAge = atoi(m_listStuInfo.GetItemText(n,3));
	m_strDept = m_listStuInfo.GetItemText(n,4);

	CStuInfoDlg stuInfoDlg;

	stuInfoDlg.m_strNum = m_strNum;
	stuInfoDlg.m_strName = m_strName;
	stuInfoDlg.m_uintAge = m_uintAge;
	stuInfoDlg.m_strSex = m_strSex;
	stuInfoDlg.m_strDept = m_strDept;

	if (stuInfoDlg.DoModal() != IDOK)
	{
		return;
	}
	
	CString m_strOldNum = m_strNum;

	m_strNum = stuInfoDlg.m_strNum;
	m_strName = stuInfoDlg.m_strName;
	m_uintAge = stuInfoDlg.m_uintAge;
	m_strSex = stuInfoDlg.m_strSex;
	m_strDept = stuInfoDlg.m_strDept;

	CDatabase db;
	if (!db.Open("学生信息数据源"))
	{
		AfxMessageBox("连接到数据源失败！");
		return;
	}
	
	CString strSQL = "", strTmp;
	strTmp.Format("UPDATE 学生信息表 SET StudentID='%s',StuName='%s',",
		m_strNum,m_strName);
	strSQL += strTmp;

	strTmp.Format("StuSex='%s',StuAge=%d,StuDept='%s' WHERE StudentID='%s'",
		m_strSex,m_uintAge,m_strDept,m_strOldNum);
	strSQL += strTmp;

	db.ExecuteSQL(strSQL);
	db.Close();

	ListStuInfo("SELECT * FROM 学生信息表");
}

void COdbcStudentDlg::OnButtonDelete() 
{
	// TODO: Add your control notification handler code here
	int n = m_listStuInfo.GetSelectionMark();
	if(n == -1)
		return;

	m_strNum = m_listStuInfo.GetItemText(n,0);

	CDatabase db;
	if (!db.Open("学生信息数据源"))
	{
		AfxMessageBox("连接到数据源失败！");
		return;
	}

	CString strSQL;
	strSQL.Format("DELETE FROM 学生信息表 WHERE StudentID='%s'",
		m_strNum);
	db.ExecuteSQL(strSQL);
	db.Close();

	ListStuInfo("SELECT * FROM 学生信息表");
}
