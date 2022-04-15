#include "../winhttp.h"

//----- (000000014062B670) ----------------------------------------------------
_BOOL8 __fastcall sub_14062B670(__m128* a1, __m128* a2, float a3, __int64 a4, float* a5)
{
	unsigned __int64 v6; // rdi
	__m128 v7; // xmm1
	__m128 v8; // xmm6
	float v9; // xmm6_4
	float v10; // xmm7_4
	__int64 v11; // rax
	unsigned __int64 v12; // rdi
	float v13; // xmm0_4
	__int64 v14; // rax
	float v15; // xmm6_4

	if (!a1 || !a2)
		return 0i64;
	v6 = a2[208].m128_u64[1];
	v7 = _mm_sub_ps(a2[286], a1[286]);
	v8 = _mm_mul_ps(v7, v7);
	v9 = fsqrt((float)(v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0]) + _mm_shuffle_ps(v8, v8, 170).m128_f32[0]);
	if (v6)
	{
		v10 = sub_14047A940(a2) * *(float*)(v6 + 140);
	}
	else
	{
		v11 = sub_14022D500(a2[13].m128_u32[2]);
		if (v11)
			v10 = *(float*)(v11 + 40);
		else
			v10 = 0.0;
	}
	v12 = a1[208].m128_u64[1];
	if (v12)
	{
		v13 = sub_14047A940(a1) * *(float*)(v12 + 140);
	}
	else
	{
		v14 = sub_14022D500(a1[13].m128_u32[2]);
		if (v14)
			v13 = *(float*)(v14 + 40);
		else
			v13 = 0.0;
	}
	v15 = (float)(v9 - v10) - v13;
	if (v15 < 0.0)
		v15 = 0.0;
	if (a5)
		*a5 = v15;
	return v15 <= a3;
}

