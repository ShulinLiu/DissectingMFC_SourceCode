// AutoClientView.h : interface of the CAutoClientView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_AUTOCLIENTVIEW_H__9BCF2CA6_3A21_44F5_8D7C_CC6C7A272653__INCLUDED_)
#define AFX_AUTOCLIENTVIEW_H__9BCF2CA6_3A21_44F5_8D7C_CC6C7A272653__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include"AutoServer.h"
class CAutoClientView : public CView
{
protected: // create from serialization only
	CAutoClientView();
	DECLARE_DYNCREATE(CAutoClientView)
	IAutoServer m_server;
// Attributes
public:
	CAutoClientDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAutoClientView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CAutoClientView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CAutoClientView)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in AutoClientView.cpp
inline CAutoClientDoc* CAutoClientView::GetDocument()
   { return (CAutoClientDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AUTOCLIENTVIEW_H__9BCF2CA6_3A21_44F5_8D7C_CC6C7A272653__INCLUDED_)
