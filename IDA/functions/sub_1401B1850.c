//----- (00000001401B1850) ----------------------------------------------------
__int64 __fastcall sub_1401B1850(__m128* a1, __m128* a2, __m128* a3, float* a4)
{
	__m128 v4; // xmm6
	__m128 v5; // xmm5
	float v6; // xmm5_4
	__m128 v7; // xmm2
	__m128 v8; // xmm3
	float v9; // xmm3_4
	__m128 v11; // xmm2
	float v12; // xmm1_4
	float v13; // xmm2_4
	float v14; // xmm3_4
	float v15; // xmm5_4
	float v16; // xmm0_4
	float v17; // xmm1_4

	v4 = _mm_sub_ps(*a2, *a1);
	v5 = _mm_mul_ps(v4, v4);
	v6 = (float)((float)(v5.m128_f32[0] + _mm_shuffle_ps(v5, v5, 85).m128_f32[0]) + _mm_shuffle_ps(v5, v5, 170).m128_f32[0])
		- (float)(a1[1].m128_f32[0] * a1[1].m128_f32[0]);
	if (v6 <= 0.0)
	{
		v17 = 0.0;
	}
	else
	{
		v7 = _mm_sub_ps(*a3, *a2);
		v8 = _mm_mul_ps(v7, v7);
		v9 = (float)(v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0]) + _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
		if (v9 < *(float*)&dword_140C3D928)
			return 0i64;
		v11 = _mm_mul_ps(v7, v4);
		v12 = (float)((float)(v11.m128_f32[0] + _mm_shuffle_ps(v11, v11, 85).m128_f32[0])
			+ _mm_shuffle_ps(v11, v11, 170).m128_f32[0])
			* 2.0;
		v13 = (float)(v12 * v12) - (float)((float)(v9 * 4.0) * v6);
		if (v13 < 0.0)
			return 0i64;
		v14 = v9 * 2.0;
		v15 = fsqrt(v13);
		v16 = (float)(v15 - v12) * (float)(1.0 / v14);
		if (v16 < 0.0)
			return 0i64;
		v17 = (float)((float)-v12 - v15) * (float)(1.0 / v14);
		if (v17 > 1.0)
			return 0i64;
		if (v17 < 0.0)
			v17 = v16;
	}
	if (a4)
		*a4 = v17;
	return 1i64;
}
// 140C3D928: using guessed type int dword_140C3D928;

