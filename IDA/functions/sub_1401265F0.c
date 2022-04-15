//----- (00000001401265F0) ----------------------------------------------------
void __fastcall sub_1401265F0(__int64 a1)
{
	int v1; // esi
	__int64 v3; // rcx
	__int64 v4; // rax
	int v5; // r10d
	__int64 v6; // rdx
	__int64 v7; // r11
	int v8; // r8d
	int v9; // r9d
	int v10; // eax
	__int64 v11; // r10
	__int64 v12; // rdx
	__int64 v13; // r9
	int v14; // r8d
	__int64 v15; // rax
	WCHAR* v16; // rcx
	double v17; // xmm0_8
	__int64 v18; // rcx
	int v19; // edx
	unsigned __int64 v20; // rbx
	unsigned int* v21; // rsi
	__int64 v22; // r8
	__int64 v23; // rdx
	__int64 v24; // rcx
	int v25; // r9d
	unsigned __int64 v26; // rbx
	unsigned int* v27; // rdi
	__int64 v28; // r8
	__int64 v29; // rdx
	__int64 v30; // rcx
	int v31; // r9d
	__m128 v32; // [rsp+20h] [rbp-28h] BYREF
	unsigned int v33; // [rsp+50h] [rbp+8h] BYREF
	char v34; // [rsp+58h] [rbp+10h] BYREF

	v1 = 0;
	v3 = *(_QWORD*)(a1 + 1064);
	v33 = 0;
	v4 = (*(__int64(__fastcall**)(__int64, _QWORD, unsigned int*, __int64))(*(_QWORD*)v3 + 72i64))(
		v3,
		0i64,
		&v33,
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
			v6 += 8i64;
			*(_DWORD*)(v6 - 8) = v8 | v9 | (-65536 - (*(_DWORD*)(a1 + 1048) << 16)) | 0xFF000000;
			v10 = v8 + 1;
			v8 += 2;
			*(_DWORD*)(v6 - 4) = v9 | v10 | (-65536 - (*(_DWORD*)(a1 + 1048) << 16)) | 0xFF000000;
		} while (v8 < 256);
		++v5;
		v6 = v7 + v33;
	} while (v5 < 256);
	(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 1064) + 80i64))(*(_QWORD*)(a1 + 1064), 0i64);
	v11 = (*(__int64(__fastcall**)(_QWORD, _QWORD, unsigned int*, __int64))(**(_QWORD**)(a1 + 1072) + 72i64))(
		*(_QWORD*)(a1 + 1072),
		0i64,
		&v33,
		2i64);
	do
	{
		v12 = v11 + 8;
		v13 = 4i64;
		v14 = -65536 - (v1 << 16);
		do
		{
			v12 += 16i64;
			*(_DWORD*)(v12 - 24) = *(_DWORD*)(a1 + 1052) | v14 | (65280 - (*(_DWORD*)(a1 + 1056) << 8)) | 0xFF000000;
			*(_DWORD*)(v12 - 20) = *(_DWORD*)(a1 + 1052) | v14 | (65280 - (*(_DWORD*)(a1 + 1056) << 8)) | 0xFF000000;
			*(_DWORD*)(v12 - 16) = *(_DWORD*)(a1 + 1052) | v14 | (65280 - (*(_DWORD*)(a1 + 1056) << 8)) | 0xFF000000;
			*(_DWORD*)(v12 - 12) = *(_DWORD*)(a1 + 1052) | v14 | (65280 - (*(_DWORD*)(a1 + 1056) << 8)) | 0xFF000000;
			--v13;
		} while (v13);
		++v1;
		v11 += v33;
	} while (v1 < 256);
	(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 1072) + 80i64))(*(_QWORD*)(a1 + 1072), 0i64);
	v15 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 1288) + 1040i64) + 112i64))(*(_QWORD*)(*(_QWORD*)(a1 + 1288) + 1040i64));
	v16 = (WCHAR*)&unk_1409DD974;
	if (v15)
		v16 = (WCHAR*)v15;
	v17 = *(double*)sub_1407DFD50(v16, 0i64, (_OWORD*)qword_140C7AAC8).m128_u64;
	v18 = qword_140C63678;
	v19 = *(_DWORD*)(a1 + 1052) | (65280 - (*(_DWORD*)(a1 + 1056) << 8)) | (16711680 - (*(_DWORD*)(a1 + 1048) << 16)) | ((unsigned __int8)(int)v17 << 24);
	*(_DWORD*)(a1 + 1040) = v19;
	v32 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(v19 | 0xFF000000), 0), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v20 = (unsigned int)sub_140141F10(v18, &v32);
	v21 = (unsigned int*)(*(_QWORD*)(a1 + 1088) + 712i64);
	if (v21 == (unsigned int*)&v34)
	{
		v22 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v21);
		v22 = qword_140C63678;
		*v21 = v20;
		if (v20 < *(_QWORD*)(v22 + 48))
		{
			v23 = *(_QWORD*)(v22 + 40);
			v24 = 32i64 * (unsigned int)v20;
			v25 = *(_DWORD*)(v24 + v23 + 16);
			if ((unsigned int)(v25 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v24 + v23 + 16) = v25 + 1;
		}
	}
	sub_1401429A0(v22, v20);
	v32 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1040)), 0), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v26 = (unsigned int)sub_140141F10(qword_140C63678, &v32);
	v27 = (unsigned int*)(*(_QWORD*)(a1 + 1104) + 712i64);
	if (v27 == (unsigned int*)&v34)
	{
		v28 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v27);
		v28 = qword_140C63678;
		*v27 = v26;
		if (v26 < *(_QWORD*)(v28 + 48))
		{
			v29 = *(_QWORD*)(v28 + 40);
			v30 = 32i64 * (unsigned int)v26;
			v31 = *(_DWORD*)(v29 + v30 + 16);
			if ((unsigned int)(v31 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v29 + v30 + 16) = v31 + 1;
		}
	}
	sub_1401429A0(v28, v26);
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C7AAC8: using guessed type __int64 qword_140C7AAC8;

