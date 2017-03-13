#include "my.h"

CMyWinApp theApp;

BOOL CMyWinApp::InitInstance()
{
    cout << "CMyWinApp::InitInstance \n";
	cout << "override InitInstance in CMyWinApp \n";
    m_pMainWnd = new CMyFrameWnd;
    return TRUE;
}

CMyFrameWnd::CMyFrameWnd()
{
    cout << "CMyFrameWnd::CMyFrameWnd \n";
    Create();
}

//------------------------------------------------------------------
// main
//------------------------------------------------------------------

// simulation for execute process
void main()
{

CWinApp* pApp = AfxGetApp();

pApp->InitApplication();
pApp->InitInstance();
pApp->Run();
}
//------------------------------------------------------------------
