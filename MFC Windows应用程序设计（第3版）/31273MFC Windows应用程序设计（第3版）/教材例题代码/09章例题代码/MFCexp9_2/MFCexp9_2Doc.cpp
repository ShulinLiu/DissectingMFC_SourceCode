// MFCexp9_2Doc.cpp : implementation of the CMFCexp9_2Doc class
//

#include "stdafx.h"
#include "MFCexp9_2.h"

#include "MFCexp9_2Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_2Doc

IMPLEMENT_DYNCREATE(CMFCexp9_2Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp9_2Doc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp9_2Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_2Doc construction/destruction

CMFCexp9_2Doc::CMFCexp9_2Doc()
{
	// TODO: add one-time construction code here

}

CMFCexp9_2Doc::~CMFCexp9_2Doc()
{
}

BOOL CMFCexp9_2Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_2Doc serialization

void CMFCexp9_2Doc::Serialize(CArchive& ar)
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
// CMFCexp9_2Doc diagnostics

#ifdef _DEBUG
void CMFCexp9_2Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp9_2Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp9_2Doc commands
