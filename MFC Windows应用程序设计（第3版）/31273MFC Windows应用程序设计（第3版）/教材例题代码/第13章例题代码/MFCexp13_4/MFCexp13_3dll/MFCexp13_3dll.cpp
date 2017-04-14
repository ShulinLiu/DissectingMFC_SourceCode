// MFCexp13_3dll.cpp : Defines the initialization routines for the DLL.
//

#include "stdafx.h"
#include "MFCexp13_3dll.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

//
//	Note!
//
//		If this DLL is dynamically linked against the MFC
//		DLLs, any functions exported from this DLL which
//		call into MFC must have the AFX_MANAGE_STATE macro
//		added at the very beginning of the function.
//
//		For example:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// normal function body here
//		}
//
//		It is very important that this macro appear in each
//		function, prior to any calls into MFC.  This means that
//		it must appear as the first statement within the 
//		function, even before any object variable declarations
//		as their constructors may generate calls into the MFC
//		DLL.
//
//		Please see MFC Technical Notes 33 and 58 for additional
//		details.
//

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_3dllApp

BEGIN_MESSAGE_MAP(CMFCexp13_3dllApp, CWinApp)
	//{{AFX_MSG_MAP(CMFCexp13_3dllApp)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp13_3dllApp construction

CMFCexp13_3dllApp::CMFCexp13_3dllApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CMFCexp13_3dllApp object

CMFCexp13_3dllApp theApp;
_declspec(dllexport) int ShowMsg(void)
{
	char*msg="MFC";
	::MessageBox(NULL,msg,"",MB_OK);
	return 1;
}
