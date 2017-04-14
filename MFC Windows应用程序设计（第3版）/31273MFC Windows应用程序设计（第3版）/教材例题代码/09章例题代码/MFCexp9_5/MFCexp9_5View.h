// MFCexp9_5View.h : interface of the CMFCexp9_5View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP9_5VIEW_H__6B548A65_25F6_4AE7_9C5D_839E1F051250__INCLUDED_)
#define AFX_MFCEXP9_5VIEW_H__6B548A65_25F6_4AE7_9C5D_839E1F051250__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp9_5View : public CView
{
protected: // create from serialization only
	CMFCexp9_5View();
	DECLARE_DYNCREATE(CMFCexp9_5View)

// Attributes
public:
	CMFCexp9_5Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp9_5View)
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
	virtual ~CMFCexp9_5View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp9_5View)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnCancelMode();
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp9_5View.cpp
inline CMFCexp9_5Doc* CMFCexp9_5View::GetDocument()
   { return (CMFCexp9_5Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP9_5VIEW_H__6B548A65_25F6_4AE7_9C5D_839E1F051250__INCLUDED_)
