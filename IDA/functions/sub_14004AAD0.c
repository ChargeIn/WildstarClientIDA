#include "../winhttp.h"

//----- (000000014004AAD0) ----------------------------------------------------
__int64 __fastcall sub_14004AAD0(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rsi
	int v5; // edi
	_DWORD* v6; // rax
	unsigned int v7; // r14d
	_DWORD* v8; // rax
	unsigned int v9; // eax
	int v10; // r14d
	_DWORD* v11; // rcx
	__int64 result; // rax

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 < a1[2] && v1 != dword_140A12138 && !v1[2])
		return 0i64;
	v3 = sub_140056AB0(a1, 1u);
	if (!v3)
		return 0i64;
	v4 = *(_QWORD*)(*(_QWORD*)v3 + 16i64);
	if (!v4 || !*(_QWORD*)(v4 + 16))
		return 0i64;
	v5 = 0;
	v6 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v7 = 0;
	else
		v7 = sub_140056D60(a1, 2u);
	v8 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v8 >= a1[2] || v8 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
		v9 = 0;
	else
		v9 = sub_140056D60(a1, 3u);
	v10 = sub_14002EC40(v4 + 32, v7, v9);
	if (v10)
	{
		sub_14002F5D0(v4 + 32, *(__int64**)(v4 + 16), 0i64);
		sub_14002FE90(v4 + 32, *(_QWORD*)(v4 + 16));
		sub_140030080(v4 + 32, *(_QWORD*)(v4 + 16));
	}
	v11 = (_DWORD*)a1[2];
	LOBYTE(v5) = v10 != 0;
	v11[2] = 1;
	result = 1i64;
	*v11 = v5;
	a1[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

