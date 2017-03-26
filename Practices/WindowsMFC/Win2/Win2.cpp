// Win2.cpp : Defines the entry point for the application.
//

#include "stdafx.h"

//声明窗口函数原型
LRESULT CALLBACK WndProc(HWND,UINT,WPARAM,LPARAM);
//---------------------------------------------------------------------------------------------
//主函数
int WINAPI WinMain(HINSTANCE hInstance,
				   HINSTANCE PreInstance,
				   LPSTR lpCmdLine,
				   int nCmdShow)
{
	HWND hwnd1;						//Windows1的窗口句柄
	HWND hwnd2;						//Windows2的窗口句柄
	HWND hwnd3;						//Windows3的窗口句柄

	MSG  msg;

//定义、注册窗口类"窗口1"
	char lpszClassName1[]="窗口1";
	WNDCLASS wc1;
	wc1.style=0;
	wc1.lpfnWndProc=WndProc;
	wc1.cbClsExtra=0;
	wc1.cbWndExtra=0;
	wc1.hInstance=hInstance;
	wc1.hIcon=LoadIcon(NULL,IDI_APPLICATION);
	wc1.hCursor=LoadCursor(NULL,IDC_ARROW);
	wc1.hbrBackground=(HBRUSH)GetStockObject(WHITE_BRUSH);//白色
	wc1.lpszMenuName=NULL;
	wc1.lpszClassName=lpszClassName1;

	RegisterClass(&wc1);
	
	//定义、注册窗口类"窗口2"
	char lpszClassName2[]="窗口2";
	WNDCLASS wc2;
	wc2.style=0;
	wc2.lpfnWndProc=WndProc;
	wc2.cbClsExtra=0;
	wc2.cbWndExtra=0;
	wc2.hInstance=hInstance;
	wc2.hIcon=LoadIcon(NULL,IDI_APPLICATION);
	wc2.hCursor=LoadCursor(NULL,IDC_ARROW);
	wc2.hbrBackground=(HBRUSH)GetStockObject(GRAY_BRUSH);//灰色
	wc2.lpszMenuName=NULL;
	wc2.lpszClassName=lpszClassName2;

	RegisterClass(&wc2);

	hwnd1=CreateWindow(	lpszClassName1,	//创建Windows1窗口
						"Windows1",
						WS_OVERLAPPEDWINDOW,
						120,50,700,500,
						NULL,
						NULL,
						hInstance,
						NULL);

	hwnd2=CreateWindow(	lpszClassName2,	//创建Windows2窗口
						"Windows2",
						WS_OVERLAPPEDWINDOW,
						150,80,750,550,
						NULL,
						NULL,
						hInstance,
						NULL);

	hwnd3=CreateWindow(	lpszClassName1,	//创建Windows3窗口
						"Windows3",
						WS_OVERLAPPEDWINDOW,
						200,130,500,300,,
						NULL,
						NULL,
						hInstance,
						NULL);

	ShowWindow(hwnd1,nCmdShow);		//显示Windows1
	UpdateWindow(hwnd1);

	ShowWindow(hwnd2,nCmdShow);		//显示Windows2
	UpdateWindow(hwnd2);

	ShowWindow(hwnd3,nCmdShow);		//显示Windows3
	UpdateWindow(hwnd3);

	while(GetMessage(&msg,NULL,0,0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return msg.wParam;
}
//---------------------------------------------------------------------------------------------
//处理消息的窗口函数
LRESULT CALLBACK WndProc(HWND hwnd,
						 UINT message,
						 WPARAM wParam,
						 LPARAM lParam)
{
	switch(message)
	{
	case WM_LBUTTONDOWN:   //鼠标左键按下消息
		{
			MessageBeep(0);
		}
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hwnd,message,wParam,lParam);
	}
	return 0;
}
//-----------------------------------------------------------------------------------------


