// MFCexp10_4View.cpp : implementation of the CMFCexp10_4View class
//

#include "stdafx.h"
#include "MFCexp10_4.h"

#include "MFCexp10_4Doc.h"
#include "MFCexp10_4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_4View

IMPLEMENT_DYNCREATE(CMFCexp10_4View, CView)

BEGIN_MESSAGE_MAP(CMFCexp10_4View, CView)
	//{{AFX_MSG_MAP(CMFCexp10_4View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	ON_WM_CREATE( )
	ON_WM_TIMER( )

END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_4View construction/destruction

CMFCexp10_4View::CMFCexp10_4View()
{
	// TODO: add construction code here

}

CMFCexp10_4View::~CMFCexp10_4View()
{
}

BOOL CMFCexp10_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_4View drawing

void CMFCexp10_4View::OnDraw(CDC* pDC)
{
	CMFCexp10_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_4View diagnostics

#ifdef _DEBUG
void CMFCexp10_4View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexp10_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexp10_4Doc* CMFCexp10_4View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexp10_4Doc)));
	return (CMFCexp10_4Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCexp10_4View message handlers
int CMFCexp10_4View::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
		if (CView::OnCreate(lpCreateStruct) == -1)
	return -1;
		InitProgressBar();
		InitSpinner();
		SetTimer(1, 250, NULL);			//启动定时器
		return 0;
}
//进度条初始化函数
void CMFCexp10_4View::InitProgressBar( )
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
void CMFCexp10_4View::InitSpinner( )
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
void CMFCexp10_4View::OnTimer(UINT nIDEvent) 
{
		m_progBar1.SetPos(m_spin.GetPos( ));		//更改水平进度条的显示
		m_progBar2.SetPos(m_spin.GetPos( ));		//更改垂直进度条的显示
		CView::OnTimer(nIDEvent);
}
