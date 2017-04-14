// ContainerAppView.h : interface of the CContainerAppView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CONTAINERAPPVIEW_H__77E89480_9D17_4943_8C9A_B7E04F369370__INCLUDED_)
#define AFX_CONTAINERAPPVIEW_H__77E89480_9D17_4943_8C9A_B7E04F369370__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CContainerAppCntrItem;

class CContainerAppView : public CView
{
protected: // create from serialization only
	CContainerAppView();
	DECLARE_DYNCREATE(CContainerAppView)

// Attributes
public:
	CContainerAppDoc* GetDocument();
	// m_pSelection holds the selection to the current CContainerAppCntrItem.
	// For many applications, such a member variable isn't adequate to
	//  represent a selection, such as a multiple selection or a selection
	//  of objects that are not CContainerAppCntrItem objects.  This selection
	//  mechanism is provided just to help you get started.

	// TODO: replace this selection mechanism with one appropriate to your app.
	CContainerAppCntrItem* m_pSelection;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CContainerAppView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL IsSelected(const CObject* pDocItem) const;// Container support
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CContainerAppView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CContainerAppView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	afx_msg void OnDestroy();
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnInsertObject();
	afx_msg void OnCancelEditCntr();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in ContainerAppView.cpp
inline CContainerAppDoc* CContainerAppView::GetDocument()
   { return (CContainerAppDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CONTAINERAPPVIEW_H__77E89480_9D17_4943_8C9A_B7E04F369370__INCLUDED_)
