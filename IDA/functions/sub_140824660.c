#include "../winhttp.h"

//----- (0000000140824660) ----------------------------------------------------
HMODULE __fastcall sub_140824660(const char* a1, int a2, int a3)
{
	HMODULE v4; // [rsp+20h] [rbp-18h]
	WCHAR* hMem; // [rsp+28h] [rbp-10h]

	v4 = 0i64;
	hMem = sub_140825110(a1);
	if (!a1 || hMem)
		v4 = sub_140824550(hMem, a2, a3);
	LocalFree(hMem);
	return v4;
}

