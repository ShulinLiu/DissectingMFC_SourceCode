#if !defined(AFX_NONMDLDLG_H__DCD3D9CE_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_)
#define AFX_NONMDLDLG_H__DCD3D9CE_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_

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
	BOOL Create();
	CNonMdlDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CNonMdlDlg)
	enum { IDD = IDD_DIALOG1 };
	CString	m_iputEdit;
	//}}AFX_DATA
	BOOL m_bActive;			//声明一个成员变量作为打开标志
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNonMdlDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CNonMdlDlg)
	virtual void OnCancel();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NONMDLDLG_H__DCD3D9CE_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_)
