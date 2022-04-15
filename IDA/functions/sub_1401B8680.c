#include "../winhttp.h"

//----- (00000001401B8680) ----------------------------------------------------
__int64 __fastcall sub_1401B8680(__int64 a1, unsigned int a2, void* a3, DWORD a4, __int64 a5)
{
	_QWORD* v6; // rax
	unsigned __int64 v7; // rcx
	unsigned __int64 v8; // rdx
	signed int v9; // eax
	unsigned int v10; // ecx

	if (!a2)
		return 2147942487i64;
	if (!a3)
		return 2147942487i64;
	if (!a5)
		return 2147942487i64;
	if ((unsigned __int64)a2 >= *(_QWORD*)(a1 + 624))
		return 2147942487i64;
	v6 = (_QWORD*)(*(_QWORD*)(a1 + 616) + 16i64 * a2);
	v7 = v6[1];
	if (!v7)
		return 2147942487i64;
	v8 = *(_QWORD*)(a5 + 16);
	if (v8 > v7 || a4 > v7 - v8)
		return 2147942487i64;
	*(_QWORD*)(a5 + 16) = v8 + *v6;
	v9 = sub_1401BC400(a1, a3, a4, a5);
	v10 = 0;
	if (v9 < 0)
		return (unsigned int)v9;
	return v10;
}

