// MFCexp11_5View.h : interface of the CMFCexp11_5View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP11_5VIEW_H__DCD3D9B4_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_)
#define AFX_MFCEXP11_5VIEW_H__DCD3D9B4_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp11_5View : public CView
{
protected:
	LOGFONT m_logFont;		//定义一个LOGFONT类型的数据成员
	CFont* m_pFont;			//定义一个字体对象指针
	COLORREF m_fontColor;	//定义存放字体颜色的成员变量
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);//鼠标消息函数

protected: // create from serialization only
	CMFCexp11_5View();
	DECLARE_DYNCREATE(CMFCexp11_5View)

// Attributes
public:
	CMFCexp11_5Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp11_5View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp11_5View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp11_5View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp11_5View.cpp
inline CMFCexp11_5Doc* CMFCexp11_5View::GetDocument()
   { return (CMFCexp11_5Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP11_5VIEW_H__DCD3D9B4_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_)
