#include "../winhttp.h"

//----- (00000001400FD6B0) ----------------------------------------------------
__int64 __fastcall sub_1400FD6B0(__int64 a1, unsigned int a2, __m128* a3)
{
	int v3; // r9d
	__int64 v4; // rbx
	int v5; // eax
	__int64(__fastcall * v6)(_QWORD, _QWORD); // rax
	__m128i v7; // xmm1
	__m128i v8; // xmm1
	__int64 result; // rax

	v3 = dword_140C3CB80;
	v4 = qword_140C63658;
	v5 = dword_140C3CB80;
	if (*(_DWORD*)qword_140C63750 < dword_140C3CB80)
		v5 = *(_DWORD*)qword_140C63750;
	if (!*((_BYTE*)&off_140C3CB70 + v5 + 32) || !*(_QWORD*)(qword_140C63658 + 32) || !*(_DWORD*)(qword_140C63658 + 44))
		return 2147500037i64;
	if (*(_DWORD*)qword_140C63750 < dword_140C3CB80)
		v3 = *(_DWORD*)qword_140C63750;
	if (!*((_BYTE*)&off_140C3CB70 + v3 + 32))
		return 2147500037i64;
	v6 = *(__int64(__fastcall**)(_QWORD, _QWORD))(qword_140C63658 + 152);
	if (!v6)
		return 2147500037i64;
	v7 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(_mm_min_ps(_mm_max_ps((__m128)0i64, *a3), (__m128)xmmword_140B7B240), (__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v8 = _mm_packus_epi16(v7, v7);
	result = v6(a2, (unsigned int)_mm_cvtsi128_si32(_mm_packus_epi16(v8, v8)));
	if ((_DWORD)result)
		return 2147500037i64;
	*(_DWORD*)(v4 + 48) = 1;
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C3CB70: using guessed type __int64 (__fastcall *off_140C3CB70)();
// 140C3CB80: using guessed type int dword_140C3CB80;
// 140C63658: using guessed type __int64 qword_140C63658;
// 140C63750: using guessed type __int64 qword_140C63750;

