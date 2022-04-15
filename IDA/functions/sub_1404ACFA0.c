#include "../winhttp.h"

//----- (00000001404ACFA0) ----------------------------------------------------
__int64 __fastcall sub_1404ACFA0(__int64 a1, __int64 a2, unsigned int a3)
{
	__int64 v3; // r14
	__int64 v5; // rbx
	unsigned int v6; // edx
	unsigned int v7; // ecx
	__int64 v8; // rax
	unsigned int v9; // ecx
	__int64 v10; // rax
	unsigned int v11; // esi
	unsigned int v12; // edx
	unsigned int v13; // ecx
	int* i; // rax
	__int64 v15; // rax
	unsigned int v16; // edi
	__int64 v17; // rcx
	__int64 v18; // rdx
	_QWORD* v19; // rax
	_DWORD** v20; // rbx
	__int64 v21; // rdx
	int* v22; // rax
	int* k; // rbx
	__int64 v24; // rcx
	int* v25; // rax
	int* m; // rbx
	__int64 v27; // rcx
	__int64 v29; // [rsp+30h] [rbp-29h] BYREF
	__int64 j; // [rsp+38h] [rbp-21h]
	__int64 v31; // [rsp+40h] [rbp-19h]
	char v32[8]; // [rsp+48h] [rbp-11h] BYREF
	int* v33; // [rsp+50h] [rbp-9h]
	__int64 v34[6]; // [rsp+60h] [rbp+7h] BYREF

	v3 = qword_140C659D0;
	if (!a2 || !a3)
		return 2147500037i64;
	v5 = *(_QWORD*)(a2 + 24);
	if (!v5)
		return 2147500037i64;
	v6 = *(_DWORD*)(v5 + 116);
	if (!v6)
		return 2147500037i64;
	if (!sub_1404AD9B0(qword_140C659D0, v6))
	{
		v7 = *(_DWORD*)(v5 + 116);
		if (!v7)
			return 2147500037i64;
		v8 = sub_1402413C0(v7);
		if (!v8 || (*(_DWORD*)(v8 + 12) & 4) == 0)
			return 2147500037i64;
	}
	if (!sub_1404AD9B0(v3, a3))
	{
		v9 = *(_DWORD*)(v5 + 116);
		if (!v9)
			return 2147500037i64;
		v10 = sub_1402413C0(v9);
		if (!v10 || (*(_DWORD*)(v10 + 12) & 4) == 0)
			return 2147500037i64;
	}
	v11 = 0;
	j = 1i64;
	v33 = sub_14018B280(24i64, 0);
	*(_QWORD*)v33 = v33;
	*((_QWORD*)v33 + 1) = v33;
	v12 = *(_DWORD*)(v5 + 116);
	v34[1] = j;
	j = 1i64;
	v34[2] = 0i64;
	v34[4] = 1i64;
	v34[0] = 0i64;
	v31 = 0i64;
	v34[3] = 0i64;
	v34[5] = 0i64;
	if (v12 && (int)sub_1404AD310(v3, v12, a3, (__int64)v32, v34) >= 0)
	{
		v13 = 0;
		v29 = 0i64;
		j = 0i64;
		for (i = *(int**)v33; i != v33; ++v13)
			i = *(int**)i;
		LODWORD(v29) = v13;
		v15 = 4i64 * v13;
		if (!is_mul_ok(v13, 4ui64))
			v15 = -1i64;
		v16 = 0;
		for (j = (__int64)sub_14018B280(v15, 0); v16 < (unsigned int)v29; *(_DWORD*)(j + 4 * v21) = **v20)
		{
			v17 = *(_QWORD*)v33;
			v18 = **(_QWORD**)v33;
			v19 = *(_QWORD**)(*(_QWORD*)v33 + 8i64);
			v20 = *(_DWORD***)(*(_QWORD*)v33 + 16i64);
			*v19 = v18;
			*(_QWORD*)(v18 + 8) = v19;
			sub_14018B900(v17, 0);
			v21 = v16++;
		}
		sub_1403F4900(qword_140C65898, 0xFFu, (__int64)&v29);
		sub_14018B900(j, 0);
		v22 = v33;
		for (k = *(int**)v33; k != v33; v22 = v33)
		{
			v24 = (__int64)k;
			k = *(int**)k;
			sub_14018B900(v24, 0);
		}
		*(_QWORD*)v22 = v22;
		*((_QWORD*)v33 + 1) = v33;
	}
	else
	{
		v11 = -2147467259;
	}
	v25 = v33;
	for (m = *(int**)v33; m != v33; v25 = v33)
	{
		v27 = (__int64)m;
		m = *(int**)m;
		sub_14018B900(v27, 0);
	}
	*(_QWORD*)v25 = v25;
	*((_QWORD*)v33 + 1) = v33;
	sub_14018B900((__int64)v33, 0);
	return v11;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659D0: using guessed type __int64 qword_140C659D0;
// 1404ACFA0: using guessed type char var_68[8];

