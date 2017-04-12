#if !defined(AFX_RCDLG_H__C0311692_39C4_4ED4_83DC_B144B16EA351__INCLUDED_)
#define AFX_RCDLG_H__C0311692_39C4_4ED4_83DC_B144B16EA351__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// RCDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// RCDlg dialog

class RCDlg : public CDialog
{
// Construction
public:
	RCDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(RCDlg)
	enum { IDD = IDD_DIALOG2 };
	CString	m_Edit1Val;
	CString	m_Edit2Val;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(RCDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(RCDlg)
	afx_msg void OnRead();
	afx_msg void OnCopy();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RCDLG_H__C0311692_39C4_4ED4_83DC_B144B16EA351__INCLUDED_)
