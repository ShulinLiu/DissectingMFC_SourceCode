// MFCexp7_1View.h : interface of the CMFCexp7_1View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP7_1VIEW_H__8FD43644_18CE_4129_91CF_A93EDD4E255B__INCLUDED_)
#define AFX_MFCEXP7_1VIEW_H__8FD43644_18CE_4129_91CF_A93EDD4E255B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp7_1View : public CView
{
protected: // create from serialization only
	CMFCexp7_1View();
	DECLARE_DYNCREATE(CMFCexp7_1View)

// Attributes
public:
	CMFCexp7_1Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp7_1View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp7_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp7_1View)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp7_1View.cpp
inline CMFCexp7_1Doc* CMFCexp7_1View::GetDocument()
   { return (CMFCexp7_1Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP7_1VIEW_H__8FD43644_18CE_4129_91CF_A93EDD4E255B__INCLUDED_)
