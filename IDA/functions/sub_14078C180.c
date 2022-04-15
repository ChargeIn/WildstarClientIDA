#include "../winhttp.h"

//----- (000000014078C180) ----------------------------------------------------
__int64 __fastcall sub_14078C180(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v3; // rcx
	_DWORD* v4; // rdi
	int v5; // ebp
	_QWORD* v6; // rdi
	int v7; // eax
	unsigned __int64 v8; // r8
	bool v9; // zf
	unsigned __int64 v10; // rax
	__int64 v11; // rsi
	int v12; // eax
	_QWORD* v13; // r14
	int v14; // ebp
	unsigned __int64* v15; // rsi
	__int64 v16; // r9
	__int64 v17; // r10
	unsigned __int64 v18; // r8
	__int64 v19; // rcx

	v1 = (_DWORD*)a1[3];
	v3 = a1[2];
	if ((unsigned __int64)v1 >= v3 || (v4 = dword_140A12138, v1 == dword_140A12138) || v1[2] != 8)
	{
		v5 = 0;
		v6 = a1;
	}
	else
	{
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
	v9 = v7 == 0;
	if (v7 > 0)
	{
		do
		{
			if (v8 <= v6[10])
				break;
			--v7;
			if (!*(_BYTE*)(**(_QWORD**)(v8 + 8) + 10i64))
				v7 -= *(_DWORD*)(v8 + 36);
			v8 -= 40i64;
		} while (v7 > 0);
		v9 = v7 == 0;
	}
	if (v9)
	{
		v10 = v6[10];
		if (v8 > v10)
		{
			v11 = (__int64)(v8 - v10) / 40;
			goto LABEL_21;
		}
	LABEL_26:
		sub_140056570(a1, v5 + 1, aLevelOutOfRang);
	}
	if (v7 >= 0)
		goto LABEL_26;
	LODWORD(v11) = 0;
LABEL_21:
	v12 = sub_140056D60(a1, v5 + 2);
	v13 = (_QWORD*)(v6[10] + 40i64 * (int)v11);
	v14 = v12;
	v15 = (unsigned __int64*)sub_140059AB0(v6, v13, v12);
	if (v15)
	{
		v16 = v6[2];
		v17 = *v13 + 16i64 * (v14 - 1);
		*(_QWORD*)v16 = *(_QWORD*)v17;
		*(_DWORD*)(v16 + 8) = *(_DWORD*)(v17 + 8);
		v6[2] += 16i64;
		sub_140058240((__int64)v6, (__int64)a1, 1);
		v18 = -1i64;
		do
			++v18;
		while (*((_BYTE*)v15 + v18));
		sub_140058710((__int64)a1, v15, v18);
		v19 = a1[2];
		*(_QWORD*)v19 = *(_QWORD*)(v19 - 32);
		*(_DWORD*)(v19 + 8) = *(_DWORD*)(v19 - 24);
		a1[2] += 16i64;
		return 2i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

