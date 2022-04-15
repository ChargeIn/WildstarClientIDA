#include "../winhttp.h"

//----- (00000001401270C0) ----------------------------------------------------
void __fastcall sub_1401270C0(__int64 a1)
{
	__int64 v2; // rcx
	int i; // r10d
	__int64 v4; // r8
	float v5; // xmm7_4
	int v6; // eax
	int v7; // r10d
	__int64 v8; // r11
	int v9; // r8d
	_DWORD* v10; // r9
	int j; // r10d
	float v12; // xmm7_4
	int v13; // eax
	int v14; // r10d
	__int64 v15; // r11
	_DWORD* v16; // r8
	__int64 v17; // r9
	__int64 v18; // rax
	__int64 v19; // rax
	WCHAR* v20; // rcx
	float v21; // xmm1_4
	unsigned __int64 v22; // rbx
	unsigned int* v23; // rsi
	__int64 v24; // r8
	__int64 v25; // rdx
	__int64 v26; // rcx
	int v27; // r9d
	unsigned __int64 v28; // rbx
	unsigned int* v29; // rdi
	__int64 v30; // r8
	__int64 v31; // rdx
	__int64 v32; // rcx
	int v33; // r9d
	__m128 v34; // [rsp+20h] [rbp-48h] BYREF
	unsigned int v35; // [rsp+70h] [rbp+8h] BYREF
	char v36; // [rsp+78h] [rbp+10h] BYREF

	v2 = *(_QWORD*)(a1 + 1064);
	v35 = 0;
	(*(void(__fastcall**)(__int64, _QWORD, unsigned int*, __int64))(*(_QWORD*)v2 + 72i64))(v2, 0i64, &v35, 2i64);
	for (i = 255; i > -1; i = v7 - 1)
	{
		LODWORD(v4) = 0;
		v5 = (float)i * 0.0039215689;
		do
		{
			v6 = sub_1401280F0((float)(255 - *(_DWORD*)(a1 + 1048)) * 1.4078431, (float)(int)v4 * 0.0039215689, v5);
			v4 = (unsigned int)(v9 + 1);
			*v10 = v6;
		} while ((int)v4 < 256);
	}
	(*(void(__fastcall**)(_QWORD, _QWORD, __int64, __int64))(**(_QWORD**)(a1 + 1064) + 80i64))(
		*(_QWORD*)(a1 + 1064),
		0i64,
		v4,
		v8 + v35);
	(*(void(__fastcall**)(_QWORD, _QWORD, unsigned int*, __int64))(**(_QWORD**)(a1 + 1072) + 72i64))(
		*(_QWORD*)(a1 + 1072),
		0i64,
		&v35,
		2i64);
	for (j = 255; j > -1; j = v14 - 1)
	{
		v12 = (float)j * 1.4078431;
		do
		{
			v13 = sub_1401280F0(
				v12,
				(float)*(int*)(a1 + 1052) * 0.0039215689,
				(float)(255 - *(_DWORD*)(a1 + 1056)) * 0.0039215689);
			*v16 = v13;
		} while (v17 != 1);
	}
	(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 1072) + 80i64))(
		*(_QWORD*)(a1 + 1072),
		0i64,
		v15 + v35);
	*(_DWORD*)(a1 + 1040) = sub_1401280F0(
		(float)(255 - *(_DWORD*)(a1 + 1048)) * 1.4078431,
		(float)*(int*)(a1 + 1052) * 0.0039215689,
		(float)(255 - *(_DWORD*)(a1 + 1056)) * 0.0039215689);
	v18 = *(_QWORD*)(a1 + 1288);
	*(_BYTE*)(a1 + 1043) = 0;
	v19 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v18 + 1040) + 112i64))(*(_QWORD*)(v18 + 1040));
	v20 = (WCHAR*)&unk_1409DD974;
	if (v19)
		v20 = (WCHAR*)v19;
	v21 = *(double*)sub_1407DFD50(v20, 0i64, (_OWORD*)qword_140C7AAC8).m128_u64;
	*(_DWORD*)(a1 + 1040) |= (unsigned __int8)(int)v21 << 24;
	v34 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(
						_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1040) | 0xFF000000), 0),
						(__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v22 = (unsigned int)sub_140141F10(qword_140C63678, &v34);
	v23 = (unsigned int*)(*(_QWORD*)(a1 + 1088) + 712i64);
	if (v23 == (unsigned int*)&v36)
	{
		v24 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v23);
		v24 = qword_140C63678;
		*v23 = v22;
		if (v22 < *(_QWORD*)(v24 + 48))
		{
			v25 = *(_QWORD*)(v24 + 40);
			v26 = 32i64 * (unsigned int)v22;
			v27 = *(_DWORD*)(v26 + v25 + 16);
			if ((unsigned int)(v27 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v26 + v25 + 16) = v27 + 1;
		}
	}
	sub_1401429A0(v24, v22);
	v34 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1040)), 0), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v28 = (unsigned int)sub_140141F10(qword_140C63678, &v34);
	v29 = (unsigned int*)(*(_QWORD*)(a1 + 1104) + 712i64);
	if (v29 == (unsigned int*)&v36)
	{
		v30 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v29);
		v30 = qword_140C63678;
		*v29 = v28;
		if (v28 < *(_QWORD*)(v30 + 48))
		{
			v31 = *(_QWORD*)(v30 + 40);
			v32 = 32i64 * (unsigned int)v28;
			v33 = *(_DWORD*)(v32 + v31 + 16);
			if ((unsigned int)(v33 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v32 + v31 + 16) = v33 + 1;
		}
	}
	sub_1401429A0(v30, v28);
}
// 140127168: variable 'v9' is possibly undefined
// 14012716F: variable 'v10' is possibly undefined
// 140127181: variable 'v7' is possibly undefined
// 140127184: variable 'v8' is possibly undefined
// 14012720E: variable 'v16' is possibly undefined
// 140127215: variable 'v17' is possibly undefined
// 14012721C: variable 'v14' is possibly undefined
// 14012721F: variable 'v15' is possibly undefined
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C7AAC8: using guessed type __int64 qword_140C7AAC8;

