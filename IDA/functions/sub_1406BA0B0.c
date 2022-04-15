#include "../winhttp.h"

//----- (00000001406BA0B0) ----------------------------------------------------
__int64 __fastcall sub_1406BA0B0(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // esi
	__int64 v4; // rdi
	__int64 v5; // rdi
	_DWORD* v6; // rax
	int v7; // edx
	int v8; // ecx
	int v9; // eax
	__int64 v10; // rcx

	v2 = sub_140056AB0(a1, 1u);
	v3 = 0;
	if (v2 && (v4 = *(_QWORD*)(v2 + 8)) != 0)
		v5 = *(_QWORD*)(v4 + 8);
	else
		v5 = 0i64;
	v6 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v7 = -1;
	else
		v7 = sub_140056D60(a1, 2u);
	if (!v5 || v7 < 0)
		goto LABEL_20;
	v8 = -1;
	v9 = 0;
	if (*(_DWORD*)(v5 + 24) != -1)
		v8 = *(_DWORD*)(v5 + 24);
	if (v8)
		v9 = v8;
	if (v7 < v9)
	{
		if ((unsigned __int64)(unsigned int)v7 < *(_QWORD*)(v5 + 24))
			v3 = *(_DWORD*)(*(_QWORD*)(v5 + 16) + 4i64 * (unsigned int)v7);
		v10 = a1[2];
		*(_DWORD*)(v10 + 8) = 3;
		*(double*)v10 = (double)v3;
	}
	else
	{
	LABEL_20:
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

