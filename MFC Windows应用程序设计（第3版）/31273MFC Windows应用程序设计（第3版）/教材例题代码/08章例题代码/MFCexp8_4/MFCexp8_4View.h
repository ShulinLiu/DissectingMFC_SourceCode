// MFCexp8_4View.h : interface of the CMFCexp8_4View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP8_4VIEW_H__A10564BF_F8BF_4D3F_BADC_4CD35ACDF925__INCLUDED_)
#define AFX_MFCEXP8_4VIEW_H__A10564BF_F8BF_4D3F_BADC_4CD35ACDF925__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp8_4View : public CView
{
protected: // create from serialization only
	CMFCexp8_4View();
	DECLARE_DYNCREATE(CMFCexp8_4View)

// Attributes
public:
	CMFCexp8_4Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp8_4View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp8_4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp8_4View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp8_4View.cpp
inline CMFCexp8_4Doc* CMFCexp8_4View::GetDocument()
   { return (CMFCexp8_4Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP8_4VIEW_H__A10564BF_F8BF_4D3F_BADC_4CD35ACDF925__INCLUDED_)
