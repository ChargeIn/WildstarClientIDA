#include "../winhttp.h"

//----- (00000001404F8A40) ----------------------------------------------------
__int64 __fastcall sub_1404F8A40(_QWORD* a1)
{
	__int64 v2; // rsi
	int* v3; // rax
	int v4; // edi
	__int64 v5; // rdx
	_DWORD* v6; // rcx
	int v7; // eax
	int v8; // r8d
	int v9; // eax
	_DWORD* v10; // rcx
	BOOL v11; // edx
	__int64 result; // rax

	v2 = sub_1404F87C0(a1, 1u);
	v3 = (int*)sub_1406622C0((__int64)a1, 2);
	v4 = 0;
	if (v3)
		v5 = sub_1403D90D0(qword_140C65898, *v3);
	else
		v5 = 0i64;
	v6 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
		v6 = (_DWORD*)(a1[3] + 32i64);
	v7 = v6[2];
	v8 = v7 && (v7 != 1 || *v6);
	v9 = sub_1404F69B0(v2, v5, v8);
	v10 = (_DWORD*)a1[2];
	v10[2] = 1;
	v11 = v9 >= 0;
	result = 1i64;
	LOBYTE(v4) = v11;
	*v10 = v4;
	a1[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

