
Simple_ATLps.dll: dlldata.obj Simple_ATL_p.obj Simple_ATL_i.obj
	link /dll /out:Simple_ATLps.dll /def:Simple_ATLps.def /entry:DllMain dlldata.obj Simple_ATL_p.obj Simple_ATL_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del Simple_ATLps.dll
	@del Simple_ATLps.lib
	@del Simple_ATLps.exp
	@del dlldata.obj
	@del Simple_ATL_p.obj
	@del Simple_ATL_i.obj
