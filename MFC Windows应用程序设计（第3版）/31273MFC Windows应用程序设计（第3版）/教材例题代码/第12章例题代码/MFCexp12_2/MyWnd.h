#if !defined(AFX_MYWND_H__A7475CA9_4D94_11D8_B98F_0000E8D3C09B__INCLUDED_)
#define AFX_MYWND_H__A7475CA9_4D94_11D8_B98F_0000E8D3C09B__INCLUDED_

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
protected:
	           // protected constructor used by dynamic creation
	
// Attributes
public:
CMyWnd();
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

#endif // !defined(AFX_MYWND_H__A7475CA9_4D94_11D8_B98F_0000E8D3C09B__INCLUDED_)
