#include "../winhttp.h"

//----- (000000014078B850) ----------------------------------------------------
__int64 __fastcall sub_14078B850(_QWORD* a1)
{
	_DWORD* v2; // rax
	int v3; // ecx
	int i; // edi
	int v5; // eax
	_DWORD* v6; // rcx
	bool v7; // zf
	__int64 result; // rax

	v2 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v2 >= a1[2] || v2 == dword_140A12138 || (v3 = *(_DWORD*)(a1[3] + 24i64)) != 0 && v3 != 5)
		sub_140056570(a1, 2u, aNilOrTableExpe);
	for (i = 0; a1[2] < (unsigned __int64)(a1[3] + 32i64); a1[2] += 16i64)
		*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] = a1[3] + 32i64;
	v5 = sub_140058BF0((__int64)a1, 1);
	v6 = (_DWORD*)a1[2];
	v7 = v5 == 0;
	v6[2] = 1;
	result = 1i64;
	LOBYTE(i) = !v7;
	*v6 = i;
	a1[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

