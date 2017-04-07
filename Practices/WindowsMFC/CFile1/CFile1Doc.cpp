// CFile1Doc.cpp : implementation of the CCFile1Doc class
//

#include "stdafx.h"
#include "CFile1.h"

#include "CFile1Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCFile1Doc

IMPLEMENT_DYNCREATE(CCFile1Doc, CDocument)

BEGIN_MESSAGE_MAP(CCFile1Doc, CDocument)
	//{{AFX_MSG_MAP(CCFile1Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCFile1Doc construction/destruction

CCFile1Doc::CCFile1Doc()
{
	// TODO: add one-time construction code here

}

CCFile1Doc::~CCFile1Doc()
{
}

BOOL CCFile1Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CCFile1Doc serialization

void CCFile1Doc::Serialize(CArchive& ar)
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
// CCFile1Doc diagnostics

#ifdef _DEBUG
void CCFile1Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCFile1Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCFile1Doc commands
