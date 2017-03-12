// MyWin.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#define szWindowClass "MyClassName"
#define  szTitle "MyWindow"

ATOM MyRegisterClass(HINSTANCE hInstance);
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

int APIENTRY WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR     lpCmdLine,
                     int       nCmdShow)
{
 	MSG msg;
	HWND hWnd;
   //注册窗口类 
	MyRegisterClass(hInstance);
	//使用已注册的窗口类，创建主窗口
	hWnd = ::CreateWindow(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW|WS_BORDER,
      CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, NULL, NULL, hInstance, NULL);

   if (!hWnd)
   {
      return FALSE;
   }
   //显示主窗口
   ShowWindow(hWnd, nCmdShow);
   UpdateWindow(hWnd);

	// 先创建主窗口，然后进入消息循环
	while (GetMessage(&msg, NULL, 0, 0)) 
	{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
	}
	//收到WM_QUIT消息，退出
	return msg.wParam;
}

ATOM MyRegisterClass(HINSTANCE hInstance)
{
	WNDCLASSEX wcex;

	wcex.cbSize = sizeof(WNDCLASSEX); 
	//窗口类风格
	wcex.style			= CS_HREDRAW | CS_VREDRAW;
	//处理窗口消息的窗口过程，函数指针指向WndProc()
	wcex.lpfnWndProc	= (WNDPROC)WndProc;
	wcex.cbClsExtra		= 0;
	wcex.cbWndExtra		= 0;
	//实例句柄
	wcex.hInstance		= hInstance;
	//图标光标
	wcex.hIcon			= NULL;
	wcex.hCursor		= LoadCursor(NULL, IDC_ARROW);
	//背景刷
	wcex.hbrBackground	= (HBRUSH)(COLOR_BACKGROUND+1);
	//主菜单
	wcex.lpszMenuName	=NULL;
	//类名称
	wcex.lpszClassName	= szWindowClass;
	wcex.hIconSm		= NULL;
	//注册窗口类 
	return RegisterClassEx(&wcex);
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	//处理窗口消息的窗口过程函数
	
	PAINTSTRUCT ps;
	HDC hdc;

	switch (message) 
	{
	case WM_CREATE:
	case WM_SHOWWINDOW:
	case WM_KEYDOWN:
	case WM_COMMAND:
	//.........
		return ::DefWindowProc(hWnd, message, wParam, lParam);
	case WM_LBUTTONDOWN:
		int ScreenWidth;
		int ScreenLength;
		RECT rcWindow;
		
		::GetWindowRect(hWnd,&rcWindow);
		ScreenWidth=GetSystemMetrics(SM_CXSCREEN);
		 ScreenLength=GetSystemMetrics(SM_CYSCREEN);
		//鼠标单击，设置窗口位置
		::SetWindowPos(hWnd,HWND_TOP,ScreenWidth/4,
			ScreenWidth/4,ScreenLength/2,ScreenLength/2,SWP_SHOWWINDOW);
		Sleep(300);

		::SetWindowPos(hWnd,HWND_TOP,ScreenWidth/3,
			ScreenWidth/3,ScreenLength/3,ScreenLength/3,SWP_SHOWWINDOW);
		Sleep(100);
		::SetWindowPos(hWnd,HWND_TOP,ScreenWidth/4,
			ScreenWidth/4,ScreenLength/2,ScreenLength/2,SWP_SHOWWINDOW);
		Sleep(100);
		::SetWindowPos(hWnd,HWND_TOP,rcWindow.left,rcWindow.top,
			rcWindow.right-rcWindow.left,rcWindow.bottom-rcWindow.top,
			SWP_SHOWWINDOW);


		
		return ::DefWindowProc(hWnd, message, wParam, lParam);


	case WM_RBUTTONDOWN:
	//单击鼠标右键，隐藏、显示窗口 
		ShowWindow(hWnd,SW_HIDE);
		Sleep(300);
		ShowWindow(hWnd,SW_SHOW);

         return ::DefWindowProc(hWnd, message, wParam, lParam);
	case WM_PAINT:
		//绘制窗口
			hdc = BeginPaint(hWnd, &ps);
			RECT rt;
			GetClientRect(hWnd, &rt);
			::SetBkColor(hdc,::GetSysColor(COLOR_BACKGROUND));
			::SetTextColor(hdc,RGB(255,255,255));
			DrawText(hdc, "My window created by win32 API",-1,&rt, DT_CENTER);

			EndPaint(hWnd, &ps);
			return ::DefWindowProc(hWnd, message, wParam, lParam);
			break;

	case WM_DESTROY:
		//主窗口关闭时，给UI线程消息循环发送WM_QUIT消息，线程退出代码为0
			PostQuitMessage(0);
			break;
	default:
		//调用缺省的消息处理过程处理当前消息
		return ::DefWindowProc(hWnd, message, wParam, lParam);
   }
   return 0;
}





