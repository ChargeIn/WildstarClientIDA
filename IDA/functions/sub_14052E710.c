#include "../winhttp.h"

//----- (000000014052E710) ----------------------------------------------------
__int64 __fastcall sub_14052E710(__int64 a1, int* a2)
{
	__m128i v2; // xmm2

	if (*(int*)(a1 + 1264) > 2 || !*(_DWORD*)(a1 + 1220))
		return sub_1400D23B0(a1, a2);
	v2 = _mm_cvtsi32_si128(0);
	*(__m128*)(a1 + 1248) = _mm_sub_ps(
		*(__m128*)(a1 + 1248),
		_mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*a2 - *(_DWORD*)(a1 + 1228)), v2),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(a2[1] - *(_DWORD*)(a1 + 1232)), v2))));
	*(_DWORD*)(a1 + 1228) = *a2;
	*(_DWORD*)(a1 + 1232) = a2[1];
	*(_DWORD*)(a1 + 1224) = 1;
	return 0i64;
}

