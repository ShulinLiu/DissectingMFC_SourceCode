// MFCexp7_5.h : main header file for the MFCEXP7_5 application
//

#if !defined(AFX_MFCEXP7_5_H__374CA88A_C25F_49A2_BFC3_B53F02D1A109__INCLUDED_)
#define AFX_MFCEXP7_5_H__374CA88A_C25F_49A2_BFC3_B53F02D1A109__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_5App:
// See MFCexp7_5.cpp for the implementation of this class
//

class CMFCexp7_5App : public CWinApp
{
public:
	CMFCexp7_5App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp7_5App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp7_5App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP7_5_H__374CA88A_C25F_49A2_BFC3_B53F02D1A109__INCLUDED_)
