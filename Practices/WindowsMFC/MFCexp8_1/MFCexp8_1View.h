// MFCexp8_1View.h : interface of the CMFCexp8_1View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP8_1VIEW_H__66BC0681_CA3F_490F_8FD9_CD5A2C0A2E07__INCLUDED_)
#define AFX_MFCEXP8_1VIEW_H__66BC0681_CA3F_490F_8FD9_CD5A2C0A2E07__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp8_1View : public CView
{
protected: // create from serialization only
	CMFCexp8_1View();
	DECLARE_DYNCREATE(CMFCexp8_1View)

// Attributes
public:
	CMFCexp8_1Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp8_1View)
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
	virtual ~CMFCexp8_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp8_1View)
	afx_msg void OnFilePrt();
	afx_msg void OnRe();
	afx_msg void OnZoom();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp8_1View.cpp
inline CMFCexp8_1Doc* CMFCexp8_1View::GetDocument()
   { return (CMFCexp8_1Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP8_1VIEW_H__66BC0681_CA3F_490F_8FD9_CD5A2C0A2E07__INCLUDED_)
