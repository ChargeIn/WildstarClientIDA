#include "../winhttp.h"

//----- (0000000140792910) ----------------------------------------------------
__int64 __fastcall sub_140792910(_QWORD* a1)
{
	_DWORD* v1; // rax
	_DWORD* v3; // rdi
	unsigned __int64 v4; // r8
	_DWORD* v5; // rcx
	int v6; // eax
	__int64 v7; // rdx
	unsigned __int64 v8; // r8
	int v9; // eax
	__int64 v10; // rdx

	v1 = (_DWORD*)a1[3];
	v3 = dword_140A12138;
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2] == -1)
		sub_140056570(a1, 1u, aValueExpected);
	v4 = a1[2];
	v5 = dword_140A12138;
	if (a1[3] < v4)
		v5 = (_DWORD*)a1[3];
	v6 = v5[2];
	if (v6 == 5 || v6 == 7)
		v7 = *(_QWORD*)(*(_QWORD*)v5 + 16i64);
	else
		v7 = *(_QWORD*)(a1[4] + 8i64 * (int)v5[2] + 224);
	if (v7)
	{
		*(_QWORD*)v4 = v7;
		*(_DWORD*)(v4 + 8) = 5;
		a1[2] += 16i64;
		v8 = a1[2];
		if (a1[3] < v8)
			v3 = (_DWORD*)a1[3];
		v9 = v3[2];
		if (v9 == 5 || v9 == 7)
			v10 = *(_QWORD*)(*(_QWORD*)v3 + 16i64);
		else
			v10 = *(_QWORD*)(a1[4] + 8i64 * (int)v3[2] + 224);
		if (v10)
		{
			*(_QWORD*)v8 = v10;
			*(_DWORD*)(v8 + 8) = 5;
			a1[2] += 16i64;
			sub_140056EB0((__int64)a1, (unsigned __int64*)aMetatable);
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(v4 + 8) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

