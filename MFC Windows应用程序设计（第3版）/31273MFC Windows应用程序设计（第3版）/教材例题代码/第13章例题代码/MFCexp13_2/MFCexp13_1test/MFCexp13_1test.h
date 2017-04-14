// MFCexp13_1test.h : main header file for the MFCEXP13_1TEST application
//

#if !defined(AFX_MFCEXP13_1TEST_H__B2B4300D_76CF_4C5F_B034_8FAECDAEB0AD__INCLUDED_)
#define AFX_MFCEXP13_1TEST_H__B2B4300D_76CF_4C5F_B034_8FAECDAEB0AD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_1testApp:
// See MFCexp13_1test.cpp for the implementation of this class
//

class CMFCexp13_1testApp : public CWinApp
{
public:
	CMFCexp13_1testApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp13_1testApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMFCexp13_1testApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP13_1TEST_H__B2B4300D_76CF_4C5F_B034_8FAECDAEB0AD__INCLUDED_)
