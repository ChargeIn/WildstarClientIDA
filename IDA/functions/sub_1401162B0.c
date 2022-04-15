#include "../winhttp.h"

//----- (00000001401162B0) ----------------------------------------------------
char __fastcall sub_1401162B0(__int64 a1, int* a2)
{
	unsigned __int64 v4; // rax
	__m128* v5; // rax
	__m128i v6; // xmm1
	__m128i v7; // xmm1
	int** v8; // rax
	__int64 v9; // r8
	int* v10; // r8
	__int64 v12; // [rsp+30h] [rbp+8h] BYREF

	sub_1400CDD20(a1, a2);
	sub_140141100(a1 + 1024, (float)(*(_DWORD*)(a1 + 724) - *(_DWORD*)(a1 + 716)));
	v4 = *(unsigned int*)(a1 + 708);
	if (v4 >= *(_QWORD*)(qword_140C63678 + 48))
		v5 = *(__m128**)(qword_140C63678 + 40);
	else
		v5 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v4);
	v6 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(_mm_min_ps(_mm_max_ps((__m128)0i64, *v5), (__m128)xmmword_140B7B240), (__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v7 = _mm_packus_epi16(v6, v6);
	v8 = (int**)sub_14018D540(&v12, (__int64)L"%x", (unsigned int)_mm_cvtsi128_si32(_mm_packus_epi16(v7, v7)));
	v9 = *(_QWORD*)(a1 + 696);
	if (v9)
		v10 = *(int**)(v9 + 56);
	else
		v10 = (int*)&unk_1409D2E24;
	sub_140141600(a1 + 1024, a2, v10, *v8);
	if (v12)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
	return sub_140116010(a1);
}
// 1409D5D24: using guessed type wchar_t asc_1409D5D24[3];
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C63678: using guessed type __int64 qword_140C63678;

