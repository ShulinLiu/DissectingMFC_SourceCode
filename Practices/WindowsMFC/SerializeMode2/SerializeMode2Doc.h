// SerializeMode2Doc.h : interface of the CSerializeMode2Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SERIALIZEMODE2DOC_H__F0E6AA80_AA6E_430C_BE1A_1E1AB3B6E933__INCLUDED_)
#define AFX_SERIALIZEMODE2DOC_H__F0E6AA80_AA6E_430C_BE1A_1E1AB3B6E933__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <afxtempl.h>	//必须包含此文件
#include "CLetter.h"

class CSerializeMode2Doc : public CDocument
{
protected: // create from serialization only
	CSerializeMode2Doc();
	DECLARE_DYNCREATE(CSerializeMode2Doc)

// Attributes
public:
	CTypedPtrList<CObList,CLetter*>     m_LetterList;	//链表
	void NewLetter(int x,int y);						//向链表加入新对象
	void DrawLetter(CDC*pDC);							//显示链表数据

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSerializeMode2Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSerializeMode2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSerializeMode2Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SERIALIZEMODE2DOC_H__F0E6AA80_AA6E_430C_BE1A_1E1AB3B6E933__INCLUDED_)
