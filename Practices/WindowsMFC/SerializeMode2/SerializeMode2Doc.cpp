// SerializeMode2Doc.cpp : implementation of the CSerializeMode2Doc class
//

#include "stdafx.h"
#include "SerializeMode2.h"

#include "SerializeMode2Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSerializeMode2Doc

IMPLEMENT_DYNCREATE(CSerializeMode2Doc, CDocument)

BEGIN_MESSAGE_MAP(CSerializeMode2Doc, CDocument)
	//{{AFX_MSG_MAP(CSerializeMode2Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSerializeMode2Doc construction/destruction

CSerializeMode2Doc::CSerializeMode2Doc()
{
	// TODO: add one-time construction code here

}

CSerializeMode2Doc::~CSerializeMode2Doc()
{
}

BOOL CSerializeMode2Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CSerializeMode2Doc serialization

void CSerializeMode2Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
		m_LetterList.Serialize(ar);
}

void CSerializeMode2Doc::NewLetter(int x,int y)
{
	CLetter* pLetterItem = new CLetter('m',x,y);//创建新对象
	m_LetterList.AddTail(pLetterItem);		//将新对象加入链表尾部
	SetModifiedFlag( );  					//设置文档修改标志
}
void CSerializeMode2Doc::DrawLetter(CDC*pDC )
{
	POSITION pos=m_LetterList.GetHeadPosition();//获得链表头位置	
	while(pos!=NULL)
	{
		CLetter*Letter=m_LetterList.GetNext(pos);//获得链表元素
		pDC->TextOut(Letter->m_X-5,			//显示
			Letter->m_Y-12,
			Letter->m_sLetter);
	}
}


/////////////////////////////////////////////////////////////////////////////
// CSerializeMode2Doc diagnostics

#ifdef _DEBUG
void CSerializeMode2Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CSerializeMode2Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSerializeMode2Doc commands
