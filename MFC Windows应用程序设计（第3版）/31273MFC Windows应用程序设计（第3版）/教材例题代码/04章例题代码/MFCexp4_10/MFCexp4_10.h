// MFCexp4_10.h : main header file for the MFCEXP4_10 application
//

#if !defined(AFX_MFCEXP4_10_H__558BDF19_888F_4243_96ED_CAE83E1B6692__INCLUDED_)
#define AFX_MFCEXP4_10_H__558BDF19_888F_4243_96ED_CAE83E1B6692__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_10App:
// See MFCexp4_10.cpp for the implementation of this class
//

class CMFCexp4_10App : public CWinApp
{
public:
	CMFCexp4_10App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp4_10App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp4_10App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP4_10_H__558BDF19_888F_4243_96ED_CAE83E1B6692__INCLUDED_)
