//----- (0000000140121370) ----------------------------------------------------
__int64 __fastcall sub_140121370(_QWORD* a1)
{
	__m128* v2; // rax
	unsigned __int64 v3; // rcx
	int v4; // r14d
	_DWORD* v5; // rbx
	__m128 v6; // xmm1
	_DWORD* v7; // rax
	__m128i v8; // xmm1
	__m128i v9; // xmm1
	unsigned int v10; // esi
	unsigned __int64 v11; // rcx
	_DWORD* v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rax
	int i; // ebx
	__int64 v16; // rcx
	_DWORD* v17; // rax
	__int64 v18; // rcx
	int v19; // eax
	_QWORD* v20; // rbx
	unsigned __int64 v21; // r8
	int v22; // ebp
	unsigned int v23; // ecx
	__m128 v24; // xmm7
	__int64 v25; // rdx
	__int64 v26; // rax
	__int64 v27; // rsi
	int* v28; // rax
	__m128i v29; // xmm1
	__m128i v30; // xmm1

	v2 = (__m128*)sub_140056AB0(a1, 1u);
	v3 = a1[2];
	v4 = -2;
	v5 = dword_140A12138;
	v6 = _mm_min_ps(_mm_max_ps((__m128)0i64, *v2), (__m128)xmmword_140B7B240);
	v7 = (_DWORD*)(a1[3] + 16i64);
	v8 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(_mm_add_ps(_mm_mul_ps(v6, (__m128)xmmword_140B7B470), (__m128)xmmword_140B7AC50)),
		198);
	v9 = _mm_packus_epi16(v8, v8);
	v10 = _mm_cvtsi128_si32(_mm_packus_epi16(v9, v9));
	if ((unsigned __int64)v7 < v3
		&& (v7 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64) != 6)
		&& (unsigned __int64)v7 < v3
		&& v7 != dword_140A12138
		&& !*(_DWORD*)(a1[3] + 24i64))
	{
		sub_140056570(a1, 2u, "not function or nil");
	}
	v11 = a1[2];
	v12 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v12 < v11 && v12 != dword_140A12138 && *(_DWORD*)(a1[3] + 24i64) == 6)
	{
		if ((unsigned __int64)v12 < v11)
			v5 = (_DWORD*)(a1[3] + 16i64);
		*(_QWORD*)v11 = *(_QWORD*)v5;
		*(_DWORD*)(v11 + 8) = v5[2];
		a1[2] += 16i64;
		v4 = sub_1400578C0((__int64)a1);
	}
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v13 = a1[2];
	v14 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v13 + 8) = 5;
	*(_QWORD*)v13 = v14;
	a1[2] += 16i64;
	for (i = 3; i < (int)((__int64)(a1[2] - a1[3]) >> 4); ++i)
	{
		v16 = a1[2];
		*(_DWORD*)(v16 + 8) = 3;
		*(double*)v16 = (double)(i - 2);
		a1[2] += 16i64;
		v17 = sub_1400580E0((__int64)a1, i);
		v18 = a1[2];
		*(_QWORD*)v18 = *(_QWORD*)v17;
		*(_DWORD*)(v18 + 8) = v17[2];
		a1[2] += 16i64;
		sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
	}
	v19 = sub_1400578C0((__int64)a1);
	v20 = 0i64;
	v21 = *(_QWORD*)(qword_140C63650 + 768);
	v22 = v19;
	v23 = 0;
	v24 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(v10), 0), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	if (v21)
	{
		v25 = *(_QWORD*)(qword_140C63650 + 760);
		v26 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v25 + 8 * v26) + 400i64) != a1)
		{
			v26 = ++v23;
			if (v23 >= v21)
				goto LABEL_22;
		}
		v27 = *(_QWORD*)(v25 + 8i64 * v23);
	}
	else
	{
	LABEL_22:
		v27 = 0i64;
	}
	v28 = sub_14018B280(1296i64, 0);
	if (v28)
		v20 = (_QWORD*)sub_140124E00((__int64)v28, v27, v4, v22);
	v29 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, v24), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v30 = _mm_packus_epi16(v29, v29);
	sub_140128320((__int64)v20, v27, 0i64, _mm_cvtsi128_si32(_mm_packus_epi16(v30, v30)));
	if (!v20)
		return 0i64;
	v20[82] |= 0x20ui64;
	sub_1400D62A0(a1, (__int64)v20);
	(*(void(__fastcall**)(_QWORD*))(*v20 + 8i64))(v20);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C63650: using guessed type __int64 qword_140C63650;

