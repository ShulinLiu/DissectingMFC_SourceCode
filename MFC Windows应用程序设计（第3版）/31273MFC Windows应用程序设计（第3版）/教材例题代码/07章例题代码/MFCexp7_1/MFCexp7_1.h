// MFCexp7_1.h : main header file for the MFCEXP7_1 application
//

#if !defined(AFX_MFCEXP7_1_H__DB6251D7_3200_4934_AF6A_0DEBC90B716A__INCLUDED_)
#define AFX_MFCEXP7_1_H__DB6251D7_3200_4934_AF6A_0DEBC90B716A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp7_1App:
// See MFCexp7_1.cpp for the implementation of this class
//

class CMFCexp7_1App : public CWinApp
{
public:
	CMFCexp7_1App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp7_1App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCexp7_1App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP7_1_H__DB6251D7_3200_4934_AF6A_0DEBC90B716A__INCLUDED_)
