// CFile1View.h : interface of the CCFile1View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CFILE1VIEW_H__B155FF40_1FB4_4A80_A5E9_B3C7027819AE__INCLUDED_)
#define AFX_CFILE1VIEW_H__B155FF40_1FB4_4A80_A5E9_B3C7027819AE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCFile1View : public CView
{
protected: // create from serialization only
	CCFile1View();
	DECLARE_DYNCREATE(CCFile1View)

// Attributes
public:
	CCFile1Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCFile1View)
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
	virtual ~CCFile1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCFile1View)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in CFile1View.cpp
inline CCFile1Doc* CCFile1View::GetDocument()
   { return (CCFile1Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CFILE1VIEW_H__B155FF40_1FB4_4A80_A5E9_B3C7027819AE__INCLUDED_)
