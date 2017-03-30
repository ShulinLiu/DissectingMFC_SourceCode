// MFCexp7_3.h : main header file for the MFCEXP7_3 application
//

#if !defined(AFX_MFCEXP7_3_H__8FBDC8F5_6C92_4A3C_9223_11D78597DB80__INCLUDED_)
#define AFX_MFCEXP7_3_H__8FBDC8F5_6C92_4A3C_9223_11D78597DB80__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_3App:
// See MFCexp7_3.cpp for the implementation of this class
//

class CMFCexp7_3App : public CWinApp
{
public:
	CMFCexp7_3App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp7_3App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp7_3App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP7_3_H__8FBDC8F5_6C92_4A3C_9223_11D78597DB80__INCLUDED_)
