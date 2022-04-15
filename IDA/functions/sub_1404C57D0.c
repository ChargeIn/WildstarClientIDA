//----- (00000001404C57D0) ----------------------------------------------------
__int64 __fastcall sub_1404C57D0(__m128* a1, float a2)
{
	__int64 result; // rax
	__m128 v5; // xmm1

	result = sub_140203DA0(a1[6].m128_u32[0]);
	if (result)
	{
		v5 = _mm_mul_ps(a1[34], a1[34]);
		a1[33].m128_f32[3] = fsqrt(
			(float)(v5.m128_f32[0] + _mm_shuffle_ps(v5, v5, 85).m128_f32[0])
			+ _mm_shuffle_ps(v5, v5, 170).m128_f32[0])
			* a2;
	}
	return result;
}

