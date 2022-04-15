#include "../winhttp.h"

//----- (0000000140741C40) ----------------------------------------------------
__int64 __fastcall sub_140741C40(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rax
	__m128* v6; // rax
	_QWORD* v7; // rax
	__int64 v8; // r11
	__int64 v9; // r9
	int v10; // r8d
	__int64 v11; // rdx
	__m128 v13; // [rsp+20h] [rbp-38h] BYREF
	char v14[8]; // [rsp+30h] [rbp-28h] BYREF
	int v15; // [rsp+38h] [rbp-20h]
	__int64 v16; // [rsp+40h] [rbp-18h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = sub_14022BFC0(*(_DWORD*)(v3 + 8))) != 0)
	{
		v5 = sub_14024B980(*(_DWORD*)(v4 + 4));
		if (v5)
		{
			v6 = (__m128*)(v5 + 12);
		}
		else
		{
			v6 = &v13;
			v13 = 0i64;
		}
		v13 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)v6->m128_u32[0], (__m128)v6->m128_u32[2]),
			_mm_unpacklo_ps((__m128)v6->m128_u32[1], (__m128)0i64));
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
// 140741CEB: variable 'v8' is possibly undefined
// 140741C40: using guessed type char var_28[8];

