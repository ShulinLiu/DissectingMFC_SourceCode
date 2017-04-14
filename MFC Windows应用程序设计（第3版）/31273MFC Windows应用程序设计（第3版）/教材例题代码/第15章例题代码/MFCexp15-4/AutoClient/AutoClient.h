// AutoClient.h : main header file for the AUTOCLIENT application
//

#if !defined(AFX_AUTOCLIENT_H__B380BA0C_A3DD_49C0_9400_785894841D51__INCLUDED_)
#define AFX_AUTOCLIENT_H__B380BA0C_A3DD_49C0_9400_785894841D51__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CAutoClientApp:
// See AutoClient.cpp for the implementation of this class
//

class CAutoClientApp : public CWinApp
{
public:
	CAutoClientApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAutoClientApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CAutoClientApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AUTOCLIENT_H__B380BA0C_A3DD_49C0_9400_785894841D51__INCLUDED_)
