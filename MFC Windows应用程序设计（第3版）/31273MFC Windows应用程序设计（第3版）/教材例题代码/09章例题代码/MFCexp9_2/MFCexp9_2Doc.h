// MFCexp9_2Doc.h : interface of the CMFCexp9_2Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP9_2DOC_H__BB75999D_2B98_488A_847E_338399596CE3__INCLUDED_)
#define AFX_MFCEXP9_2DOC_H__BB75999D_2B98_488A_847E_338399596CE3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp9_2Doc : public CDocument
{
protected: // create from serialization only
	CMFCexp9_2Doc();
	DECLARE_DYNCREATE(CMFCexp9_2Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp9_2Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp9_2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp9_2Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP9_2DOC_H__BB75999D_2B98_488A_847E_338399596CE3__INCLUDED_)
