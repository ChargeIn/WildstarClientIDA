#include "../winhttp.h"

//----- (00000001406B7140) ----------------------------------------------------
__int64 __fastcall sub_1406B7140(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rsi
	_DWORD* v4; // rax
	unsigned int v5; // eax
	__int64 v6; // rcx
	BOOL v7; // eax
	BOOL* v8; // rcx
	_DWORD* v9; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = (_DWORD*)(a1[3] + 16i64), (unsigned __int64)v4 < a1[2])
		&& v4 != dword_140A12138
		&& *(int*)(a1[3] + 24i64) > 0
		&& (v5 = sub_140056D60(a1, 2u), v5 < 4))
	{
		v7 = sub_1403A9940(v6, *(_DWORD*)(v3 + 8), *(_DWORD*)(v3 + 12), v5, 0);
		v8 = (BOOL*)a1[2];
		v8[2] = 1;
		*v8 = v7;
	}
	else
	{
		v9 = (_DWORD*)a1[2];
		v9[2] = 1;
		*v9 = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 1406B71B3: variable 'v6' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

