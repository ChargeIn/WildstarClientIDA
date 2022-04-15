#include "../winhttp.h"

//----- (00000001403AD690) ----------------------------------------------------
_BOOL8 __fastcall sub_1403AD690(__m128* a1, __m128* a2, float a3, float a4, float a5)
{
	unsigned __int64 v9; // rsi
	float v10; // xmm9_4
	__int64 v11; // rax
	unsigned __int64 v12; // rsi
	float v13; // xmm3_4
	__int64 v14; // rax
	__m128 v15; // xmm2
	__m128 v16; // xmm1
	float v17; // xmm1_4
	float v18; // xmm0_4
	float v20; // xmm1_4
	__m128 v21; // [rsp+20h] [rbp-68h]
	__m128 v22; // [rsp+30h] [rbp-58h]

	if (!a1 || !a2)
		return 0i64;
	v9 = a1[208].m128_u64[1];
	if (v9)
	{
		v10 = sub_14047A940(a1) * *(float*)(v9 + 140);
	}
	else
	{
		v11 = sub_14022D500(a1[13].m128_u32[2]);
		if (v11)
			v10 = *(float*)(v11 + 40);
		else
			v10 = 0.0;
	}
	v12 = a2[208].m128_u64[1];
	if (v12)
	{
		v13 = sub_14047A940(a2) * *(float*)(v12 + 140);
	}
	else
	{
		v14 = sub_14022D500(a2[13].m128_u32[2]);
		if (v14)
			v13 = *(float*)(v14 + 40);
		else
			v13 = 0.0;
	}
	v21 = a2[286];
	v22 = a1[286];
	v21.m128_f32[1] = a2[286].m128_f32[1] - a2[306].m128_f32[1];
	v22.m128_f32[1] = a1[286].m128_f32[1] - a1[306].m128_f32[1];
	v15 = _mm_sub_ps(v21, v22);
	v16 = _mm_mul_ps(v15, v15);
	v17 = fsqrt(
		(float)(v16.m128_f32[0] + _mm_shuffle_ps(v16, v16, 85).m128_f32[0])
		+ _mm_shuffle_ps(v16, v16, 170).m128_f32[0]);
	if (a3 > 0.0)
	{
		v18 = (float)(v17 - v13) - v10;
		if (v18 < 0.0)
			v18 = 0.0;
		if (a5 != 0.0)
		{
			if (a3 <= a5)
				a3 = 0.0;
			else
				a3 = a3 - a5;
		}
		if (v18 < a3)
			return 0i64;
	}
	v20 = (float)(v17 - v13) - v10;
	if (v20 < 0.0)
		v20 = 0.0;
	if (a5 != 0.0 && a4 != 0.0)
		a4 = a4 + a5;
	return v20 <= a4;
}

