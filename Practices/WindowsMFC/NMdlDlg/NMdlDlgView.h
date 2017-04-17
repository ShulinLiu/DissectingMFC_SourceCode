// NMdlDlgView.h : interface of the CNMdlDlgView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_NMDLDLGVIEW_H__E0CAD48D_A192_41BE_84FF_E21D3AAB0239__INCLUDED_)
#define AFX_NMDLDLGVIEW_H__E0CAD48D_A192_41BE_84FF_E21D3AAB0239__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include"NonMdlDlg.h"
#include "Property.h"

class CNMdlDlgView : public CView
{
public:
		int m_pX;					//声明存储鼠标x值的变量
	int m_pY;					//声明存储鼠标y值的变量
	CNonMdlDlg* m_pNameDlg;	//声明对话框的指针

protected: // create from serialization only
	CNMdlDlgView();
	DECLARE_DYNCREATE(CNMdlDlgView)

// Attributes
public:
	CNMdlDlgDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNMdlDlgView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CNMdlDlgView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CNMdlDlgView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in NMdlDlgView.cpp
inline CNMdlDlgDoc* CNMdlDlgView::GetDocument()
   { return (CNMdlDlgDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NMDLDLGVIEW_H__E0CAD48D_A192_41BE_84FF_E21D3AAB0239__INCLUDED_)
