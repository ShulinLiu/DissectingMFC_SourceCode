// Win3_3.cpp : Defines the entry point for the application.
//

#include "stdafx.h"

//定义全局变量和函数------------------------------------------------------------------------
HINSTANCE hInst;								
HINSTANCE hInstance;
MSG msg;
char lpszClassName[]="window_class";
char*ShowText;
//声明函数原型--------------------------------------------------------------------------------------
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);//窗口函数
void OnLButtonDown(HWND hWnd, UINT message, 
				WPARAM wParam, LPARAM lParam);
void OnPaint(HWND hWnd, UINT message, 
				WPARAM wParam, LPARAM lParam);
void OnDestroy(HWND hWnd, UINT message, 
				WPARAM wParam, LPARAM lParam);
//窗体类-----------------------------------------------------------------------------------------
class CFrameWnd
{		
public:	
	HWND hWnd;
public:
	int RegisterWindow();	
	void Create(LPCTSTR lpClassName,
				LPCTSTR lpWindowName
				);	
	void ShowWindow(int nCmdShow);
	void UpdateWindow();
};
//窗体类的成员函数----------------------------------------------------------------
int CFrameWnd::RegisterWindow()
{	
	WNDCLASS wc;
	wc.style=0;
	wc.lpfnWndProc=WndProc;
	wc.cbClsExtra=0;
	wc.cbWndExtra=0;
	wc.hInstance=hInstance;
	wc.hIcon=LoadIcon(NULL,IDI_APPLICATION);
	wc.hCursor=LoadCursor(NULL,IDC_ARROW);
	wc.hbrBackground=(HBRUSH)GetStockObject(WHITE_BRUSH);
	wc.lpszMenuName=NULL;
	wc.lpszClassName=lpszClassName;
	return RegisterClass(&wc);
}
void CFrameWnd::Create(LPCTSTR lpClassName,
					   LPCTSTR lpWindowName)
{
	RegisterWindow();
	hInst = hInstance; 
	hWnd = CreateWindow(lpszClassName,
						lpWindowName, 
						WS_OVERLAPPEDWINDOW,
						CW_USEDEFAULT, 
						0, 
						CW_USEDEFAULT, 
						0, 
						NULL, 
						NULL, 
						hInstance, 
						NULL);
}
void CFrameWnd::ShowWindow(int nCmdShow)
{
	::ShowWindow(hWnd, nCmdShow);
}
void CFrameWnd::UpdateWindow()
{
	::UpdateWindow(hWnd);
}

//应用程序类----------------------------------------------------------------------------------
class CWinApp
{	
public:
	CWinApp * m_pCurrentWinApp;
public:
	CWinApp( );
	~ CWinApp( ); 
public:
	CFrameWnd * m_pMainWnd;
public:
	virtual BOOL InitInstance (int nCmdShow);
	int Run( );
};

CWinApp::CWinApp( )
{ m_pCurrentWinApp = this;}

BOOL CWinApp::InitInstance(int nCmdShow)
{
	m_pMainWnd=new CFrameWnd;
	m_pMainWnd->Create(NULL,"封装的Windows程序");
	m_pMainWnd->ShowWindow(nCmdShow);
	m_pMainWnd->UpdateWindow();
	return TRUE;
}
int CWinApp::Run()
{
	while (GetMessage(&msg, NULL, 0, 0)) 
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return msg.wParam;
}
CWinApp::~ CWinApp( ) { delete m_pMainWnd; }

//程序员派生的窗体类-----------------------------------------------------------------------
class CMyWnd:public CFrameWnd
{
};

//程序员由CWinApp类派生的CMyApp类-----------------------------------------------
class CMyApp:public CWinApp
{
public:
	BOOL InitInstance(int nCmdShow);
};
//派生类CMyApp的成员函数---------------------------------------------------------------
CMyApp::InitInstance(int nCmdShow)
{
	CMyWnd*pMainWnd=new CMyWnd;//应用窗体的派生类定义窗体对象
	pMainWnd->Create(NULL,"应用窗体的派生类的程序");
	pMainWnd->ShowWindow(nCmdShow);
	pMainWnd->UpdateWindow();
	m_pMainWnd=pMainWnd;//把CMyWnd类的对象赋给m_pMainWnd
	return TRUE;
}

//程序员定义的CWinApp的对象MyApp--------------------------------------------------
CMyApp MyApp;

//全局函数AfxGetApp()----------------------------------------------------------------------
CWinApp*AfxGetApp()
{
	return MyApp.m_pCurrentWinApp;
}

//主函数------------------------------------------------------------------------------------------
int APIENTRY WinMain(HINSTANCE 	hInstance,
                     HINSTANCE 	hPrevInstance,
                     LPSTR     	lpCmdLine,
                     int       		nCmdShow)
{
	int ResultCode=-1;
	CWinApp*pApp;
	pApp=AfxGetApp();
	pApp->InitInstance(nCmdShow);
	return ResultCode=pApp->Run();
}
//窗口函数的实现--------------------------------------------------------------------------------------
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, 
WPARAM wParam, LPARAM lParam)
{
	switch (message) 
	{
	case WM_LBUTTONDOWN:	OnLButtonDown(hWnd, message, wParam, lParam);	
		break;
	case WM_PAINT:			OnPaint(hWnd, message,wParam, lParam);
		break;
	case WM_DESTROY:		OnDestroy(hWnd, message, wParam, lParam);
		break;
	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
   }
   return 0;
}
void OnLButtonDown(HWND hWnd, UINT message, 
				WPARAM wParam, LPARAM lParam)
{
	ShowText="Hello!";
	InvalidateRect(hWnd,NULL,1);
}
void OnPaint(HWND hWnd, UINT message, 
				WPARAM wParam, LPARAM lParam)
{
	PAINTSTRUCT ps;
	HDC hdc;
	hdc = BeginPaint(hWnd, &ps);
	TextOut(hdc,50,50,ShowText,6);
	EndPaint(hWnd, &ps);
}
void OnDestroy(HWND hWnd, UINT message, 
				WPARAM wParam, LPARAM lParam)
{
	PostQuitMessage(0);
}
//-------------------------------------------------------------------------------------------



