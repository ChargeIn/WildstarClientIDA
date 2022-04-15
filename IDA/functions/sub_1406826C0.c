#include "../winhttp.h"

//----- (00000001406826C0) ----------------------------------------------------
__int64 __fastcall sub_1406826C0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // r10
	__int64 v5; // r10
	__int64 v6; // rax
	__int64 v7; // r10
	unsigned int* v8; // rax
	unsigned int* v9; // rdi
	_QWORD* v10; // rax
	__int64 v11; // r11
	__int64 v12; // r9
	int v13; // r8d
	__int64 v14; // rdx
	__m128 v16; // [rsp+20h] [rbp-38h] BYREF
	char v17[8]; // [rsp+30h] [rbp-28h] BYREF
	int v18; // [rsp+38h] [rbp-20h]
	__int64 v19; // [rsp+40h] [rbp-18h]

	if (qword_140C65970
		&& *(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v4 = *(_QWORD*)(v2 + 8)) != 0
		&& (v5 = *(_QWORD*)(v4 + 8)) != 0
		&& (v6 = sub_140617410(v3, *(_DWORD*)(v5 + 4))) != 0
		&& *(_DWORD*)(*(_QWORD*)(v6 + 152) + 4i64) == 4
		&& *(_DWORD*)v6 == 1)
	{
		v8 = (unsigned int*)sub_14024B980(*(_DWORD*)(v7 + 16));
		v9 = v8;
		if (v8 && sub_1403F8270(qword_140C65898, *v8, 0))
		{
			v16 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v9[3], (__m128)v9[5]), _mm_unpacklo_ps((__m128)v9[4], (__m128)0i64));
			sub_1400FA3C0((__int64)v17, (__int64)a1, v16.m128_f32);
			v10 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v19 + 32) + 160i64), v18);
			v12 = *(_QWORD*)(v11 + 16);
			v13 = v18;
			*(_QWORD*)v12 = *v10;
			v14 = *((unsigned int*)v10 + 2);
			*(_DWORD*)(v12 + 8) = v14;
			*(_QWORD*)(v11 + 16) += 16i64;
			sub_1400579E0(v11, v14, v13);
			return 1i64;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140682721: variable 'v3' is possibly undefined
// 14068274C: variable 'v7' is possibly undefined
// 1406827C6: variable 'v11' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;
// 1406826C0: using guessed type char var_28[8];

