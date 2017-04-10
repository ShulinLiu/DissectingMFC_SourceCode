// ControlTool2View.cpp : implementation of the CControlTool2View class
//

#include "stdafx.h"
#include "ControlTool2.h"

#include "ControlTool2Doc.h"
#include "ControlTool2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CControlTool2View

IMPLEMENT_DYNCREATE(CControlTool2View, CView)

BEGIN_MESSAGE_MAP(CControlTool2View, CView)
	//{{AFX_MSG_MAP(CControlTool2View)
	ON_WM_CREATE()
	ON_WM_TIMER()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CControlTool2View construction/destruction

CControlTool2View::CControlTool2View()
{
	// TODO: add construction code here

}

CControlTool2View::~CControlTool2View()
{
}

BOOL CControlTool2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CControlTool2View drawing

void CControlTool2View::OnDraw(CDC* pDC)
{
	CControlTool2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CControlTool2View printing

BOOL CControlTool2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CControlTool2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CControlTool2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CControlTool2View diagnostics

#ifdef _DEBUG
void CControlTool2View::AssertValid() const
{
	CView::AssertValid();
}

void CControlTool2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CControlTool2Doc* CControlTool2View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CControlTool2Doc)));
	return (CControlTool2Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CControlTool2View message handlers

int CControlTool2View::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	
		InitProgressBar();
		InitSpinner();
		SetTimer(1, 250, NULL);			//启动定时器
		return 0;
}
//进度条初始化函数
void CControlTool2View::InitProgressBar( )
{
    m_progBar1.Create(WS_CHILD | WS_BORDER | WS_VISIBLE,
        CRect(20, 40, 360, 80), this, IDC_PROGBAR1);
    m_progBar1.SetRange(0, 100);
    m_progBar1.SetStep(10);
    m_progBar1.SetPos(0);
		m_progBar2.Create(WS_CHILD | WS_BORDER | WS_VISIBLE
				|PBS_VERTICAL|PBS_SMOOTH,
        				CRect(400, 40, 440, 380), this, IDC_PROGBAR2);
    m_progBar2.SetRange(0, 100);
    m_progBar2.SetStep(10);
    m_progBar2.SetPos(0);
}
//微调器初始化函数
void CControlTool2View::InitSpinner( )
{
//创建与微调器配对的编辑框控件
    m_spinEdit.Create(WS_CHILD | WS_VISIBLE | WS_BORDER,
        CRect(20, 200, 160, 240), this, IDC_SPINNER);
//设置字体
		LOGFONT logFont;
    logFont.lfHeight = 36;
    logFont.lfWidth = 0;
    logFont.lfEscapement = 0;
    logFont.lfOrientation = 0;
    logFont.lfWeight = FW_NORMAL;
    logFont.lfItalic = 0;
    logFont.lfUnderline = 0;
    logFont.lfStrikeOut = 0;
    logFont.lfCharSet = ANSI_CHARSET;
    logFont.lfOutPrecision = OUT_DEFAULT_PRECIS;
    logFont.lfClipPrecision = CLIP_DEFAULT_PRECIS;
    logFont.lfQuality = PROOF_QUALITY;
    logFont.lfPitchAndFamily = VARIABLE_PITCH | FF_ROMAN;
    strcpy(logFont.lfFaceName, "Times New Roman");
    m_spinEditFont.CreateFontIndirect(&logFont);
		m_spinEdit.SetFont(&m_spinEditFont);
//创建微调器控件
    m_spin.Create(WS_CHILD | WS_VISIBLE | WS_BORDER |
        UDS_SETBUDDYINT | UDS_ALIGNRIGHT | UDS_ARROWKEYS,
        CRect(0, 0, 0, 0), this, 104);
    m_spin.SetBuddy(&m_spinEdit);
    m_spin.SetRange(0, 100);
    m_spin.SetPos(0);
}
//定时器响应函数
void CControlTool2View::OnTimer(UINT nIDEvent) 
{
		m_progBar1.SetPos(m_spin.GetPos( ));		//更改水平进度条的显示
		m_progBar2.SetPos(m_spin.GetPos( ));		//更改垂直进度条的显示
		CView::OnTimer(nIDEvent);
}

