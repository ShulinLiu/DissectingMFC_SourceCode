// MFCexp6_3View.h : interface of the CMFCexp6_3View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP6_3VIEW_H__136E7B46_C432_479E_B8A8_F0EE8E2C5625__INCLUDED_)
#define AFX_MFCEXP6_3VIEW_H__136E7B46_C432_479E_B8A8_F0EE8E2C5625__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include"DrawRect.h"

class CMFCexp6_3View : public CView
{
protected: // create from serialization only
	CMFCexp6_3View();
	DECLARE_DYNCREATE(CMFCexp6_3View)

// Attributes
public:
	CMFCexp6_3Doc* GetDocument();
	CDrawRect*m_ViewDrRect;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp6_3View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnUpdate(CView* pSender, LPARAM lHint, CObject* pHint);
	virtual void CalcWindowRect(LPRECT lpClientRect, UINT nAdjustType = adjustBorder);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp6_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp6_3View)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp6_3View.cpp
inline CMFCexp6_3Doc* CMFCexp6_3View::GetDocument()
   { return (CMFCexp6_3Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP6_3VIEW_H__136E7B46_C432_479E_B8A8_F0EE8E2C5625__INCLUDED_)
