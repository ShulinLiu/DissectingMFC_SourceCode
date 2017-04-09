// SerializeMode2.h : main header file for the SERIALIZEMODE2 application
//

#if !defined(AFX_SERIALIZEMODE2_H__CB83C8FF_5B39_467A_B0E3_DE487C5BFF6A__INCLUDED_)
#define AFX_SERIALIZEMODE2_H__CB83C8FF_5B39_467A_B0E3_DE487C5BFF6A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CSerializeMode2App:
// See SerializeMode2.cpp for the implementation of this class
//

class CSerializeMode2App : public CWinApp
{
public:
	CSerializeMode2App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSerializeMode2App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CSerializeMode2App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SERIALIZEMODE2_H__CB83C8FF_5B39_467A_B0E3_DE487C5BFF6A__INCLUDED_)
