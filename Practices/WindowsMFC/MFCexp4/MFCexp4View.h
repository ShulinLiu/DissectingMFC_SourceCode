// MFCexp4View.h : interface of the CMFCexp4View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP4VIEW_H__B6881FB7_A406_42D4_9286_A3B4BFCC5175__INCLUDED_)
#define AFX_MFCEXP4VIEW_H__B6881FB7_A406_42D4_9286_A3B4BFCC5175__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp4View : public CView
{
protected: // create from serialization only
	CMFCexp4View();
	DECLARE_DYNCREATE(CMFCexp4View)

// Attributes
public:
	CMFCexp4Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp4View)
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
	virtual ~CMFCexp4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp4View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp4View.cpp
inline CMFCexp4Doc* CMFCexp4View::GetDocument()
   { return (CMFCexp4Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP4VIEW_H__B6881FB7_A406_42D4_9286_A3B4BFCC5175__INCLUDED_)
