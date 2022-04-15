#include "../winhttp.h"

//----- (0000000140824BD0) ----------------------------------------------------
BOOL __fastcall sub_140824BD0(
	const char* a1,
	char* a2,
	struct _SECURITY_ATTRIBUTES* a3,
	struct _SECURITY_ATTRIBUTES* a4,
	BOOL bInheritHandles,
	DWORD dwCreationFlags,
	LPVOID lpEnvironment,
	LPCSTR lpCurrentDirectory,
	LPSTARTUPINFOA lpStartupInfo,
	int a10,
	LPPROCESS_INFORMATION lpProcessInformation)
{
	_WORD* hMem; // [rsp+50h] [rbp-18h]
	_WORD* v13; // [rsp+58h] [rbp-10h]

	hMem = 0i64;
	v13 = 0i64;
	SetLastError(0);
	if (a1)
		hMem = sub_140825110(a1);
	if (a2)
		v13 = sub_140825110(a2);
	if ((unsigned int)sub_140824940(hMem, v13, a10))
	{
		LocalFree(hMem);
		LocalFree(v13);
		return CreateProcessA(
			a1,
			a2,
			a3,
			a4,
			bInheritHandles,
			dwCreationFlags,
			lpEnvironment,
			lpCurrentDirectory,
			lpStartupInfo,
			lpProcessInformation);
	}
	else
	{
		LocalFree(hMem);
		LocalFree(v13);
		return 0;
	}
}

