#include "../winhttp.h"

//----- (00000001400D0E80) ----------------------------------------------------
__m128* __fastcall sub_1400D0E80(__int64 a1, __m128* a2, __int64 a3, __m128* a4)
{
	unsigned int* v6; // rax
	__m128i v7; // xmm2
	__m128 v8; // xmm1
	__m128* v9; // rax
	__m128* result; // rax
	int v11[4]; // [rsp+20h] [rbp-58h] BYREF
	__m128 v12[4]; // [rsp+30h] [rbp-48h] BYREF

	if (*(float*)(a3 + 620) == 0.0 && *(float*)(a3 + 616) == 1.0)
	{
		v6 = sub_1400CB3D0(a3, v11);
		v7 = _mm_cvtsi32_si128(0);
		v8 = _mm_sub_ps(
			*a4,
			_mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*v6), v7),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(v6[1]), v7))));
	}
	else
	{
		v9 = sub_1400C98B0(a3, v12);
		v8 = _mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*a4, *a4, 85), v9[1]), _mm_mul_ps(_mm_shuffle_ps(*a4, *a4, 0), *v9)),
			v9[3]);
	}
	result = a2;
	*a2 = v8;
	return result;
}
// 1400D0E80: using guessed type int var_58[4];
// 1400D0E80: using guessed type __m128 var_48[4];

