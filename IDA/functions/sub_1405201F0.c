#include "../winhttp.h"

//----- (00000001405201F0) ----------------------------------------------------
__int64 __fastcall sub_1405201F0(__int64 a1, _QWORD* a2)
{
	__int64 v4; // rax
	_DWORD* v5; // r9
	__int64 v6; // r10
	int v7; // edx
	int v8; // ecx
	BOOL v9; // eax
	_DWORD* v10; // rcx
	__int64 result; // rax

	v4 = sub_1404F87C0(a2, 3u);
	v5 = dword_140A12138;
	*(_QWORD*)(a1 + 16) = v4;
	v6 = v4;
	if ((unsigned __int64)(a2[3] + 48i64) < a2[2])
		v5 = (_DWORD*)(a2[3] + 48i64);
	v7 = 0;
	v8 = v5[2];
	v9 = v8 && (v8 != 1 || *v5);
	*(_DWORD*)(a1 + 24) = v9;
	v10 = (_DWORD*)a2[2];
	LOBYTE(v7) = v6 != 0;
	v10[2] = 1;
	result = 1i64;
	*v10 = v7;
	a2[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

