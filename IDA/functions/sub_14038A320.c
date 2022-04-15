#include "../winhttp.h"

//----- (000000014038A320) ----------------------------------------------------
__int64 __fastcall sub_14038A320(__m128* a1, unsigned int* a2)
{
	__int64 result; // rax
	__m128i v5; // xmm2
	__m128 v6; // xmm1
	__m128 v7; // xmm1
	__m128** v8; // rdx
	unsigned __int64 v9; // rax
	__m128** v10; // rcx
	unsigned __int64 v11; // rax

	a1->m128_i32[2] = *a2;
	a1->m128_i32[3] = a2[1];
	result = (*(__int64(__fastcall**)(_QWORD, unsigned int*, __m128*))(**(_QWORD**)(a1->m128_u64[0] + 32) + 144i64))(
		*(_QWORD*)(a1->m128_u64[0] + 32),
		a2,
		a1 + 1);
	if ((int)result >= 0)
	{
		v5 = _mm_cvtsi32_si128(0);
		v6 = _mm_mul_ps(
			_mm_sub_ps(
				_mm_div_ps(
					_mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(*a2), v5),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(a2[1]), v5))),
					(__m128)xmmword_140B7B480),
				(__m128)xmmword_140B7AC50),
			(__m128)xmmword_140B7B4B0);
		a1[3] = _mm_unpacklo_ps(_mm_unpacklo_ps(v6, _mm_shuffle_ps(v6, v6, 85)), (__m128)0i64);
		v7 = _mm_mul_ps(
			_mm_sub_ps(
				_mm_div_ps(
					_mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(*a2 + (unsigned int)qword_140C77768), v5),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(a2[1] + HIDWORD(qword_140C77768)), v5))),
					(__m128)xmmword_140B7B480),
				(__m128)xmmword_140B7AC50),
			(__m128)xmmword_140B7B4B0);
		a1[4] = _mm_unpacklo_ps(_mm_unpacklo_ps(v7, _mm_shuffle_ps(v7, v7, 85)), (__m128)0i64);
		v8 = (__m128**)(a1->m128_u64[0] + 2456);
		if (!a1[8].m128_u64[0])
		{
			a1[8].m128_u64[0] = (unsigned __int64)v8;
			a1[8].m128_u64[1] = (unsigned __int64)*v8;
			*v8 = a1;
			v9 = a1[8].m128_u64[1];
			if (v9)
				*(_QWORD*)(v9 + 128) = (char*)a1 + 136;
		}
		*(_DWORD*)(a1->m128_u64[0] + 2464) = 0;
		v10 = (__m128**)(a1->m128_u64[0] + 2472);
		if (!a1[9].m128_u64[0])
		{
			a1[9].m128_u64[0] = (unsigned __int64)v10;
			a1[9].m128_u64[1] = (unsigned __int64)*v10;
			*v10 = a1;
			v11 = a1[9].m128_u64[1];
			if (v11)
				*(_QWORD*)(v11 + 144) = (char*)a1 + 152;
		}
		*(_DWORD*)(a1->m128_u64[0] + 2480) = 0;
		return 0i64;
	}
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B480: using guessed type __int128 xmmword_140B7B480;
// 140B7B4B0: using guessed type __int128 xmmword_140B7B4B0;
// 140C77768: using guessed type __int64 qword_140C77768;

