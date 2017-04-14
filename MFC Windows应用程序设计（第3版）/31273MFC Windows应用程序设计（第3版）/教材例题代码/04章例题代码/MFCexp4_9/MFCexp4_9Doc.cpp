// MFCexp4_9Doc.cpp : implementation of the CMFCexp4_9Doc class
//

#include "stdafx.h"
#include "MFCexp4_9.h"

#include "MFCexp4_9Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_9Doc

IMPLEMENT_DYNCREATE(CMFCexp4_9Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp4_9Doc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp4_9Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_9Doc construction/destruction

CMFCexp4_9Doc::CMFCexp4_9Doc()
{
	// TODO: add one-time construction code here

}

CMFCexp4_9Doc::~CMFCexp4_9Doc()
{
}

BOOL CMFCexp4_9Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_9Doc serialization

void CMFCexp4_9Doc::Serialize(CArchive& ar)
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
// CMFCexp4_9Doc diagnostics

#ifdef _DEBUG
void CMFCexp4_9Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp4_9Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_9Doc commands
