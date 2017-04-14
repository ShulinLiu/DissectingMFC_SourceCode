#if !defined(AFX_MYDIALOG_H__71F62839_4C03_11D8_B98F_0000E8D3C09B__INCLUDED_)
#define AFX_MYDIALOG_H__71F62839_4C03_11D8_B98F_0000E8D3C09B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MyDialog.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// MyDialog dialog

class MyDialog : public CDialog
{
// Construction
public:
	MyDialog(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(MyDialog)
	enum { IDD = IDD_DIALOG1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(MyDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL
	void afx_msg OnOK( );				//重写OnOK( )函数的声明
// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(MyDialog)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYDIALOG_H__71F62839_4C03_11D8_B98F_0000E8D3C09B__INCLUDED_)
