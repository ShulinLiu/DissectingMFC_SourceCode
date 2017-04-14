// MFCexp6_2View.h : interface of the CMFCexp6_2View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP6_2VIEW_H__2BBF9BA3_8944_417F_B649_A4F237F5C97A__INCLUDED_)
#define AFX_MFCEXP6_2VIEW_H__2BBF9BA3_8944_417F_B649_A4F237F5C97A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp6_2View : public CView
{
protected: // create from serialization only
	CMFCexp6_2View();
	DECLARE_DYNCREATE(CMFCexp6_2View)

// Attributes
public:
	CMFCexp6_2Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp6_2View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp6_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp6_2View)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp6_2View.cpp
inline CMFCexp6_2Doc* CMFCexp6_2View::GetDocument()
   { return (CMFCexp6_2Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP6_2VIEW_H__2BBF9BA3_8944_417F_B649_A4F237F5C97A__INCLUDED_)
