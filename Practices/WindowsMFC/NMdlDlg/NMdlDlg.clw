; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CProperty
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "NMdlDlg.h"
LastPage=0

ClassCount=9
Class1=CNMdlDlgApp
Class2=CNMdlDlgDoc
Class3=CNMdlDlgView
Class4=CMainFrame

ResourceCount=6
Resource1=IDD_DIALOG3
Resource2=IDD_DIALOG1
Class5=CAboutDlg
Class6=CNonMdlDlg
Resource3=IDD_DIALOG2
Class7=CTextOptions
Resource4=IDD_ABOUTBOX
Class8=CBitmapOptions
Resource5=IDR_MAINFRAME
Class9=CProperty
Resource6=IDD_DIALOG4

[CLS:CNMdlDlgApp]
Type=0
HeaderFile=NMdlDlg.h
ImplementationFile=NMdlDlg.cpp
Filter=N

[CLS:CNMdlDlgDoc]
Type=0
HeaderFile=NMdlDlgDoc.h
ImplementationFile=NMdlDlgDoc.cpp
Filter=N

[CLS:CNMdlDlgView]
Type=0
HeaderFile=NMdlDlgView.h
ImplementationFile=NMdlDlgView.cpp
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
HeaderFile=NMdlDlg.cpp
ImplementationFile=NMdlDlg.cpp
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
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
Command16=ID_APP_ABOUT
CommandCount=16

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[DLG:IDD_DIALOG1]
Type=1
Class=CNonMdlDlg
ControlCount=2
Control1=IDC_EDIT1,edit,1350631552
Control2=IDC_BUTTON1,button,1342242816

[CLS:CNonMdlDlg]
Type=0
HeaderFile=NonMdlDlg.h
ImplementationFile=NonMdlDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CNonMdlDlg
VirtualFilter=dWC

[DLG:IDD_DIALOG2]
Type=1
Class=CTextOptions
ControlCount=4
Control1=IDC_STATIC,button,1342177287
Control2=IDC_RADIO1,button,1342177289
Control3=IDC_RADIO2,button,1342177289
Control4=IDC_RADIO3,button,1342177289

[CLS:CTextOptions]
Type=0
HeaderFile=TextOptions.h
ImplementationFile=TextOptions.cpp
BaseClass=CPropertyPage
Filter=D
LastObject=CTextOptions

[DLG:IDD_DIALOG3]
Type=1
Class=CBitmapOptions
ControlCount=0

[CLS:CBitmapOptions]
Type=0
HeaderFile=BitmapOptions.h
ImplementationFile=BitmapOptions.cpp
BaseClass=CPropertyPage
Filter=D
LastObject=CBitmapOptions

[DLG:IDD_DIALOG4]
Type=1
Class=CProperty
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_BUTTON1,button,1342242816

[CLS:CProperty]
Type=0
HeaderFile=Property.h
ImplementationFile=Property.cpp
BaseClass=CDialog
Filter=D
LastObject=CProperty

