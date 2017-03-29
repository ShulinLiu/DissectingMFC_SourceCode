// MFCexp6View.h : interface of the CMFCexp6View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP6VIEW_H__6485E879_0EE8_4117_86AE_16BF0750303E__INCLUDED_)
#define AFX_MFCEXP6VIEW_H__6485E879_0EE8_4117_86AE_16BF0750303E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp6View : public CView
{
protected: // create from serialization only
	CMFCexp6View();
	DECLARE_DYNCREATE(CMFCexp6View)

// Attributes
public:
	CMFCexp6Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp6View)
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
	virtual ~CMFCexp6View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp6View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp6View.cpp
inline CMFCexp6Doc* CMFCexp6View::GetDocument()
   { return (CMFCexp6Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP6VIEW_H__6485E879_0EE8_4117_86AE_16BF0750303E__INCLUDED_)
