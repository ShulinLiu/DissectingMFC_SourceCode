// xtView.h : interface of the CXtView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_XTVIEW_H__3CDF33DE_4966_4F28_804B_2DF318D465B7__INCLUDED_)
#define AFX_XTVIEW_H__3CDF33DE_4966_4F28_804B_2DF318D465B7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CXtView : public CView
{
protected: // create from serialization only
	CXtView();
	DECLARE_DYNCREATE(CXtView)

// Attributes
public:
	CXtDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CXtView)
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
	virtual ~CXtView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CXtView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in xtView.cpp
inline CXtDoc* CXtView::GetDocument()
   { return (CXtDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_XTVIEW_H__3CDF33DE_4966_4F28_804B_2DF318D465B7__INCLUDED_)
