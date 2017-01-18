// MyFirDoc.cpp : implementation of the CMyFirDoc class
//

#include "stdafx.h"
#include "MyFir.h"

#include "MyFirDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMyFirDoc

IMPLEMENT_DYNCREATE(CMyFirDoc, CDocument)

BEGIN_MESSAGE_MAP(CMyFirDoc, CDocument)
	//{{AFX_MSG_MAP(CMyFirDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyFirDoc construction/destruction

CMyFirDoc::CMyFirDoc()
{
	// TODO: add one-time construction code here

}

CMyFirDoc::~CMyFirDoc()
{
}

BOOL CMyFirDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMyFirDoc serialization

void CMyFirDoc::Serialize(CArchive& ar)
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
// CMyFirDoc diagnostics

#ifdef _DEBUG
void CMyFirDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMyFirDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMyFirDoc commands
