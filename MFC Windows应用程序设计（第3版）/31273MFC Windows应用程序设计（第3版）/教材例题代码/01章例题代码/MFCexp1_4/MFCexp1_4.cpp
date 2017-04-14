//设计Windows程序必须包含的头文件------------------------------------------------
#include<windows.h>
//定义全局变量-------------------------------------------------------------------------------
HINSTANCE		hInst;	
HWND 			hWnd;		
MSG			msg;
char lpszClassName [ ]="窗口";
char*ShowText;

//声明函数原型-------------------------------------------------------------------------------
ATOM			MyRegisterClass(HINSTANCE hInstance);//注册窗口类函数
BOOL			Create(HINSTANCE, int);  //程序实例初始化函数
int				Run( );                  //消息循环函数

LRESULT CALLBACK	WndProc(			//窗口函数
HWND, UINT, 
WPARAM, LPARAM);
 						
void OnLButtonDown(			// WM_LBUTTONDOWN消息处理函数
HWND hWnd, 
UINT message, 
		WPARAM wParam, 
LPARAM lParam);

void OnPaint(					// WM_PAINT消息处理函数
HWND hWnd, 
UINT message, 
		WPARAM wParam, 
LPARAM lParam);

void OnDestroy(				// WM_DESTROY消息处理函数
HWND hWnd, 
UINT message, 
		WPARAM wParam, 
LPARAM lParam);

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
//注册窗口类函数的实现-------------------------------------------------------------
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
//创建窗口函数的实现----------------------------------------------------------------------
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
//消息循环函数的实现----------------------------------------------------------------------
int Run( )
{
	while (GetMessage(&msg, NULL, 0, 0)) 
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return msg.wParam;
}
//窗口函数的实现-----------------------------------------------------------------------------
#define DECLARE_MESSAGE_MAP( ) \
struct MSGMAP_ENTRY  _messageEntres[ ];\

#define BEGIN_MESSAGE_MAP( ) \
struct MSGMAP_ENTRY  _messageEntres[ ] = \
{ \

#define ON_WM(messageID,msgFuc) \
	messageID,msgFuc,
#define END_MESSAGE_MAP( ) \
};\

void On_LButtonDown(HWND, UINT, WPARAM, LPARAM);
void On_Paint(HWND, UINT, WPARAM, LPARAM);
void On_Destroy(HWND, UINT, WPARAM, LPARAM);
struct MSGMAP_ENTRY
{
	UINT nMessage;
	void (*pfn)(HWND, UINT, WPARAM, LPARAM );
};

DECLARE_MESSAGE_MAP( )
BEGIN_MESSAGE_MAP( )
ON_WM(WM_LBUTTONDOWN,On_LButtonDown)
ON_WM(WM_PAINT,On_Paint)
ON_WM(WM_DESTROY,On_Destroy)
END_MESSAGE_MAP( )

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, 
WPARAM wParam, LPARAM lParam)
{
int i;
	int n = sizeof ( _messageEntres)/sizeof(_messageEntres[0] );
	for (i = 0; i < n; i ++)
	{
		if (message == _messageEntres [ i ] . nMessage )
			( *_messageEntres [ i ] . pfn )( hWnd, message, wParam, lParam);
	}
	
	return DefWindowProc(hWnd, message, wParam, lParam);
}


//鼠标左键单击消息处理函数的实现---------------------------------------------------
void On_LButtonDown(HWND hWnd, UINT message, 
				WPARAM wParam, LPARAM lParam)
{
	ShowText="Hello!";
	InvalidateRect(hWnd,NULL,1);
}
//重绘窗口用户去消息处理函数的实现------------------------------------------------
void On_Paint(HWND hWnd, UINT message, 
				WPARAM wParam, LPARAM lParam)
{
	PAINTSTRUCT ps;
	HDC hdc;
	hdc = BeginPaint(hWnd, &ps);
	TextOut(hdc,50,50,ShowText,6);
	EndPaint(hWnd, &ps);
}
//销毁窗口消息处理函数的实现----------------------------------------------------------
void On_Destroy(HWND hWnd, UINT message, 
				WPARAM wParam, LPARAM lParam)
{
	PostQuitMessage(0);
}
//----------------------------------------------------------------------------------------------
