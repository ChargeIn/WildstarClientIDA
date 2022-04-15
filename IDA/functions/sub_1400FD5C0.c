//----- (00000001400FD5C0) ----------------------------------------------------
__int64 __fastcall sub_1400FD5C0(__int64 a1, unsigned int a2, unsigned int a3, __m128* a4)
{
	int v4; // r10d
	__int64 v5; // rbx
	int v6; // eax
	__int64(__fastcall * v7)(_QWORD, _QWORD, __int64*); // rax
	__m128i v8; // xmm1
	__m128i v9; // xmm1
	__int64 result; // rax
	__int64 v11; // [rsp+30h] [rbp+8h] BYREF

	v11 = a1;
	v4 = dword_140C3CB80;
	v5 = qword_140C63658;
	v6 = dword_140C3CB80;
	if (*(_DWORD*)qword_140C63750 < dword_140C3CB80)
		v6 = *(_DWORD*)qword_140C63750;
	if (!*((_BYTE*)&off_140C3CB70 + v6 + 32) || !*(_QWORD*)(qword_140C63658 + 32) || !*(_DWORD*)(qword_140C63658 + 44))
		return 2147500037i64;
	if (*(_DWORD*)qword_140C63750 < dword_140C3CB80)
		v4 = *(_DWORD*)qword_140C63750;
	if (!*((_BYTE*)&off_140C3CB70 + v4 + 32))
		return 2147500037i64;
	v7 = *(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(qword_140C63658 + 144);
	if (!v7)
		return 2147500037i64;
	v8 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(_mm_min_ps(_mm_max_ps((__m128)0i64, *a4), (__m128)xmmword_140B7B240), (__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v9 = _mm_packus_epi16(v8, v8);
	LODWORD(v11) = _mm_cvtsi128_si32(_mm_packus_epi16(v9, v9));
	result = v7(a2, a3, &v11);
	if ((_DWORD)result)
		return 2147500037i64;
	*(_DWORD*)(v5 + 48) = 1;
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C3CB70: using guessed type __int64 (__fastcall *off_140C3CB70)();
// 140C3CB80: using guessed type int dword_140C3CB80;
// 140C63658: using guessed type __int64 qword_140C63658;
// 140C63750: using guessed type __int64 qword_140C63750;

