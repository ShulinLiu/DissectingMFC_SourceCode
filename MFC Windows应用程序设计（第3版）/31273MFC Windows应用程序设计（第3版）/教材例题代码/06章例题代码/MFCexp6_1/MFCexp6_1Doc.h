// MFCexp6_1Doc.h : interface of the CMFCexp6_1Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP6_1DOC_H__B55791EA_22BA_4222_B981_ACCE39AD6214__INCLUDED_)
#define AFX_MFCEXP6_1DOC_H__B55791EA_22BA_4222_B981_ACCE39AD6214__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp6_1Doc : public CDocument
{
protected: // create from serialization only
	CMFCexp6_1Doc();
	DECLARE_DYNCREATE(CMFCexp6_1Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp6_1Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp6_1Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp6_1Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP6_1DOC_H__B55791EA_22BA_4222_B981_ACCE39AD6214__INCLUDED_)
