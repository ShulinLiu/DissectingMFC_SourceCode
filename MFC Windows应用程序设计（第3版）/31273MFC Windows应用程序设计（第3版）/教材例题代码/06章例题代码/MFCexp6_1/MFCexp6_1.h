// MFCexp6_1.h : main header file for the MFCEXP6_1 application
//

#if !defined(AFX_MFCEXP6_1_H__56C9B4CB_2912_4D9F_B5F5_BA3706C42CC3__INCLUDED_)
#define AFX_MFCEXP6_1_H__56C9B4CB_2912_4D9F_B5F5_BA3706C42CC3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6_1App:
// See MFCexp6_1.cpp for the implementation of this class
//

class CMFCexp6_1App : public CWinApp
{
public:
	CMFCexp6_1App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp6_1App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp6_1App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP6_1_H__56C9B4CB_2912_4D9F_B5F5_BA3706C42CC3__INCLUDED_)
