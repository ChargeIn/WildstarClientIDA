#include "../winhttp.h"

//----- (00000001406DA4C0) ----------------------------------------------------
__int64 __fastcall sub_1406DA4C0(__int64 a1, signed int a2, int* a3, unsigned __int8 a4)
{
	__int64 v5; // rdi
	int v7; // eax

	v5 = a2;
	if (*(char*)(a1 + 28) >= 0)
		return sub_1400D2120(a1, a2, a3, a4);
	if (a2)
	{
		if (a2 == 1)
			*(_BYTE*)(a1 + 1026) = 1;
	}
	else
	{
		*(_BYTE*)(a1 + 1025) = 1;
	}
	if ((*(_BYTE*)(a1 + 664) & 1) != 0)
		sub_1406DA9A0(a1);
	*(_DWORD*)(a1 + 8 * v5 + 864) = *a3;
	*(_DWORD*)(a1 + 8 * v5 + 868) = a3[1];
	*(_DWORD*)(a1 + 904) = *a3;
	*(_DWORD*)(a1 + 908) = a3[1];
	v7 = dword_140C636A8;
	*(_DWORD*)(a1 + 932) = dword_140C636A8;
	*(_DWORD*)(a1 + 4 * v5 + 912) = v7;
	return 0i64;
}
// 140C636A8: using guessed type int dword_140C636A8;

