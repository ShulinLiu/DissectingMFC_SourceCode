// MFCexp4_1.h : main header file for the MFCEXP4_1 application
//

#if !defined(AFX_MFCEXP4_1_H__86A8B978_2136_4CB0_B9ED_958B00D2FB8F__INCLUDED_)
#define AFX_MFCEXP4_1_H__86A8B978_2136_4CB0_B9ED_958B00D2FB8F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_1App:
// See MFCexp4_1.cpp for the implementation of this class
//

class CMFCexp4_1App : public CWinApp
{
public:
	CMFCexp4_1App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp4_1App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp4_1App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP4_1_H__86A8B978_2136_4CB0_B9ED_958B00D2FB8F__INCLUDED_)
