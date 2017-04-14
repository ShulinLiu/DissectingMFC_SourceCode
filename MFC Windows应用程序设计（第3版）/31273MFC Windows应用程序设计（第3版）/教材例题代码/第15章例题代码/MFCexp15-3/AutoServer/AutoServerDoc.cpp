// AutoServerDoc.cpp : implementation of the CAutoServerDoc class
//

#include "stdafx.h"
#include "AutoServer.h"

#include "AutoServerDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAutoServerDoc

IMPLEMENT_DYNCREATE(CAutoServerDoc, CDocument)

BEGIN_MESSAGE_MAP(CAutoServerDoc, CDocument)
	//{{AFX_MSG_MAP(CAutoServerDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CAutoServerDoc, CDocument)
	//{{AFX_DISPATCH_MAP(CAutoServerDoc)
	DISP_PROPERTY_EX(CAutoServerDoc, "Diameter", GetDiameter, SetDiameter, VT_I2)
	DISP_FUNCTION(CAutoServerDoc, "DispSvWindow", DispSvWindow, VT_EMPTY, VTS_NONE)
	//}}AFX_DISPATCH_MAP
END_DISPATCH_MAP()

// Note: we add support for IID_IAutoServer to support typesafe binding
//  from VBA.  This IID must match the GUID that is attached to the 
//  dispinterface in the .ODL file.

// {8CE8E65F-B8D7-4383-AB63-6C2744300535}
static const IID IID_IAutoServer =
{ 0x8ce8e65f, 0xb8d7, 0x4383, { 0xab, 0x63, 0x6c, 0x27, 0x44, 0x30, 0x5, 0x35 } };

BEGIN_INTERFACE_MAP(CAutoServerDoc, CDocument)
	INTERFACE_PART(CAutoServerDoc, IID_IAutoServer, Dispatch)
END_INTERFACE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAutoServerDoc construction/destruction

CAutoServerDoc::CAutoServerDoc()
{
	// TODO: add one-time construction code here
	m_diameter=200;
	m_xPos=20;
	m_yPos=20;

	EnableAutomation();

	AfxOleLockApp();
}

CAutoServerDoc::~CAutoServerDoc()
{
	AfxOleUnlockApp();
}

BOOL CAutoServerDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CAutoServerDoc serialization

void CAutoServerDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
		{
			ar<<m_diameter;
			ar<<m_xPos;
			ar<<m_yPos;
		}
	else
		{
			ar>>m_diameter;
			ar>>m_xPos;
			ar>>m_yPos;
		}
}

/////////////////////////////////////////////////////////////////////////////
// CAutoServerDoc diagnostics

#ifdef _DEBUG
void CAutoServerDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CAutoServerDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CAutoServerDoc commands

short CAutoServerDoc::GetDiameter() 
{
	// TODO: Add your property handler here
	return m_diameter;
}

void CAutoServerDoc::SetDiameter(short nNewValue) 
{
	m_diameter=nNewValue;
	UpdateAllViews(NULL);
	SetModifiedFlag();

}

void CAutoServerDoc::DispSvWindow() 
{
	// TODO: Add your dispatch handler code here
	CFrameWnd*pWnd=(CFrameWnd*)AfxGetMainWnd();//获得窗口指针
	pWnd->ActivateFrame(SW_SHOW);					//显示窗口
}
