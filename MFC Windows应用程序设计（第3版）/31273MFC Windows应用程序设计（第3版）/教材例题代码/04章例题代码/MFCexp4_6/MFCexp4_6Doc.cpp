// MFCexp4_6Doc.cpp : implementation of the CMFCexp4_6Doc class
//

#include "stdafx.h"
#include "MFCexp4_6.h"

#include "MFCexp4_6Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_6Doc

IMPLEMENT_DYNCREATE(CMFCexp4_6Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp4_6Doc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp4_6Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_6Doc construction/destruction

CMFCexp4_6Doc::CMFCexp4_6Doc()
{
	// TODO: add one-time construction code here

}

CMFCexp4_6Doc::~CMFCexp4_6Doc()
{
}

BOOL CMFCexp4_6Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_6Doc serialization

void CMFCexp4_6Doc::Serialize(CArchive& ar)
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
// CMFCexp4_6Doc diagnostics

#ifdef _DEBUG
void CMFCexp4_6Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp4_6Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp4_6Doc commands
