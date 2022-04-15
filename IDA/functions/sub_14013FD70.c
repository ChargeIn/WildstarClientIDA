//----- (000000014013FD70) ----------------------------------------------------
__int64 __fastcall sub_14013FD70(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rcx
	__m128 v5; // [rsp+20h] [rbp-18h] BYREF

	*(_DWORD*)a1 = 0;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	v2 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 16) = v2;
	*(_QWORD*)(a1 + 24) = v2;
	*(_QWORD*)(a1 + 32) = v2 + 4;
	if (v2)
		*(_WORD*)v2 = 0;
	v3 = qword_140C63678;
	*(_QWORD*)(a1 + 40) = 0i64;
	sub_1401429A0(v3, *(_DWORD*)a1);
	v5 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B610), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	*(_DWORD*)a1 = sub_140141F10(qword_140C63678, &v5);
	*(_DWORD*)(a1 + 48) = 0;
	return a1;
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B610: using guessed type __int128 xmmword_140B7B610;
// 140C63678: using guessed type __int64 qword_140C63678;
// 14013FD70: using guessed type __m128 var_18;

