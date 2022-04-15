#include "../winhttp.h"

//----- (00000001406C3700) ----------------------------------------------------
__int64 __fastcall sub_1406C3700(_QWORD* a1)
{
	__int64 v2; // rsi
	int* v3; // rax
	__int64 v4; // rdi
	_DWORD* v5; // rcx
	int v6; // eax

	v2 = sub_1406C3560(a1);
	if (v2)
	{
		v3 = (int*)sub_1406622C0((__int64)a1, 2);
		if (v3)
			v4 = sub_1403D90D0(qword_140C65898, *v3);
		else
			v4 = 0i64;
		v5 = (_DWORD*)(a1[3] + 32i64);
		if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
			v6 = 1;
		else
			v6 = sub_140056D60(a1, 3u);
		sub_1406C2F10(v2, v4, v6);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

