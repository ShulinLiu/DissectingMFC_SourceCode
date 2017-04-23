// MyVC1Doc.cpp : implementation of the CMyVC1Doc class
//

#include "stdafx.h"
#include "MyVC1.h"

#include "MyVC1Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMyVC1Doc

IMPLEMENT_DYNCREATE(CMyVC1Doc, CDocument)

BEGIN_MESSAGE_MAP(CMyVC1Doc, CDocument)
	//{{AFX_MSG_MAP(CMyVC1Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyVC1Doc construction/destruction

CMyVC1Doc::CMyVC1Doc()
{
	// TODO: add one-time construction code here

}

CMyVC1Doc::~CMyVC1Doc()
{
}

BOOL CMyVC1Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMyVC1Doc serialization

void CMyVC1Doc::Serialize(CArchive& ar)
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
// CMyVC1Doc diagnostics

#ifdef _DEBUG
void CMyVC1Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMyVC1Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMyVC1Doc commands
