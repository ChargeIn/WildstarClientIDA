//----- (00000001401B20F0) ----------------------------------------------------
__m128* __fastcall sub_1401B20F0(__m128* a1, __m128* a2)
{
	__m128 v2; // xmm0
	__m128 v3; // xmm2
	__m128 v4; // xmm0
	__m128 v5; // xmm4
	__m128 v6; // xmm8
	__m128 v7; // xmm5
	__m128 v8; // xmm3
	__m128 v9; // xmm7
	__m128 v10; // xmm6
	__m128 v11; // xmm8
	__m128 v12; // xmm2
	__m128 v13; // xmm2
	__m128 v14; // xmm3
	__m128 v15; // xmm2
	__m128 v16; // xmm2
	__m128 v17; // xmm3
	__m128 v18; // xmm6
	__m128 v19; // xmm2
	__m128 v20; // xmm2
	__m128 v21; // xmm3
	__m128 v22; // xmm2
	__m128 v23; // xmm2
	__m128 v24; // xmm8
	__m128* result; // rax
	__m128 v26; // xmm2

	v2 = a2[2];
	v3 = _mm_unpackhi_ps(v2, a2[3]);
	v4 = _mm_unpacklo_ps(v2, a2[3]);
	v5 = _mm_unpackhi_ps(*a2, a2[1]);
	v6 = _mm_unpacklo_ps(*a2, a2[1]);
	v7 = _mm_shuffle_ps(v5, v3, 68);
	v8 = _mm_sub_ps((__m128)0i64, v7);
	v9 = _mm_sub_ps((__m128)0i64, _mm_shuffle_ps(v5, v3, 238));
	v10 = _mm_shuffle_ps(v6, v4, 68);
	v11 = _mm_shuffle_ps(v6, v4, 238);
	v12 = _mm_mul_ps(v8, v8);
	v12.m128_f32[0] = 1.0
		/ fsqrt(
			(float)(v12.m128_f32[0] + _mm_shuffle_ps(v12, v12, 85).m128_f32[0])
			+ _mm_shuffle_ps(v12, v12, 170).m128_f32[0]);
	v13 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v8);
	v14 = _mm_add_ps(v9, v7);
	*a1 = v13;
	v15 = _mm_mul_ps(v14, v14);
	v15.m128_f32[0] = 1.0
		/ fsqrt(
			(float)(v15.m128_f32[0] + _mm_shuffle_ps(v15, v15, 85).m128_f32[0])
			+ _mm_shuffle_ps(v15, v15, 170).m128_f32[0]);
	v16 = _mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), v14);
	v17 = _mm_sub_ps(v9, v10);
	v18 = _mm_add_ps(v10, v9);
	a1[1] = v16;
	v19 = _mm_mul_ps(v17, v17);
	v19.m128_f32[0] = 1.0
		/ fsqrt(
			(float)(v19.m128_f32[0] + _mm_shuffle_ps(v19, v19, 85).m128_f32[0])
			+ _mm_shuffle_ps(v19, v19, 170).m128_f32[0]);
	v20 = _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v17);
	v21 = _mm_sub_ps(v9, v11);
	a1[2] = v20;
	v22 = _mm_mul_ps(v18, v18);
	v22.m128_f32[0] = 1.0
		/ fsqrt(
			(float)(v22.m128_f32[0] + _mm_shuffle_ps(v22, v22, 85).m128_f32[0])
			+ _mm_shuffle_ps(v22, v22, 170).m128_f32[0]);
	a1[3] = _mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), v18);
	v23 = _mm_mul_ps(v21, v21);
	v24 = _mm_add_ps(v11, v9);
	result = a1;
	v23.m128_f32[0] = 1.0
		/ fsqrt(
			(float)(v23.m128_f32[0] + _mm_shuffle_ps(v23, v23, 85).m128_f32[0])
			+ _mm_shuffle_ps(v23, v23, 170).m128_f32[0]);
	a1[4] = _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), v21);
	v26 = _mm_mul_ps(v24, v24);
	v26.m128_f32[0] = 1.0
		/ fsqrt(
			(float)(v26.m128_f32[0] + _mm_shuffle_ps(v26, v26, 85).m128_f32[0])
			+ _mm_shuffle_ps(v26, v26, 170).m128_f32[0]);
	a1[5] = _mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), v24);
	return result;
}

