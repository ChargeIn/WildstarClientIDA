#include "../winhttp.h"

//----- (00000001406680F0) ----------------------------------------------------
__int64 __fastcall sub_1406680F0(_QWORD* a1)
{
	__int64 v2; // rdi
	_DWORD* v3; // rax
	int v4; // eax
	__int64 v5; // rcx
	unsigned int v6; // edx
	int v7; // edx
	__int64 v8; // rdx
	__int64 v9; // rcx
	__int64 v10; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v4 = -1;
	else
		v4 = sub_140056D60(a1, 2u);
	if (v2 && v4 >= 0 && (v5 = *(_QWORD*)v2, v4 < *(_DWORD*)(*(_QWORD*)v2 + 16i64)))
	{
		v6 = *(_DWORD*)(v5 + 16);
		if (v4 == v6 || v4 > v6 || (v8 = *(_QWORD*)(v5 + 8i64 * (unsigned int)v4 + 24)) == 0)
			v7 = 0;
		else
			v7 = *(_DWORD*)(v8 + 40);
		v9 = a1[2];
		*(_DWORD*)(v9 + 8) = 3;
		*(double*)v9 = (double)v7;
	}
	else
	{
		v10 = a1[2];
		*(_QWORD*)v10 = 0i64;
		*(_DWORD*)(v10 + 8) = 3;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

