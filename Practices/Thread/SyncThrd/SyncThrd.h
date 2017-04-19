// SyncThrd.h : main header file for the SYNCTHRD application
//

#if !defined(AFX_SYNCTHRD_H__040DB75D_D4F9_41DF_9E3D_3183332DADBF__INCLUDED_)
#define AFX_SYNCTHRD_H__040DB75D_D4F9_41DF_9E3D_3183332DADBF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CSyncThrdApp:
// See SyncThrd.cpp for the implementation of this class
//

class CSyncThrdApp : public CWinApp
{
public:
	CSyncThrdApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSyncThrdApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CSyncThrdApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SYNCTHRD_H__040DB75D_D4F9_41DF_9E3D_3183332DADBF__INCLUDED_)
