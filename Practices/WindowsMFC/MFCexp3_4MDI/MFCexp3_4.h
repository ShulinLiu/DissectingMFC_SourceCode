// MFCexp3_4.h : main header file for the MFCEXP3_4 application
//

#if !defined(AFX_MFCEXP3_4_H__596897D1_0AFF_4CFF_A101_B36C25FC34BD__INCLUDED_)
#define AFX_MFCEXP3_4_H__596897D1_0AFF_4CFF_A101_B36C25FC34BD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp3_4App:
// See MFCexp3_4.cpp for the implementation of this class
//

class CMFCexp3_4App : public CWinApp
{
public:
	CMFCexp3_4App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp3_4App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp3_4App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP3_4_H__596897D1_0AFF_4CFF_A101_B36C25FC34BD__INCLUDED_)
