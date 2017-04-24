// MyVC1View.cpp : implementation of the CMyVC1View class
//

#include "stdafx.h"
#include "MyVC1.h"

#include "MyVC1Doc.h"
#include "MyVC1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMyVC1View

IMPLEMENT_DYNCREATE(CMyVC1View, CView)

BEGIN_MESSAGE_MAP(CMyVC1View, CView)
	//{{AFX_MSG_MAP(CMyVC1View)
	ON_COMMAND(ID_WELCOME, OnWelcome)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyVC1View construction/destruction

CMyVC1View::CMyVC1View()
{
	// TODO: add construction code here

}

CMyVC1View::~CMyVC1View()
{
}

BOOL CMyVC1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMyVC1View drawing

void CMyVC1View::OnDraw(CDC* pDC)
{
	CMyVC1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here

	CFont fnBig;
	CFont* pOldFont;
	fnBig.CreatePointFont(180,"Arial",pDC);
	pOldFont = pDC->SelectObject(&fnBig);

	Text1();
	pDC->TextOut(20,50,"在OnDraw中直接调用DC对象，不需要使用GetDC和ReleaseDC函数");
	Text2(pDC);
	Text3(pDC);
	Text4(pDC);
	pDC->TextOut(20,100,"现在实现了文字和数据输出字体大小的设定");
	pDC->SelectObject(pOldFont);
	Text5(pDC);
}

/////////////////////////////////////////////////////////////////////////////
// CMyVC1View printing

BOOL CMyVC1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMyVC1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMyVC1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMyVC1View diagnostics

#ifdef _DEBUG
void CMyVC1View::AssertValid() const
{
	CView::AssertValid();
}

void CMyVC1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMyVC1Doc* CMyVC1View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMyVC1Doc)));
	return (CMyVC1Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMyVC1View message handlers

void CMyVC1View::OnWelcome() 
{
	// TODO: Add your command handler code here
	MessageBox("Welcome to use VC++ program!");
}

void CMyVC1View::Text1()
{
	CDC* pDC;//define a pointer to CDC class
	pDC = GetDC();
	pDC->TextOut(20,10,"VC++设备环境的调入与释放。");//print Text
	ReleaseDC(pDC);//release 设备环境
}

void CMyVC1View::Text2(CDC* pDC)
{
	char buf[20];
	int x1,y1;
	x1 = 20;
	y1 = 80;
	sprintf(buf,"(%d,%d)",x1,y1);
	pDC->TextOut(x1,y1,buf,strlen(buf));
}

void CMyVC1View::Text3(CDC *pDC)
{
	char buf[20];
	double x2,y2;
	x2 = 10.55;
	y2 = 60.66;
	sprintf(buf,"(%f,%f)",x2,y2);
	pDC->TextOut(110,80,buf,strlen(buf));
}

void CMyVC1View::Text4(CDC *pDC)
{
	CString Sc1;
	double x2,y2;
	x2 = 10.55;
	y2 = 60.66;
	Sc1.Format("(%5.2f,%5.2f)",x2,y2);
	pDC->TextOut(370,80,Sc1,strlen(Sc1));
}

void CMyVC1View::Fontstr(CDC *pDC, double x, double y, CString font, float nPoi, CString str)
{
	CFont fnBig1;
	CFont* pOldFont1;
	fnBig1.CreateFont(-int(nPoi),0,0,0,400,FALSE,FALSE,0,GB2312_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,
		DEFAULT_QUALITY,DEFAULT_PITCH|FF_SWISS,font);
	pOldFont1 = pDC->SelectObject(&fnBig1); //change pDC's font to defined font: fnBig1
	pDC->TextOut(int(x),int(y),str);
	pDC->SelectObject(pOldFont1);
}

void CMyVC1View::Text5(CDC *pDC)
{
	CString str_aa;
	str_aa = ("在VC++中实现字体及其大小的随意变化");
	Fontstr(pDC,20,180,"黑体",28.0f,str_aa+"(黑体)");
	Fontstr(pDC,20,220,"宋体",32.0f,str_aa+"(宋体)");
	Fontstr(pDC,20,260,"楷体_GB2312",40.0f,str_aa+"(楷体)");
}
