// Machine generated IDispatch wrapper class(es) created with ClassWizard

#include "stdafx.h"
#include "autoserver.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif



/////////////////////////////////////////////////////////////////////////////
// IAutoServer properties

short IAutoServer::GetDiameter()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void IAutoServer::SetDiameter(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// IAutoServer operations

void IAutoServer::DispSvWindow()
{
	InvokeHelper(0x2, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}
