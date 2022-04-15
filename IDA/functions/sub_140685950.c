#include "../winhttp.h"

//----- (0000000140685950) ----------------------------------------------------
__int64 __fastcall sub_140685950(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // r8
	int* v5; // rdx
	__int64 result; // rax
	int v7; // ecx
	_DWORD* v8; // rax

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0)
	{
		v5 = (int*)a1[2];
		result = 1i64;
		v7 = *(_DWORD*)(v4 + 12) >> 3;
		v5[2] = 1;
		*v5 = v7 & 1;
		a1[2] += 16i64;
	}
	else
	{
		v8 = (_DWORD*)a1[2];
		*v8 = 0;
		v8[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

