#include "../winhttp.h"

//----- (0000000140793A70) ----------------------------------------------------
__int64 __fastcall sub_140793A70(_QWORD* a1)
{
	_DWORD* v1; // rax
	char* v3; // rax
	unsigned __int64 v5; // rax
	unsigned __int64 i; // r8
	__int64 v7; // rcx

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || (int)v1[2] <= 0)
		v3 = 0i64;
	else
		v3 = (char*)sub_140056BB0(a1, 1u, 0i64);
	if (!(unsigned int)sub_140057C60(a1, v3))
		return 1i64;
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	v5 = a1[2];
	for (i = v5 - 32; v5 > i; v5 -= 16i64)
	{
		*(_QWORD*)v5 = *(_QWORD*)(v5 - 16);
		*(_DWORD*)(v5 + 8) = *(_DWORD*)(v5 - 8);
	}
	v7 = a1[2];
	*(_QWORD*)i = *(_QWORD*)v7;
	*(_DWORD*)(i + 8) = *(_DWORD*)(v7 + 8);
	return 2i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

