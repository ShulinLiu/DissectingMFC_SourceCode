// MFCexp4_8View.h : interface of the CMFCexp4_8View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP4_8VIEW_H__048E0116_0E4F_4427_8752_ACFD885332CB__INCLUDED_)
#define AFX_MFCEXP4_8VIEW_H__048E0116_0E4F_4427_8752_ACFD885332CB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp4_8View : public CView
{
protected: // create from serialization only
	CMFCexp4_8View();
	DECLARE_DYNCREATE(CMFCexp4_8View)

// Attributes
public:
	CMFCexp4_8Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp4_8View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp4_8View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp4_8View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp4_8View.cpp
inline CMFCexp4_8Doc* CMFCexp4_8View::GetDocument()
   { return (CMFCexp4_8Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP4_8VIEW_H__048E0116_0E4F_4427_8752_ACFD885332CB__INCLUDED_)
