// MFCexp3_4Doc.cpp : implementation of the CMFCexp3_4Doc class
//

#include "stdafx.h"
#include "MFCexp3_4.h"

#include "MFCexp3_4Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp3_4Doc

IMPLEMENT_DYNCREATE(CMFCexp3_4Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFCexp3_4Doc, CDocument)
	//{{AFX_MSG_MAP(CMFCexp3_4Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp3_4Doc construction/destruction

CMFCexp3_4Doc::CMFCexp3_4Doc()
{
	// TODO: add one-time construction code here
	m_Text="Hello!";	//在文档构造函数中初始化字符指针
}

CMFCexp3_4Doc::~CMFCexp3_4Doc()
{
}

BOOL CMFCexp3_4Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCexp3_4Doc serialization

void CMFCexp3_4Doc::Serialize(CArchive& ar)
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
// CMFCexp3_4Doc diagnostics

#ifdef _DEBUG
void CMFCexp3_4Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCexp3_4Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp3_4Doc commands
