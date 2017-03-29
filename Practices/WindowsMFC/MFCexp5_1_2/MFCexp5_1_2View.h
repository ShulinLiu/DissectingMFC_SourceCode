// MFCexp5_1_2View.h : interface of the CMFCexp5_1_2View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP5_1_2VIEW_H__AD80786F_2B7B_47C1_BC4B_3E5F2F0C0D57__INCLUDED_)
#define AFX_MFCEXP5_1_2VIEW_H__AD80786F_2B7B_47C1_BC4B_3E5F2F0C0D57__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "DrawRect.h"

class CMFCexp5_1_2View : public CView
{
protected: // create from serialization only
	CMFCexp5_1_2View();
	DECLARE_DYNCREATE(CMFCexp5_1_2View)

// Attributes
public:
	CMFCexp5_1_2Doc* GetDocument();
	CDrawRect*m_ViewDrRect;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp5_1_2View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnUpdate(CView* pSender, LPARAM lHint, CObject* pHint);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp5_1_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp5_1_2View)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp5_1_2View.cpp
inline CMFCexp5_1_2Doc* CMFCexp5_1_2View::GetDocument()
   { return (CMFCexp5_1_2Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP5_1_2VIEW_H__AD80786F_2B7B_47C1_BC4B_3E5F2F0C0D57__INCLUDED_)
