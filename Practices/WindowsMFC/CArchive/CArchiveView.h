// CArchiveView.h : interface of the CCArchiveView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CARCHIVEVIEW_H__FAFD08AD_7A80_4485_9B85_AB9386E7714A__INCLUDED_)
#define AFX_CARCHIVEVIEW_H__FAFD08AD_7A80_4485_9B85_AB9386E7714A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCArchiveView : public CView
{
protected: // create from serialization only
	CCArchiveView();
	DECLARE_DYNCREATE(CCArchiveView)

// Attributes
public:
	CCArchiveDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCArchiveView)
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
	virtual ~CCArchiveView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCArchiveView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in CArchiveView.cpp
inline CCArchiveDoc* CCArchiveView::GetDocument()
   { return (CCArchiveDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CARCHIVEVIEW_H__FAFD08AD_7A80_4485_9B85_AB9386E7714A__INCLUDED_)
