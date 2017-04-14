// AutoServerDoc.cpp : implementation of the CAutoServerDoc class
//

#include "stdafx.h"
#include "AutoServer.h"

#include "AutoServerDoc.h"
#include "SrvrItem.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAutoServerDoc

IMPLEMENT_DYNCREATE(CAutoServerDoc, COleServerDoc)

BEGIN_MESSAGE_MAP(CAutoServerDoc, COleServerDoc)
	//{{AFX_MSG_MAP(CAutoServerDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAutoServerDoc construction/destruction

CAutoServerDoc::CAutoServerDoc()
{
	// Use OLE compound files
	EnableCompoundFile();

	// TODO: add one-time construction code here
	m_diameter=200;
	m_xPos=20;
	m_yPos=20;

}

CAutoServerDoc::~CAutoServerDoc()
{
}

BOOL CAutoServerDoc::OnNewDocument()
{
	if (!COleServerDoc::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CAutoServerDoc server implementation

COleServerItem* CAutoServerDoc::OnGetEmbeddedItem()
{
	// OnGetEmbeddedItem is called by the framework to get the COleServerItem
	//  that is associated with the document.  It is only called when necessary.

	CAutoServerSrvrItem* pItem = new CAutoServerSrvrItem(this);
	ASSERT_VALID(pItem);
	return pItem;
}



/////////////////////////////////////////////////////////////////////////////
// CAutoServerDoc serialization

void CAutoServerDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
		{
			ar<<m_diameter;
			ar<<m_xPos;
			ar<<m_yPos;
		}
	else
		{
			ar>>m_diameter;
			ar>>m_xPos;
			ar>>m_yPos;
		}
}

/////////////////////////////////////////////////////////////////////////////
// CAutoServerDoc diagnostics

#ifdef _DEBUG
void CAutoServerDoc::AssertValid() const
{
	COleServerDoc::AssertValid();
}

void CAutoServerDoc::Dump(CDumpContext& dc) const
{
	COleServerDoc::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CAutoServerDoc commands
