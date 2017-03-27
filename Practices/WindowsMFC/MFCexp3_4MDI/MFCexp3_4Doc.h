// MFCexp3_4Doc.h : interface of the CMFCexp3_4Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP3_4DOC_H__3E67C173_CAAA_43D1_B8CF_042165B221B6__INCLUDED_)
#define AFX_MFCEXP3_4DOC_H__3E67C173_CAAA_43D1_B8CF_042165B221B6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp3_4Doc : public CDocument
{
protected: // create from serialization only
	CMFCexp3_4Doc();
	DECLARE_DYNCREATE(CMFCexp3_4Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp3_4Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp3_4Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp3_4Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

public:
	char* m_Text;
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP3_4DOC_H__3E67C173_CAAA_43D1_B8CF_042165B221B6__INCLUDED_)
