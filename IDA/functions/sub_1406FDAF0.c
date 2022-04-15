#include "../winhttp.h"

//----- (00000001406FDAF0) ----------------------------------------------------
__int64 __fastcall sub_1406FDAF0(_QWORD* a1)
{
	int v1; // ebx
	unsigned int v3; // eax
	__int64 v4; // rcx
	_DWORD* v5; // rdx
	unsigned int v6; // esi
	int v7; // r8d
	int v8; // eax

	v1 = 1;
	v3 = sub_140056D60(a1, 1u);
	v5 = (_DWORD*)(a1[3] + 16i64);
	v6 = v3;
	if ((unsigned __int64)v5 >= a1[2]
		|| v5 == dword_140A12138
		|| *(int*)(a1[3] + 24i64) <= 0
		|| (v1 = sub_140056D60(a1, 2u), v1 > 0))
	{
		v8 = -1;
		if (v1 != -1)
			v8 = v1;
		v7 = 0;
		if (v8)
			v7 = v8;
	}
	else
	{
		v7 = 0;
	}
	sub_14043A1F0(v4, v6, v7 - 1);
	return 0i64;
}
// 1406FDB5C: variable 'v4' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

