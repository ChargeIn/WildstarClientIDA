//----- (000000014077CE90) ----------------------------------------------------
float __fastcall sub_14077CE90(__int64 a1, __int64 a2)
{
	__m128* v2; // rcx
	__m128 v4; // xmm3
	__m128 v5; // xmm1

	v2 = *(__m128**)(qword_140C65898 + 120);
	if (!v2)
		return 0.0;
	v4 = _mm_sub_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 12), (__m128) * (unsigned int*)(a2 + 20)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 16), (__m128)0i64)),
		v2[286]);
	v5 = _mm_mul_ps(v4, v4);
	return 1.0
		- (float)(fsqrt(
			(float)(v5.m128_f32[0] + _mm_shuffle_ps(v5, v5, 85).m128_f32[0])
			+ _mm_shuffle_ps(v5, v5, 170).m128_f32[0])
			/ *(float*)(a2 + 4));
}
// 140C65898: using guessed type __int64 qword_140C65898;

