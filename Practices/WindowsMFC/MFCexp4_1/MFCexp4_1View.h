// MFCexp4_1View.h : interface of the CMFCexp4_1View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP4_1VIEW_H__1895EA82_4656_42AA_AB75_8CF0B168930C__INCLUDED_)
#define AFX_MFCEXP4_1VIEW_H__1895EA82_4656_42AA_AB75_8CF0B168930C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp4_1View : public CView
{
protected: // create from serialization only
	CMFCexp4_1View();
	DECLARE_DYNCREATE(CMFCexp4_1View)

// Attributes
public:
	CMFCexp4_1Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp4_1View)
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
	virtual ~CMFCexp4_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp4_1View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp4_1View.cpp
inline CMFCexp4_1Doc* CMFCexp4_1View::GetDocument()
   { return (CMFCexp4_1Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP4_1VIEW_H__1895EA82_4656_42AA_AB75_8CF0B168930C__INCLUDED_)
