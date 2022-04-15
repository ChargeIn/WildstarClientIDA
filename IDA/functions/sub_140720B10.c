#include "../winhttp.h"

//----- (0000000140720B10) ----------------------------------------------------
__int64 __fastcall sub_140720B10(__int64 a1, __m128* a2, float* a3)
{
	unsigned int v3; // edi
	__int64 v6; // rax
	float v8; // xmm4_4
	__m128 v9; // xmm3
	__m128 v10; // xmm2
	float v11; // xmm2_4
	float v12; // xmm1_4

	v3 = 0;
	if (a3)
		*a3 = 0.0;
	v6 = sub_14024B980(*(_DWORD*)(*(_QWORD*)a1 + 8i64));
	if (!v6)
		return 0i64;
	v8 = *(float*)(v6 + 4);
	v9 = _mm_sub_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v6 + 12), (__m128) * (unsigned int*)(v6 + 20)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v6 + 16), (__m128)0i64)),
		*a2);
	v10 = _mm_mul_ps(v9, v9);
	v11 = (float)(v10.m128_f32[0] + _mm_shuffle_ps(v10, v10, 85).m128_f32[0]) + _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
	if (v11 >= (float)((float)(v8 * v8) * (float)(v8 * v8)))
		return 0i64;
	if (v11 >= 0.0000099999997)
	{
		v12 = 1.0 - (float)(fsqrt(v11) / v8);
		if (a3)
			*a3 = v12;
		LOBYTE(v3) = v12 >= *(float*)&dword_140C4B1E8;
		return v3;
	}
	else
	{
		if (a3)
			*a3 = 1.0;
		return 1i64;
	}
}
// 140C4B1E8: using guessed type int dword_140C4B1E8;

