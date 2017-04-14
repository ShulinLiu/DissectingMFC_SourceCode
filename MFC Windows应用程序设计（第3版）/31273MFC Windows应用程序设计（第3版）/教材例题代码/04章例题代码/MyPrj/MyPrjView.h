// MyPrjView.h : interface of the CMyPrjView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MYPRJVIEW_H__AD7D652C_5958_11D8_B98F_0000E8D3C09B__INCLUDED_)
#define AFX_MYPRJVIEW_H__AD7D652C_5958_11D8_B98F_0000E8D3C09B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMyPrjView : public CView
{
protected: // create from serialization only
	CMyPrjView();
	DECLARE_DYNCREATE(CMyPrjView)

// Attributes
public:
	CMyPrjDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyPrjView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMyPrjView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMyPrjView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MyPrjView.cpp
inline CMyPrjDoc* CMyPrjView::GetDocument()
   { return (CMyPrjDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYPRJVIEW_H__AD7D652C_5958_11D8_B98F_0000E8D3C09B__INCLUDED_)
