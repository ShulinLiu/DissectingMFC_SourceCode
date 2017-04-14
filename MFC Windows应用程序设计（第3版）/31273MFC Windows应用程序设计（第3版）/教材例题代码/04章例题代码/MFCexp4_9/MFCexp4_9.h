// MFCexp4_9.h : main header file for the MFCEXP4_9 application
//

#if !defined(AFX_MFCEXP4_9_H__D1818143_B8CA_4B6B_8E55_F49BF90B3FB4__INCLUDED_)
#define AFX_MFCEXP4_9_H__D1818143_B8CA_4B6B_8E55_F49BF90B3FB4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_9App:
// See MFCexp4_9.cpp for the implementation of this class
//

class CMFCexp4_9App : public CWinApp
{
public:
	CMFCexp4_9App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp4_9App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp4_9App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP4_9_H__D1818143_B8CA_4B6B_8E55_F49BF90B3FB4__INCLUDED_)
