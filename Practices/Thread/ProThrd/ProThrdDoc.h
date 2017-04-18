// ProThrdDoc.h : interface of the CProThrdDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_PROTHRDDOC_H__3105A6F1_173E_427E_9F05_6480035F7219__INCLUDED_)
#define AFX_PROTHRDDOC_H__3105A6F1_173E_427E_9F05_6480035F7219__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CProThrdDoc : public CDocument
{
protected: // create from serialization only
	CProThrdDoc();
	DECLARE_DYNCREATE(CProThrdDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CProThrdDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CProThrdDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CProThrdDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROTHRDDOC_H__3105A6F1_173E_427E_9F05_6480035F7219__INCLUDED_)
