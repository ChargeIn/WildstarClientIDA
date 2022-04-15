#include "../winhttp.h"

//----- (0000000140140280) ----------------------------------------------------
__int64 __fastcall sub_140140280(__int64 a1)
{
	__int64* v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 result; // rax
	unsigned int v6; // edi
	__int64 v7; // rcx
	__int64(__fastcall * **v8)(_QWORD, __int64); // rcx
	__m128 v9; // [rsp+20h] [rbp-18h] BYREF

	v2 = (__int64*)(a1 + 784);
	*((_OWORD*)v2 - 6) = 0i64;
	sub_1400523E0(v2);
	*(_QWORD*)(a1 + 800) = 0i64;
	*(_DWORD*)(a1 + 776) = 0;
	v3 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(a1 + 744) = 0i64;
	if (v3)
	{
		v4 = *(_QWORD*)(v3 + 16);
		if (v4)
			*(_QWORD*)(a1 + 744) = sub_1400E58C0(v4, (int*)L"Default");
	}
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 704));
	v9 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B6F0), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	result = sub_140141F10(qword_140C63678, &v9);
	v6 = 0;
	*(_DWORD*)(a1 + 704) = result;
	if (*(_QWORD*)(a1 + 816))
	{
		v7 = 0i64;
		do
		{
			result = *(_QWORD*)(a1 + 808);
			v8 = *(__int64(__fastcall****)(_QWORD, __int64))(result + 8 * v7);
			if (v8)
				result = (**v8)(v8, 1i64);
			v7 = ++v6;
		} while ((unsigned __int64)v6 < *(_QWORD*)(a1 + 816));
	}
	*(_QWORD*)(a1 + 816) = 0i64;
	*(_BYTE*)(a1 + 825) = 0;
	*(_QWORD*)(a1 + 840) = 0i64;
	return result;
}
// 140A23858: using guessed type wchar_t aDefault_8[8];
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B6F0: using guessed type __int128 xmmword_140B7B6F0;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140140280: using guessed type __m128 var_18;

