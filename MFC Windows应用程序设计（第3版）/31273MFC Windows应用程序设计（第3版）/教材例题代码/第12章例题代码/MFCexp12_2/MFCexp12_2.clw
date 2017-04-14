; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMyWnd
LastTemplate=CFrameWnd
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "MFCexp12_2.h"
LastPage=0

ClassCount=7
Class1=CMFCexp12_2App
Class2=CMFCexp12_2Doc
Class3=CMFCexp12_2View
Class4=CMainFrame

ResourceCount=2
Resource1=IDR_MAINFRAME
Class5=CAboutDlg
Class6=CMyThread
Class7=CMyWnd
Resource2=IDD_ABOUTBOX

[CLS:CMFCexp12_2App]
Type=0
HeaderFile=MFCexp12_2.h
ImplementationFile=MFCexp12_2.cpp
Filter=N

[CLS:CMFCexp12_2Doc]
Type=0
HeaderFile=MFCexp12_2Doc.h
ImplementationFile=MFCexp12_2Doc.cpp
Filter=N

[CLS:CMFCexp12_2View]
Type=0
HeaderFile=MFCexp12_2View.h
ImplementationFile=MFCexp12_2View.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T




[CLS:CAboutDlg]
Type=0
HeaderFile=MFCexp12_2.cpp
ImplementationFile=MFCexp12_2.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_MRU_FILE1
Command6=ID_APP_EXIT
Command7=ID_EDIT_UNDO
Command8=ID_EDIT_CUT
Command9=ID_EDIT_COPY
Command10=ID_EDIT_PASTE
Command11=ID_APP_ABOUT
CommandCount=11

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_UNDO
Command5=ID_EDIT_CUT
Command6=ID_EDIT_COPY
Command7=ID_EDIT_PASTE
Command8=ID_EDIT_UNDO
Command9=ID_EDIT_CUT
Command10=ID_EDIT_COPY
Command11=ID_EDIT_PASTE
Command12=ID_NEXT_PANE
Command13=ID_PREV_PANE
CommandCount=13

[CLS:CMyThread]
Type=0
HeaderFile=MyThread.h
ImplementationFile=MyThread.cpp
BaseClass=CWinThread
Filter=N
LastObject=CMyThread

[CLS:CMyWnd]
Type=0
HeaderFile=MyWnd.h
ImplementationFile=MyWnd.cpp
BaseClass=CFrameWnd
Filter=T
LastObject=CMyWnd
VirtualFilter=fWC

