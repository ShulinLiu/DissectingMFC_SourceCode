// MFCexp7_4View.h : interface of the CMFCexp7_4View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP7_4VIEW_H__FDFD0A53_D9C6_42B2_978D_4111BBE2E7BC__INCLUDED_)
#define AFX_MFCEXP7_4VIEW_H__FDFD0A53_D9C6_42B2_978D_4111BBE2E7BC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp7_4View : public CView
{
protected: // create from serialization only
	CMFCexp7_4View();
	DECLARE_DYNCREATE(CMFCexp7_4View)

// Attributes
public:
	CMFCexp7_4Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp7_4View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp7_4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp7_4View)
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp7_4View.cpp
inline CMFCexp7_4Doc* CMFCexp7_4View::GetDocument()
   { return (CMFCexp7_4Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP7_4VIEW_H__FDFD0A53_D9C6_42B2_978D_4111BBE2E7BC__INCLUDED_)
