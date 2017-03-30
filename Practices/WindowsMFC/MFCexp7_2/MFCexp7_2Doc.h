// MFCexp7_2Doc.h : interface of the CMFCexp7_2Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP7_2DOC_H__71E1B27F_556D_4157_ADCE_88BC11D97E53__INCLUDED_)
#define AFX_MFCEXP7_2DOC_H__71E1B27F_556D_4157_ADCE_88BC11D97E53__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp7_2Doc : public CDocument
{
protected: // create from serialization only
	CMFCexp7_2Doc();
	DECLARE_DYNCREATE(CMFCexp7_2Doc)

// Attributes
public:
	CPoint m_Point;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp7_2Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp7_2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp7_2Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP7_2DOC_H__71E1B27F_556D_4157_ADCE_88BC11D97E53__INCLUDED_)
