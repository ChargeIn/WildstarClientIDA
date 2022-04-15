//----- (0000000140251700) ----------------------------------------------------
__m128* __fastcall sub_140251700(__m128* a1, float* a2, __m128* a3, __m128* a4, __int64 a5)
{
	__m128* result; // rax
	__m128 v6; // xmm2
	__m128 v7; // xmm1
	__m128 v8; // xmm2
	__m128 v9; // [rsp+0h] [rbp-18h]

	result = a1;
	v9.m128_f32[0] = (float)((float)((float)(*a2 - (float)*(int*)a5) / (float)*(int*)(a5 + 8)) * 2.0) - 1.0;
	v9.m128_f32[1] = 1.0 - (float)((float)((float)(a2[1] - (float)*(int*)(a5 + 4)) / (float)*(int*)(a5 + 12)) * 2.0);
	v9.m128_f32[2] = (float)(a2[2] - *(float*)(a5 + 16)) / (float)(*(float*)(a5 + 20) - *(float*)(a5 + 16));
	v6 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v9, v9, 85), a4[1]), _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), *a4)),
			_mm_mul_ps(_mm_shuffle_ps(v9, v9, 170), a4[2])),
		a4[3]);
	v7 = _mm_shuffle_ps(v6, v6, 255);
	v8 = _mm_div_ps(v6, _mm_shuffle_ps(v7, v7, 0));
	*a1 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v8, v8, 85), a3[1]), _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), *a3)),
			_mm_mul_ps(_mm_shuffle_ps(v8, v8, 170), a3[2])),
		a3[3]);
	return result;
}
// 1402517AA: variable 'v9' is possibly undefined
// 140251700: using guessed type __m128 var_18;

