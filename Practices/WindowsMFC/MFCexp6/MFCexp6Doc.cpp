// MFCexp6Doc.cpp : implementation of the CMFCexp6Doc class
//

#include "stdafx.h"
#include "MFCexp6.h"

#include "MFCexp6Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6Doc

IMPLEMENT_DYNCREATE(CMFCexp6Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp6Doc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp6Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6Doc construction/destruction

CMFCexp6Doc::CMFCexp6Doc()
{
	// TODO: add one-time construction code here

}

CMFCexp6Doc::~CMFCexp6Doc()
{
}

BOOL CMFCexp6Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp6Doc serialization

void CMFCexp6Doc::Serialize(CArchive& ar)
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
// CMFCexp6Doc diagnostics

#ifdef _DEBUG
void CMFCexp6Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp6Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp6Doc commands
