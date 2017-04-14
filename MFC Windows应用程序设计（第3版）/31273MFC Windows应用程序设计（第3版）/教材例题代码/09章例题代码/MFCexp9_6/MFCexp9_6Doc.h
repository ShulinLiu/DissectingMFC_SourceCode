// MFCexp9_6Doc.h : interface of the CMFCexp9_6Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP9_6DOC_H__F4D7747C_2115_4AB0_9812_55D38D9BB6CF__INCLUDED_)
#define AFX_MFCEXP9_6DOC_H__F4D7747C_2115_4AB0_9812_55D38D9BB6CF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <afxtempl.h>	//必须包含此文件
#include "Letter.h"
class CMFCexp9_6Doc : public CDocument
{
protected: // create from serialization only
	CMFCexp9_6Doc();
	DECLARE_DYNCREATE(CMFCexp9_6Doc)

// Attributes
public:
	CTypedPtrList<CObList,CLetter*>     m_LetterList;
	void NewLetter(int x,int y);
	void DrawLetter(CDC*pDC);
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp9_6Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp9_6Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp9_6Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP9_6DOC_H__F4D7747C_2115_4AB0_9812_55D38D9BB6CF__INCLUDED_)
