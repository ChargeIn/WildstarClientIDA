#include "../winhttp.h"

//----- (000000014015CBE0) ----------------------------------------------------
__int64 __fastcall sub_14015CBE0(__int64 a1)
{
	int* v2; // rax
	int* v3; // rax
	__int64 v4; // rcx
	__m128 v6; // [rsp+20h] [rbp-18h] BYREF

	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	v2 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 8) = v2;
	*(_QWORD*)(a1 + 16) = v2;
	*(_QWORD*)(a1 + 24) = v2 + 4;
	if (v2)
		*(_WORD*)v2 = 0;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	v3 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 40) = v3;
	*(_QWORD*)(a1 + 48) = v3;
	*(_QWORD*)(a1 + 56) = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	v4 = qword_140C63678;
	*(_DWORD*)(a1 + 84) = 0;
	*(_DWORD*)(a1 + 64) = 0;
	*(_DWORD*)(a1 + 68) = 10;
	*(_DWORD*)(a1 + 72) = 1024;
	*(_DWORD*)(a1 + 76) = 4;
	*(_WORD*)(a1 + 80) = 256;
	sub_1401429A0(v4, *(_DWORD*)(a1 + 84));
	v6 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B610), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	*(_DWORD*)(a1 + 84) = sub_140141F10(qword_140C63678, &v6);
	return a1;
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B610: using guessed type __int128 xmmword_140B7B610;
// 140C63678: using guessed type __int64 qword_140C63678;
// 14015CBE0: using guessed type __m128 var_18;

