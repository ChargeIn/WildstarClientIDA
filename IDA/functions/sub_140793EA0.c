#include "../winhttp.h"

//----- (0000000140793EA0) ----------------------------------------------------
__int64 __fastcall sub_140793EA0(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v3; // rcx
	unsigned __int64 v4; // rax
	_DWORD* v5; // rdx
	int v6; // r8d
	_DWORD* v8; // rcx
	const char* v9; // rax

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2] == -1)
		sub_140056570(a1, 1u, aValueExpected);
	v3 = a1[3];
	v4 = a1[2];
	v5 = dword_140A12138;
	if (v3 < v4)
		v5 = (_DWORD*)a1[3];
	v6 = v5[2];
	if (!v6 || v6 == 1 && !*v5)
	{
		v8 = (_DWORD*)(v3 + 16);
		if ((unsigned __int64)v8 >= v4 || v8 == dword_140A12138 || (int)v8[2] <= 0)
			v9 = aAssertionFaile;
		else
			v9 = (const char*)sub_140056BB0(a1, 2u, 0i64);
		sub_140056830(a1, (unsigned __int64*)"%s", v9);
	}
	return (__int64)(v4 - v3) >> 4;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

