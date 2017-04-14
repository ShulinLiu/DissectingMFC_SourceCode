// Letter.cpp: implementation of the CLetter class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MFCexp9_6.h"
#include "Letter.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
IMPLEMENT_SERIAL(CLetter,CObject,1)
CLetter:: CLetter( ){ }
CLetter::CLetter(char ch,int x,int y)
{
	m_sLetter=ch;
	m_X=x;
	m_Y=y;
}
CLetter::~ CLetter( ){ }



void CLetter::Serialize(CArchive& ar)
{
	if (ar.IsStoring( ))
	{
		ar<<m_sLetter<<m_X<<m_Y;
	}
	else
	{
		ar>>m_sLetter>>m_X>>m_Y;
	}
}

