#include "../winhttp.h"

//----- (0000000140181280) ----------------------------------------------------
__int64 __fastcall sub_140181280(__int64 a1)
{
	unsigned int v1; // r13d
	unsigned int v2; // r12d
	int v3; // r14d
	unsigned int v5; // esi
	unsigned int v6; // edi
	unsigned int v7; // r15d
	unsigned int v8; // r14d
	__m128i v9; // xmm2
	__m128 v10; // xmm6
	__m128 v11; // xmm7
	__int64 v12; // rdx
	int v13; // ecx
	int v14; // edx
	int v15; // eax
	_QWORD* v16; // rcx
	__m128i v17; // xmm2
	__m128 v18; // xmm6
	__m128 v19; // xmm7
	__int64 v20; // rdx
	int v21; // ecx
	int v22; // eax
	_QWORD* v23; // rcx
	__int64 v25; // [rsp+38h] [rbp-59h] BYREF
	__int64 v26; // [rsp+40h] [rbp-51h]
	__m128 v27[2]; // [rsp+48h] [rbp-49h] BYREF
	__m128 v28; // [rsp+68h] [rbp-29h] BYREF
	__m128 v29; // [rsp+78h] [rbp-19h]
	__m128 v30; // [rsp+88h] [rbp-9h] BYREF
	__m128 v31; // [rsp+98h] [rbp+7h]

	v1 = *(_DWORD*)(a1 + 720);
	v2 = *(_DWORD*)(a1 + 716);
	v3 = *(_DWORD*)(a1 + 1100);
	v5 = *(_DWORD*)(a1 + 724) - v3 - v2;
	v6 = *(_DWORD*)(a1 + 724) - *(_DWORD*)(a1 + 1104) - v3;
	v7 = *(_DWORD*)(a1 + 728);
	v8 = *(_DWORD*)(a1 + 724) - v2;
	if (!(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1184) + 48i64))(*(_QWORD*)(a1 + 1184))
		|| !(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1088) + 48i64))(*(_QWORD*)(a1 + 1088)))
	{
		sub_1401810E0(a1);
	}
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 2i64);
	v9 = _mm_cvtsi32_si128(0);
	v10 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v6), v9),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), v9)));
	v27[1] = v10;
	v11 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v2), v9),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v1), v9)));
	v27[0] = v11;
	(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 104i64))(qword_140C65680, v27);
	if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1184) + 48i64))(*(_QWORD*)(a1 + 1184)))
	{
		v29 = v10;
		v12 = *(_QWORD*)(a1 + 1184);
		v28 = v11;
		v31 = _mm_cvtepi32_ps((__m128i)xmmword_140B7A430);
		v27[0] = (__m128)xmmword_140B7B240;
		v30 = _mm_cvtepi32_ps((__m128i)0i64);
		(*(void(__fastcall**)(__int64, __int64, __m128*, __m128*, __m128*, int))(*(_QWORD*)qword_140C65680 + 240i64))(
			qword_140C65680,
			v12,
			&v30,
			&v28,
			v27,
			1);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		v13 = *(_DWORD*)(a1 + 1164);
		v14 = *(_DWORD*)(a1 + 1160);
		v27[0] = (__m128)xmmword_140B7B240;
		LODWORD(v25) = v14 - 2;
		HIDWORD(v25) = v13 - 2;
		LODWORD(v26) = v14 + 2;
		v15 = v13 + 2;
		v16 = *(_QWORD**)(a1 + 1112);
		HIDWORD(v26) = v15;
		if (v16)
			sub_140103CF0(
				v16,
				(unsigned int*)&v25,
				v27,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1120)) * *(float*)(a1 + 1124)));
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 2i64);
	v17 = _mm_cvtsi32_si128(0);
	v18 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v8), v17),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v7 - v1), v17)));
	v19 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), v17), (__m128i)0i64));
	v31 = v18;
	v30 = v19;
	(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 104i64))(qword_140C65680, &v30);
	if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1088) + 48i64))(*(_QWORD*)(a1 + 1088)))
	{
		v20 = *(_QWORD*)(a1 + 1088);
		v31 = v18;
		v30 = v19;
		v27[0] = (__m128)xmmword_140B7B240;
		v29 = _mm_cvtepi32_ps((__m128i)xmmword_140B7A420);
		v28 = _mm_cvtepi32_ps((__m128i)0i64);
		(*(void(__fastcall**)(__int64, __int64, __m128*, __m128*, __m128*, int, __int64, __int64))(*(_QWORD*)qword_140C65680
			+ 240i64))(
				qword_140C65680,
				v20,
				&v28,
				&v30,
				v27,
				1,
				v25,
				v26);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		v21 = *(_DWORD*)(a1 + 1080);
		LODWORD(v25) = v5;
		v27[0] = (__m128)xmmword_140B7B240;
		LODWORD(v26) = v8;
		HIDWORD(v25) = v21 - 2;
		v22 = v21 + 2;
		v23 = *(_QWORD**)(a1 + 1032);
		HIDWORD(v26) = v22;
		if (v23)
			sub_140103CF0(
				v23,
				(unsigned int*)&v25,
				v27,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1040)) * *(float*)(a1 + 1044)));
	}
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
}
// 140B7A420: using guessed type __int128 xmmword_140B7A420;
// 140B7A430: using guessed type __int128 xmmword_140B7A430;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63664: using guessed type int dword_140C63664;
// 140C65680: using guessed type __int64 qword_140C65680;

