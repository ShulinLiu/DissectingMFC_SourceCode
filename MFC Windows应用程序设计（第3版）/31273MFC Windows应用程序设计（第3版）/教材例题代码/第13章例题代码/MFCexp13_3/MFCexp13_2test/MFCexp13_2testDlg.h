// MFCexp13_2testDlg.h : header file
//

#if !defined(AFX_MFCEXP13_2TESTDLG_H__FA16BB74_9534_494A_B870_A35857797015__INCLUDED_)
#define AFX_MFCEXP13_2TESTDLG_H__FA16BB74_9534_494A_B870_A35857797015__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_2testDlg dialog

class CMFCexp13_2testDlg : public CDialog
{
// Construction
public:
	CMFCexp13_2testDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMFCexp13_2testDlg)
	enum { IDD = IDD_MFCEXP13_2TEST_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp13_2testDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMFCexp13_2testDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP13_2TESTDLG_H__FA16BB74_9534_494A_B870_A35857797015__INCLUDED_)
