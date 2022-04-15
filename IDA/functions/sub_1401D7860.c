//----- (00000001401D7860) ----------------------------------------------------
__int64 __fastcall sub_1401D7860(
	__m128* a1,
	__m128* a2,
	__m128* a3,
	__m128* a4,
	__m128* a5,
	float* a6,
	float* a7,
	float* a8)
{
	__m128 v8; // xmm7
	__m128 v9; // xmm2
	__m128 v10; // xmm8
	__m128 v11; // xmm3
	__m128 v12; // xmm5
	float v13; // xmm5_4
	__m128 v14; // xmm4
	__m128 v15; // xmm3
	float v16; // xmm3_4
	__m128 v17; // xmm2
	__m128 v18; // xmm4
	float v19; // xmm4_4
	__m128 v20; // xmm1

	v8 = _mm_sub_ps(*a5, *a3);
	v9 = _mm_sub_ps(*a4, *a3);
	v10 = *a2;
	v11 = _mm_sub_ps(
		_mm_mul_ps(_mm_shuffle_ps(v8, v8, 210), _mm_shuffle_ps(*a2, *a2, 201)),
		_mm_mul_ps(_mm_shuffle_ps(v8, v8, 201), _mm_shuffle_ps(v10, v10, 210)));
	v12 = _mm_mul_ps(v9, v11);
	v13 = (float)(v12.m128_f32[0] + _mm_shuffle_ps(v12, v12, 85).m128_f32[0]) + _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
	if (v13 < *(float*)&dword_140C3ED18)
		return 0i64;
	v14 = _mm_sub_ps(*a1, *a3);
	v15 = _mm_mul_ps(v14, v11);
	v16 = (float)(v15.m128_f32[0] + _mm_shuffle_ps(v15, v15, 85).m128_f32[0]) + _mm_shuffle_ps(v15, v15, 170).m128_f32[0];
	*a7 = v16;
	if (v16 < 0.0)
		return 0i64;
	if (v16 > v13)
		return 0i64;
	v17 = _mm_sub_ps(
		_mm_mul_ps(_mm_shuffle_ps(v9, v9, 210), _mm_shuffle_ps(v14, v14, 201)),
		_mm_mul_ps(_mm_shuffle_ps(v9, v9, 201), _mm_shuffle_ps(v14, v14, 210)));
	v18 = _mm_mul_ps(v17, v10);
	v19 = (float)(v18.m128_f32[0] + _mm_shuffle_ps(v18, v18, 85).m128_f32[0]) + _mm_shuffle_ps(v18, v18, 170).m128_f32[0];
	*a8 = v19;
	if (v19 < 0.0 || (float)(v19 + v16) > v13)
		return 0i64;
	v20 = _mm_mul_ps(v17, v8);
	*a6 = (float)((float)(v20.m128_f32[0] + _mm_shuffle_ps(v20, v20, 85).m128_f32[0])
		+ _mm_shuffle_ps(v20, v20, 170).m128_f32[0])
		/ v13;
	return 1i64;
}
// 140C3ED18: using guessed type int dword_140C3ED18;

