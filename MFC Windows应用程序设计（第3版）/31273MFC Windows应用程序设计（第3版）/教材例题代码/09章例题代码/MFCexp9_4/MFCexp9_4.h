// MFCexp9_4.h : main header file for the MFCEXP9_4 application
//

#if !defined(AFX_MFCEXP9_4_H__BAA2B40D_E021_4C7B_891A_610E5248F318__INCLUDED_)
#define AFX_MFCEXP9_4_H__BAA2B40D_E021_4C7B_891A_610E5248F318__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_4App:
// See MFCexp9_4.cpp for the implementation of this class
//

class CMFCexp9_4App : public CWinApp
{
public:
	CMFCexp9_4App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp9_4App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp9_4App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP9_4_H__BAA2B40D_E021_4C7B_891A_610E5248F318__INCLUDED_)
