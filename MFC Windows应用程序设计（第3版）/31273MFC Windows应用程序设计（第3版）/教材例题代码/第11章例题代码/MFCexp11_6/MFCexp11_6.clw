; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CNonMdlDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "MFCexp11_6.h"
LastPage=0

ClassCount=6
Class1=CMFCexp11_6App
Class2=CMFCexp11_6Doc
Class3=CMFCexp11_6View
Class4=CMainFrame

ResourceCount=3
Resource1=IDR_MAINFRAME
Resource2=IDD_ABOUTBOX
Class5=CAboutDlg
Class6=CNonMdlDlg
Resource3=IDD_DIALOG1

[CLS:CMFCexp11_6App]
Type=0
HeaderFile=MFCexp11_6.h
ImplementationFile=MFCexp11_6.cpp
Filter=N

[CLS:CMFCexp11_6Doc]
Type=0
HeaderFile=MFCexp11_6Doc.h
ImplementationFile=MFCexp11_6Doc.cpp
Filter=N

[CLS:CMFCexp11_6View]
Type=0
HeaderFile=MFCexp11_6View.h
ImplementationFile=MFCexp11_6View.cpp
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
HeaderFile=MFCexp11_6.cpp
ImplementationFile=MFCexp11_6.cpp
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

[DLG:IDD_DIALOG1]
Type=1
Class=CNonMdlDlg
ControlCount=2
Control1=IDCANCEL,button,1342242816
Control2=IDC_EDIT1,edit,1350631552

[CLS:CNonMdlDlg]
Type=0
HeaderFile=NonMdlDlg.h
ImplementationFile=NonMdlDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=IDCANCEL
VirtualFilter=dWC

