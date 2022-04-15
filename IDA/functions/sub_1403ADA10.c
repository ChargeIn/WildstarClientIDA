#include "../winhttp.h"

//----- (00000001403ADA10) ----------------------------------------------------
__int64 __fastcall sub_1403ADA10(__m128* a1, __m128* a2)
{
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rax
	unsigned __int64 v8; // rsi
	__m128 v9; // xmm1
	__m128 v10; // xmm6
	float v11; // xmm6_4
	float v12; // xmm7_4
	__int64 v13; // rax
	unsigned __int64 v14; // rsi
	float v15; // xmm0_4
	__int64 v16; // rax
	float v17; // xmm6_4

	if (!a1)
		return 2i64;
	if (!a2)
		return 3i64;
	v5 = sub_1403D90D0(qword_140C65898, a1[12].m128_i32[0]);
	if (v5 && *(_DWORD*)(v5 + 128) == 9)
		return 7i64;
	v6 = sub_1403D90D0(qword_140C65898, a1[12].m128_i32[0]);
	if (v6)
	{
		if (*(_DWORD*)(v6 + 128) == 3)
			return 7i64;
	}
	if (sub_14047BDC0((__int64)a2))
		return 7i64;
	v7 = sub_1403D90D0(qword_140C65898, a2[12].m128_i32[0]);
	if (v7)
	{
		if (*(_DWORD*)(v7 + 128) == 3)
			return 7i64;
	}
	v8 = a1[208].m128_u64[1];
	v9 = _mm_sub_ps(a1[286], a2[286]);
	v10 = _mm_mul_ps(v9, v9);
	v11 = fsqrt(
		(float)(v10.m128_f32[0] + _mm_shuffle_ps(v10, v10, 85).m128_f32[0])
		+ _mm_shuffle_ps(v10, v10, 170).m128_f32[0]);
	if (v8)
	{
		v12 = sub_14047A940(a1) * *(float*)(v8 + 140);
	}
	else
	{
		v13 = sub_14022D500(a1[13].m128_u32[2]);
		if (v13)
			v12 = *(float*)(v13 + 40);
		else
			v12 = 0.0;
	}
	v14 = a2[208].m128_u64[1];
	if (v14)
	{
		v15 = sub_14047A940(a2) * *(float*)(v14 + 140);
	}
	else
	{
		v16 = sub_14022D500(a2[13].m128_u32[2]);
		if (v16)
			v15 = *(float*)(v16 + 40);
		else
			v15 = 0.0;
	}
	v17 = (float)(v11 - v15) - v12;
	if (v17 >= 0.0 && v17 > 6.0)
		return 8i64;
	if (a1[42].m128_i32[3] || a2[42].m128_i32[3])
		return 10i64;
	if (a1[37].m128_i32[0] || a2[37].m128_i32[0])
		return 11i64;
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

