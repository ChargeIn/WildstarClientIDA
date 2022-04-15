#include "../winhttp.h"

//----- (00000001400FFEC0) ----------------------------------------------------
__int64 __fastcall sub_1400FFEC0(__int64 a1, _DWORD* a2, __m128* a3, float a4)
{
	unsigned int v5; // r8d
	__int64 result; // rax
	unsigned int v7; // r10d
	unsigned int v8; // edx
	unsigned int v9; // r11d
	__m128 v10[2]; // [rsp+50h] [rbp-38h] BYREF

	v5 = *a2 - *(_DWORD*)(a1 + 72);
	result = 0i64;
	v7 = a2[1] - *(_DWORD*)(a1 + 76);
	v8 = v5 + *(_DWORD*)(a1 + 64);
	v9 = v7 + *(_DWORD*)(a1 + 68);
	if (*(_QWORD*)a1)
	{
		v10[0] = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), _mm_cvtsi32_si128(0))));
		v10[1] = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v8), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v9), _mm_cvtsi32_si128(0))));
		return sub_140100010(a1, v10, a3, a4, 0);
	}
	return result;
}

