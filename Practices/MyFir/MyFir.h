// MyFir.h : main header file for the MYFIR application
//

#if !defined(AFX_MYFIR_H__D354CB63_0CEF_4B15_9D0B_32CEBBDAF1ED__INCLUDED_)
#define AFX_MYFIR_H__D354CB63_0CEF_4B15_9D0B_32CEBBDAF1ED__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMyFirApp:
// See MyFir.cpp for the implementation of this class
//

class CMyFirApp : public CWinApp
{
public:
	CMyFirApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyFirApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMyFirApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYFIR_H__D354CB63_0CEF_4B15_9D0B_32CEBBDAF1ED__INCLUDED_)
