// MFCexp11_6Doc.cpp : implementation of the CMFCexp11_6Doc class
//

#include "stdafx.h"
#include "MFCexp11_6.h"

#include "MFCexp11_6Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_6Doc

IMPLEMENT_DYNCREATE(CMFCexp11_6Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp11_6Doc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp11_6Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_6Doc construction/destruction

CMFCexp11_6Doc::CMFCexp11_6Doc()
{
	// TODO: add one-time construction code here

}

CMFCexp11_6Doc::~CMFCexp11_6Doc()
{
}

BOOL CMFCexp11_6Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_6Doc serialization

void CMFCexp11_6Doc::Serialize(CArchive& ar)
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
// CMFCexp11_6Doc diagnostics

#ifdef _DEBUG
void CMFCexp11_6Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp11_6Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp11_6Doc commands
