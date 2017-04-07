// CFile2View.h : interface of the CCFile2View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CFILE2VIEW_H__51E6C9FF_C0AD_499A_A92B_13468AA95E27__INCLUDED_)
#define AFX_CFILE2VIEW_H__51E6C9FF_C0AD_499A_A92B_13468AA95E27__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCFile2View : public CView
{
protected: // create from serialization only
	CCFile2View();
	DECLARE_DYNCREATE(CCFile2View)

// Attributes
public:
	CCFile2Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCFile2View)
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
	virtual ~CCFile2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCFile2View)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in CFile2View.cpp
inline CCFile2Doc* CCFile2View::GetDocument()
   { return (CCFile2Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CFILE2VIEW_H__51E6C9FF_C0AD_499A_A92B_13468AA95E27__INCLUDED_)
