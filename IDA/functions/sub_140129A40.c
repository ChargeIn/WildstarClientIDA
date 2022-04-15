#include "../winhttp.h"

//----- (0000000140129A40) ----------------------------------------------------
__int64 __fastcall sub_140129A40(__int64 a1, __int64 a2, __m128* a3, __int64 a4, int a5, int a6)
{
	int* v9; // rax
	__int64 v10; // rbx
	__m128i v12; // xmm1
	__m128i v13; // xmm1

	v9 = sub_14018B280(1296i64, 0);
	if (v9)
		v10 = sub_140124E00((__int64)v9, a1, a5, a6);
	else
		v10 = 0i64;
	if (!a2)
		return 0i64;
	v12 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, *a3), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v13 = _mm_packus_epi16(v12, v12);
	sub_140128320(v10, *(_QWORD*)(a2 + 32), a2, _mm_cvtsi128_si32(_mm_packus_epi16(v13, v13)));
	return v10;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;

