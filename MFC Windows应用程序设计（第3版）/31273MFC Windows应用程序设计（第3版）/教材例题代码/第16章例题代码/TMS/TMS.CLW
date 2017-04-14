; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CtmsSet
LastTemplate=CRecordset
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "tms.h"

ClassCount=5
Class1=CTmsApp
Class2=CTmsDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Class4=CtmsSet
Class5=Cset
Resource3=IDD_TMS_DIALOG

[CLS:CTmsApp]
Type=0
HeaderFile=tms.h
ImplementationFile=tms.cpp
Filter=N

[CLS:CTmsDlg]
Type=0
HeaderFile=tmsDlg.h
ImplementationFile=tmsDlg.cpp
Filter=D
LastObject=CTmsDlg
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=tmsDlg.h
ImplementationFile=tmsDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_TMS_DIALOG]
Type=1
Class=CTmsDlg
ControlCount=15
Control1=IDOK,button,1342242817
Control2=IDC_STATIC,static,1342308352
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_EDITsno,edit,1350631552
Control6=IDC_EDITname,edit,1350631552
Control7=IDC_EDITsex,edit,1350631552
Control8=IDC_BUTTONtop,button,1342242816
Control9=IDC_BUTTONpre,button,1342242816
Control10=IDC_BUTTONnext,button,1342242816
Control11=IDC_BUTTONbottom,button,1342242816
Control12=IDC_BUTTONedit,button,1342242816
Control13=IDC_BUTTONadd,button,1342242816
Control14=IDC_BUTTONdel,button,1342242816
Control15=IDC_BUTTONrefresh,button,1342242816

[CLS:CtmsSet]
Type=0
HeaderFile=tmsSet.h
ImplementationFile=tmsSet.cpp
BaseClass=CRecordset
Filter=N
LastObject=CtmsSet
VirtualFilter=r

[DB:CtmsSet]
DB=1
DBType=ODBC
ColumnCount=5
Column1=[sno], 1, 5
Column2=[sname], 1, 10
Column3=[ssex], 1, 2
Column4=[sbirth], 11, 16
Column5=[dno], 1, 4

[CLS:Cset]
Type=0
HeaderFile=set.h
ImplementationFile=set.cpp
BaseClass=CRecordset
Filter=N
VirtualFilter=r
LastObject=Cset

[DB:Cset]
DB=1
DBType=ODBC
ColumnCount=5
Column1=[sno], 1, 5
Column2=[sname], 1, 10
Column3=[ssex], 1, 2
Column4=[sbirth], 11, 16
Column5=[dno], 1, 4

