#if !defined(AFX_MYDLLDLG_H__3987911B_78E7_4EF9_846D_53CD66D2EF0D__INCLUDED_)
#define AFX_MYDLLDLG_H__3987911B_78E7_4EF9_846D_53CD66D2EF0D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MyDllDlg.h : header file
//
#ifndef IDD_DIALOG1
#define IDD_DIALOG1                     20000
#endif
/////////////////////////////////////////////////////////////////////////////
// CMyDllDlg dialog

class AFX_EXT_CLASS CMyDllDlg : public CDialog
{
// Construction
public:
	CMyDllDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CMyDllDlg)
	enum { IDD = IDD_DIALOG1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyDllDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CMyDllDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYDLLDLG_H__3987911B_78E7_4EF9_846D_53CD66D2EF0D__INCLUDED_)
