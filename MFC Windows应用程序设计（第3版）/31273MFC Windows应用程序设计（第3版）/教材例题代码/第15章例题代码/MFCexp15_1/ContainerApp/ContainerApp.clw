; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CContainerAppView
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "ContainerApp.h"
LastPage=0

ClassCount=5
Class1=CContainerAppApp
Class2=CContainerAppDoc
Class3=CContainerAppView
Class4=CMainFrame

ResourceCount=4
Resource1=IDR_CNTR_INPLACE
Resource2=IDR_MAINFRAME
Class5=CAboutDlg
Resource4=IDD_ABOUTBOX

[CLS:CContainerAppApp]
Type=0
HeaderFile=ContainerApp.h
ImplementationFile=ContainerApp.cpp
Filter=N

[CLS:CContainerAppDoc]
Type=0
HeaderFile=ContainerAppDoc.h
ImplementationFile=ContainerAppDoc.cpp
Filter=N

[CLS:CContainerAppView]
Type=0
HeaderFile=ContainerAppView.h
ImplementationFile=ContainerAppView.cpp
Filter=C
LastObject=CContainerAppView
BaseClass=CView
VirtualFilter=VWC

[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T



[CLS:CAboutDlg]
Type=0
HeaderFile=ContainerApp.cpp
ImplementationFile=ContainerApp.cpp
Filter=D

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
Command11=ID_EDIT_PASTE_SPECIAL
Command12=ID_OLE_INSERT_NEW
Command13=ID_OLE_EDIT_LINKS
Command14=ID_OLE_VERB_FIRST
Command15=ID_APP_ABOUT
CommandCount=15

[MNU:IDR_CNTR_INPLACE]
Type=1
Class=CContainerAppView
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_MRU_FILE1
Command6=ID_APP_EXIT
CommandCount=6

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
Command14=ID_CANCEL_EDIT_CNTR
CommandCount=14

[ACL:IDR_CNTR_INPLACE]
Type=1
Class=CContainerAppView
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_NEXT_PANE
Command5=ID_PREV_PANE
Command6=ID_CANCEL_EDIT_CNTR
CommandCount=6

