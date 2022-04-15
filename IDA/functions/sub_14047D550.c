#include "../winhttp.h"

//----- (000000014047D550) ----------------------------------------------------
_BOOL8 __fastcall sub_14047D550(__m128* a1, __m128* a2)
{
	unsigned __int64 v5; // rsi
	__m128 v6; // xmm6
	__m128 v7; // xmm7
	float v8; // xmm1_4
	__int64 v9; // rax
	__m128 v10; // xmm6
	float v11; // xmm2_4
	__m128 v12; // xmm1

	if (!a2)
		return 0i64;
	v5 = a1[208].m128_u64[1];
	v6 = a1[286];
	v7 = a2[286];
	if (v5)
	{
		v8 = sub_14047A940(a1) * *(float*)(v5 + 140);
	}
	else
	{
		v9 = sub_14022D500(a1[13].m128_u32[2]);
		if (v9)
			v8 = *(float*)(v9 + 40);
		else
			v8 = 0.0;
	}
	v10 = _mm_sub_ps(v6, v7);
	v11 = fmaxf(2.0, v8);
	v12 = _mm_mul_ps(v10, v10);
	return (float)((float)(v12.m128_f32[0] + _mm_shuffle_ps(v12, v12, 85).m128_f32[0])
		+ _mm_shuffle_ps(v12, v12, 170).m128_f32[0]) <= (float)(v11 * v11)
		|| (unsigned int)sub_14047D670(a1, a2, 2)
		|| (unsigned int)sub_14047D670(a1, a2, 4)
		|| (unsigned int)sub_14047D670(a1, a2, 8) != 0;
}

