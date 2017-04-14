// MFCexp6_1View.h : interface of the CMFCexp6_1View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP6_1VIEW_H__21BE8929_8F01_4A69_86CA_B4B538E4ABC0__INCLUDED_)
#define AFX_MFCEXP6_1VIEW_H__21BE8929_8F01_4A69_86CA_B4B538E4ABC0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp6_1View : public CView
{
protected: // create from serialization only
	CMFCexp6_1View();
	DECLARE_DYNCREATE(CMFCexp6_1View)

// Attributes
public:
	CMFCexp6_1Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp6_1View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp6_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp6_1View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp6_1View.cpp
inline CMFCexp6_1Doc* CMFCexp6_1View::GetDocument()
   { return (CMFCexp6_1Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP6_1VIEW_H__21BE8929_8F01_4A69_86CA_B4B538E4ABC0__INCLUDED_)
