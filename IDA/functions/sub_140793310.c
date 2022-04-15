#include "../winhttp.h"

//----- (0000000140793310) ----------------------------------------------------
__int64 __fastcall sub_140793310(_QWORD* a1)
{
	int v2; // eax
	_DWORD* v3; // rcx
	int v4; // esi
	__int64 v5; // rdi
	int v6; // eax
	__int64 v7; // rbp
	unsigned int v8; // ecx
	int v9; // edi
	int v10; // eax
	bool v11; // zf
	double* v12; // rax
	int v13; // eax
	__int64 v14; // rcx

	v2 = sub_1400568D0(a1);
	v3 = (_DWORD*)(a1[3] + 16i64);
	v4 = 0;
	v5 = v2;
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v6 = 0;
	else
		v6 = sub_140056D60(a1, 2u);
	v7 = v5;
	v8 = dword_140B50D70[v5];
	if (v8 > 7)
		v9 = -1;
	else
		v9 = sub_140058F00((__int64)a1, v6, 0, a1[4], v8);
	v10 = dword_140B50D70[v7];
	if (v10 == 3)
	{
		v13 = sub_140058F00((__int64)a1, 0, 0, a1[4], 4);
		v14 = a1[2];
		*(_DWORD*)(v14 + 8) = 3;
		*(double*)v14 = (double)v13 * 0.0009765625 + (double)v9;
	}
	else
	{
		v11 = v10 == 5;
		v12 = (double*)a1[2];
		if (v11)
		{
			*((_DWORD*)v12 + 2) = 1;
			LOBYTE(v4) = v9 != 0;
			*(_DWORD*)v12 = v4;
		}
		else
		{
			*((_DWORD*)v12 + 2) = 3;
			*v12 = (double)v9;
		}
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B50D70: using guessed type _DWORD dword_140B50D70[8];

