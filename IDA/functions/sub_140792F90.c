#include "../winhttp.h"

//----- (0000000140792F90) ----------------------------------------------------
__int64 __fastcall sub_140792F90(_QWORD* a1)
{
	_DWORD* v1; // rax
	_DWORD* v3; // rax
	unsigned __int64 v4; // rax
	_DWORD* v5; // rdi
	_DWORD* v6; // rcx
	_DWORD* v7; // rdx
	_DWORD* v8; // rax
	int v9; // r11d
	int v10; // eax
	__int64 result; // rax

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2] == -1)
		sub_140056570(a1, 1u, aValueExpected);
	v3 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64) == -1)
		sub_140056570(a1, 2u, aValueExpected);
	v4 = a1[3];
	v5 = (_DWORD*)a1[2];
	v6 = dword_140A12138;
	v7 = dword_140A12138;
	if (v4 < (unsigned __int64)v5)
		v6 = (_DWORD*)a1[3];
	v8 = (_DWORD*)(v4 + 16);
	if (v8 < v5)
		v7 = v8;
	v9 = 0;
	if (v6 == dword_140A12138 || v7 == dword_140A12138)
		v10 = 0;
	else
		v10 = sub_14005AC20((__int64)v6, (__int64)v7);
	v5[2] = 1;
	LOBYTE(v9) = v10 != 0;
	result = 1i64;
	*v5 = v9;
	a1[2] += 16i64;
	return result;
}
// 14079304A: variable 'v9' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

