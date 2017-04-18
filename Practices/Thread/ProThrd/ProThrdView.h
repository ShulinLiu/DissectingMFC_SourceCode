// ProThrdView.h : interface of the CProThrdView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_PROTHRDVIEW_H__7FFD7E08_559D_4202_995C_FE18F0A7FA9F__INCLUDED_)
#define AFX_PROTHRDVIEW_H__7FFD7E08_559D_4202_995C_FE18F0A7FA9F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CProThrdView : public CView
{
protected: // create from serialization only
	CProThrdView();
	DECLARE_DYNCREATE(CProThrdView)

// Attributes
public:
	CProThrdDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CProThrdView)
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
	virtual ~CProThrdView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CProThrdView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in ProThrdView.cpp
inline CProThrdDoc* CProThrdView::GetDocument()
   { return (CProThrdDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROTHRDVIEW_H__7FFD7E08_559D_4202_995C_FE18F0A7FA9F__INCLUDED_)
