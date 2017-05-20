//需要包含的头文件---------------------------------------------------------------------------
#include<afxwin.h>

//need: Setting Project/Settings-General "use MFC as a static/shared Library"

////由CFrameWnd派生的CMyWnd类------------------------------------------------------
//class CMyWnd:public CFrameWnd
//{
//private:
//	char*ShowText;           //声明一个字符串为数据成员
//public:
//	afx_msg void OnPaint();//声明WM_PAINT消息处理函数
//	afx_msg void OnLButtonDown();//声明鼠标左键按下消息处理函数
//	DECLARE_MESSAGE_MAP()	//声明消息映射
//};
////消息映射的实现------------------------------------------------------------------------------
//BEGIN_MESSAGE_MAP(CMyWnd,CFrameWnd)
//ON_WM_PAINT()
//ON_WM_LBUTTONDOWN()
//END_MESSAGE_MAP( )
////WM_PAINT消息处理函数的实现--------------------------------------------------------
//void CMyWnd::OnPaint()
//{
//	CPaintDC dc(this);
//	dc.TextOut(20,20,ShowText);
//}
////WM_LBUTTONDOWMT消息处理函数的实现--------------------------------------
//void CMyWnd::OnLButtonDown()
//{
//	ShowText="有消息映射表的程序";	//当鼠标按下时输入字符串
//	InvalidateRect(NULL,TRUE);		//通知更新
//}

//程序员由CWinApp派生的应用程序类-------------------------------------------------
class CMyApp:public CWinApp
{
public:
	BOOL InitInstance();
};
BOOL CMyApp::InitInstance()
{
	CFrameWnd*pMainWnd=new CFrameWnd;
	pMainWnd->Create(NULL,"Basic MFC Application");
	pMainWnd->ShowWindow(m_nCmdShow);
	pMainWnd->UpdateData();
	m_pMainWnd=pMainWnd;
	return TRUE;
}
//定义CMyApp的对象MyApp--------------------------------------------------------------
CMyApp MyApp;
//---------------------------------------------------------------------------------------------------
