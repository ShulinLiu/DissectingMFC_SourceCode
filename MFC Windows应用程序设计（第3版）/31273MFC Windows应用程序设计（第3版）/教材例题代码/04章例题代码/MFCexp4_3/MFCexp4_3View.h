// MFCexp4_3View.h : interface of the CMFCexp4_3View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP4_3VIEW_H__A43F6D82_1B94_43DF_B6A3_350C2E9E167D__INCLUDED_)
#define AFX_MFCEXP4_3VIEW_H__A43F6D82_1B94_43DF_B6A3_350C2E9E167D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp4_3View : public CView
{
protected: // create from serialization only
	CMFCexp4_3View();
	DECLARE_DYNCREATE(CMFCexp4_3View)

// Attributes
public:
	CMFCexp4_3Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp4_3View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp4_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp4_3View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp4_3View.cpp
inline CMFCexp4_3Doc* CMFCexp4_3View::GetDocument()
   { return (CMFCexp4_3Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP4_3VIEW_H__A43F6D82_1B94_43DF_B6A3_350C2E9E167D__INCLUDED_)
