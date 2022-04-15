#include "../winhttp.h"

//----- (0000000140041D40) ----------------------------------------------------
__int64 __fastcall sub_140041D40(_QWORD* a1)
{
	unsigned int v2; // eax
	int* v3; // rdx
	__int64 v4; // rdx
	int v5; // ecx
	__int64 v6; // rcx
	__int64 result; // rax

	v2 = sub_140056D60(a1, 1u);
	if (v2 >= 0x1D)
		return 0i64;
	v3 = &dword_140C89730[6 * v2];
	if (!v3)
		return 0i64;
	v4 = *((_QWORD*)v3 + 2);
	v5 = 1;
	if (!v2)
		v5 = 2;
	if (v4)
		LODWORD(v4) = v4 - v5;
	v6 = a1[2];
	result = 1i64;
	*(_DWORD*)(v6 + 8) = 3;
	*(double*)v6 = (double)(int)v4;
	a1[2] += 16i64;
	return result;
}
// 140C89730: using guessed type int dword_140C89730[];

