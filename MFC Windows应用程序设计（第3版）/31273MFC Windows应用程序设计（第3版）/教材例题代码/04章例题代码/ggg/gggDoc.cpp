// gggDoc.cpp : implementation of the CGggDoc class
//

#include "stdafx.h"
#include "ggg.h"

#include "gggDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGggDoc

IMPLEMENT_DYNCREATE(CGggDoc, CDocument)

BEGIN_MESSAGE_MAP(CGggDoc, CDocument)
	//{{AFX_MSG_MAP(CGggDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGggDoc construction/destruction

CGggDoc::CGggDoc()
{
	// TODO: add one-time construction code here

}

CGggDoc::~CGggDoc()
{
}

BOOL CGggDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CGggDoc serialization

void CGggDoc::Serialize(CArchive& ar)
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
// CGggDoc diagnostics

#ifdef _DEBUG
void CGggDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CGggDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CGggDoc commands
