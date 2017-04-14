// First.cpp : Implementation of CFirst
#include "stdafx.h"
#include "Simple_ATL.h"
#include "First.h"

/////////////////////////////////////////////////////////////////////////////
// CFirst


STDMETHODIMP CFirst::AddNumbers(long Num1, long Num2, long *ReturnVal)
{
	// TODO: Add your implementation code here
	*ReturnVal = Num1 + Num2;
	return S_OK;
}
