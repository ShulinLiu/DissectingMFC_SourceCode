// SyncThrdDoc.h : interface of the CSyncThrdDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SYNCTHRDDOC_H__3D73B06D_CBD7_40EE_8E6E_AF52C1303411__INCLUDED_)
#define AFX_SYNCTHRDDOC_H__3D73B06D_CBD7_40EE_8E6E_AF52C1303411__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSyncThrdDoc : public CDocument
{
protected: // create from serialization only
	CSyncThrdDoc();
	DECLARE_DYNCREATE(CSyncThrdDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSyncThrdDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSyncThrdDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSyncThrdDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SYNCTHRDDOC_H__3D73B06D_CBD7_40EE_8E6E_AF52C1303411__INCLUDED_)
