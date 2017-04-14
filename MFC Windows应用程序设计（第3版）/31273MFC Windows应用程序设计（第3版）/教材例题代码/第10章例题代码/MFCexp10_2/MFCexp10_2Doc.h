// MFCexp10_2Doc.h : interface of the CMFCexp10_2Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP10_2DOC_H__F716735D_98EF_4F1B_AEA3_DBCA55105BD5__INCLUDED_)
#define AFX_MFCEXP10_2DOC_H__F716735D_98EF_4F1B_AEA3_DBCA55105BD5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp10_2Doc : public CDocument
{
protected: // create from serialization only
	CMFCexp10_2Doc();
	DECLARE_DYNCREATE(CMFCexp10_2Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp10_2Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp10_2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp10_2Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP10_2DOC_H__F716735D_98EF_4F1B_AEA3_DBCA55105BD5__INCLUDED_)
