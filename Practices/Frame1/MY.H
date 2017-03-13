// Simulation of programmer's action:
//  inherit from the class 'WinApp' and 'FrameWnd'
//  and override some virtual function
#include <iostream>
#include "mfc.h" //regard as system's header
using namespace std;

class CMyWinApp : public CWinApp
{
public:
  CMyWinApp::CMyWinApp()   {
                              cout << "CMyWinApp Constructor \n";
							  cout << "   You need to override virtual function here \n";
                           }
  CMyWinApp::~CMyWinApp()  {
                              cout << "CMyWinApp Destructor \n";
                           }
};

class CMyFrameWnd : public CFrameWnd
{
public:
  CMyFrameWnd()   {
                     cout << "CMyFrameWnd Constructor \n";
					 cout << "   You need to override virtual function here \n";
                  }
  ~CMyFrameWnd()  {
                     cout << "CMyFrameWnd Destructor \n";
                  }
};
