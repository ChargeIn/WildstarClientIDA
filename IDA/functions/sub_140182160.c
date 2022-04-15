//----- (0000000140182160) ----------------------------------------------------
__int64 __fastcall sub_140182160(_QWORD* a1)
{
	__int64 v2; // rax
	unsigned int v4; // ebx
	__m128 v5; // [rsp+20h] [rbp-18h] BYREF
	unsigned int v6; // [rsp+48h] [rbp+10h] BYREF

	v2 = sub_1400D66A0(a1, 1u);
	if (!v2 || (*(_DWORD*)(v2 + 432) & 0x800i64) == 0)
		return 0i64;
	v5 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v2 + 1024)), 0), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v4 = sub_140141F10(qword_140C63678, &v5);
	v6 = v4;
	sub_1401430E0(a1, &v6);
	sub_1401429A0(qword_140C63678, v4);
	return 1i64;
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140182160: using guessed type __m128 var_18;

