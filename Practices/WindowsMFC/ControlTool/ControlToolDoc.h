// ControlToolDoc.h : interface of the CControlToolDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CONTROLTOOLDOC_H__0EBE1A30_FE55_467F_8BF9_17E47625711B__INCLUDED_)
#define AFX_CONTROLTOOLDOC_H__0EBE1A30_FE55_467F_8BF9_17E47625711B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CControlToolDoc : public CDocument
{
protected: // create from serialization only
	CControlToolDoc();
	DECLARE_DYNCREATE(CControlToolDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CControlToolDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CControlToolDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CControlToolDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CONTROLTOOLDOC_H__0EBE1A30_FE55_467F_8BF9_17E47625711B__INCLUDED_)
