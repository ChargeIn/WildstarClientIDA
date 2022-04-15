//----- (00000001400E0700) ----------------------------------------------------
__m128* __fastcall sub_1400E0700(__m128* a1, __m128* a2, __m128* a3, float a4)
{
	__m128* result; // rax
	float v5; // xmm1_4
	__m128 v6; // xmm0
	__m128 v7; // xmm3
	__m128 v8; // xmm1

	result = a1;
	v5 = a4 * 2.0;
	v6 = (__m128)0x3F800000u;
	if ((float)(a4 * 2.0) >= 1.0)
	{
		v7 = _mm_sub_ps(*a3, *a2);
		v6.m128_f32[0] = 1.0 - (float)((float)(v5 + -2.0) * (float)(v5 + -2.0));
		v8 = _mm_sqrt_ps(v6);
		v8.m128_f32[0] = v8.m128_f32[0] + 1.0;
	}
	else
	{
		v7 = _mm_sub_ps(*a2, *a3);
		v6.m128_f32[0] = 1.0 - (float)(v5 * v5);
		v8 = _mm_sqrt_ps(v6);
		v8.m128_f32[0] = v8.m128_f32[0] - 1.0;
	}
	*a1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), _mm_div_ps(v7, (__m128)xmmword_140B7B2F0)), *a2);
	return result;
}
// 140B7B2F0: using guessed type __int128 xmmword_140B7B2F0;

