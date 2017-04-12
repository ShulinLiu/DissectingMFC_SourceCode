// AFXDlgView.cpp : implementation of the CAFXDlgView class
//

#include "stdafx.h"
#include "AFXDlg.h"

#include "AFXDlgDoc.h"
#include "AFXDlgView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAFXDlgView

IMPLEMENT_DYNCREATE(CAFXDlgView, CView)

BEGIN_MESSAGE_MAP(CAFXDlgView, CView)
	//{{AFX_MSG_MAP(CAFXDlgView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAFXDlgView construction/destruction

CAFXDlgView::CAFXDlgView()
{
	// TODO: add construction code here
	m_fontColor=RGB(0,0,0);		//设置字体颜色
//给结构m_logFont各成员赋值，以描述默认字体
	m_logFont.lfHeight = 48;
	m_logFont.lfWidth = 0;
	m_logFont.lfEscapement = 0;
	m_logFont.lfOrientation = 0;
	m_logFont.lfWeight = FW_NORMAL;
	m_logFont.lfItalic = 0;
	m_logFont.lfUnderline = 0;
	m_logFont.lfStrikeOut = 0;
	m_logFont.lfCharSet = 16;
	m_logFont.lfOutPrecision = OUT_DEFAULT_PRECIS;
	m_logFont.lfClipPrecision = CLIP_DEFAULT_PRECIS;
	m_logFont.lfQuality = PROOF_QUALITY;
	m_logFont.lfPitchAndFamily = VARIABLE_PITCH | FF_ROMAN;
	strcpy(m_logFont.lfFaceName, "Times New Roman");    
	m_pFont = new CFont;						
	m_pFont->CreateFontIndirect(&m_logFont);//创建字体对象
}

CAFXDlgView::~CAFXDlgView()
{
}

BOOL CAFXDlgView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CAFXDlgView drawing

void CAFXDlgView::OnDraw(CDC* pDC)
{
	CAFXDlgDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	CFont* oldFont = (CFont*)pDC->SelectObject(m_pFont);//将字体选入环境
	pDC->SetTextColor(m_fontColor);	//设置字体颜色
	pDC->TextOut(20, 60, "这是一个字体对话框的测试程序");
	pDC->SelectObject(oldFont);		//从环境中删除字体
}

/////////////////////////////////////////////////////////////////////////////
// CAFXDlgView printing

BOOL CAFXDlgView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CAFXDlgView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CAFXDlgView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CAFXDlgView diagnostics

#ifdef _DEBUG
void CAFXDlgView::AssertValid() const
{
	CView::AssertValid();
}

void CAFXDlgView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CAFXDlgDoc* CAFXDlgView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAFXDlgDoc)));
	return (CAFXDlgDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CAFXDlgView message handlers

void CAFXDlgView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
/*	char*filters="Word文档(*.doc)|*.doc|位图(*.bmp)|*.bmp|全部文件(*.*)|*.*";//文件对话框
	CFileDialog fileDlg(TRUE,NULL,"*.doc",NULL,filters);
	int result=fileDlg.DoModal();
	if(result=IDOK)
		m_openfileName=fileDlg.GetFileName();
*/

	CFontDialog fontDialog(&m_logFont);//定义字体对话框对象
	int result = fontDialog.DoModal( );//显示字体对话框
	if (result == IDOK)
	{
		delete m_pFont;					//删除旧字体对象
		m_pFont = new CFont;	
		//创建新字体对象
    		m_pFont->CreateFontIndirect(&m_logFont); 
		//获取用户选择的字体颜色
		m_fontColor=fontDialog.GetColor(); 
		Invalidate();					//更新显示
	}	

	CView::OnLButtonDown(nFlags, point);
}

void CAFXDlgView::OnRButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	char*filters="Word文档(*.doc)|*.doc|位图(*.bmp)|*.bmp|全部文件(*.*)|*.*";
	CFileDialog fileDlg(FALSE,NULL,"*.doc",
OFN_HIDEREADONLY|OFN_OVERWRITEPROMPT,filters);
	int result=fileDlg.DoModal();
	if(result=IDOK)
		m_saveFileName = fileDlg.GetFileName();

	CView::OnRButtonDown(nFlags, point);
}
