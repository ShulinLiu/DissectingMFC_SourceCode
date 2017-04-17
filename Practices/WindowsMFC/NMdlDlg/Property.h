#if !defined(AFX_PROPERTY_H__9F865423_6888_4975_A01F_C4BA165C0F4D__INCLUDED_)
#define AFX_PROPERTY_H__9F865423_6888_4975_A01F_C4BA165C0F4D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Property.h : header file
//
#include"BitmapOptions.h"
#include"TextOptions.h"
/////////////////////////////////////////////////////////////////////////////
// CProperty dialog

class CProperty : public CPropertySheet
{
	DECLARE_DYNAMIC(CProperty)
public:
	CBitmapOptions m_bitmapOptions;
	CTextOptions m_textOptions;

// Construction
public:
	CProperty(UINT nIDCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
	CProperty(LPCTSTR pszCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CProperty)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CProperty();

	// Generated message map functions
protected:
	//{{AFX_MSG(CProperty)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROPERTY_H__9F865423_6888_4975_A01F_C4BA165C0F4D__INCLUDED_)
