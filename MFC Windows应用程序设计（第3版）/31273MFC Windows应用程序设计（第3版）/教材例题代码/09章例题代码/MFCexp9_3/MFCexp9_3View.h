// MFCexp9_3View.h : interface of the CMFCexp9_3View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP9_3VIEW_H__7BE4ABE3_7871_4CEB_B3EC_94CB0D4B336F__INCLUDED_)
#define AFX_MFCEXP9_3VIEW_H__7BE4ABE3_7871_4CEB_B3EC_94CB0D4B336F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp9_3View : public CView
{
protected: // create from serialization only
	CMFCexp9_3View();
	DECLARE_DYNCREATE(CMFCexp9_3View)

// Attributes
public:
	CMFCexp9_3Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp9_3View)
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
	virtual ~CMFCexp9_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp9_3View)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp9_3View.cpp
inline CMFCexp9_3Doc* CMFCexp9_3View::GetDocument()
   { return (CMFCexp9_3Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP9_3VIEW_H__7BE4ABE3_7871_4CEB_B3EC_94CB0D4B336F__INCLUDED_)
