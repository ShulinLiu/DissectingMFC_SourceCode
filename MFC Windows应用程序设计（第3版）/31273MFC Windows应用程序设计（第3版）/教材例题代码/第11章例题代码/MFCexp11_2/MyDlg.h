#if !defined(AFX_MYDLG_H__DCD3D973_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_)
#define AFX_MYDLG_H__DCD3D973_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MyDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// MyDlg dialog

class MyDlg : public CDialog
{
// Construction
public:
	MyDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(MyDlg)
	enum { IDD = IDD_DIALOG1 };
	CString	m_Edit1;
	CString	m_Edit2;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(MyDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(MyDlg)
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYDLG_H__DCD3D973_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_)
