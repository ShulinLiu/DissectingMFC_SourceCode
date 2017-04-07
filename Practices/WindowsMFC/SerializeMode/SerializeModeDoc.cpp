// SerializeModeDoc.cpp : implementation of the CSerializeModeDoc class
//

#include "stdafx.h"
#include "SerializeMode.h"

#include "SerializeModeDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSerializeModeDoc

IMPLEMENT_DYNCREATE(CSerializeModeDoc, CDocument)

BEGIN_MESSAGE_MAP(CSerializeModeDoc, CDocument)
	//{{AFX_MSG_MAP(CSerializeModeDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSerializeModeDoc construction/destruction

CSerializeModeDoc::CSerializeModeDoc()
{
	// TODO: add one-time construction code here
	m_lLetter=' ';			//初始化字符变量					

}

CSerializeModeDoc::~CSerializeModeDoc()
{
}

BOOL CSerializeModeDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CSerializeModeDoc serialization

void CSerializeModeDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring( ))
	{
		ar<<m_lLetter;
	}
	else
	{
		ar>>m_lLetter;
	}
	m_Letters.Serialize(ar);//调用CLetter对象的序列化函数
}

/////////////////////////////////////////////////////////////////////////////
// CSerializeModeDoc diagnostics

#ifdef _DEBUG
void CSerializeModeDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CSerializeModeDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSerializeModeDoc commands
