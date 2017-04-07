// SerializeModeDoc.h : interface of the CSerializeModeDoc class
//
/////////////////////////////////////////////////////////////////////////////


#if !defined(AFX_SERIALIZEMODEDOC_H__D519F2E4_7509_47DC_A9D1_9ED42D8ECD29__INCLUDED_)
#define AFX_SERIALIZEMODEDOC_H__D519F2E4_7509_47DC_A9D1_9ED42D8ECD29__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Letter.h"//包含头文件

class CSerializeModeDoc : public CDocument
{
protected: // create from serialization only
	CSerializeModeDoc();
	DECLARE_DYNCREATE(CSerializeModeDoc)

// Attributes
public:
	char m_lLetter;					//定义字符变量
	CLetter m_Letters;				//定义字符类对象

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSerializeModeDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSerializeModeDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSerializeModeDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SERIALIZEMODEDOC_H__D519F2E4_7509_47DC_A9D1_9ED42D8ECD29__INCLUDED_)
