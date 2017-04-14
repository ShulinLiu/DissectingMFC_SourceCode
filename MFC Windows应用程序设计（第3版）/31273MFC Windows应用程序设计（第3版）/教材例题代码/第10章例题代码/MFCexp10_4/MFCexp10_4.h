// MFCexp10_4.h : main header file for the MFCEXP10_4 application
//

#if !defined(AFX_MFCEXP10_4_H__275FBB5B_33A7_48CE_94A8_C810F10B07FE__INCLUDED_)
#define AFX_MFCEXP10_4_H__275FBB5B_33A7_48CE_94A8_C810F10B07FE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_4App:
// See MFCexp10_4.cpp for the implementation of this class
//

class CMFCexp10_4App : public CWinApp
{
public:
	CMFCexp10_4App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp10_4App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp10_4App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP10_4_H__275FBB5B_33A7_48CE_94A8_C810F10B07FE__INCLUDED_)
