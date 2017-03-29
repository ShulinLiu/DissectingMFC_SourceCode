// MFCexp6.h : main header file for the MFCEXP6 application
//

#if !defined(AFX_MFCEXP6_H__59F4C04D_43BA_489C_A3DE_F49C99061790__INCLUDED_)
#define AFX_MFCEXP6_H__59F4C04D_43BA_489C_A3DE_F49C99061790__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6App:
// See MFCexp6.cpp for the implementation of this class
//

class CMFCexp6App : public CWinApp
{
public:
	CMFCexp6App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp6App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp6App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP6_H__59F4C04D_43BA_489C_A3DE_F49C99061790__INCLUDED_)
