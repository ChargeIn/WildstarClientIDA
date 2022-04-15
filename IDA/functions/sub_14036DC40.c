#include "../winhttp.h"

//----- (000000014036DC40) ----------------------------------------------------
__int64 __fastcall sub_14036DC40(__m128* a1, __int64 a2, __m128* a3, __m128* a4)
{
	__m128 v4; // xmm6
	__m128 v5; // xmm5
	float v6; // xmm5_4
	__m128 v7; // xmm3
	__m128 v8; // xmm2
	float v9; // xmm4_4
	__int64 result; // rax

	v4 = *a4;
	v5 = _mm_mul_ps(v4, v4);
	v6 = fsqrt((float)(v5.m128_f32[0] + _mm_shuffle_ps(v5, v5, 85).m128_f32[0]) + _mm_shuffle_ps(v5, v5, 170).m128_f32[0]);
	if (a1[100].m128_i32[2])
	{
		v9 = 1.0;
	}
	else
	{
		v7 = _mm_sub_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 85), a4[1]), _mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 0), v4)),
					_mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 170), a4[2])),
				a4[3]),
			a1[57]);
		v8 = _mm_mul_ps(v7, v7);
		v9 = fmaxf(
			COERCE_FLOAT(COERCE_UNSIGNED_INT(
				fsqrt(
					(float)(v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0])
					+ _mm_shuffle_ps(v8, v8, 170).m128_f32[0])
				- (float)(v6 * a3[1].m128_f32[0])) & 0xFFF00000),
			a1[100].m128_f32[3]);
	}
	*(_DWORD*)a2 = a1[119].m128_i32[1];
	*(_DWORD*)(a2 + 4) = a1[119].m128_i32[2];
	result = a2;
	*(float*)(a2 + 8) = (float)(v9 / v6) * a1[119].m128_f32[3];
	return result;
}

