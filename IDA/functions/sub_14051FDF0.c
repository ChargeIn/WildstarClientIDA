#include "../winhttp.h"

//----- (000000014051FDF0) ----------------------------------------------------
__int64 __fastcall sub_14051FDF0(__int64 a1, _QWORD* a2)
{
	__int64 v4; // rax
	int v5; // edx
	__int64 v6; // r8
	_DWORD* v7; // rcx
	int v8; // eax
	BOOL v9; // eax
	_DWORD* v10; // rcx
	__int64 result; // rax

	v4 = sub_140056AB0(a2, 3u);
	v5 = 0;
	v6 = 0i64;
	if (v4)
		v6 = *(_QWORD*)(v4 + 8);
	*(_QWORD*)(a1 + 16) = v6;
	v7 = dword_140A12138;
	if ((unsigned __int64)(a2[3] + 48i64) < a2[2])
		v7 = (_DWORD*)(a2[3] + 48i64);
	v8 = v7[2];
	v9 = v8 && (v8 != 1 || *v7);
	*(_DWORD*)(a1 + 24) = v9;
	v10 = (_DWORD*)a2[2];
	LOBYTE(v5) = v6 != 0;
	v10[2] = 1;
	result = 1i64;
	*v10 = v5;
	a2[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

