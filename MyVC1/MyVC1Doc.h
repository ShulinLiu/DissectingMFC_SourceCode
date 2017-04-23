// MyVC1Doc.h : interface of the CMyVC1Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MYVC1DOC_H__E905492C_AEC8_430C_AE44_23F02EDF54AD__INCLUDED_)
#define AFX_MYVC1DOC_H__E905492C_AEC8_430C_AE44_23F02EDF54AD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMyVC1Doc : public CDocument
{
protected: // create from serialization only
	CMyVC1Doc();
	DECLARE_DYNCREATE(CMyVC1Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyVC1Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMyVC1Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMyVC1Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYVC1DOC_H__E905492C_AEC8_430C_AE44_23F02EDF54AD__INCLUDED_)
