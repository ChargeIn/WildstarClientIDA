#include "../winhttp.h"

//----- (00000001401C92A0) ----------------------------------------------------
__int64 __fastcall sub_1401C92A0(__int64 a1, BYTE* lpData, const WCHAR* a3, int a4)
{
	HKEY v4; // rcx
	DWORD cbData; // [rsp+40h] [rbp+8h] BYREF

	v4 = *(HKEY*)(a1 + 16);
	if (!v4)
		return 2147500037i64;
	if (!lpData)
		return 2147942487i64;
	cbData = 4;
	if (RegQueryValueExW(v4, a3, 0i64, 0i64, lpData, &cbData))
		*(_DWORD*)lpData = a4;
	return 0i64;
}

