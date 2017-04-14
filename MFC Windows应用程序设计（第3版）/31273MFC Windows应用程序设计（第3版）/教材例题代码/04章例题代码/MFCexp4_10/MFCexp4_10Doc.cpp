// MFCexp4_10Doc.cpp : implementation of the CMFCexp4_10Doc class
//

#include "stdafx.h"
#include "MFCexp4_10.h"

#include "MFCexp4_10Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_10Doc

IMPLEMENT_DYNCREATE(CMFCexp4_10Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp4_10Doc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp4_10Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_10Doc construction/destruction

CMFCexp4_10Doc::CMFCexp4_10Doc()
{
	// TODO: add one-time construction code here

}

CMFCexp4_10Doc::~CMFCexp4_10Doc()
{
}

BOOL CMFCexp4_10Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_10Doc serialization

void CMFCexp4_10Doc::Serialize(CArchive& ar)
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
// CMFCexp4_10Doc diagnostics

#ifdef _DEBUG
void CMFCexp4_10Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp4_10Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_10Doc commands
