// MyPrjDoc.h : interface of the CMyPrjDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MYPRJDOC_H__AD7D652A_5958_11D8_B98F_0000E8D3C09B__INCLUDED_)
#define AFX_MYPRJDOC_H__AD7D652A_5958_11D8_B98F_0000E8D3C09B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMyPrjDoc : public CDocument
{
public:
	char*m_pText;
protected: // create from serialization only
	CMyPrjDoc();
	DECLARE_DYNCREATE(CMyPrjDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyPrjDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMyPrjDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMyPrjDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYPRJDOC_H__AD7D652A_5958_11D8_B98F_0000E8D3C09B__INCLUDED_)
