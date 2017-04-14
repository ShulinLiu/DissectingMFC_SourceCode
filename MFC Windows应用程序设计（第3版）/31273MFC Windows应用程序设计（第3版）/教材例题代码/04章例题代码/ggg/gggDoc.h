// gggDoc.h : interface of the CGggDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_GGGDOC_H__AB4D3164_3C91_4124_A5F7_5371E12FC4CD__INCLUDED_)
#define AFX_GGGDOC_H__AB4D3164_3C91_4124_A5F7_5371E12FC4CD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CGggDoc : public CDocument
{
protected: // create from serialization only
	CGggDoc();
	DECLARE_DYNCREATE(CGggDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGggDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CGggDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CGggDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GGGDOC_H__AB4D3164_3C91_4124_A5F7_5371E12FC4CD__INCLUDED_)
