//----- (00000001407B9A40) ----------------------------------------------------
__int64 __fastcall sub_1407B9A40(__m128* a1, __int64 a2, float* a3, __m128* a4)
{
	__m128 v4; // xmm2
	__m128 v5; // xmm5
	__m128 v6; // xmm3
	__m128 v7; // xmm7
	__m128 v8; // xmm2
	__m128 v9; // xmm6
	float v10; // xmm6_4
	__m128 v11; // xmm2
	__m128 v12; // xmm3
	float v13; // xmm3_4
	__m128 v14; // xmm2
	float v15; // xmm1_4
	float v16; // xmm2_4
	float v17; // xmm3_4
	float v18; // xmm6_4
	float v19; // xmm0_4
	float v20; // xmm1_4
	__int64 result; // rax
	__m128 v22; // xmm4
	__m128 v23; // xmm3
	__m128 v24; // xmm2
	float v25; // xmm2_4
	__m128 v26; // xmm0
	__m128 v27; // xmm3
	__m128 v28; // xmm1

	v5 = (__m128) * ((unsigned int*)a3 + 1);
	v4.m128_f32[0] = v5.m128_f32[0];
	v6 = _mm_add_ps(
		_mm_mul_ps(_mm_shuffle_ps((__m128) * (unsigned int*)a3, (__m128) * (unsigned int*)a3, 0), a1[25]),
		a1[23]);
	v7 = _mm_sub_ps(v6, *a4);
	v8 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), a1[25]), a1[23]);
	v9 = _mm_mul_ps(v7, v7);
	v10 = (float)((float)(v9.m128_f32[0] + _mm_shuffle_ps(v9, v9, 85).m128_f32[0])
		+ _mm_shuffle_ps(v9, v9, 170).m128_f32[0])
		- 1.0;
	if (v10 <= 0.0)
	{
		v20 = 0.0;
	}
	else
	{
		v11 = _mm_sub_ps(v8, v6);
		v12 = _mm_mul_ps(v11, v11);
		v13 = (float)(v12.m128_f32[0] + _mm_shuffle_ps(v12, v12, 85).m128_f32[0])
			+ _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
		if (v13 < *(float*)&dword_140C3D928)
			return 0i64;
		v14 = _mm_mul_ps(v11, v7);
		v15 = (float)((float)(v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 85).m128_f32[0])
			+ _mm_shuffle_ps(v14, v14, 170).m128_f32[0])
			* 2.0;
		v16 = (float)(v15 * v15) - (float)((float)(v13 * 4.0) * v10);
		if (v16 < 0.0)
			return 0i64;
		v17 = v13 * 2.0;
		v18 = fsqrt(v16);
		v19 = (float)(v18 - v15) * (float)(1.0 / v17);
		if (v19 < 0.0)
			return 0i64;
		v20 = (float)((float)-v15 - v18) * (float)(1.0 / v17);
		if (v20 > 1.0)
			return 0i64;
		if (v20 < 0.0)
			v20 = v19;
	}
	v5.m128_f32[0] = (float)((float)(v5.m128_f32[0] - *a3) * v20) + *a3;
	v22 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), a1[25]), a1[23]);
	v23 = _mm_sub_ps(v22, *a4);
	v24 = _mm_mul_ps(v23, v23);
	v25 = (float)(v24.m128_f32[0] + _mm_shuffle_ps(v24, v24, 85).m128_f32[0]) + _mm_shuffle_ps(v24, v24, 170).m128_f32[0];
	if (v25 < *(float*)&dword_140C54B18)
		return 0i64;
	v26 = 0i64;
	v26.m128_f32[0] = fsqrt(v25);
	v27 = _mm_div_ps(v23, _mm_shuffle_ps(v26, v26, 0));
	v28 = _mm_mul_ps(_mm_sub_ps(a1[24], v22), v27);
	if ((float)((float)(v28.m128_f32[0] + _mm_shuffle_ps(v28, v28, 85).m128_f32[0])
		+ _mm_shuffle_ps(v28, v28, 170).m128_f32[0]) > -0.0000099999997)
		return 0i64;
	a1[72].m128_i32[0] = v5.m128_i32[0];
	result = 1i64;
	a1[73] = v27;
	return result;
}
// 1407B9A73: variable 'v4' is possibly undefined
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3D928: using guessed type int dword_140C3D928;
// 140C54B18: using guessed type int dword_140C54B18;

