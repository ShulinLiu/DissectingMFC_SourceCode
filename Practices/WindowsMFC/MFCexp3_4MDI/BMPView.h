#if !defined(AFX_BMPVIEW_H__CD9D4322_6146_41FC_BDB3_DA6C453DB43C__INCLUDED_)
#define AFX_BMPVIEW_H__CD9D4322_6146_41FC_BDB3_DA6C453DB43C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BMPView.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CBMPView view

class CBMPView : public CView
{
protected:
	CBMPView();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CBMPView)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBMPView)
	protected:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CBMPView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
protected:
	//{{AFX_MSG(CBMPView)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BMPVIEW_H__CD9D4322_6146_41FC_BDB3_DA6C453DB43C__INCLUDED_)
