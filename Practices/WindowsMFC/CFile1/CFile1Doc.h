// CFile1Doc.h : interface of the CCFile1Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CFILE1DOC_H__F7F1FFBF_59FB_4045_B353_5124CAF85749__INCLUDED_)
#define AFX_CFILE1DOC_H__F7F1FFBF_59FB_4045_B353_5124CAF85749__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCFile1Doc : public CDocument
{
protected: // create from serialization only
	CCFile1Doc();
	DECLARE_DYNCREATE(CCFile1Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCFile1Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCFile1Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCFile1Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CFILE1DOC_H__F7F1FFBF_59FB_4045_B353_5124CAF85749__INCLUDED_)
