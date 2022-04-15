#include "../winhttp.h"

//----- (000000014078C340) ----------------------------------------------------
__int64 __fastcall sub_14078C340(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v3; // rcx
	_DWORD* v4; // rdi
	int v5; // r14d
	_QWORD* v6; // rdi
	int v7; // eax
	unsigned __int64 v8; // rdx
	int i; // r8d
	unsigned __int64 v10; // rax
	__int64 v11; // rdx
	__int64 v12; // rbp
	signed int v13; // esi
	_DWORD* v14; // rax
	__int64 j; // rdx
	__int64 v16; // rdx
	__int64 v17; // rcx
	int v18; // esi
	_QWORD* v19; // rbp
	unsigned __int64* v20; // r9
	__int64 v21; // rdx
	__int64 v22; // rcx
	unsigned __int64 v24; // r8

	v1 = (_DWORD*)a1[3];
	v3 = a1[2];
	if ((unsigned __int64)v1 >= v3 || v1 == dword_140A12138 || v1[2] != 8)
	{
		v5 = 0;
		v6 = a1;
	}
	else
	{
		v4 = dword_140A12138;
		v5 = 1;
		if ((unsigned __int64)v1 < v3)
			v4 = v1;
		if (v4[2] == 8)
			v6 = *(_QWORD**)v4;
		else
			v6 = 0i64;
	}
	v7 = sub_140056D60(a1, v5 + 1);
	v8 = v6[5];
	for (i = v7; i > 0; v8 -= 40i64)
	{
		if (v8 <= v6[10])
			break;
		--i;
		if (!*(_BYTE*)(**(_QWORD**)(v8 + 8) + 10i64))
			i -= *(_DWORD*)(v8 + 36);
	}
	if (i)
	{
		if (i < 0)
		{
			LODWORD(v12) = 0;
			goto LABEL_20;
		}
	LABEL_37:
		sub_140056570(a1, v5 + 1, aLevelOutOfRang_0);
	}
	v10 = v6[10];
	if (v8 <= v10)
		goto LABEL_37;
	v11 = (unsigned __int128)((__int64)(v8 - v10) * (__int128)0x6666666666666667i64) >> 64;
	v12 = ((unsigned __int64)v11 >> 63) + (v11 >> 4);
LABEL_20:
	v13 = v5 + 3;
	v14 = sub_1400580E0((__int64)a1, v5 + 3);
	if (v14 == dword_140A12138 || v14[2] == -1)
		sub_140056570(a1, v13, aValueExpected);
	if (v13 < 0)
	{
		a1[2] += 16i64 * (v5 + 4);
	}
	else
	{
		for (j = 16i64 * v13; a1[2] < (unsigned __int64)(j + a1[3]); a1[2] += 16i64)
			*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] = j + a1[3];
	}
	if (a1 != v6)
	{
		a1[2] -= 16i64;
		v16 = a1[2];
		v17 = v6[2];
		v6[2] = v17 + 16;
		*(_QWORD*)v17 = *(_QWORD*)v16;
		*(_DWORD*)(v17 + 8) = *(_DWORD*)(v16 + 8);
	}
	v18 = sub_140056D60(a1, v5 + 2);
	v19 = (_QWORD*)(v6[10] + 40i64 * (int)v12);
	v20 = (unsigned __int64*)sub_140059AB0(v6, v19, v18);
	if (v20)
	{
		v21 = v6[2];
		v22 = *v19 + 16i64 * (v18 - 1);
		*(_QWORD*)v22 = *(_QWORD*)(v21 - 16);
		*(_DWORD*)(v22 + 8) = *(_DWORD*)(v21 - 8);
	}
	v6[2] -= 16i64;
	if (v20)
	{
		v24 = -1i64;
		do
			++v24;
		while (*((_BYTE*)v20 + v24));
		sub_140058710((__int64)a1, v20, v24);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

