#include "../winhttp.h"

//----- (00000001407B6330) ----------------------------------------------------
__int64 __fastcall sub_1407B6330(__int64 a1)
{
	__m128 v1; // xmm4
	__m128 v2; // xmm3
	__m128 v3; // xmm2
	__int64 result; // rax
	__m128 v5; // xmm5
	__m128 v6; // xmm2
	__m128 v7; // xmm3
	__m128 v8; // xmm1
	__m128 v9; // xmm2
	float v10; // xmm0_4

	v1 = (__m128) * (unsigned int*)(a1 + 64);
	v2 = (__m128) * (unsigned int*)(a1 + 68);
	v3 = (__m128) * (unsigned int*)(a1 + 72);
	result = 0i64;
	*(_OWORD*)(a1 + 480) = xmmword_140C78410;
	v5 = (__m128)0x3F800000u;
	*(_OWORD*)(a1 + 496) = xmmword_140C78420;
	*(_OWORD*)(a1 + 512) = xmmword_140C78430;
	*(__m128*)(a1 + 528) = _mm_unpacklo_ps(_mm_unpacklo_ps(v1, v3), _mm_unpacklo_ps(v2, (__m128)0x3F800000u));
	v6 = _mm_sub_ps((__m128)0i64, *(__m128*)(a1 + 64));
	*(_OWORD*)(a1 + 544) = xmmword_140C78410;
	v7 = (__m128)0x3F800000u;
	*(_OWORD*)(a1 + 560) = xmmword_140C78420;
	*(_OWORD*)(a1 + 576) = xmmword_140C78430;
	*(__m128*)(a1 + 592) = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v6, _mm_shuffle_ps(v6, v6, 170)),
		_mm_unpacklo_ps(_mm_shuffle_ps(v6, v6, 85), (__m128)0x3F800000u));
	*(__m128*)(a1 + 416) = _mm_mul_ps(_mm_add_ps(*(__m128*)(a1 + 48), *(__m128*)(a1 + 32)), (__m128)xmmword_140B7AC50);
	*(_DWORD*)(a1 + 424) = 0;
	*(_DWORD*)(a1 + 416) = 0;
	v8 = *(__m128*)(a1 + 416);
	*(__m128*)(a1 + 432) = _mm_sub_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), *(__m128*)(a1 + 480)),
					_mm_mul_ps(_mm_shuffle_ps(v8, v8, 85), *(__m128*)(a1 + 496))),
				_mm_mul_ps(_mm_shuffle_ps(v8, v8, 170), *(__m128*)(a1 + 512))),
			*(__m128*)(a1 + 528)),
		*(__m128*)(a1 + 528));
	v9 = (__m128)0x3F800000u;
	*(__m128*)(a1 + 464) = _mm_mul_ps(_mm_sub_ps(*(__m128*)(a1 + 48), *(__m128*)(a1 + 32)), (__m128)xmmword_140B7AC50);
	v9.m128_f32[0] = 1.0 / *(float*)(a1 + 468);
	v10 = (float)(*(float*)(a1 + 464) + *(float*)(a1 + 472)) * 0.5;
	v7.m128_f32[0] = 1.0 / v10;
	v5.m128_f32[0] = 1.0 / v10;
	*(float*)(a1 + 472) = v10;
	*(float*)(a1 + 464) = v10;
	*(__m128*)(a1 + 448) = _mm_unpacklo_ps(_mm_unpacklo_ps(v7, v5), _mm_unpacklo_ps(v9, (__m128)0i64));
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;

