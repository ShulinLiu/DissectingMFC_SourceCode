// NMdlDlgDoc.h : interface of the CNMdlDlgDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_NMDLDLGDOC_H__CCECB674_9AB6_4CF2_B32D_D5588D551A7A__INCLUDED_)
#define AFX_NMDLDLGDOC_H__CCECB674_9AB6_4CF2_B32D_D5588D551A7A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CNMdlDlgDoc : public CDocument
{
protected: // create from serialization only
	CNMdlDlgDoc();
	DECLARE_DYNCREATE(CNMdlDlgDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNMdlDlgDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CNMdlDlgDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CNMdlDlgDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NMDLDLGDOC_H__CCECB674_9AB6_4CF2_B32D_D5588D551A7A__INCLUDED_)
