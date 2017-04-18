#if !defined(AFX_MYWND_H__603622DF_18B1_4047_B65C_CBDDD6E6FC84__INCLUDED_)
#define AFX_MYWND_H__603622DF_18B1_4047_B65C_CBDDD6E6FC84__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MyWnd.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CMyWnd frame

class CMyWnd : public CFrameWnd
{
	DECLARE_DYNCREATE(CMyWnd)
//protected:
public:
	CMyWnd();           // protected constructor used by dynamic creation

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyWnd)
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CMyWnd();

	// Generated message map functions
	//{{AFX_MSG(CMyWnd)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYWND_H__603622DF_18B1_4047_B65C_CBDDD6E6FC84__INCLUDED_)
