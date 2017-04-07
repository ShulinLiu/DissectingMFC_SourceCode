// SerializeModeView.h : interface of the CSerializeModeView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SERIALIZEMODEVIEW_H__3DF4371A_42C2_4D7A_AB4C_8B9824BC5A85__INCLUDED_)
#define AFX_SERIALIZEMODEVIEW_H__3DF4371A_42C2_4D7A_AB4C_8B9824BC5A85__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSerializeModeView : public CView
{
protected: // create from serialization only
	CSerializeModeView();
	DECLARE_DYNCREATE(CSerializeModeView)

// Attributes
public:
	CSerializeModeDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSerializeModeView)
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
	virtual ~CSerializeModeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSerializeModeView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in SerializeModeView.cpp
inline CSerializeModeDoc* CSerializeModeView::GetDocument()
   { return (CSerializeModeDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SERIALIZEMODEVIEW_H__3DF4371A_42C2_4D7A_AB4C_8B9824BC5A85__INCLUDED_)
