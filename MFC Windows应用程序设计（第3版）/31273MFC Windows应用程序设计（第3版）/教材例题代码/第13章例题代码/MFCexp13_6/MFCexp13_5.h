// MFCexp13_5.h : main header file for the MFCEXP13_5 application
//

#if !defined(AFX_MFCEXP13_5_H__03F50F48_7E24_4F52_97B7_A184FB8E7FEE__INCLUDED_)
#define AFX_MFCEXP13_5_H__03F50F48_7E24_4F52_97B7_A184FB8E7FEE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_5App:
// See MFCexp13_5.cpp for the implementation of this class
//

class CMFCexp13_5App : public CWinApp
{
public:
	CMFCexp13_5App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp13_5App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp13_5App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP13_5_H__03F50F48_7E24_4F52_97B7_A184FB8E7FEE__INCLUDED_)
