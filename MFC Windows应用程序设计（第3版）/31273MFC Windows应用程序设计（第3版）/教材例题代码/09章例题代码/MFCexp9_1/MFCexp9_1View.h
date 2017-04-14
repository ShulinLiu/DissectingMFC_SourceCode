// MFCexp9_1View.h : interface of the CMFCexp9_1View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP9_1VIEW_H__DD6D9D7C_49B8_4D1D_89D3_CC9E73E414AB__INCLUDED_)
#define AFX_MFCEXP9_1VIEW_H__DD6D9D7C_49B8_4D1D_89D3_CC9E73E414AB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp9_1View : public CView
{
protected: // create from serialization only
	CMFCexp9_1View();
	DECLARE_DYNCREATE(CMFCexp9_1View)

// Attributes
public:
	CMFCexp9_1Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp9_1View)
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
	virtual ~CMFCexp9_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp9_1View)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp9_1View.cpp
inline CMFCexp9_1Doc* CMFCexp9_1View::GetDocument()
   { return (CMFCexp9_1Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP9_1VIEW_H__DD6D9D7C_49B8_4D1D_89D3_CC9E73E414AB__INCLUDED_)
