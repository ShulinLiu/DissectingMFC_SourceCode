// Letter.cpp: implementation of the CLetter class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MFCexp9_5.h"
#include "Letter.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CLetter:: CLetter( ){ m_sLetter=' '; }
CLetter::~ CLetter( ){ }
char CLetter::GetLetter( )
{
	return m_sLetter;
}

void CLetter::SetLetter(char ch)
{
	m_sLetter=ch;
}
void CLetter::Serialize(CArchive& ar)
{
	if (ar.IsStoring( ))
	{
		ar<<m_sLetter;
	}
	else
	{
		ar>>m_sLetter;
	}
}

