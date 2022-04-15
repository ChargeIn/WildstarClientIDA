#include "../winhttp.h"

//----- (00000001401445A0) ----------------------------------------------------
__int64 __fastcall sub_1401445A0(__int64 a1)
{
	int v2; // ebp
	int* v3; // rax
	int* v4; // rax
	__int64 v5; // rax
	__m128i v6; // xmm1
	__m128i v7; // xmm1
	unsigned __int64 v8; // rax
	__int64 v9; // r14
	unsigned __int64 v10; // rdi
	unsigned __int64 v11; // rsi
	int* v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rax
	__m128i v15; // xmm1
	__m128i v16; // xmm1
	unsigned __int64 v17; // rax
	__int64 v18; // rsi
	unsigned __int64 v19; // r14
	unsigned __int64 v20; // rdi
	int* v21; // rax
	__int64 v22; // rcx
	wchar_t** v23; // rdi
	__int64 v24; // rax
	unsigned __int16* v25; // rsi
	unsigned int v26; // eax
	__m128 v28; // [rsp+20h] [rbp-48h] BYREF
	unsigned int v29; // [rsp+70h] [rbp+8h] BYREF

	sub_1400B6000((_QWORD*)a1, 0x708ui64);
	v2 = 0;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_DWORD*)(a1 + 56) = 0;
	*(_BYTE*)(a1 + 60) = 1;
	*(_DWORD*)(a1 + 64) = 0;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	v3 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 96) = v3;
	*(_BYTE*)v3 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 96) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 96) + 16i64) = *(_QWORD*)(a1 + 96);
	*(_QWORD*)(*(_QWORD*)(a1 + 96) + 24i64) = *(_QWORD*)(a1 + 96);
	v4 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 128) = v4;
	*(_BYTE*)v4 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 128) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 128) + 16i64) = *(_QWORD*)(a1 + 128);
	*(_QWORD*)(*(_QWORD*)(a1 + 128) + 24i64) = *(_QWORD*)(a1 + 128);
	qword_140C63678 = a1;
	sub_1401448A0((__int64*)(a1 + 40), 2ui64);
	*(_OWORD*)*(_QWORD*)(a1 + 40) = xmmword_140C777D0;
	*(_DWORD*)(*(_QWORD*)(a1 + 40) + 16i64) = -1;
	v5 = *(_QWORD*)(a1 + 8);
	v6 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, (__m128)xmmword_140C777D0), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v7 = _mm_packus_epi16(v6, v6);
	v29 = _mm_cvtsi128_si32(_mm_packus_epi16(v7, v7));
	if (*(_QWORD*)a1 == v5)
		sub_1400290D0(a1);
	v8 = (*(__int64(__fastcall**)(unsigned int*))(a1 + 24))(&v29);
	v9 = *(_QWORD*)(a1 + 16);
	v10 = v8;
	v11 = v8 % *(_QWORD*)(a1 + 8);
	v12 = sub_14018B280(24i64, 0);
	if (v12)
	{
		v13 = *(_QWORD*)(v9 + 8 * v11);
		*(_QWORD*)v12 = v10;
		*((_QWORD*)v12 + 1) = v13;
		*((_QWORD*)v12 + 2) = v29;
	}
	else
	{
		v12 = 0i64;
	}
	*(_QWORD*)(v9 + 8 * v11) = v12;
	++* (_QWORD*)a1;
	*(_OWORD*)(*(_QWORD*)(a1 + 40) + 32i64) = xmmword_140B7B240;
	*(_DWORD*)(*(_QWORD*)(a1 + 40) + 48i64) = -1;
	v14 = *(_QWORD*)(a1 + 8);
	v15 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, (__m128)xmmword_140B7B240), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v16 = _mm_packus_epi16(v15, v15);
	v29 = _mm_cvtsi128_si32(_mm_packus_epi16(v16, v16));
	if (*(_QWORD*)a1 == v14)
		sub_1400290D0(a1);
	v17 = (*(__int64(__fastcall**)(unsigned int*))(a1 + 24))(&v29);
	v18 = *(_QWORD*)(a1 + 16);
	v19 = v17;
	v20 = v17 % *(_QWORD*)(a1 + 8);
	v21 = sub_14018B280(24i64, 0);
	if (v21)
	{
		v22 = *(_QWORD*)(v18 + 8 * v20);
		*(_QWORD*)v21 = v19;
		*((_QWORD*)v21 + 1) = v22;
		LODWORD(v22) = v29;
		v21[5] = 1;
		v21[4] = v22;
	}
	else
	{
		v21 = 0i64;
	}
	*(_QWORD*)(v18 + 8 * v20) = v21;
	++* (_QWORD*)a1;
	*(_DWORD*)(a1 + 56) = 2;
	*(_DWORD*)(a1 + 64) = 2;
	v23 = &off_140B581D0;
	do
	{
		v24 = *(unsigned int*)(a1 + 64);
		v25 = *v23;
		v28 = _mm_mul_ps(
			_mm_cvtepi32_ps(
				_mm_shuffle_epi32(
					_mm_unpacklo_epi16(
						_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(*((_DWORD*)v23 + 2)), 0), (__m128i)0i64),
						(__m128i)0i64),
					198)),
			(__m128)xmmword_140B7AB70);
		if (v24 == *(_QWORD*)(a1 + 48) && v25 && *v25)
		{
			v26 = sub_140141F10(a1, &v28);
			sub_1401424B0(a1, v25, v26);
			*(_DWORD*)(a1 + 64) = *(_DWORD*)(a1 + 48);
		}
		++v2;
		v23 += 2;
	} while ((unsigned __int64)v2 < 0x411);
	v28 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B6B0), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	sub_140142780(a1, L"WindowTitleColor", &v28, 0i64);
	return a1;
}
// 140A2C740: using guessed type wchar_t aWindowtitlecol[17];
// 140B581D0: using guessed type wchar_t *off_140B581D0;
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140B7B6B0: using guessed type __int128 xmmword_140B7B6B0;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;

