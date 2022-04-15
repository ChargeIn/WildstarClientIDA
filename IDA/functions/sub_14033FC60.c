#include "../winhttp.h"

//----- (000000014033FC60) ----------------------------------------------------
float __fastcall sub_14033FC60(__int64 a1, __int64 a2, __m128* a3)
{
	__m128 v3; // xmm0

	*(__m128*)(a1 + 16) = _mm_sub_ps(*(__m128*)(a2 + 16), a3[2]);
	*(_OWORD*)a1 = *(_OWORD*)a2;
	v3 = _mm_mul_ps(*(__m128*)(a1 + 16), *(__m128*)(a1 + 16));
	return fsqrt((float)(v3.m128_f32[0] + _mm_shuffle_ps(v3, v3, 85).m128_f32[0]) + _mm_shuffle_ps(v3, v3, 170).m128_f32[0]);
}

