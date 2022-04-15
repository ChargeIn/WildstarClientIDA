//----- (00000001400E0680) ----------------------------------------------------
__m128* __fastcall sub_1400E0680(__m128* a1, __m128* a2, __m128* a3, float a4)
{
	__m128 v4; // xmm0
	__m128* result; // rax
	__m128 v6; // xmm3

	v4 = (__m128)0x3F800000u;
	result = a1;
	v4.m128_f32[0] = 1.0 - (float)(a4 * a4);
	v6 = _mm_sqrt_ps(v4);
	v6.m128_f32[0] = v6.m128_f32[0] - 1.0;
	*a1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), _mm_sub_ps(*a2, *a3)), *a2);
	return result;
}

