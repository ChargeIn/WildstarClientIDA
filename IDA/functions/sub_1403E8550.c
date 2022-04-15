//----- (00000001403E8550) ----------------------------------------------------
__m128 __fastcall sub_1403E8550(__m128* a1, __m128* a2, __m128* a3)
{
	__m128 v4; // xmm1
	__m128 v5; // xmm4
	__m128 v6; // xmm3
	__m128 v7; // xmm2

	if (a2[366].m128_u64[1])
	{
		if (!a1[366].m128_u64[1])
			return (__m128)0xBF800000;
	}
	else if (a1[366].m128_u64[1])
	{
		return (__m128)0x3F800000u;
	}
	v4 = _mm_sub_ps(a1[286], *a3);
	v5 = _mm_sub_ps(a2[286], *a3);
	v6 = _mm_mul_ps(v4, v4);
	v7 = _mm_mul_ps(v5, v5);
	v6.m128_f32[0] = (float)((float)(v6.m128_f32[0] + _mm_shuffle_ps(v6, v6, 85).m128_f32[0])
		+ _mm_shuffle_ps(v6, v6, 170).m128_f32[0])
		- (float)((float)(v7.m128_f32[0] + _mm_shuffle_ps(v7, v7, 85).m128_f32[0])
			+ _mm_shuffle_ps(v7, v7, 170).m128_f32[0]);
	return v6;
}

