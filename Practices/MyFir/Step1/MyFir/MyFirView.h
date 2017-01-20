// MyFirView.h : interface of the CMyFirView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MYFIRVIEW_H__FAF176C7_2EB1_4B48_88CD_8AEEC9A4DE60__INCLUDED_)
#define AFX_MYFIRVIEW_H__FAF176C7_2EB1_4B48_88CD_8AEEC9A4DE60__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMyFirView : public CEditView
{
protected: // create from serialization only
	CMyFirView();
	DECLARE_DYNCREATE(CMyFirView)

// Attributes
public:
	CMyFirDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyFirView)
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
	virtual ~CMyFirView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMyFirView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MyFirView.cpp
inline CMyFirDoc* CMyFirView::GetDocument()
   { return (CMyFirDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYFIRVIEW_H__FAF176C7_2EB1_4B48_88CD_8AEEC9A4DE60__INCLUDED_)
