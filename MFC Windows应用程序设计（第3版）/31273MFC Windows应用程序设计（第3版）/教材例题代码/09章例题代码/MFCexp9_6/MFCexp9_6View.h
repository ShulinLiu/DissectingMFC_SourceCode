// MFCexp9_6View.h : interface of the CMFCexp9_6View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP9_6VIEW_H__1B9208E4_14E2_4576_BFB5_1C2153CFCC64__INCLUDED_)
#define AFX_MFCEXP9_6VIEW_H__1B9208E4_14E2_4576_BFB5_1C2153CFCC64__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp9_6View : public CView
{
protected: // create from serialization only
	CMFCexp9_6View();
	DECLARE_DYNCREATE(CMFCexp9_6View)

// Attributes
public:
	CMFCexp9_6Doc* GetDocument();
	
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp9_6View)
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
	virtual ~CMFCexp9_6View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp9_6View)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp9_6View.cpp
inline CMFCexp9_6Doc* CMFCexp9_6View::GetDocument()
   { return (CMFCexp9_6Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP9_6VIEW_H__1B9208E4_14E2_4576_BFB5_1C2153CFCC64__INCLUDED_)
