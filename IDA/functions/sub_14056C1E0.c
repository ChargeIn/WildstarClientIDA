#include "../winhttp.h"

//----- (000000014056C1E0) ----------------------------------------------------
__int64 __fastcall sub_14056C1E0(unsigned int a1, unsigned int a2)
{
	__int64 v3; // rdi
	__int64 v4; // rdx
	__int64 result; // rax
	__m128 v6; // xmm1
	__m128 v7; // xmm5
	__m128 v8; // xmm1
	__m128 v9; // xmm5
	__m128 v10; // xmm2

	v3 = sub_14024B980(a1);
	v4 = sub_14024B980(a2);
	result = 1i64;
	v6 = *(__m128*)(*(_QWORD*)(qword_140C65898 + 25744) + 4576i64);
	v7 = _mm_sub_ps(
		v6,
		_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v4 + 12), (__m128) * (unsigned int*)(v4 + 20)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v4 + 16), (__m128)0i64)));
	v8 = _mm_sub_ps(
		v6,
		_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v3 + 12), (__m128) * (unsigned int*)(v3 + 20)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v3 + 16), (__m128)0i64)));
	v9 = _mm_mul_ps(v7, v7);
	v10 = _mm_mul_ps(v8, v8);
	if ((float)(fsqrt(
		(float)(v9.m128_f32[0] + _mm_shuffle_ps(v9, v9, 85).m128_f32[0])
		+ _mm_shuffle_ps(v9, v9, 170).m128_f32[0])
		- *(float*)(v4 + 4)) > (float)(fsqrt(
			(float)(v10.m128_f32[0] + _mm_shuffle_ps(v10, v10, 85).m128_f32[0])
			+ _mm_shuffle_ps(v10, v10, 170).m128_f32[0])
			- *(float*)(v3 + 4)))
		return 0xFFFFFFFFi64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

