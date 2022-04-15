#include "../winhttp.h"

//----- (00000001402DCEE0) ----------------------------------------------------
__int64 __fastcall sub_1402DCEE0(__int64 a1, unsigned int* a2, __m128* a3)
{
	float v3; // xmm4_4
	__m128i v4; // xmm2
	__m128 v5; // xmm1
	__int64 result; // rax
	__m128 v7; // xmm1

	if (*a2 >= 0x800 || a2[1] >= 0x800 || !a3)
		return 2147942487i64;
	v3 = *(float*)&dword_140C41D6C;
	a3->m128_i32[0] = *a2;
	a3->m128_i32[1] = a2[1];
	v4 = _mm_cvtsi32_si128(0);
	a3->m128_i32[2] = (int)*a2 / 16;
	a3->m128_i32[3] = (int)a2[1] / 16;
	a3[1].m128_i32[0] = (*a2 & 0xF) + 16 * (a2[1] & 0xF);
	v5 = _mm_mul_ps(
		_mm_sub_ps(
			_mm_div_ps(
				_mm_cvtepi32_ps(
					_mm_unpacklo_epi32(
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(*a2), v4),
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(a2[1]), v4))),
				(__m128)xmmword_140B7B490),
			(__m128)xmmword_140B7AC50),
		(__m128)xmmword_140B7B4B0);
	a3[2] = _mm_unpacklo_ps(_mm_unpacklo_ps(v5, _mm_shuffle_ps(v5, v5, 85)), (__m128)0i64);
	a3[2].m128_f32[1] = -v3;
	result = 0i64;
	v7 = _mm_mul_ps(
		_mm_sub_ps(
			_mm_div_ps(
				_mm_cvtepi32_ps(
					_mm_unpacklo_epi32(
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(*a2 + (unsigned int)qword_140C77768), v4),
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(a2[1] + HIDWORD(qword_140C77768)), v4))),
				(__m128)xmmword_140B7B490),
			(__m128)xmmword_140B7AC50),
		(__m128)xmmword_140B7B4B0);
	a3[3] = _mm_unpacklo_ps(_mm_unpacklo_ps(v7, _mm_shuffle_ps(v7, v7, 85)), (__m128)0i64);
	a3[3].m128_f32[1] = v3;
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B490: using guessed type __int128 xmmword_140B7B490;
// 140B7B4B0: using guessed type __int128 xmmword_140B7B4B0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C41D6C: using guessed type int dword_140C41D6C;
// 140C77768: using guessed type __int64 qword_140C77768;

