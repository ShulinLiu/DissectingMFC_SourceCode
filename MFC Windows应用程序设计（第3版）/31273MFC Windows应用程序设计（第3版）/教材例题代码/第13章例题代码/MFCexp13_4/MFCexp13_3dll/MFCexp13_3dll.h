// MFCexp13_3dll.h : main header file for the MFCEXP13_3DLL DLL
//

#if !defined(AFX_MFCEXP13_3DLL_H__F9A49698_B46F_4CF5_93B2_211435A952F1__INCLUDED_)
#define AFX_MFCEXP13_3DLL_H__F9A49698_B46F_4CF5_93B2_211435A952F1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_3dllApp
// See MFCexp13_3dll.cpp for the implementation of this class
//
_declspec(dllexport) int ShowMsg(void);
class CMFCexp13_3dllApp : public CWinApp
{
public:
	CMFCexp13_3dllApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp13_3dllApp)
	//}}AFX_VIRTUAL

	//{{AFX_MSG(CMFCexp13_3dllApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP13_3DLL_H__F9A49698_B46F_4CF5_93B2_211435A952F1__INCLUDED_)
