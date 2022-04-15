//----- (00000001403A2250) ----------------------------------------------------
float __fastcall sub_1403A2250(__int64 a1, __m128* a2, __m128* a3)
{
	__m128 v3; // xmm2
	__m128 v4; // xmm0

	if (!a2 || !a3)
		return *(float*)&dword_140C447F8;
	v3 = _mm_sub_ps(a2[286], a3[286]);
	v4 = _mm_mul_ps(v3, v3);
	return fsqrt((float)(v4.m128_f32[0] + _mm_shuffle_ps(v4, v4, 85).m128_f32[0]) + _mm_shuffle_ps(v4, v4, 170).m128_f32[0]);
}
// 140C447F8: using guessed type int dword_140C447F8;

