#if !defined(AFX_NONMDLDLG_H__671B24B9_4AB4_471F_9E1D_5F0065357F92__INCLUDED_)
#define AFX_NONMDLDLG_H__671B24B9_4AB4_471F_9E1D_5F0065357F92__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// NonMdlDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CNonMdlDlg dialog

class CNonMdlDlg : public CDialog
{
// Construction
public:
	BOOL m_bActive;
	CNonMdlDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CNonMdlDlg)
	enum { IDD = IDD_DIALOG1 };
	CString	m_inputEdit;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNonMdlDlg)
	public:
	virtual BOOL Create();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CNonMdlDlg)
	afx_msg void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NONMDLDLG_H__671B24B9_4AB4_471F_9E1D_5F0065357F92__INCLUDED_)
