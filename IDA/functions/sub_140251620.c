//----- (0000000140251620) ----------------------------------------------------
float* __fastcall sub_140251620(float* a1, __m128* a2, __m128* a3, __int64 a4)
{
	__m128 v4; // xmm4
	__m128 v5; // xmm0
	int v6; // eax
	__m128 v7; // xmm2
	float v8; // xmm3_4
	float* result; // rax
	float v10; // xmm1_4

	v4 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 85), a3[1]), _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 0), *a3)),
			_mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 170), a3[2])),
		a3[3]);
	v5 = _mm_and_ps(_mm_shuffle_ps(v4, v4, 255), (__m128)xmmword_140B7B500);
	v6 = *(_DWORD*)(a4 + 12);
	v7 = _mm_div_ps(v4, _mm_shuffle_ps(v5, v5, 0));
	*a1 = (float)((float)((float)(v7.m128_f32[0] + 1.0) * 0.5) * (float)*(int*)(a4 + 8)) + (float)*(int*)a4;
	v8 = (float)(0.5 - (float)(_mm_shuffle_ps(v7, v7, 85).m128_f32[0] * 0.5)) * (float)v6;
	result = a1;
	v10 = *(float*)(a4 + 20) - *(float*)(a4 + 16);
	a1[1] = v8 + (float)*(int*)(a4 + 4);
	a1[2] = (float)(v10 * _mm_shuffle_ps(v7, v7, 170).m128_f32[0]) + *(float*)(a4 + 16);
	return result;
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;

