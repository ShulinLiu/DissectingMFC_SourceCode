#if !defined(AFX_DRAW1_H__16DCCD32_87AB_4455_9CBB_22A29B34EEC2__INCLUDED_)
#define AFX_DRAW1_H__16DCCD32_87AB_4455_9CBB_22A29B34EEC2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Draw1.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDraw1 form view

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

class CDraw1 : public CFormView
{
protected:
	CDraw1();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CDraw1)

// Form Data
public:
	//{{AFX_DATA(CDraw1)
	enum { IDD = IDD_DRAW1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDraw1)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CDraw1();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(CDraw1)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DRAW1_H__16DCCD32_87AB_4455_9CBB_22A29B34EEC2__INCLUDED_)
