// MFCexp9_5Doc.h : interface of the CMFCexp9_5Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP9_5DOC_H__09180924_926D_476E_9721_5CFE26B13E67__INCLUDED_)
#define AFX_MFCEXP9_5DOC_H__09180924_926D_476E_9721_5CFE26B13E67__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Letter.h"//包含头文件
class CMFCexp9_5Doc : public CDocument
{
protected: // create from serialization only
	CMFCexp9_5Doc();
	DECLARE_DYNCREATE(CMFCexp9_5Doc)

// Attributes
public:
	char m_lLetter;					//定义字符变量
	CLetter m_Letters;				//定义字符类对象

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp9_5Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp9_5Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp9_5Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP9_5DOC_H__09180924_926D_476E_9721_5CFE26B13E67__INCLUDED_)
