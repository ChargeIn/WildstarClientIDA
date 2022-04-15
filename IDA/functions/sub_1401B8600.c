#include "../winhttp.h"

//----- (00000001401B8600) ----------------------------------------------------
__int64 __fastcall sub_1401B8600(__int64 a1, unsigned int a2, unsigned __int64 a3, int* a4, unsigned __int64 a5)
{
	_QWORD* v6; // rax
	unsigned __int64 v7; // rdx
	signed int v8; // eax
	unsigned int v9; // ecx

	if (!a5)
		return 0i64;
	if (!a2)
		return 2147942487i64;
	if (!a4)
		return 2147942487i64;
	if ((unsigned __int64)a2 >= *(_QWORD*)(a1 + 624))
		return 2147942487i64;
	v6 = (_QWORD*)(*(_QWORD*)(a1 + 616) + 16i64 * a2);
	v7 = v6[1];
	if (!v7 || a3 > v7 || a5 > v7 - a3)
		return 2147942487i64;
	v8 = sub_1401BC1A0(a1, (LARGE_INTEGER)(a3 + *v6), a4, a5);
	v9 = 0;
	if (v8 < 0)
		return (unsigned int)v8;
	return v9;
}

