#include "../winhttp.h"

//----- (00000001401B87A0) ----------------------------------------------------
__int64 __fastcall sub_1401B87A0(__int64 a1, unsigned int a2, char* a3, DWORD a4, __int64 a5)
{
	_QWORD* v7; // rax
	unsigned __int64 v8; // rcx
	unsigned __int64 v9; // rdx
	signed int v10; // eax
	unsigned int v11; // ecx

	if ((*(_BYTE*)(a1 + 16) & 2) == 0)
		return 2147942405i64;
	if (!a2)
		return 2147942487i64;
	if (!a3)
		return 2147942487i64;
	if (!a5)
		return 2147942487i64;
	if ((unsigned __int64)a2 >= *(_QWORD*)(a1 + 624))
		return 2147942487i64;
	v7 = (_QWORD*)(*(_QWORD*)(a1 + 616) + 16i64 * a2);
	v8 = v7[1];
	if (!v8)
		return 2147942487i64;
	v9 = *(_QWORD*)(a5 + 16);
	if (v9 > v8 || a4 > v8 - v9)
		return 2147942487i64;
	*(_QWORD*)(a5 + 16) = v9 + *v7;
	v10 = sub_1401BC590(a1, a3, a4, a5);
	v11 = 0;
	if (v10 < 0)
		return (unsigned int)v10;
	return v11;
}

