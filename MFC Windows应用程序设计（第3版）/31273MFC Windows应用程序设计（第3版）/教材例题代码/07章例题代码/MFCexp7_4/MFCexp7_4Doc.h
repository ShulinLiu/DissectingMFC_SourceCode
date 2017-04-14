// MFCexp7_4Doc.h : interface of the CMFCexp7_4Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP7_4DOC_H__C21445F4_6D66_4151_94B6_2BE61A38D3E5__INCLUDED_)
#define AFX_MFCEXP7_4DOC_H__C21445F4_6D66_4151_94B6_2BE61A38D3E5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp7_4Doc : public CDocument
{
protected: // create from serialization only
	CMFCexp7_4Doc();
	DECLARE_DYNCREATE(CMFCexp7_4Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp7_4Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp7_4Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp7_4Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP7_4DOC_H__C21445F4_6D66_4151_94B6_2BE61A38D3E5__INCLUDED_)
