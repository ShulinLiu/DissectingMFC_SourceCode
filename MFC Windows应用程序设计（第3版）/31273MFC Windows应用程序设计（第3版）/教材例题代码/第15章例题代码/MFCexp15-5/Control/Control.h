#if !defined(AFX_CONTROL_H__C2B632D7_E65A_42C4_B0B2_059D372EFB95__INCLUDED_)
#define AFX_CONTROL_H__C2B632D7_E65A_42C4_B0B2_059D372EFB95__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// Control.h : main header file for CONTROL.DLL

#if !defined( __AFXCTL_H__ )
	#error include 'afxctl.h' before including this file
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CControlApp : See Control.cpp for implementation.

class CControlApp : public COleControlModule
{
public:
	BOOL InitInstance();
	int ExitInstance();
};

extern const GUID CDECL _tlid;
extern const WORD _wVerMajor;
extern const WORD _wVerMinor;

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CONTROL_H__C2B632D7_E65A_42C4_B0B2_059D372EFB95__INCLUDED)
