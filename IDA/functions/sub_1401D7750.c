//----- (00000001401D7750) ----------------------------------------------------
__int64 __fastcall sub_1401D7750(__m128* a1, __m128* a2, __m128* a3, float* a4)
{
	__m128 v4; // xmm4
	float v5; // xmm4_4
	__m128 v6; // xmm1
	float v7; // xmm1_4

	v4 = _mm_mul_ps(_mm_sub_ps(*a2, *a3), *a1);
	v5 = (float)(v4.m128_f32[0] + _mm_shuffle_ps(v4, v4, 85).m128_f32[0]) + _mm_shuffle_ps(v4, v4, 170).m128_f32[0];
	if (fabs(v5) < 0.0000099999997)
		return 0i64;
	v6 = _mm_mul_ps(*a2, *a1);
	v7 = (float)((float)((float)(v6.m128_f32[0] + _mm_shuffle_ps(v6, v6, 85).m128_f32[0])
		+ _mm_shuffle_ps(v6, v6, 170).m128_f32[0])
		+ a1->m128_f32[3])
		/ v5;
	if (v7 < 0.0 || v7 > 1.0)
		return 0i64;
	if (a4)
		*a4 = v7;
	return 1i64;
}

