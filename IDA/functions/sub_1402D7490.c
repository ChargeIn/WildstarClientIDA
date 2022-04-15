//----- (00000001402D7490) ----------------------------------------------------
char __fastcall sub_1402D7490(__m128* a1, __m128* a2, _QWORD* a3, float* a4)
{
	unsigned __int16* v4; // r10
	__m128 v5; // xmm10
	__m128 v6; // xmm9
	__m128 v7; // xmm2
	__m128 v8; // xmm8
	__m128 v9; // xmm7
	__m128 v10; // xmm3
	float v11; // xmm3_4
	float v12; // xmm5_4
	__m128 v13; // xmm4
	__m128 v14; // xmm1
	float v15; // xmm3_4
	__m128 v16; // xmm2
	__m128 v17; // xmm4
	float v18; // xmm4_4
	char result; // al
	__m128 v20; // xmm1

	v4 = (unsigned __int16*)a3[1];
	v5 = *a2;
	v6 = *(__m128*)(*a3 + 16i64 * *v4);
	v7 = _mm_sub_ps(*(__m128*)(*a3 + 16i64 * v4[1]), v6);
	v8 = _mm_sub_ps(*(__m128*)(*a3 + 16i64 * v4[2]), v6);
	v9 = _mm_sub_ps(
		_mm_mul_ps(_mm_shuffle_ps(v8, v8, 210), _mm_shuffle_ps(*a2, *a2, 201)),
		_mm_mul_ps(_mm_shuffle_ps(v8, v8, 201), _mm_shuffle_ps(v5, v5, 210)));
	v10 = _mm_mul_ps(v7, v9);
	v11 = (float)(v10.m128_f32[0] + _mm_shuffle_ps(v10, v10, 85).m128_f32[0]) + _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
	if (v11 > -0.0000099999997 && v11 < 0.0000099999997)
		return 0;
	v12 = 1.0 / v11;
	v13 = _mm_sub_ps(*a1, v6);
	v14 = _mm_mul_ps(v13, v9);
	v15 = (float)((float)(v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 85).m128_f32[0])
		+ _mm_shuffle_ps(v14, v14, 170).m128_f32[0])
		* (float)(1.0 / v11);
	if (v15 < 0.0)
		return 0;
	if (v15 > 1.0)
		return 0;
	v16 = _mm_sub_ps(
		_mm_mul_ps(_mm_shuffle_ps(v7, v7, 210), _mm_shuffle_ps(v13, v13, 201)),
		_mm_mul_ps(_mm_shuffle_ps(v7, v7, 201), _mm_shuffle_ps(v13, v13, 210)));
	v17 = _mm_mul_ps(v16, v5);
	v18 = (float)((float)(v17.m128_f32[0] + _mm_shuffle_ps(v17, v17, 85).m128_f32[0])
		+ _mm_shuffle_ps(v17, v17, 170).m128_f32[0])
		* v12;
	if (v18 < 0.0 || (float)(v18 + v15) > 1.0)
		return 0;
	result = 1;
	v20 = _mm_mul_ps(v16, v8);
	*a4 = (float)((float)(v20.m128_f32[0] + _mm_shuffle_ps(v20, v20, 85).m128_f32[0])
		+ _mm_shuffle_ps(v20, v20, 170).m128_f32[0])
		* v12;
	return result;
}

