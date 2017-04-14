// xt.h : main header file for the XT application
//

#if !defined(AFX_XT_H__7D23BF1B_9C34_4602_869F_0FCFEAD27A93__INCLUDED_)
#define AFX_XT_H__7D23BF1B_9C34_4602_869F_0FCFEAD27A93__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CXtApp:
// See xt.cpp for the implementation of this class
//

class CXtApp : public CWinApp
{
public:
	CXtApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CXtApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CXtApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_XT_H__7D23BF1B_9C34_4602_869F_0FCFEAD27A93__INCLUDED_)
