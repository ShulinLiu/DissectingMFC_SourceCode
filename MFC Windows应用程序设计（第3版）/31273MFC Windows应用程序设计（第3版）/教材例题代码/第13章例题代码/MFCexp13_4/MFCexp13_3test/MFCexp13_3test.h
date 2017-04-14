// MFCexp13_3test.h : main header file for the MFCEXP13_3TEST application
//

#if !defined(AFX_MFCEXP13_3TEST_H__FDC14965_5654_4EDD_BCED_7951B1D6CBCF__INCLUDED_)
#define AFX_MFCEXP13_3TEST_H__FDC14965_5654_4EDD_BCED_7951B1D6CBCF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_3testApp:
// See MFCexp13_3test.cpp for the implementation of this class
//

class CMFCexp13_3testApp : public CWinApp
{
public:
	CMFCexp13_3testApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp13_3testApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp13_3testApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP13_3TEST_H__FDC14965_5654_4EDD_BCED_7951B1D6CBCF__INCLUDED_)
