// MFCexp7_2View.h : interface of the CMFCexp7_2View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP7_2VIEW_H__C85DA3B6_B908_475F_BC09_B97E347C9DCF__INCLUDED_)
#define AFX_MFCEXP7_2VIEW_H__C85DA3B6_B908_475F_BC09_B97E347C9DCF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp7_2View : public CView
{
protected: // create from serialization only
	CMFCexp7_2View();
	DECLARE_DYNCREATE(CMFCexp7_2View)

// Attributes
public:
	CMFCexp7_2Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp7_2View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp7_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp7_2View)
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp7_2View.cpp
inline CMFCexp7_2Doc* CMFCexp7_2View::GetDocument()
   { return (CMFCexp7_2Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP7_2VIEW_H__C85DA3B6_B908_475F_BC09_B97E347C9DCF__INCLUDED_)
