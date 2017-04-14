#include <windows.h>
BOOL APIENTRY DllMain( 	HANDLE hModule, 
                       		DWORD  ul_reason_for_call, 
                       		LPVOID lpReserved )
{
    return TRUE;
}
int ShowHello(void)			//需要导出的函数
{
	MessageBox(NULL,"Hello World!","",MB_YESNO);
	return TRUE;
}
