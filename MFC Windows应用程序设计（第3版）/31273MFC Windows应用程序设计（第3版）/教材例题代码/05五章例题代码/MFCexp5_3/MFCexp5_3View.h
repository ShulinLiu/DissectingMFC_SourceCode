// MFCexp5_3View.h : interface of the CMFCexp5_3View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP5_3VIEW_H__845B2788_64E1_42D9_B709_F20FD409574C__INCLUDED_)
#define AFX_MFCEXP5_3VIEW_H__845B2788_64E1_42D9_B709_F20FD409574C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp5_3View : public CView
{
protected: // create from serialization only
	CMFCexp5_3View();
	DECLARE_DYNCREATE(CMFCexp5_3View)

// Attributes
public:
	CMFCexp5_3Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp5_3View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp5_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp5_3View)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp5_3View.cpp
inline CMFCexp5_3Doc* CMFCexp5_3View::GetDocument()
   { return (CMFCexp5_3Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP5_3VIEW_H__845B2788_64E1_42D9_B709_F20FD409574C__INCLUDED_)
