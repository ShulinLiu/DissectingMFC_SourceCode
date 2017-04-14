// MFCexp13_4testView.h : interface of the CMFCexp13_4testView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP13_4TESTVIEW_H__5BCD1A8D_B22B_4801_836A_F61E5EF67889__INCLUDED_)
#define AFX_MFCEXP13_4TESTVIEW_H__5BCD1A8D_B22B_4801_836A_F61E5EF67889__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp13_4testView : public CView
{
protected: // create from serialization only
	CMFCexp13_4testView();
	DECLARE_DYNCREATE(CMFCexp13_4testView)

// Attributes
public:
	CMFCexp13_4testDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp13_4testView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp13_4testView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp13_4testView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp13_4testView.cpp
inline CMFCexp13_4testDoc* CMFCexp13_4testView::GetDocument()
   { return (CMFCexp13_4testDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP13_4TESTVIEW_H__5BCD1A8D_B22B_4801_836A_F61E5EF67889__INCLUDED_)
