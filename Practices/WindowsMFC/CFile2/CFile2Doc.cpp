// CFile2Doc.cpp : implementation of the CCFile2Doc class
//

#include "stdafx.h"
#include "CFile2.h"

#include "CFile2Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCFile2Doc

IMPLEMENT_DYNCREATE(CCFile2Doc, CDocument)

BEGIN_MESSAGE_MAP(CCFile2Doc, CDocument)
	//{{AFX_MSG_MAP(CCFile2Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCFile2Doc construction/destruction

CCFile2Doc::CCFile2Doc()
{
	// TODO: add one-time construction code here

}

CCFile2Doc::~CCFile2Doc()
{
}

BOOL CCFile2Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CCFile2Doc serialization

void CCFile2Doc::Serialize(CArchive& ar)
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
// CCFile2Doc diagnostics

#ifdef _DEBUG
void CCFile2Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCFile2Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCFile2Doc commands
