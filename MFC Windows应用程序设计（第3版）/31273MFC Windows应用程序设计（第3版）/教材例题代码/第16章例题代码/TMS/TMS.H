// tms.h : main header file for the TMS application
//

#if !defined(AFX_TMS_H__69760E13_FA93_11D7_9182_E31D909B8909__INCLUDED_)
#define AFX_TMS_H__69760E13_FA93_11D7_9182_E31D909B8909__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTmsApp:
// See tms.cpp for the implementation of this class
//

class CTmsApp : public CWinApp
{
public:
	CTmsApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTmsApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTmsApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TMS_H__69760E13_FA93_11D7_9182_E31D909B8909__INCLUDED_)
