; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CProperty
LastTemplate=CPropertySheet
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "MFCexp11_7.h"
LastPage=0

ClassCount=8
Class1=CMFCexp11_7App
Class2=CMFCexp11_7Doc
Class3=CMFCexp11_7View
Class4=CMainFrame

ResourceCount=5
Resource1=IDD_DIALOG1
Resource2=IDD_DIALOG2
Class5=CAboutDlg
Class6=CTextOptions
Resource3=IDD_ABOUTBOX
Class7=CBitmapOptions
Resource4=IDR_MAINFRAME
Class8=CProperty
Resource5=IDD_DIALOG3

[CLS:CMFCexp11_7App]
Type=0
HeaderFile=MFCexp11_7.h
ImplementationFile=MFCexp11_7.cpp
Filter=N

[CLS:CMFCexp11_7Doc]
Type=0
HeaderFile=MFCexp11_7Doc.h
ImplementationFile=MFCexp11_7Doc.cpp
Filter=N

[CLS:CMFCexp11_7View]
Type=0
HeaderFile=MFCexp11_7View.h
ImplementationFile=MFCexp11_7View.cpp
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
HeaderFile=MFCexp11_7.cpp
ImplementationFile=MFCexp11_7.cpp
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

[DLG:IDD_DIALOG2]
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

[DLG:IDD_DIALOG3]
Type=1
Class=?
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_BUTTON1,button,1342242816

[CLS:CProperty]
Type=0
HeaderFile=Property.h
ImplementationFile=Property.cpp
BaseClass=CPropertySheet
Filter=W
LastObject=CProperty

