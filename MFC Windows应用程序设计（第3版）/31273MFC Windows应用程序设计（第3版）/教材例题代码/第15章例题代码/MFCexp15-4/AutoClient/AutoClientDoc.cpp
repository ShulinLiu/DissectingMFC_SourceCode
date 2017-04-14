// AutoClientDoc.cpp : implementation of the CAutoClientDoc class
//

#include "stdafx.h"
#include "AutoClient.h"

#include "AutoClientDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAutoClientDoc

IMPLEMENT_DYNCREATE(CAutoClientDoc, CDocument)

BEGIN_MESSAGE_MAP(CAutoClientDoc, CDocument)
	//{{AFX_MSG_MAP(CAutoClientDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAutoClientDoc construction/destruction

CAutoClientDoc::CAutoClientDoc()
{
	// TODO: add one-time construction code here

}

CAutoClientDoc::~CAutoClientDoc()
{
}

BOOL CAutoClientDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CAutoClientDoc serialization

void CAutoClientDoc::Serialize(CArchive& ar)
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
// CAutoClientDoc diagnostics

#ifdef _DEBUG
void CAutoClientDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CAutoClientDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CAutoClientDoc commands
