class IUnknown
{
public:
	virtual int QueryInterface(char*IName,void**ppv)=0;
	virtual void Release()=0;
};