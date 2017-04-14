// MFCexp4_5View.h : interface of the CMFCexp4_5View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP4_5VIEW_H__9FE78180_B341_4B15_9978_0D888812ABED__INCLUDED_)
#define AFX_MFCEXP4_5VIEW_H__9FE78180_B341_4B15_9978_0D888812ABED__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp4_5View : public CView
{
protected: // create from serialization only
	CMFCexp4_5View();
	DECLARE_DYNCREATE(CMFCexp4_5View)

// Attributes
public:
	CMFCexp4_5Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp4_5View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp4_5View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp4_5View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp4_5View.cpp
inline CMFCexp4_5Doc* CMFCexp4_5View::GetDocument()
   { return (CMFCexp4_5Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP4_5VIEW_H__9FE78180_B341_4B15_9978_0D888812ABED__INCLUDED_)
