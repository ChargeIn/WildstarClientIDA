#include "../winhttp.h"

//----- (00000001401C9190) ----------------------------------------------------
signed int __fastcall sub_1401C9190(__int64 a1, const WCHAR* a2, int a3)
{
	HKEY v3; // rcx
	signed int result; // eax
	int Data; // [rsp+50h] [rbp+18h] BYREF

	Data = a3;
	if (!a2 || !a3)
		return -2147024809;
	v3 = *(HKEY*)(a1 + 16);
	if (!v3)
		return -2147024890;
	result = RegSetValueExW(v3, a2, 0, 4u, (const BYTE*)&Data, 4u);
	if (!result)
		return 0;
	if (result > 0)
		return (unsigned __int16)result | 0x80070000;
	return result;
}

