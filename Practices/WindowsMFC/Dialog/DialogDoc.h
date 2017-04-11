// DialogDoc.h : interface of the CDialogDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_DIALOGDOC_H__15C138C9_354A_42A5_ACF2_D10F365A7BCD__INCLUDED_)
#define AFX_DIALOGDOC_H__15C138C9_354A_42A5_ACF2_D10F365A7BCD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CDialogDoc : public CDocument
{
protected: // create from serialization only
	CDialogDoc();
	DECLARE_DYNCREATE(CDialogDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialogDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CDialogDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CDialogDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGDOC_H__15C138C9_354A_42A5_ACF2_D10F365A7BCD__INCLUDED_)
