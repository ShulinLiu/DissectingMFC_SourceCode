// ffView.h : interface of the CFfView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_FFVIEW_H__861991DF_F9AB_4504_808C_EE172A6D35BC__INCLUDED_)
#define AFX_FFVIEW_H__861991DF_F9AB_4504_808C_EE172A6D35BC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CFfView : public CView
{
protected: // create from serialization only
	CFfView();
	DECLARE_DYNCREATE(CFfView)

// Attributes
public:
	CFfDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFfView)
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
	virtual ~CFfView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CFfView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in ffView.cpp
inline CFfDoc* CFfView::GetDocument()
   { return (CFfDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FFVIEW_H__861991DF_F9AB_4504_808C_EE172A6D35BC__INCLUDED_)
