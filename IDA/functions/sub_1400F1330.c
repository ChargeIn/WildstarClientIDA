#include "../winhttp.h"

//----- (00000001400F1330) ----------------------------------------------------
__m128* __fastcall sub_1400F1330(__int64 a1, _QWORD* a2, int a3, _QWORD* a4)
{
	unsigned int v4; // r10d
	_DWORD* v5; // rbx
	__m128* result; // rax
	__m128i v7; // xmm1
	__m128i v8; // xmm1

	*a4 += 8i64;
	v4 = a3;
	v5 = *(_DWORD**)(*a4 - 8i64);
	if (a3 < 0)
		v4 = ((__int64)(a2[2] - a2[3]) >> 4) + a3 + 1;
	result = (__m128*)sub_140056AB0(a2, v4);
	v7 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, *result), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v8 = _mm_packus_epi16(v7, v7);
	*v5 = _mm_cvtsi128_si32(_mm_packus_epi16(v8, v8));
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;

