#include "../winhttp.h"

//----- (0000000140306B90) ----------------------------------------------------
unsigned int* __fastcall sub_140306B90(__int64 a1, __m128* a2, __int64 a3, __int64 a4)
{
	unsigned int v7; // edi
	char* v8; // r14
	unsigned int* result; // rax
	__int64 v10; // r9
	float* v11; // rbp
	unsigned int v12; // edx
	__m128 v13; // xmm2
	__m128 v14; // [rsp+30h] [rbp-38h] BYREF

	if (*(_DWORD*)a1 <= 1u)
	{
		if (*(_DWORD*)a1)
		{
			result = *(unsigned int**)(a1 + 16);
			*a2 = _mm_mul_ps(
				_mm_cvtepi32_ps(
					_mm_shuffle_epi32(
						_mm_unpacklo_epi16(
							_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(*result), 0), (__m128i)0i64),
							(__m128i)0i64),
						198)),
				(__m128)xmmword_140B7AB70);
		}
		else
		{
			result = 0i64;
			a2->m128_u64[0] = 0i64;
			a2->m128_u64[1] = 0i64;
		}
	}
	else
	{
		v7 = *(_DWORD*)(a3 + 104) - 1;
		v8 = &a2[1].m128_i8[4 * v7];
		result = (unsigned int*)sub_140308E40(a1, *(_DWORD*)(a3 + 24i64 * v7 + 8), a2, a4, v8);
		if (v7)
		{
			v11 = (float*)(a3 + 24i64 * v7 + 12);
			do
			{
				v12 = *((_DWORD*)v11 - 7);
				v11 -= 6;
				v8 -= 4;
				result = (unsigned int*)sub_140308E40(a1, v12, &v14, v10, v8);
				v13 = (__m128)0x3F800000u;
				v13.m128_f32[0] = 1.0 - *v11;
				*a2 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), _mm_sub_ps(*a2, v14)), v14);
				--v7;
			} while (v7);
		}
	}
	return result;
}
// 140306C18: variable 'v10' is possibly undefined
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;

