// BMPView.cpp : implementation file
//

#include "stdafx.h"
#include "MFCexp3_4.h"
#include "BMPView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBMPView

IMPLEMENT_DYNCREATE(CBMPView, CView)

CBMPView::CBMPView()
{
}

CBMPView::~CBMPView()
{
}


BEGIN_MESSAGE_MAP(CBMPView, CView)
	//{{AFX_MSG_MAP(CBMPView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBMPView drawing

void CBMPView::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: add draw code here
}

/////////////////////////////////////////////////////////////////////////////
// CBMPView diagnostics

#ifdef _DEBUG
void CBMPView::AssertValid() const
{
	CView::AssertValid();
}

void CBMPView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CBMPView message handlers
