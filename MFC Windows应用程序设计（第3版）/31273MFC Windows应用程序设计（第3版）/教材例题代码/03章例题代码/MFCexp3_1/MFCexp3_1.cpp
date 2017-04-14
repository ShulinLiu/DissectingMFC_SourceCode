#include <afxwin.h>
// 由CWinApp派生的应用程序类声明
class MyApp : public CWinApp
{
public:
    BOOL InitInstance();      //声明InitInstance()函数
};
// 定义应用程序类的全局对象
MyApp theApp;
//InitInstance函数的实现
MyApp::InitInstance()
{
    CFrameWnd*pMainWnd=new CFrameWnd;//创建框架窗口类的对象
	pMainWnd->Create(NULL, "Basic MFC Application");
    pMainWnd->ShowWindow(m_nCmdShow);//显示窗口
	pMainWnd->UpdateData();
	m_pMainWnd=pMainWnd;
    return TRUE;
}
