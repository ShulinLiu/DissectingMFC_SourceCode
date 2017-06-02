// OdbcStudentDlg.h : header file
//

#if !defined(AFX_ODBCSTUDENTDLG_H__A9D91BB0_3606_4205_A373_13377D27760C__INCLUDED_)
#define AFX_ODBCSTUDENTDLG_H__A9D91BB0_3606_4205_A373_13377D27760C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// COdbcStudentDlg dialog

class COdbcStudentDlg : public CDialog
{
// Construction
public:
	CString m_strSex;
	CString m_strDept;
	UINT m_uintAge;
	CString m_strNum;
	CString m_strName;
	void ListStuInfo(CString strSQL);
	COdbcStudentDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(COdbcStudentDlg)
	enum { IDD = IDD_ODBCSTUDENT_DIALOG };
	CListCtrl	m_listStuInfo;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COdbcStudentDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(COdbcStudentDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonAdd();
	afx_msg void OnButtonModify();
	afx_msg void OnButtonDelete();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ODBCSTUDENTDLG_H__A9D91BB0_3606_4205_A373_13377D27760C__INCLUDED_)
