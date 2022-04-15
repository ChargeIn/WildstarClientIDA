#include "../winhttp.h"

//----- (00000001402D3A10) ----------------------------------------------------
char __fastcall sub_1402D3A10(__int64 a1, __m128* a2, __m128* a3, unsigned int* a4, float* a5, __m128* a6)
{
	__int64 v6; // r10
	__int64 v7; // rax
	__m128 v8; // xmm4
	__m128 v9; // xmm7
	__m128 v10; // xmm8
	__m128 v11; // xmm5
	float v12; // xmm5_4
	__m128 v13; // xmm2
	__m128 v14; // xmm3
	float v15; // xmm3_4
	__m128 v16; // xmm4
	__m128 v17; // xmm2
	float v18; // xmm2_4
	__m128 v19; // xmm4
	__m128 v20; // xmm0
	float v21; // xmm1_4
	char result; // al

	v6 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 64i64);
	v7 = a4[2];
	v8 = _mm_sub_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128) * (unsigned int*)(v6 + 12i64 * a4[1]),
				(__m128) * (unsigned int*)(v6 + 12i64 * a4[1] + 8)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v6 + 12i64 * a4[1] + 4), (__m128)0i64)),
		_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v6 + 12i64 * *a4), (__m128) * (unsigned int*)(v6 + 12i64 * *a4 + 8)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v6 + 12i64 * *a4 + 4), (__m128)0i64)));
	v9 = _mm_sub_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v6 + 12 * v7), (__m128) * (unsigned int*)(v6 + 12 * v7 + 8)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v6 + 12 * v7 + 4), (__m128)0i64)),
		_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v6 + 12i64 * *a4), (__m128) * (unsigned int*)(v6 + 12i64 * *a4 + 8)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v6 + 12i64 * *a4 + 4), (__m128)0i64)));
	v10 = _mm_sub_ps(
		_mm_mul_ps(_mm_shuffle_ps(v9, v9, 210), _mm_shuffle_ps(*a3, *a3, 201)),
		_mm_mul_ps(_mm_shuffle_ps(v9, v9, 201), _mm_shuffle_ps(*a3, *a3, 210)));
	v11 = _mm_mul_ps(v8, v10);
	v12 = (float)(v11.m128_f32[0] + _mm_shuffle_ps(v11, v11, 85).m128_f32[0]) + _mm_shuffle_ps(v11, v11, 170).m128_f32[0];
	if (v12 < *(float*)&dword_140C4133C)
		return 0;
	v13 = _mm_sub_ps(
		*a2,
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128) * (unsigned int*)(v6 + 12i64 * *a4),
				(__m128) * (unsigned int*)(v6 + 12i64 * *a4 + 8)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v6 + 12i64 * *a4 + 4), (__m128)0i64)));
	v14 = _mm_mul_ps(v13, v10);
	v15 = (float)(v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 85).m128_f32[0]) + _mm_shuffle_ps(v14, v14, 170).m128_f32[0];
	a6->m128_f32[0] = v15;
	if (v15 < 0.0)
		return 0;
	if (v15 > v12)
		return 0;
	v16 = _mm_sub_ps(
		_mm_mul_ps(_mm_shuffle_ps(v8, v8, 210), _mm_shuffle_ps(v13, v13, 201)),
		_mm_mul_ps(_mm_shuffle_ps(v8, v8, 201), _mm_shuffle_ps(v13, v13, 210)));
	v17 = _mm_mul_ps(*a3, v16);
	v18 = (float)(v17.m128_f32[0] + _mm_shuffle_ps(v17, v17, 85).m128_f32[0]) + _mm_shuffle_ps(v17, v17, 170).m128_f32[0];
	a6->m128_f32[1] = v18;
	if (v18 < 0.0 || (float)(v18 + v15) > v12)
		return 0;
	v19 = _mm_mul_ps(v16, v9);
	v20 = _mm_shuffle_ps(v19, v19, 85);
	v21 = v19.m128_f32[0] + v20.m128_f32[0];
	v20.m128_f32[0] = 1.0 / v12;
	*a5 = (float)(v21 + _mm_shuffle_ps(v19, v19, 170).m128_f32[0]) * v20.m128_f32[0];
	result = 1;
	*a6 = _mm_mul_ps(*a6, _mm_shuffle_ps(v20, v20, 0));
	return result;
}
// 140C4133C: using guessed type int dword_140C4133C;

