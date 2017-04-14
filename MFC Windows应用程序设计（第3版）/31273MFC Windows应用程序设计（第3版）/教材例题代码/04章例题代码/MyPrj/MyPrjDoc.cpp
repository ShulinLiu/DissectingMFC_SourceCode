// MyPrjDoc.cpp : implementation of the CMyPrjDoc class
//

#include "stdafx.h"
#include "MyPrj.h"

#include "MyPrjDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMyPrjDoc

IMPLEMENT_DYNCREATE(CMyPrjDoc, CDocument)

BEGIN_MESSAGE_MAP(CMyPrjDoc, CDocument)
	//{{AFX_MSG_MAP(CMyPrjDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyPrjDoc construction/destruction

CMyPrjDoc::CMyPrjDoc()
{
	// TODO: add one-time construction code here
	m_pText="Hello World!";
}

CMyPrjDoc::~CMyPrjDoc()
{
}

BOOL CMyPrjDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMyPrjDoc serialization

void CMyPrjDoc::Serialize(CArchive& ar)
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
// CMyPrjDoc diagnostics

#ifdef _DEBUG
void CMyPrjDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMyPrjDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMyPrjDoc commands
