
#include <iostream>
#include "mfc.h"
using namespace std;

class CMyWinApp : public CWinApp
{
public:
  CMyWinApp::CMyWinApp()   {
                              cout << "CMyWinApp Constructor \n";
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
                  }
  ~CMyFrameWnd()  {
                     cout << "CMyFrameWnd Destructor \n";
                  }
};
