//----- (00000001407B9FB0) ----------------------------------------------------
__int64 __fastcall sub_1407B9FB0(__m128* a1, __int64 a2, float* a3, __m128* a4, __m128* a5)
{
	__m128 v5; // xmm4
	__m128 v6; // xmm5
	float v7; // xmm6_4
	__m128 v8; // xmm7
	__m128 v9; // xmm1
	float v10; // xmm7_4
	__m128 v11; // xmm2
	float v12; // xmm2_4
	__m128 v13; // xmm3
	float v14; // xmm7_4
	float v15; // xmm2_4
	float v16; // xmm0_4
	__int64 result; // rax

	v5 = a1[23];
	v6 = a1[25];
	v7 = a3[1];
	v8 = _mm_mul_ps(
		_mm_sub_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps((__m128) * (unsigned int*)a3, (__m128) * (unsigned int*)a3, 0), v6), v5),
			*a4),
		*a5);
	v9 = _mm_shuffle_ps(v8, v8, 170);
	v10 = (float)(v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0]) + v9.m128_f32[0];
	v9.m128_f32[0] = v7;
	v11 = _mm_mul_ps(_mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v6), v5), *a4), *a5);
	v12 = (float)(v11.m128_f32[0] + _mm_shuffle_ps(v11, v11, 85).m128_f32[0]) + _mm_shuffle_ps(v11, v11, 170).m128_f32[0];
	if (v10 < 0.0)
		v13 = (__m128)0xBF800000;
	else
		v13 = (__m128)0x3F800000u;
	v14 = v10 * v13.m128_f32[0];
	v15 = v12 * v13.m128_f32[0];
	if (v15 > (float)(v14 - 0.0000099999997))
		return 0i64;
	v16 = (float)(1.0 - v14) / (float)(v15 - v14);
	if (v16 < 0.0 || v16 >= 1.0)
		return 0i64;
	a1[72].m128_f32[0] = (float)((float)(v7 - *a3) * v16) + *a3;
	result = 1i64;
	a1[73] = _mm_mul_ps(*a5, _mm_shuffle_ps(v13, v13, 0));
	return result;
}

