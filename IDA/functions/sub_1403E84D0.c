//----- (00000001403E84D0) ----------------------------------------------------
__int64 __fastcall sub_1403E84D0(__m128* a1, __m128* a2, __m128* a3)
{
	__m128 v4; // xmm1
	__m128 v5; // xmm3
	float v6; // xmm3_4
	__m128 v7; // xmm1
	__m128 v8; // xmm2
	float v9; // xmm2_4

	if (a2[366].m128_u64[1])
	{
		if (!a1[366].m128_u64[1])
			return 0xFFFFFFFFi64;
	}
	else if (a1[366].m128_u64[1])
	{
		return 1i64;
	}
	v4 = _mm_sub_ps(a1[286], *a3);
	v5 = _mm_mul_ps(v4, v4);
	v6 = (float)(v5.m128_f32[0] + _mm_shuffle_ps(v5, v5, 85).m128_f32[0]) + _mm_shuffle_ps(v5, v5, 170).m128_f32[0];
	v7 = _mm_sub_ps(a2[286], *a3);
	v8 = _mm_mul_ps(v7, v7);
	v9 = (float)(v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0]) + _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
	if (v6 < v9)
		return 0xFFFFFFFFi64;
	return v6 > v9;
}

