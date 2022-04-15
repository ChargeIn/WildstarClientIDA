#include "../winhttp.h"

//----- (00000001406A4C10) ----------------------------------------------------
__int64 __fastcall sub_1406A4C10(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v4; // rax
	unsigned __int64 v5; // r8
	_DWORD* v6; // rcx
	int* v7; // rsi
	int v8; // eax
	_DWORD* v9; // rdx

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
		v3 = *(_QWORD*)(v2 + 8);
	else
		v3 = 0i64;
	v4 = sub_140056BB0(a1, 2u, 0i64);
	v5 = a1[2];
	v6 = (_DWORD*)(a1[3] + 32i64);
	v7 = (int*)v4;
	v8 = -2;
	if ((unsigned __int64)v6 < v5)
	{
		v9 = dword_140A12138;
		if (v6 != dword_140A12138 && *(_DWORD*)(a1[3] + 40i64) == 5)
		{
			if ((unsigned __int64)v6 < v5)
				v9 = (_DWORD*)(a1[3] + 32i64);
			*(_QWORD*)v5 = *(_QWORD*)v9;
			*(_DWORD*)(v5 + 8) = v9[2];
			a1[2] += 16i64;
			v8 = sub_1400578C0((__int64)a1);
		}
	}
	sub_1406A4280((__int64)v6, (__int64)a1, v3 + 80, v7, v8);
	return 0i64;
}
// 1406A4CA9: variable 'v6' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

