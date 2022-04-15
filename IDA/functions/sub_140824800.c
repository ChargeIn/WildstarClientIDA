#include "../winhttp.h"

//----- (0000000140824800) ----------------------------------------------------
HMODULE __fastcall sub_140824800(const char* a1, DWORD a2, int a3)
{
	HMODULE v4; // [rsp+20h] [rbp-18h]
	WCHAR* hMem; // [rsp+28h] [rbp-10h]

	v4 = 0i64;
	if (a1)
	{
		hMem = sub_140825110(a1);
		if (hMem)
			v4 = sub_1408246D0(hMem, a2, a3);
		LocalFree(hMem);
		return v4;
	}
	else
	{
		SetLastError(0x57u);
		return 0i64;
	}
}

