//----- (0000000140142E30) ----------------------------------------------------
_QWORD* __fastcall sub_140142E30(__int64 a1, _QWORD* a2, unsigned int* a3)
{
	unsigned __int64 v3; // r9
	__int64 v5; // rdx
	__int64 v6; // rax
	__int64 v7; // r8
	int* v8; // rdx
	__int64 v9; // rax
	__m128* v11; // rax
	__m128i v12; // xmm1
	__m128i v13; // xmm1
	_QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v15; // [rsp+50h] [rbp+8h]

	v3 = *a3;
	v5 = *(_QWORD*)(a1 + 128);
	v6 = *(_QWORD*)(v5 + 8);
	v7 = v5;
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < (unsigned int)v3)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v7 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v7 == v5 || (v15 = v7, (unsigned int)v3 < *(_DWORD*)(v7 + 32)))
		v15 = *(_QWORD*)(a1 + 128);
	if (v15 == v5)
	{
		if (v3 >= *(_QWORD*)(qword_140C63678 + 48))
			v11 = *(__m128**)(qword_140C63678 + 40);
		else
			v11 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v3);
		v12 = _mm_shuffle_epi32(
			_mm_cvttps_epi32(
				_mm_add_ps(
					_mm_mul_ps(
						_mm_min_ps(_mm_max_ps((__m128)0i64, *v11), (__m128)xmmword_140B7B240),
						(__m128)xmmword_140B7B470),
					(__m128)xmmword_140B7AC50)),
			198);
		v13 = _mm_packus_epi16(v12, v12);
		sub_14018EFA0(v14, (__int64)L"%x", (unsigned int)_mm_cvtsi128_si32(_mm_packus_epi16(v13, v13)));
		a2[1] = v14[1];
		a2[2] = v14[2];
		a2[3] = v14[3];
		return a2;
	}
	else
	{
		v8 = *(int**)(v15 + 40);
		v9 = 0i64;
		a2[1] = 0i64;
		a2[2] = 0i64;
		a2[3] = 0i64;
		if (*(_WORD*)v8)
		{
			do
				++v9;
			while (*((_WORD*)v8 + v9));
		}
		sub_14001C1B0(a2, v8, (__int64)v8 + 2 * v9);
		return a2;
	}
}
// 1409D95C4: using guessed type wchar_t asc_1409D95C4[3];
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C63678: using guessed type __int64 qword_140C63678;

