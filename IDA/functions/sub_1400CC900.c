#include "../winhttp.h"

//----- (00000001400CC900) ----------------------------------------------------
void __fastcall sub_1400CC900(__int64 a1, unsigned int* a2)
{
	int v2; // r8d
	signed int v3; // r9d
	__m128i v4; // xmm2
	__int128 v5; // xmm0
	__int128 v6; // xmm1
	int v7; // eax
	__int128 v8[5]; // [rsp+20h] [rbp-78h] BYREF
	int v9; // [rsp+70h] [rbp-28h]

	v2 = *a2;
	v3 = a2[1];
	v4 = _mm_cvtsi32_si128(0);
	if ((_mm_movemask_ps(
		_mm_cmpneq_ps(
			_mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*a2), v4),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(v3), v4))),
			_mm_unpacklo_ps(
				_mm_unpacklo_ps(*(__m128*)(a1 + 64), (__m128)0i64),
				_mm_unpacklo_ps(_mm_shuffle_ps(*(__m128*)(a1 + 64), *(__m128*)(a1 + 64), 85), (__m128)0i64)))) & 3) != 0)
	{
		v5 = *(_OWORD*)(a1 + 80);
		v6 = *(_OWORD*)(a1 + 96);
		v7 = *(_DWORD*)(a1 + 144);
		v8[0] = *(_OWORD*)(a1 + 64);
		v9 = v7;
		v8[1] = v5;
		v8[2] = v6;
		v8[3] = *(_OWORD*)(a1 + 112);
		v8[4] = *(_OWORD*)(a1 + 128);
		v8[0] = (__int128)_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v2), (__m128)0i64),
			_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v3), (__m128)0i64));
		sub_1400CC680(a1, (__int64)v8);
	}
}

