//----- (0000000140128750) ----------------------------------------------------
__int64 __fastcall sub_140128750(__int64 a1)
{
	int v1; // edx
	int v2; // eax
	unsigned int v3; // edi
	unsigned int v5; // r14d
	unsigned int v6; // esi
	signed int v7; // r15d
	__int64* v8; // rcx
	__int64 v9; // rax
	unsigned int v10; // r13d
	unsigned int v11; // r12d
	__m128i v12; // xmm2
	__int64 v13; // rdx
	__m128 v14; // xmm6
	__int64 v15; // rdx
	_QWORD* v16; // rcx
	int v17; // eax
	_QWORD* v18; // rcx
	int v19; // eax
	_QWORD* v20; // rcx
	__int64 result; // rax
	unsigned int v22; // [rsp+38h] [rbp-59h] BYREF
	unsigned int v23; // [rsp+3Ch] [rbp-55h]
	unsigned int v24; // [rsp+40h] [rbp-51h]
	int v25; // [rsp+44h] [rbp-4Dh]
	__m128 v26; // [rsp+48h] [rbp-49h] BYREF
	__m128 v27; // [rsp+58h] [rbp-39h] BYREF
	__m128 v28; // [rsp+68h] [rbp-29h]
	__m128 v29; // [rsp+78h] [rbp-19h] BYREF
	__m128 v30; // [rsp+88h] [rbp-9h]
	unsigned int v31; // [rsp+F8h] [rbp+67h]
	unsigned int v32; // [rsp+100h] [rbp+6Fh]

	v1 = *(_DWORD*)(a1 + 716);
	v2 = *(_DWORD*)(a1 + 720);
	v3 = v1 + 4;
	v5 = v1 + 264;
	v6 = v2 + 4;
	v7 = v2 + 4;
	v31 = v2 + 260;
	v8 = *(__int64**)(a1 + 1064);
	v32 = v2 + 260;
	v9 = *v8;
	v10 = v1 + 260;
	v11 = v1 + 280;
	v26 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)(v1 + 264)), (__m128)0i64),
		_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v7), (__m128)0i64));
	if (!(*(unsigned int(__fastcall**)(__int64*))(v9 + 48))(v8)
		|| !(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1072) + 48i64))(*(_QWORD*)(a1 + 1072)))
	{
		sub_140128250(a1);
	}
	v12 = _mm_cvtsi32_si128(0);
	v13 = *(_QWORD*)(a1 + 1064);
	v28 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v10), v12),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v31), v12)));
	v26 = (__m128)xmmword_140B7B240;
	v30 = _mm_cvtepi32_ps((__m128i)xmmword_140B7A410);
	v27 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v3), v12),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v6), v12)));
	v14 = _mm_cvtepi32_ps((__m128i)0i64);
	v29 = v14;
	(*(void(__fastcall**)(__int64, __int64, __m128*, __m128*, __m128*, int))(*(_QWORD*)qword_140C65680 + 240i64))(
		qword_140C65680,
		v13,
		&v29,
		&v27,
		&v26,
		1);
	v15 = *(_QWORD*)(a1 + 1072);
	v27 = v14;
	v30 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), v12),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v32), v12)));
	v26 = (__m128)xmmword_140B7B240;
	v29 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), v12),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), v12)));
	v28 = _mm_cvtepi32_ps((__m128i)xmmword_140B7A400);
	(*(void(__fastcall**)(__int64, __int64, __m128*, __m128*, __m128*, int))(*(_QWORD*)qword_140C65680 + 240i64))(
		qword_140C65680,
		v15,
		&v27,
		&v29,
		&v26,
		1);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
	v22 = v3 + *(_DWORD*)(a1 + 1052);
	v24 = v22 + 1;
	v23 = v6 - 2;
	v25 = v31 + 2;
	v16 = *(_QWORD**)(a1 + 1120);
	v26 = (__m128)xmmword_140B7B240;
	if (v16)
		sub_140103CF0(
			v16,
			&v22,
			&v26,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1128)) * *(float*)(a1 + 1132)));
	v17 = *(_DWORD*)(a1 + 1056);
	v18 = *(_QWORD**)(a1 + 1120);
	v26 = (__m128)xmmword_140B7B240;
	v23 = v6 + v17;
	v25 = v6 + v17 + 1;
	v22 = v3 - 2;
	v24 = v10 + 2;
	if (v18)
		sub_140103CF0(
			v18,
			&v22,
			&v26,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1128)) * *(float*)(a1 + 1132)));
	v19 = *(_DWORD*)(a1 + 1048);
	v20 = *(_QWORD**)(a1 + 1120);
	v26 = (__m128)xmmword_140B7B240;
	v23 = v7 + v19;
	v25 = v7 + v19 + 1;
	v22 = v5 - 2;
	result = v11 + 2;
	v24 = v11 + 2;
	if (v20)
		return sub_140103CF0(
			v20,
			&v22,
			&v26,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1128)) * *(float*)(a1 + 1132)));
	return result;
}
// 140B7A400: using guessed type __int128 xmmword_140B7A400;
// 140B7A410: using guessed type __int128 xmmword_140B7A410;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63664: using guessed type int dword_140C63664;
// 140C65680: using guessed type __int64 qword_140C65680;

