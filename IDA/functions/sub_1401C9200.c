#include "../winhttp.h"

//----- (00000001401C9200) ----------------------------------------------------
__int64 __fastcall sub_1401C9200(__int64 a1, BYTE* lpData, __int64 a3, const WCHAR* a4, __int64 a5)
{
	HKEY v5; // rcx
	DWORD cbData; // [rsp+40h] [rbp+8h] BYREF

	v5 = *(HKEY*)(a1 + 16);
	if (!v5)
		return 2147500037i64;
	if (!lpData)
		return 2147942487i64;
	cbData = 2 * a3;
	if (!RegQueryValueExW(v5, a4, 0i64, 0i64, lpData, &cbData))
		return 0i64;
	if (!a5)
		return 2147942487i64;
	return sub_14001B2D0(lpData, a3, a5);
}

