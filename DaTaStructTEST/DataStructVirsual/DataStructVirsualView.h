// DataStructVirsualView.h : interface of the CDataStructVirsualView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_DATASTRUCTVIRSUALVIEW_H__AF4EDAC6_3358_41EB_BB66_2752E04AEC38__INCLUDED_)
#define AFX_DATASTRUCTVIRSUALVIEW_H__AF4EDAC6_3358_41EB_BB66_2752E04AEC38__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CDataStructVirsualView : public CView
{
protected: // create from serialization only
	CDataStructVirsualView();
	DECLARE_DYNCREATE(CDataStructVirsualView)

// Attributes
public:
	CDataStructVirsualDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDataStructVirsualView)
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
	virtual ~CDataStructVirsualView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CDataStructVirsualView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in DataStructVirsualView.cpp
inline CDataStructVirsualDoc* CDataStructVirsualView::GetDocument()
   { return (CDataStructVirsualDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DATASTRUCTVIRSUALVIEW_H__AF4EDAC6_3358_41EB_BB66_2752E04AEC38__INCLUDED_)
