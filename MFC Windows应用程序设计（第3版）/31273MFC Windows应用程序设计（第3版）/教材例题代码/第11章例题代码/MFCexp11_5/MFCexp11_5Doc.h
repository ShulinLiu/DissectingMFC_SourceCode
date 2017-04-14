// MFCexp11_5Doc.h : interface of the CMFCexp11_5Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP11_5DOC_H__DCD3D9B2_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_)
#define AFX_MFCEXP11_5DOC_H__DCD3D9B2_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp11_5Doc : public CDocument
{
protected: // create from serialization only
	CMFCexp11_5Doc();
	DECLARE_DYNCREATE(CMFCexp11_5Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp11_5Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp11_5Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp11_5Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP11_5DOC_H__DCD3D9B2_4CC1_11D8_B98F_0000E8D3C09B__INCLUDED_)
