// MFCexp13_4test.h : main header file for the MFCEXP13_4TEST application
//

#if !defined(AFX_MFCEXP13_4TEST_H__C3ACEC48_20F1_4F8B_B7B9_6D82365B3F4A__INCLUDED_)
#define AFX_MFCEXP13_4TEST_H__C3ACEC48_20F1_4F8B_B7B9_6D82365B3F4A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_4testApp:
// See MFCexp13_4test.cpp for the implementation of this class
//

class CMFCexp13_4testApp : public CWinApp
{
public:
	CMFCexp13_4testApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp13_4testApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp13_4testApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP13_4TEST_H__C3ACEC48_20F1_4F8B_B7B9_6D82365B3F4A__INCLUDED_)
