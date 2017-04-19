// ThrdCommu.h : main header file for the THRDCOMMU application
//

#if !defined(AFX_THRDCOMMU_H__98FAFAFE_F7EE_4F5F_ACAE_B7563122B459__INCLUDED_)
#define AFX_THRDCOMMU_H__98FAFAFE_F7EE_4F5F_ACAE_B7563122B459__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CThrdCommuApp:
// See ThrdCommu.cpp for the implementation of this class
//

class CThrdCommuApp : public CWinApp
{
public:
	CThrdCommuApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CThrdCommuApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CThrdCommuApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_THRDCOMMU_H__98FAFAFE_F7EE_4F5F_ACAE_B7563122B459__INCLUDED_)
