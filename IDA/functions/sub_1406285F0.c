#include "../winhttp.h"

//----- (00000001406285F0) ----------------------------------------------------
__int64 __fastcall sub_1406285F0(__m128* a1)
{
	int* v2; // rdi
	int* v3; // rax
	__m128 v4; // xmm1
	__m128* v5; // rcx
	__m128 v6; // xmm4
	__m128 v7; // xmm0
	__m128 v8; // xmm4
	__m128i v9; // xmm0
	__m128i v10; // xmm1
	__int64 result; // rax

	v2 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 24i64))(qword_140C65670);
	v3 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	v5 = *(__m128**)(qword_140C65898 + 29096);
	if (!v5)
		v5 = *(__m128**)(qword_140C65898 + 29088);
	v4 = a1[5];
	v6 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v4, v4, 85), v5[23]), _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), v5[22])),
			_mm_mul_ps(_mm_shuffle_ps(v4, v4, 170), v5[24])),
		v5[25]);
	v7 = _mm_and_ps(_mm_shuffle_ps(v6, v6, 255), (__m128)xmmword_140B7B500);
	v8 = _mm_div_ps(v6, _mm_shuffle_ps(v7, v7, 0));
	v9 = _mm_cvtsi32_si128(0);
	a1[13] = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(
				_mm_cvtsi32_si128((int)(float)((float)((float)((float)(v8.m128_f32[0] + 1.0) * 0.5) * (float)v3[2])
					+ (float)*v3)),
				v9),
			_mm_unpacklo_epi32(
				_mm_cvtsi32_si128((int)(float)((float)((float)(0.5
					- (float)(_mm_shuffle_ps(v8, v8, 85).m128_f32[0] * 0.5))
					* (float)v3[3])
					+ (float)v3[1])),
				v9)));
	v10 = _mm_cvtsi32_si128((int)(float)((float)*v2 * 0.16599999));
	result = 0i64;
	a1[14] = _mm_cvtepi32_ps(_mm_unpacklo_epi32(_mm_unpacklo_epi32(v10, v9), _mm_unpacklo_epi32(v10, v9)));
	a1[15].m128_i32[0] = 1;
	return result;
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65898: using guessed type __int64 qword_140C65898;

