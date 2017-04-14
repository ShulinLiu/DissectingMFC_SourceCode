// MFCexp4_2View.h : interface of the CMFCexp4_2View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP4_2VIEW_H__A25D0146_7AC4_4C21_BCA5_F2BB927CFA2F__INCLUDED_)
#define AFX_MFCEXP4_2VIEW_H__A25D0146_7AC4_4C21_BCA5_F2BB927CFA2F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp4_2View : public CView
{
protected: // create from serialization only
	CMFCexp4_2View();
	DECLARE_DYNCREATE(CMFCexp4_2View)

// Attributes
public:
	CMFCexp4_2Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp4_2View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp4_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp4_2View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp4_2View.cpp
inline CMFCexp4_2Doc* CMFCexp4_2View::GetDocument()
   { return (CMFCexp4_2Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP4_2VIEW_H__A25D0146_7AC4_4C21_BCA5_F2BB927CFA2F__INCLUDED_)
