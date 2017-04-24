// MyVC1View.h : interface of the CMyVC1View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MYVC1VIEW_H__34DD4E5C_9DAE_4A58_BA3D_5C5131384859__INCLUDED_)
#define AFX_MYVC1VIEW_H__34DD4E5C_9DAE_4A58_BA3D_5C5131384859__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMyVC1View : public CView
{
protected: // create from serialization only
	CMyVC1View();
	DECLARE_DYNCREATE(CMyVC1View)

// Attributes
public:
	CMyVC1Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyVC1View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMyVC1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	void Text5(CDC* pDC);
	void Fontstr(CDC* pDC,double x,double y,CString font,float nPoi,CString str);
	void Text4(CDC* pDC);
	void Text3(CDC* pDC);
	void Text2(CDC* pDC);
	void Text1();
	//{{AFX_MSG(CMyVC1View)
	afx_msg void OnWelcome();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MyVC1View.cpp
inline CMyVC1Doc* CMyVC1View::GetDocument()
   { return (CMyVC1Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYVC1VIEW_H__34DD4E5C_9DAE_4A58_BA3D_5C5131384859__INCLUDED_)
