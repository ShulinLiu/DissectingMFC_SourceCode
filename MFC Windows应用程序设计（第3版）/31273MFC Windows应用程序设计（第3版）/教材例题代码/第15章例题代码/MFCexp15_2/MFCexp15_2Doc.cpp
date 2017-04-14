// MFCexp15_2Doc.cpp : implementation of the CMFCexp15_2Doc class
//

#include "stdafx.h"
#include "MFCexp15_2.h"

#include "MFCexp15_2Doc.h"
#include "SrvrItem.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp15_2Doc

IMPLEMENT_DYNCREATE(CMFCexp15_2Doc, COleServerDoc)

BEGIN_MESSAGE_MAP(CMFCexp15_2Doc, COleServerDoc)
	//{{AFX_MSG_MAP(CMFCexp15_2Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp15_2Doc construction/destruction

CMFCexp15_2Doc::CMFCexp15_2Doc()
{
	// Use OLE compound files
	EnableCompoundFile();

	// TODO: add one-time construction code here

}

CMFCexp15_2Doc::~CMFCexp15_2Doc()
{
}

BOOL CMFCexp15_2Doc::OnNewDocument()
{
	if (!COleServerDoc::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp15_2Doc server implementation

COleServerItem* CMFCexp15_2Doc::OnGetEmbeddedItem()
{
	// OnGetEmbeddedItem is called by the framework to get the COleServerItem
	//  that is associated with the document.  It is only called when necessary.

	CMFCexp15_2SrvrItem* pItem = new CMFCexp15_2SrvrItem(this);
	ASSERT_VALID(pItem);
	return pItem;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp15_2Doc serialization

void CMFCexp15_2Doc::Serialize(CArchive& ar)
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
// CMFCexp15_2Doc diagnostics

#ifdef _DEBUG
void CMFCexp15_2Doc::AssertValid() const
{
	COleServerDoc::AssertValid();
}

void CMFCexp15_2Doc::Dump(CDumpContext& dc) const
{
	COleServerDoc::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp15_2Doc commands
