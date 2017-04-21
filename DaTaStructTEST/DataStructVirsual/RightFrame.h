#if !defined(AFX_RIGHTFRAME_H__B4E5C2F9_E7D7_4A2D_ABF1_06ECB954F3FC__INCLUDED_)
#define AFX_RIGHTFRAME_H__B4E5C2F9_E7D7_4A2D_ABF1_06ECB954F3FC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// RightFrame.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CRightFrame frame

#include "Splitter1.h"
#include "Splitter2.h"

class CRightFrame : public CFrameWnd
{
	DECLARE_DYNCREATE(CRightFrame)
protected:
	CRightFrame();           // protected constructor used by dynamic creation

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRightFrame)
	protected:
	virtual BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CRightFrame();

	// Generated message map functions
	//{{AFX_MSG(CRightFrame)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CSplitter2* m_pSplitter2;
	CSplitter1* m_pSplitter1;
	CFrameWnd* m_pFrame;
	UINT m_nCurrentViewID;
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RIGHTFRAME_H__B4E5C2F9_E7D7_4A2D_ABF1_06ECB954F3FC__INCLUDED_)
