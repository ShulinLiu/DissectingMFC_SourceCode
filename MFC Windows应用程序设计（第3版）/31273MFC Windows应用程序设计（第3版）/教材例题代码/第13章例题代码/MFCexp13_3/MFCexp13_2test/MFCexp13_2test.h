// MFCexp13_2test.h : main header file for the MFCEXP13_2TEST application
//

#if !defined(AFX_MFCEXP13_2TEST_H__7D17E3D9_50F6_466B_BC93_2CD68F4EA34C__INCLUDED_)
#define AFX_MFCEXP13_2TEST_H__7D17E3D9_50F6_466B_BC93_2CD68F4EA34C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_2testApp:
// See MFCexp13_2test.cpp for the implementation of this class
//

class CMFCexp13_2testApp : public CWinApp
{
public:
	CMFCexp13_2testApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp13_2testApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMFCexp13_2testApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP13_2TEST_H__7D17E3D9_50F6_466B_BC93_2CD68F4EA34C__INCLUDED_)
