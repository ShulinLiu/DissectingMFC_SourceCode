// MFCexp6_1Doc.cpp : implementation of the CMFCexp6_1Doc class
//

#include "stdafx.h"
#include "MFCexp6_1.h"

#include "MFCexp6_1Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6_1Doc

IMPLEMENT_DYNCREATE(CMFCexp6_1Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp6_1Doc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp6_1Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6_1Doc construction/destruction

CMFCexp6_1Doc::CMFCexp6_1Doc()
{
	// TODO: add one-time construction code here

}

CMFCexp6_1Doc::~CMFCexp6_1Doc()
{
}

BOOL CMFCexp6_1Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp6_1Doc serialization

void CMFCexp6_1Doc::Serialize(CArchive& ar)
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
// CMFCexp6_1Doc diagnostics

#ifdef _DEBUG
void CMFCexp6_1Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp6_1Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6_1Doc commands
