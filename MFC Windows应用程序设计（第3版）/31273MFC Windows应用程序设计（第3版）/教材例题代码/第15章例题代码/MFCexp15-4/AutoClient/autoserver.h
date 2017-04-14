// Machine generated IDispatch wrapper class(es) created with ClassWizard
/////////////////////////////////////////////////////////////////////////////
// IAutoServer wrapper class

class IAutoServer : public COleDispatchDriver
{
public:
	IAutoServer() {}		// Calls COleDispatchDriver default constructor
	IAutoServer(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAutoServer(const IAutoServer& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetDiameter();
	void SetDiameter(short);

// Operations
public:
	void DispSvWindow();
};
