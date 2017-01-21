#include <iostream>
#include "mfc.h"
using namespace std;

class CMyWinApp : public CWinApp
{
public:
  CMyWinApp::CMyWinApp()   {
                           }
  CMyWinApp::~CMyWinApp()  {
                           }

  virtual BOOL InitInstance();
};

class CMyFrameWnd : public CFrameWnd
{
public:
  CMyFrameWnd();
  ~CMyFrameWnd()  {
                  }
};
