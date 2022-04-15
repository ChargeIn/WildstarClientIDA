//----- (000000014033FCA0) ----------------------------------------------------
void __fastcall sub_14033FCA0(__m128* a1, __m128* a2, __m128* a3)
{
	__m128 v3; // xmm3
	__m128 v4; // xmm2
	__m128 v5; // xmm3
	__m128 v6; // xmm4
	float v7; // xmm4_4
	__m128 v8; // xmm2
	__m128 v9; // xmm1

	v3 = a2[1];
	v4 = _mm_sub_ps(v3, a3[3]);
	v5 = _mm_sub_ps(v3, a3[2]);
	v6 = _mm_mul_ps(v4, v4);
	v7 = fsqrt((float)(v6.m128_f32[0] + _mm_shuffle_ps(v6, v6, 85).m128_f32[0]) + _mm_shuffle_ps(v6, v6, 170).m128_f32[0]);
	if (v5.m128_f32[0] == 0.0
		&& _mm_shuffle_ps(v5, v5, 85).m128_f32[0] == 0.0
		&& _mm_shuffle_ps(v5, v5, 170).m128_f32[0] == 0.0)
	{
		a1[1] = _mm_sub_ps((__m128)0i64, v4);
		*a1 = *a2;
	}
	else
	{
		v8 = _mm_mul_ps(v5, v5);
		v9 = _mm_shuffle_ps(v8, v8, 170);
		v8.m128_f32[0] = (float)(v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0]) + v9.m128_f32[0];
		v9.m128_f32[0] = v7;
		v8.m128_f32[0] = 1.0 / fsqrt(v8.m128_f32[0]);
		a1[1] = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), v5), _mm_shuffle_ps(v9, v9, 0));
		*a1 = *a2;
	}
}

