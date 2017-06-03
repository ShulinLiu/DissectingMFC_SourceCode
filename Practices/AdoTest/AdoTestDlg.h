// AdoTestDlg.h : header file
//

#if !defined(AFX_ADOTESTDLG_H__9AD2FC89_C85C_4BD5_B024_F8A5DEFACC35__INCLUDED_)
#define AFX_ADOTESTDLG_H__9AD2FC89_C85C_4BD5_B024_F8A5DEFACC35__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CAdoTestDlg dialog

class CAdoTestDlg : public CDialog
{
// Construction
public:
	void ListStuInfo(CString strSQL);
	CAdoTestDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CAdoTestDlg)
	enum { IDD = IDD_ADOTEST_DIALOG };
	CListCtrl	m_listStuInfo;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAdoTestDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CAdoTestDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADOTESTDLG_H__9AD2FC89_C85C_4BD5_B024_F8A5DEFACC35__INCLUDED_)
