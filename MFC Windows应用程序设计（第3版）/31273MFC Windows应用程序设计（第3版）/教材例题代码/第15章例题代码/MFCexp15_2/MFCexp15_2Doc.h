// MFCexp15_2Doc.h : interface of the CMFCexp15_2Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP15_2DOC_H__459BB2CB_3F8D_11D8_B98F_0000E8D3C09B__INCLUDED_)
#define AFX_MFCEXP15_2DOC_H__459BB2CB_3F8D_11D8_B98F_0000E8D3C09B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp15_2SrvrItem;

class CMFCexp15_2Doc : public COleServerDoc
{
protected: // create from serialization only
	CMFCexp15_2Doc();
	DECLARE_DYNCREATE(CMFCexp15_2Doc)

// Attributes
public:
	CMFCexp15_2SrvrItem* GetEmbeddedItem()
		{ return (CMFCexp15_2SrvrItem*)COleServerDoc::GetEmbeddedItem(); }

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp15_2Doc)
	protected:
	virtual COleServerItem* OnGetEmbeddedItem();
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp15_2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp15_2Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP15_2DOC_H__459BB2CB_3F8D_11D8_B98F_0000E8D3C09B__INCLUDED_)
