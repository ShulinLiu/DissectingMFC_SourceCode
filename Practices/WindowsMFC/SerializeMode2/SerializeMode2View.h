// SerializeMode2View.h : interface of the CSerializeMode2View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SERIALIZEMODE2VIEW_H__3243D8C0_ABD8_4DA6_9D52_6C57C272F6C8__INCLUDED_)
#define AFX_SERIALIZEMODE2VIEW_H__3243D8C0_ABD8_4DA6_9D52_6C57C272F6C8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSerializeMode2View : public CView
{
protected: // create from serialization only
	CSerializeMode2View();
	DECLARE_DYNCREATE(CSerializeMode2View)

// Attributes
public:
	CSerializeMode2Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSerializeMode2View)
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
	virtual ~CSerializeMode2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSerializeMode2View)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in SerializeMode2View.cpp
inline CSerializeMode2Doc* CSerializeMode2View::GetDocument()
   { return (CSerializeMode2Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SERIALIZEMODE2VIEW_H__3243D8C0_ABD8_4DA6_9D52_6C57C272F6C8__INCLUDED_)
