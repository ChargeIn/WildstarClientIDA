#include "../winhttp.h"

//----- (000000014035CB60) ----------------------------------------------------
__int64 __fastcall sub_14035CB60(__int64 a1, __m128* a2, __int64 a3)
{
	__m128 v3; // xmm4
	signed int v4; // ebx
	signed int v5; // r11d
	int v6; // r9d
	__int64* v7; // rcx
	__m128 v9; // [rsp+20h] [rbp-18h] BYREF

	v3 = _mm_mul_ps(
		_mm_add_ps(
			(__m128)xmmword_140B7AC50,
			_mm_mul_ps(
				_mm_shuffle_ps(*a2, *a2, 136),
				_mm_shuffle_ps((__m128)(unsigned int)dword_140C43FB8, (__m128)(unsigned int)dword_140C43FB8, 0))),
		(__m128)xmmword_140B7B490);
	v4 = (int)v3.m128_f32[0];
	v5 = (int)_mm_shuffle_ps(v3, v3, 85).m128_f32[0];
	if ((int)v3.m128_f32[0] < *(_DWORD*)(a1 + 2188))
		return 0i64;
	if (v4 >= *(_DWORD*)(a1 + 2196))
		return 0i64;
	if (v5 < *(_DWORD*)(a1 + 2192))
		return 0i64;
	if (v5 >= *(_DWORD*)(a1 + 2200))
		return 0i64;
	v6 = *(_DWORD*)(a1 + 2204);
	v7 = *(__int64**)(*(_QWORD*)(a1 + 2272)
		+ 8i64
		* (v4 % v6
			+ v6 * (v5 % *(_DWORD*)(a1 + 2208) + *(_DWORD*)(a1 + 2208) * (v5 % *(_DWORD*)(a1 + 2208) < 0))
			+ v6 * (unsigned int)(v4 % v6 < 0)));
	if (!v7)
		return 0i64;
	v9 = _mm_sub_ps(
		v3,
		_mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v4), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), _mm_cvtsi32_si128(0)))));
	sub_140387780(v7, &v9, a3);
	return 1i64;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B490: using guessed type __int128 xmmword_140B7B490;
// 140C43FB8: using guessed type int dword_140C43FB8;
// 14035CB60: using guessed type __m128 var_18;

