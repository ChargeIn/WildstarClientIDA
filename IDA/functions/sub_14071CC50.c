#include "../winhttp.h"

//----- (000000014071CC50) ----------------------------------------------------
__int64 __fastcall sub_14071CC50(__int64 a1, unsigned int a2)
{
	__int64 v4; // rcx
	__int64 result; // rax
	__m128 v6; // [rsp+20h] [rbp-18h] BYREF

	v4 = *(_QWORD*)(a1 + 224);
	v6 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(a2), 0), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	if (v4)
	{
		result = (*(__int64(__fastcall**)(__int64, __m128*))(*(_QWORD*)v4 + 1136i64))(v4, &v6);
		*(_DWORD*)(a1 + 336) = a2;
	}
	else
	{
		*(_DWORD*)(a1 + 336) = a2;
	}
	return result;
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 14071CC50: using guessed type __m128 var_18;

