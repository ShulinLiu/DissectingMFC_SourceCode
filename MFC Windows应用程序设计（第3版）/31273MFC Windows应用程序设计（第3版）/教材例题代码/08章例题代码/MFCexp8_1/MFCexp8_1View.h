// MFCexp8_1View.h : interface of the CMFCexp8_1View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP8_1VIEW_H__5C699E6E_9F29_4916_8155_6957FA371A0A__INCLUDED_)
#define AFX_MFCEXP8_1VIEW_H__5C699E6E_9F29_4916_8155_6957FA371A0A__INCLUDED_

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
	afx_msg void OnPrt( );
protected:
	//{{AFX_MSG(CMFCexp8_1View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
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

#endif // !defined(AFX_MFCEXP8_1VIEW_H__5C699E6E_9F29_4916_8155_6957FA371A0A__INCLUDED_)
