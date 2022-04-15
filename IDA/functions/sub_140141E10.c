//----- (0000000140141E10) ----------------------------------------------------
__int64 __fastcall sub_140141E10(__int64 a1, unsigned int a2)
{
	__int64 v4; // rcx
	__int64 v5; // rax
	__m128i v6; // xmm1
	__m128i v7; // xmm1
	unsigned __int64 v8; // rbp
	_QWORD* v9; // rbx
	unsigned int* v11; // rbx
	unsigned int v12; // eax
	int v13; // [rsp+38h] [rbp+10h] BYREF

	if ((unsigned __int64)a2 >= *(_QWORD*)(a1 + 48))
		return 0i64;
	v4 = *(_QWORD*)(a1 + 40);
	v5 = 32i64 * a2;
	if (!*(_DWORD*)(v5 + v4 + 16))
		return 0i64;
	v6 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, *(__m128*)(v5 + v4)), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v7 = _mm_packus_epi16(v6, v6);
	v13 = _mm_cvtsi128_si32(_mm_packus_epi16(v7, v7));
	v8 = (*(__int64(__fastcall**)(int*))(a1 + 24))(&v13);
	v9 = *(_QWORD**)(*(_QWORD*)(a1 + 16) + 8 * (v8 % *(_QWORD*)(a1 + 8)));
	if (!v9)
		return 1i64;
	while (v8 != *v9 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 32))(&v13, v9 + 2))
	{
		v9 = (_QWORD*)v9[1];
		if (!v9)
			return 1i64;
	}
	v11 = (unsigned int*)v9 + 5;
	if (!v11)
		return 1i64;
	v12 = *v11;
	if (*v11 == -1)
		return 1i64;
	while (v12 != a2)
	{
		v12 = *(_DWORD*)(32i64 * v12 + *(_QWORD*)(a1 + 40) + 20);
		if (v12 == -1)
			return 1i64;
	}
	return 0i64;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;

