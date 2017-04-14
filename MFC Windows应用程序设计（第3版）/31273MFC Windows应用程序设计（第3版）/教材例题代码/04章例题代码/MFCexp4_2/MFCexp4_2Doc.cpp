// MFCexp4_2Doc.cpp : implementation of the CMFCexp4_2Doc class
//

#include "stdafx.h"
#include "MFCexp4_2.h"

#include "MFCexp4_2Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_2Doc

IMPLEMENT_DYNCREATE(CMFCexp4_2Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp4_2Doc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp4_2Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_2Doc construction/destruction

CMFCexp4_2Doc::CMFCexp4_2Doc()
{
	// TODO: add one-time construction code here

}

CMFCexp4_2Doc::~CMFCexp4_2Doc()
{
}

BOOL CMFCexp4_2Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_2Doc serialization

void CMFCexp4_2Doc::Serialize(CArchive& ar)
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
// CMFCexp4_2Doc diagnostics

#ifdef _DEBUG
void CMFCexp4_2Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp4_2Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_2Doc commands
