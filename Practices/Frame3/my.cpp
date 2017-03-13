#include "my.h"

CMyWinApp theApp;

BOOL CMyWinApp::InitInstance()
{
    m_pMainWnd = new CMyFrameWnd;
    return TRUE;
}

CMyFrameWnd::CMyFrameWnd()
{
    Create();
}

void PrintAllClasses()
{
    CRuntimeClass* pClass;

    // just walk through the simple list of registered classes
    for (pClass = CRuntimeClass::pFirstClass; pClass != NULL;
            pClass = pClass->m_pNextClass)
    {
		std::cout << pClass->m_lpszClassName << "\n";
        std::cout << pClass->m_nObjectSize << "\n";
        std::cout << pClass->m_wSchema << "\n";

		//print the BaseClass's name
		if(pClass->m_pBaseClass != NULL)
		{
			std::cout << "Base Class: ";
			std::cout << pClass->m_pBaseClass->m_lpszClassName<<"\n";
		}
    }
}
//------------------------------------------------------------------
// main
//------------------------------------------------------------------
void main()
{
  CWinApp* pApp = AfxGetApp();

  pApp->InitApplication();
  pApp->InitInstance();
  pApp->Run();

  PrintAllClasses();
}
//------------------------------------------------------------------
