#include "../winhttp.h"

//----- (0000000140794340) ----------------------------------------------------
__int64 __fastcall sub_140794340(_QWORD* a1)
{
	_DWORD* v2; // rsi
	_DWORD* v3; // rax
	int i; // edi
	unsigned __int64 v5; // rax
	_DWORD* v6; // r8
	unsigned __int64 v7; // rdx
	__int64 v8; // rcx
	int v9; // eax
	_DWORD* v10; // rcx
	unsigned __int64 v11; // r9
	__int64 v12; // rcx
	int v13; // eax
	__int64 v14; // rcx
	unsigned __int64 v15; // rdx
	_DWORD* v16; // rcx
	unsigned __int64 v17; // rcx
	unsigned __int64 v19; // [rsp+30h] [rbp-18h] BYREF
	int v20; // [rsp+38h] [rbp-10h]

	v2 = dword_140A12138;
	v3 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64) == -1)
		sub_140056570(a1, 2u, aValueExpected);
	for (i = 0; a1[2] < (unsigned __int64)(a1[3] + 32i64); a1[2] += 16i64)
		*(_DWORD*)(a1[2] + 8i64) = 0;
	v5 = a1[3];
	v6 = dword_140A12138;
	v7 = v5 + 32;
	a1[2] = v5 + 32;
	if (v5 < v5 + 32)
		v6 = (_DWORD*)v5;
	for (; v7 > (unsigned __int64)v6; v7 -= 16i64)
	{
		*(_QWORD*)v7 = *(_QWORD*)(v7 - 16);
		*(_DWORD*)(v7 + 8) = *(_DWORD*)(v7 - 8);
	}
	v8 = a1[2];
	v20 = -1;
	*(_QWORD*)v6 = *(_QWORD*)v8;
	v9 = *(_DWORD*)(v8 + 8);
	v10 = dword_140A12138;
	v6[2] = v9;
	v11 = a1[2];
	if (a1[3] < v11)
		v10 = (_DWORD*)a1[3];
	v12 = (__int64)v10 - a1[8];
	v19 = v11 - 16;
	v13 = sub_140061FB0(
		(__int64)a1,
		(void(__fastcall*)(__int64, __int64))sub_140058DB0,
		(__int64)&v19,
		v11 - 16 - a1[8],
		v12);
	v14 = a1[5];
	v15 = a1[2];
	if (v15 >= *(_QWORD*)(v14 + 16))
		*(_QWORD*)(v14 + 16) = v15;
	v16 = (_DWORD*)a1[2];
	v16[2] = 1;
	LOBYTE(i) = v13 == 0;
	*v16 = i;
	a1[2] += 16i64;
	v17 = a1[2];
	if (a1[3] < v17)
		v2 = (_DWORD*)a1[3];
	*(_QWORD*)v2 = *(_QWORD*)(v17 - 16);
	v2[2] = *(_DWORD*)(v17 - 8);
	a1[2] -= 16i64;
	return (__int64)(a1[2] - a1[3]) >> 4;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

