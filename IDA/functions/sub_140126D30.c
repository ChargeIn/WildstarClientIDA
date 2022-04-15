#include "../winhttp.h"

//----- (0000000140126D30) ----------------------------------------------------
void __fastcall sub_140126D30(__int64 a1)
{
	int v1; // ebp
	__int64 v3; // rcx
	__int64 v4; // rax
	int v5; // r10d
	__int64 v6; // rdx
	__int64 v7; // r11
	int v8; // r8d
	int v9; // r9d
	int v10; // ecx
	__int64 v11; // r10
	__int64 v12; // rdx
	__int64 v13; // r9
	int v14; // r8d
	__int64 v15; // rax
	WCHAR* v16; // rcx
	int v17; // ecx
	unsigned __int64 v18; // rbx
	unsigned int* v19; // rsi
	__int64 v20; // r8
	__int64 v21; // rdx
	__int64 v22; // rcx
	int v23; // r9d
	unsigned __int64 v24; // rbx
	unsigned int* v25; // rdi
	__int64 v26; // r8
	__int64 v27; // rdx
	__int64 v28; // rcx
	int v29; // r9d
	__m128 v30; // [rsp+20h] [rbp-38h] BYREF
	unsigned int v31; // [rsp+60h] [rbp+8h] BYREF
	char v32; // [rsp+68h] [rbp+10h] BYREF

	v1 = 0;
	v3 = *(_QWORD*)(a1 + 1064);
	v31 = 0;
	v4 = (*(__int64(__fastcall**)(__int64, _QWORD, unsigned int*, __int64))(*(_QWORD*)v3 + 72i64))(
		v3,
		0i64,
		&v31,
		2i64);
	v5 = 0;
	v6 = v4;
	do
	{
		v7 = v6;
		v8 = 0;
		v9 = 65280 - (v5 << 8);
		do
		{
			v10 = v8;
			v8 += 2;
			v10 <<= 16;
			v6 += 8i64;
			*(_DWORD*)(v6 - 8) = v9 | v10 | (255 - *(_DWORD*)(a1 + 1048)) | 0xFF000000;
			*(_DWORD*)(v6 - 4) = v9 | (255 - *(_DWORD*)(a1 + 1048)) | (v10 + 0x10000) | 0xFF000000;
		} while (v8 < 256);
		++v5;
		v6 = v7 + v31;
	} while (v5 < 256);
	(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 1064) + 80i64))(*(_QWORD*)(a1 + 1064), 0i64);
	v11 = (*(__int64(__fastcall**)(_QWORD, _QWORD, unsigned int*, __int64))(**(_QWORD**)(a1 + 1072) + 72i64))(
		*(_QWORD*)(a1 + 1072),
		0i64,
		&v31,
		2i64);
	do
	{
		v12 = v11 + 8;
		v13 = 4i64;
		v14 = 255 - v1;
		do
		{
			v12 += 16i64;
			*(_DWORD*)(v12 - 24) = v14 | (*(_DWORD*)(a1 + 1052) << 16) | (65280 - (*(_DWORD*)(a1 + 1056) << 8)) | 0xFF000000;
			*(_DWORD*)(v12 - 20) = v14 | (*(_DWORD*)(a1 + 1052) << 16) | (65280 - (*(_DWORD*)(a1 + 1056) << 8)) | 0xFF000000;
			*(_DWORD*)(v12 - 16) = v14 | (*(_DWORD*)(a1 + 1052) << 16) | (65280 - (*(_DWORD*)(a1 + 1056) << 8)) | 0xFF000000;
			*(_DWORD*)(v12 - 12) = v14 | (*(_DWORD*)(a1 + 1052) << 16) | (65280 - (*(_DWORD*)(a1 + 1056) << 8)) | 0xFF000000;
			--v13;
		} while (v13);
		++v1;
		v11 += v31;
	} while (v1 < 256);
	(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 1072) + 80i64))(*(_QWORD*)(a1 + 1072), 0i64);
	v15 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 1288) + 1040i64) + 112i64))(*(_QWORD*)(*(_QWORD*)(a1 + 1288) + 1040i64));
	v16 = (WCHAR*)&unk_1409DD974;
	if (v15)
		v16 = (WCHAR*)v15;
	v17 = (255 - *(_DWORD*)(a1 + 1048)) | (65280 - (*(_DWORD*)(a1 + 1056) << 8)) | ((*(_DWORD*)(a1 + 1052) | ((unsigned __int8)(int)*(double*)sub_1407DFD50(v16, 0i64, (_OWORD*)qword_140C7AAC8).m128_u64 << 8)) << 16);
	*(_DWORD*)(a1 + 1040) = v17;
	v30 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(v17 | 0xFF000000), 0), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v18 = (unsigned int)sub_140141F10(qword_140C63678, &v30);
	v19 = (unsigned int*)(*(_QWORD*)(a1 + 1088) + 712i64);
	if (v19 == (unsigned int*)&v32)
	{
		v20 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v19);
		v20 = qword_140C63678;
		*v19 = v18;
		if (v18 < *(_QWORD*)(v20 + 48))
		{
			v21 = *(_QWORD*)(v20 + 40);
			v22 = 32i64 * (unsigned int)v18;
			v23 = *(_DWORD*)(v22 + v21 + 16);
			if ((unsigned int)(v23 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v22 + v21 + 16) = v23 + 1;
		}
	}
	sub_1401429A0(v20, v18);
	v30 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1040)), 0), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v24 = (unsigned int)sub_140141F10(qword_140C63678, &v30);
	v25 = (unsigned int*)(*(_QWORD*)(a1 + 1104) + 712i64);
	if (v25 == (unsigned int*)&v32)
	{
		v26 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v25);
		v26 = qword_140C63678;
		*v25 = v24;
		if (v24 < *(_QWORD*)(v26 + 48))
		{
			v27 = *(_QWORD*)(v26 + 40);
			v28 = 32i64 * (unsigned int)v24;
			v29 = *(_DWORD*)(v27 + v28 + 16);
			if ((unsigned int)(v29 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v27 + v28 + 16) = v29 + 1;
		}
	}
	sub_1401429A0(v26, v24);
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C7AAC8: using guessed type __int64 qword_140C7AAC8;

