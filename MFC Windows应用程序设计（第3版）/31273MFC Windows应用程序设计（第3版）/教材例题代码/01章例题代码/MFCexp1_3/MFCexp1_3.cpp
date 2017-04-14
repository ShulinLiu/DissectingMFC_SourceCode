
//设计Windows程序必须包含的头文件-------------------------------------------------
#include<windows.h>
//定义全局变量--------------------------------------------------------------------------------
HINSTANCE		hInst;	
HWND 			hWnd;		
MSG			msg;
char lpszClassName[]="窗口";
char*ShowText;
//声明函数原型--------------------------------------------------------------------------------------
ATOM			MyRegisterClass(HINSTANCE hInstance);//注册窗口类函数
BOOL			Create(HINSTANCE, int);     //程序实例初始化函数
int				Run();                          //消息循环函数
LRESULT CALLBACK	WndProc(HWND, UINT, 
WPARAM, LPARAM); //窗口函数
void OnLButtonDown(HWND hWnd, UINT message, 
				WPARAM wParam, LPARAM lParam);
void OnPaint(HWND hWnd, UINT message, 
				WPARAM wParam, LPARAM lParam);
void OnDestroy(HWND hWnd, UINT message, 
				WPARAM wParam, LPARAM lParam);
//主函数-----------------------------------------------------------------------------------------
int APIENTRY WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR     lpCmdLine,
                     int       nCmdShow)
{
	
	MyRegisterClass(hInstance);        	//定义和注册窗口类
	Create(hInstance, nCmdShow);  		//创建窗口
	ShowWindow(hWnd, nCmdShow);   	//显示窗口
	UpdateWindow(hWnd);            	//更新屏幕显示
	return Run();                     	//消息循环
}
//注册窗口类函数的实现--------------------------------------------------------------------------
ATOM MyRegisterClass(HINSTANCE hInstance)
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
//创建窗口函数的实现-----------------------------------------------------------------------------
BOOL Create(HINSTANCE hInstance, int nCmdShow)
{
	hWnd=CreateWindow(	lpszClassName,
						"Windows",
						WS_OVERLAPPEDWINDOW,
						400,300,180,160,
						NULL,
						NULL,
						hInstance,
						NULL);
   return TRUE;
}
//消息循环函数的实现-----------------------------------------------------------------------------
int Run( )
{
	while (GetMessage(&msg, NULL, 0, 0)) 
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return msg.wParam;
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

//--------------------------------------------------------------------------------------------------