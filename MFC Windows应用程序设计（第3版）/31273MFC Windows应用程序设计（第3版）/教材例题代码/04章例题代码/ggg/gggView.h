// gggView.h : interface of the CGggView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_GGGVIEW_H__AB4E57F1_C0E0_454C_8DB2_8D31F5F877A4__INCLUDED_)
#define AFX_GGGVIEW_H__AB4E57F1_C0E0_454C_8DB2_8D31F5F877A4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CGggView : public CView
{
protected: // create from serialization only
	CGggView();
	DECLARE_DYNCREATE(CGggView)

// Attributes
public:
	CGggDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGggView)
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
	virtual ~CGggView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CGggView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in gggView.cpp
inline CGggDoc* CGggView::GetDocument()
   { return (CGggDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GGGVIEW_H__AB4E57F1_C0E0_454C_8DB2_8D31F5F877A4__INCLUDED_)
