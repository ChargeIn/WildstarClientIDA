#include "../winhttp.h"

//----- (0000000140681240) ----------------------------------------------------
__int64 __fastcall sub_140681240(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	unsigned int* v5; // rax
	unsigned int* v6; // rdi
	_QWORD* v7; // rax
	__int64 v8; // r11
	__int64 v9; // r9
	int v10; // r8d
	__int64 v11; // rdx
	__m128 v13; // [rsp+20h] [rbp-38h] BYREF
	char v14[8]; // [rsp+30h] [rbp-28h] BYREF
	int v15; // [rsp+38h] [rbp-20h]
	__int64 v16; // [rsp+40h] [rbp-18h]

	if (qword_140C65970
		&& *(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0)
	{
		v5 = (unsigned int*)sub_14024B980(*(_DWORD*)(*(_QWORD*)(v4 + 24) + 60i64));
		v6 = v5;
		if (v5 && sub_1403F8270(qword_140C65898, *v5, 0))
		{
			v13 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v6[3], (__m128)v6[5]), _mm_unpacklo_ps((__m128)v6[4], (__m128)0i64));
			sub_1400FA3C0((__int64)v14, (__int64)a1, v13.m128_f32);
			v7 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v16 + 32) + 160i64), v15);
			v9 = *(_QWORD*)(v8 + 16);
			v10 = v15;
			*(_QWORD*)v9 = *v7;
			v11 = *((unsigned int*)v7 + 2);
			*(_DWORD*)(v9 + 8) = v11;
			*(_QWORD*)(v8 + 16) += 16i64;
			sub_1400579E0(v8, v11, v10);
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
// 14068131A: variable 'v8' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140681240: using guessed type char var_28[8];

