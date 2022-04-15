#include "../winhttp.h"

//----- (000000014014E8D0) ----------------------------------------------------
_DWORD* __fastcall sub_14014E8D0(__int64 a1, _DWORD* a2, unsigned int* a3)
{
	__m128i v6; // xmm3
	__m128i v7; // xmm0
	float v8; // xmm2_4
	__m128i v9; // xmm0
	float v10; // xmm1_4
	__m128i v11; // xmm0
	__m128i v12; // xmm1
	float v13; // xmm2_4
	__m128i v14; // xmm0
	__m128 v15; // xmm0
	__m128 v16; // xmm2
	__m128 v17; // xmm1
	__m128 v19; // [rsp+20h] [rbp-28h] BYREF
	__m128 v20; // [rsp+30h] [rbp-18h]

	sub_14014E9C0((__int128*)a1, (__int64)&v19, a3);
	v6 = _mm_cvtsi32_si128(*a3);
	v7 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 68));
	v19.m128_f32[0] = v19.m128_f32[0] + (float)*(int*)(a1 + 64);
	v8 = v19.m128_f32[1] + _mm_cvtepi32_ps(v7).m128_f32[0];
	v9 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 72));
	v19.m128_f32[1] = v8;
	v10 = v20.m128_f32[0] + _mm_cvtepi32_ps(v9).m128_f32[0];
	v11 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 76));
	v20.m128_f32[0] = v10;
	v12 = _mm_cvtsi32_si128(a3[1]);
	v13 = v20.m128_f32[1] + _mm_cvtepi32_ps(v11).m128_f32[0];
	v14 = _mm_cvtsi32_si128(0);
	v20.m128_f32[1] = v13;
	v15 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(_mm_unpacklo_epi32(v6, v14), _mm_unpacklo_epi32(v12, v14)));
	v16 = _mm_add_ps(v19, v15);
	v17 = _mm_add_ps(v20, v15);
	*a2 = (int)v16.m128_f32[0];
	a2[1] = (int)_mm_shuffle_ps(v16, v16, 85).m128_f32[0];
	a2[2] = (int)v17.m128_f32[0];
	a2[3] = (int)_mm_shuffle_ps(v17, v17, 85).m128_f32[0];
	return a2;
}
// 14014E8D0: using guessed type __m128 var_18;

