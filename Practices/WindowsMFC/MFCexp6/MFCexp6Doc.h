// MFCexp6Doc.h : interface of the CMFCexp6Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP6DOC_H__5E34E3B7_53B7_4C48_B7F5_07657A1505F1__INCLUDED_)
#define AFX_MFCEXP6DOC_H__5E34E3B7_53B7_4C48_B7F5_07657A1505F1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp6Doc : public CDocument
{
protected: // create from serialization only
	CMFCexp6Doc();
	DECLARE_DYNCREATE(CMFCexp6Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp6Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp6Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp6Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP6DOC_H__5E34E3B7_53B7_4C48_B7F5_07657A1505F1__INCLUDED_)
