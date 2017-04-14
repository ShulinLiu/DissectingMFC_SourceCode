// MFCexp5_2View.h : interface of the CMFCexp5_2View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP5_2VIEW_H__9C6DA3E0_7521_4F1A_AA79_D1484D7718DC__INCLUDED_)
#define AFX_MFCEXP5_2VIEW_H__9C6DA3E0_7521_4F1A_AA79_D1484D7718DC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CMFCexp5_2View : public CView
{
protected: // create from serialization only
	CMFCexp5_2View();
	DECLARE_DYNCREATE(CMFCexp5_2View)

// Attributes
public:
	CMFCexp5_2Doc* GetDocument();

// Operations
public:
	CArray<CRect,CRect&> m_Rectag;	
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp5_2View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp5_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp5_2View)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp5_2View.cpp
inline CMFCexp5_2Doc* CMFCexp5_2View::GetDocument()
   { return (CMFCexp5_2Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP5_2VIEW_H__9C6DA3E0_7521_4F1A_AA79_D1484D7718DC__INCLUDED_)
