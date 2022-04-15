#include "../winhttp.h"

//----- (0000000140177350) ----------------------------------------------------
unsigned __int64 __fastcall sub_140177350(__int64 a1)
{
	__m128i v1; // xmm2
	__m128i v2; // xmm1
	__m128i v3; // xmm3
	unsigned __int64 result; // rax
	__int128 v5[2]; // [rsp+20h] [rbp-28h] BYREF

	if ((*(_BYTE*)(a1 + 664) & 1) == 0)
	{
		if (*(_QWORD*)(a1 + 688))
		{
			v1 = _mm_cvtsi32_si128(0);
			v2 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 720));
			v3 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 716)), v1);
			v5[1] = (__int128)_mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 724)), v1),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 728)), v1)));
			v5[0] = (__int128)_mm_cvtepi32_ps(_mm_unpacklo_epi32(v3, _mm_unpacklo_epi32(v2, v1)));
			return sub_1400CE790(a1, (float*)v5, (unsigned int*)(a1 + 708));
		}
	}
	return result;
}

