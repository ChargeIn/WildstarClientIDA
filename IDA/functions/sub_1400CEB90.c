#include "../winhttp.h"

//----- (00000001400CEB90) ----------------------------------------------------
unsigned __int64 __fastcall sub_1400CEB90(__int64 a1)
{
	__m128i v1; // xmm2
	__m128 v2; // xmm5
	__m128 v3; // xmm4
	__m128 v4; // xmm2
	unsigned __int64 result; // rax
	__int128 v6[2]; // [rsp+20h] [rbp-28h] BYREF

	if ((*(_BYTE*)(a1 + 28) & 1) != 0)
	{
		if (*(_QWORD*)(a1 + 688))
		{
			v1 = _mm_cvtsi32_si128(0);
			v2 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 724)), v1),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 728)), v1)));
			v3 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 716)), v1),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 720)), v1)));
			v4 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 272)), v1),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 276)), v1)));
			v6[1] = (__int128)_mm_sub_ps(v2, v4);
			v6[0] = (__int128)_mm_add_ps(v4, v3);
			return sub_1400CE790(a1, (float*)v6, (unsigned int*)(a1 + 708));
		}
	}
	return result;
}

