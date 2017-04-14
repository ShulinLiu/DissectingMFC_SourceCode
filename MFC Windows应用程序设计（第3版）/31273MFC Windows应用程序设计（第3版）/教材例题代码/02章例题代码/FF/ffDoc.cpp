// ffDoc.cpp : implementation of the CFfDoc class
//

#include "stdafx.h"
#include "ff.h"

#include "ffDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CFfDoc

IMPLEMENT_DYNCREATE(CFfDoc, CDocument)

BEGIN_MESSAGE_MAP(CFfDoc, CDocument)
	//{{AFX_MSG_MAP(CFfDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFfDoc construction/destruction

CFfDoc::CFfDoc()
{
	// TODO: add one-time construction code here

}

CFfDoc::~CFfDoc()
{
}

BOOL CFfDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CFfDoc serialization

void CFfDoc::Serialize(CArchive& ar)
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
// CFfDoc diagnostics

#ifdef _DEBUG
void CFfDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CFfDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CFfDoc commands
