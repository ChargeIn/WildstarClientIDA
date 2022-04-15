//----- (00000001401ADF30) ----------------------------------------------------
__m128* __fastcall sub_1401ADF30(__m128* a1, __m128* a2, __m128* a3, __m128* a4, __m128* a5, float a6)
{
	__m128 v6; // xmm5
	__m128 v7; // xmm6
	__m128 v8; // xmm3
	__m128 v9; // xmm0
	__m128 v10; // xmm4
	__m128 v11; // xmm7
	__m128* result; // rax

	v6 = (__m128)LODWORD(a6);
	v7 = v6;
	v7.m128_f32[0] = v6.m128_f32[0] * v6.m128_f32[0];
	v8 = v7;
	v9 = v7;
	v8.m128_f32[0] = (float)(v6.m128_f32[0] * v6.m128_f32[0]) * v6.m128_f32[0];
	v10 = v8;
	v8.m128_f32[0] = v8.m128_f32[0] * 1.5;
	v10.m128_f32[0] = v10.m128_f32[0] * 0.5;
	v11 = v10;
	v11.m128_f32[0] = v10.m128_f32[0] - (float)((float)(v6.m128_f32[0] * v6.m128_f32[0]) * 0.5);
	v9.m128_f32[0] = (float)((float)((float)(v6.m128_f32[0] * v6.m128_f32[0]) * 2.0) - v8.m128_f32[0]) + (float)(a6 * 0.5);
	result = a1;
	v7.m128_f32[0] = (float)((float)(v6.m128_f32[0] * v6.m128_f32[0]) - v10.m128_f32[0]) - (float)(a6 * 0.5);
	v8.m128_f32[0] = (float)(v8.m128_f32[0] - (float)((float)(v6.m128_f32[0] * v6.m128_f32[0]) * 2.5)) + 1.0;
	*a1 = _mm_add_ps(
		_mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), *a5),
		_mm_add_ps(
			_mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), *a4),
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), *a3), _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *a2))));
	return result;
}

