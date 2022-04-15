#include "../winhttp.h"

//----- (0000000140474BC0) ----------------------------------------------------
__int64 __fastcall sub_140474BC0(__int64 a1, int* a2, __int64 a3, int a4, int a5)
{
	int v5; // xmm0_4
	__int64 v6; // rbx
	__int64 v7; // rax
	int* v11; // rax
	int* v12; // rax
	int v13; // ecx
	int v14; // eax
	int v15; // eax
	__m128i v16; // xmm1
	__m128i v17; // xmm1
	int* v18; // rbx
	int** v19; // rax
	__int64 v21; // [rsp+30h] [rbp+8h] BYREF

	v5 = a5;
	v6 = 0i64;
	*(_DWORD*)a1 = a4;
	*(_DWORD*)(a1 + 4) = v5;
	v7 = 0i64;
	*(_OWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v7;
		while (*((_WORD*)a2 + v7));
	}
	*(_QWORD*)(a1 + 8) = v7;
	v11 = sub_14018B280(864i64, 8u);
	if (v11)
		v6 = sub_14013FEB0((__int64)v11, *(_QWORD*)(qword_140C65898 + 29504));
	v12 = (int*)qword_140C63750;
	*(_QWORD*)(a1 + 32) = v6;
	v13 = *v12;
	v14 = dword_140C48100;
	if (v13 < dword_140C48100)
		v14 = v13;
	sub_140141100(v6, flt_140C48110[v14]);
	v15 = dword_140C47670;
	if (*(_DWORD*)qword_140C63750 < dword_140C47670)
		v15 = *(_DWORD*)qword_140C63750;
	v16 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, stru_140C47680[v15]), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v17 = _mm_packus_epi16(v16, v16);
	v18 = (int*)*sub_14018D540(&v21, (__int64)L"%x", (unsigned int)_mm_cvtsi128_si32(_mm_packus_epi16(v17, v17)));
	v19 = (int**)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 24i64))(a3);
	sub_140141600(*(_QWORD*)(a1 + 32), a2, *v19, v18);
	if (v21)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v21 - 16) + 8i64))(v21 - 16);
	return a1;
}
// 140B034E4: using guessed type wchar_t asc_140B034E4[3];
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C47670: using guessed type int dword_140C47670;
// 140C47680: using guessed type __m128 stru_140C47680[7];
// 140C48100: using guessed type int dword_140C48100;
// 140C48110: using guessed type float flt_140C48110[16];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

