// MyPrj.h : main header file for the MYPRJ application
//

#if !defined(AFX_MYPRJ_H__AD7D6524_5958_11D8_B98F_0000E8D3C09B__INCLUDED_)
#define AFX_MYPRJ_H__AD7D6524_5958_11D8_B98F_0000E8D3C09B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMyPrjApp:
// See MyPrj.cpp for the implementation of this class
//

class CMyPrjApp : public CWinApp
{
public:
	CMyPrjApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyPrjApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMyPrjApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYPRJ_H__AD7D6524_5958_11D8_B98F_0000E8D3C09B__INCLUDED_)
