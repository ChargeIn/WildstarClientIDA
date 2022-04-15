#include "../winhttp.h"

//----- (00000001401C9320) ----------------------------------------------------
signed int __fastcall sub_1401C9320(__int64 a1, const WCHAR* a2)
{
	signed int result; // eax
	HKEY v3; // rcx

	if (!a2)
		return -2147024809;
	v3 = *(HKEY*)(a1 + 16);
	if (!v3)
		return -2147024890;
	result = RegDeleteValueW(v3, a2);
	if (!result)
		return 0;
	if (result > 0)
		return (unsigned __int16)result | 0x80070000;
	return result;
}

