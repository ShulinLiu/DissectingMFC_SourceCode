// ControlTool2Doc.cpp : implementation of the CControlTool2Doc class
//

#include "stdafx.h"
#include "ControlTool2.h"

#include "ControlTool2Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CControlTool2Doc

IMPLEMENT_DYNCREATE(CControlTool2Doc, CDocument)

BEGIN_MESSAGE_MAP(CControlTool2Doc, CDocument)
	//{{AFX_MSG_MAP(CControlTool2Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CControlTool2Doc construction/destruction

CControlTool2Doc::CControlTool2Doc()
{
	// TODO: add one-time construction code here

}

CControlTool2Doc::~CControlTool2Doc()
{
}

BOOL CControlTool2Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CControlTool2Doc serialization

void CControlTool2Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CControlTool2Doc diagnostics

#ifdef _DEBUG
void CControlTool2Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CControlTool2Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CControlTool2Doc commands
