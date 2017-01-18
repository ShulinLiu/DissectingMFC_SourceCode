// MyFirDoc.h : interface of the CMyFirDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MYFIRDOC_H__1C0C2D18_D38A_41E4_A130_826A773A0AA9__INCLUDED_)
#define AFX_MYFIRDOC_H__1C0C2D18_D38A_41E4_A130_826A773A0AA9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMyFirDoc : public CDocument
{
protected: // create from serialization only
	CMyFirDoc();
	DECLARE_DYNCREATE(CMyFirDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyFirDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMyFirDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMyFirDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYFIRDOC_H__1C0C2D18_D38A_41E4_A130_826A773A0AA9__INCLUDED_)
