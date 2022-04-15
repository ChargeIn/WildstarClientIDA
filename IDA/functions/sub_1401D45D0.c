#include "../winhttp.h"

//----- (00000001401D45D0) ----------------------------------------------------
__int64 __fastcall sub_1401D45D0(__int64 a1, __int64 a2, unsigned int a3, _QWORD* a4)
{
	unsigned __int64 v5; // rax
	unsigned __int64 v6; // rcx
	signed int v7; // eax
	unsigned int v8; // ecx

	if (!a3)
		return 2147942487i64;
	if (!a2)
		return 2147942487i64;
	if (!a4)
		return 2147942487i64;
	v5 = a4[2];
	v6 = *(_QWORD*)(a1 + 560);
	if (v5 > v6 || a3 > v6 - v5)
		return 2147942487i64;
	v7 = sub_1401C3DC0(*(_QWORD*)(a1 + 8), (const WCHAR*)(a1 + 16), a2, a3, a4);
	v8 = 0;
	if (v7 < 0)
		return (unsigned int)v7;
	return v8;
}

