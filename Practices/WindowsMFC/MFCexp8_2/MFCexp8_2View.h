// MFCexp8_2View.h : interface of the CMFCexp8_2View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP8_2VIEW_H__6EC481B4_64AE_40D1_8DEC_2435B6DF6010__INCLUDED_)
#define AFX_MFCEXP8_2VIEW_H__6EC481B4_64AE_40D1_8DEC_2435B6DF6010__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp8_2View : public CView
{
protected: // create from serialization only
	CMFCexp8_2View();
	DECLARE_DYNCREATE(CMFCexp8_2View)

// Attributes
public:
	CMFCexp8_2Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp8_2View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp8_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp8_2View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp8_2View.cpp
inline CMFCexp8_2Doc* CMFCexp8_2View::GetDocument()
   { return (CMFCexp8_2Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP8_2VIEW_H__6EC481B4_64AE_40D1_8DEC_2435B6DF6010__INCLUDED_)
