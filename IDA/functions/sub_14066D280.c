#include "../winhttp.h"

//----- (000000014066D280) ----------------------------------------------------
__int64 __fastcall sub_14066D280(_QWORD* a1)
{
	float v1; // xmm0_4
	__int64 v3; // rax
	__int64 v4; // rax
	_QWORD** v5; // rdi
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rdx
	_DWORD* v10; // rax

	if (*(_QWORD*)(qword_140C65898 + 120) && (v3 = sub_140056AB0(a1, 1u)) != 0 && (v4 = *(_QWORD*)(v3 + 8)) != 0)
		v5 = (_QWORD**)sub_14066DAB0(*(_QWORD*)(*(_QWORD*)(v4 + 8) + 8i64), **(_DWORD**)(*(_QWORD*)(v4 + 8) + 8i64));
	else
		v5 = 0i64;
	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v6 = sub_140056AB0(a1, 1u)) != 0
		&& (v7 = *(_QWORD*)(v6 + 8)) != 0
		&& (v8 = *(_QWORD*)(v7 + 8)) != 0
		&& v5)
	{
		sub_140499B40(v5, **(_DWORD**)(v8 + 8));
		v9 = a1[2];
		*(_DWORD*)(v9 + 8) = 3;
		*(double*)v9 = (double)(int)v1;
	}
	else
	{
		v10 = (_DWORD*)a1[2];
		*v10 = 0;
		v10[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 14066D327: variable 'v1' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

