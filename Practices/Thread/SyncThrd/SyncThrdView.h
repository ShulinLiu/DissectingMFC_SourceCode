// SyncThrdView.h : interface of the CSyncThrdView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SYNCTHRDVIEW_H__CF30AD63_8F4A_4248_BAB2_E3DF6A45B546__INCLUDED_)
#define AFX_SYNCTHRDVIEW_H__CF30AD63_8F4A_4248_BAB2_E3DF6A45B546__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSyncThrdView : public CView
{
protected: // create from serialization only
	CSyncThrdView();
	DECLARE_DYNCREATE(CSyncThrdView)

// Attributes
public:
	CSyncThrdDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSyncThrdView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSyncThrdView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSyncThrdView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in SyncThrdView.cpp
inline CSyncThrdDoc* CSyncThrdView::GetDocument()
   { return (CSyncThrdDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SYNCTHRDVIEW_H__CF30AD63_8F4A_4248_BAB2_E3DF6A45B546__INCLUDED_)
