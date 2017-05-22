#if !defined(AFX_BMPDOCUMENT_H__EA9B3C0D_E39D_46AB_B9F8_3991CB255D90__INCLUDED_)
#define AFX_BMPDOCUMENT_H__EA9B3C0D_E39D_46AB_B9F8_3991CB255D90__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BMPDocument.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CBMPDocument document

class CBMPDocument : public CDocument
{
protected:
	CBMPDocument();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CBMPDocument)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBMPDocument)
	public:
	virtual void Serialize(CArchive& ar);   // overridden for document i/o
	protected:
	virtual BOOL OnNewDocument();
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CBMPDocument();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
protected:
	//{{AFX_MSG(CBMPDocument)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BMPDOCUMENT_H__EA9B3C0D_E39D_46AB_B9F8_3991CB255D90__INCLUDED_)
