// MFCexp10_1Doc.h : interface of the CMFCexp10_1Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP10_1DOC_H__3F9F99D3_0B4E_4AE4_921B_53DFEA4AB45B__INCLUDED_)
#define AFX_MFCEXP10_1DOC_H__3F9F99D3_0B4E_4AE4_921B_53DFEA4AB45B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp10_1Doc : public CDocument
{
protected: // create from serialization only
	CMFCexp10_1Doc();
	DECLARE_DYNCREATE(CMFCexp10_1Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp10_1Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp10_1Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp10_1Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP10_1DOC_H__3F9F99D3_0B4E_4AE4_921B_53DFEA4AB45B__INCLUDED_)
