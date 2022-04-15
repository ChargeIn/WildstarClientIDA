//----- (00000001407B7F60) ----------------------------------------------------
__int64 __fastcall sub_1407B7F60(__m128* a1, __int64 a2, __m128* a3, __m128* a4)
{
	__m128 v4; // xmm3
	__m128 v5; // xmm2
	float v6; // xmm2_4
	__m128 v7; // xmm1
	__int64 result; // rax
	__m128 v9; // [rsp+20h] [rbp-28h] BYREF
	__int64 v10; // [rsp+30h] [rbp-18h]

	v4 = *a4;
	v5 = _mm_mul_ps(_mm_sub_ps(a1[23], *a3), *a4);
	v6 = (float)(v5.m128_f32[0] + _mm_shuffle_ps(v5, v5, 85).m128_f32[0]) + _mm_shuffle_ps(v5, v5, 170).m128_f32[0];
	if (v6 < 0.0)
		v7 = (__m128)0xBF800000;
	else
		v7 = (__m128)0x3F800000u;
	if ((float)(v7.m128_f32[0] * v6) <= 1.0078125)
	{
		v10 = a1[61].m128_i64[0];
		v9 = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), v4);
		return sub_1407BCA70((__int64)a1, (__int64)&v9);
	}
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

