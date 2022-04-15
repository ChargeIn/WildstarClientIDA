#include "../winhttp.h"

//----- (0000000140257AD0) ----------------------------------------------------
__int64 __fastcall sub_140257AD0(__int64 a1, __int64* a2)
{
	int v4; // ecx
	int v5; // eax
	int v6; // eax
	int v7; // ecx
	__m128i v8; // xmm0
	int v9; // r8d
	int v10; // edx
	int v11; // ecx
	int v12; // r8d
	__m128i v13; // xmm0
	int v14; // edx
	__int64 v15; // rcx
	__int64 v16; // rax
	int v17; // ecx
	__int64 v18; // r8
	__int128 v20; // [rsp+30h] [rbp-29h] BYREF
	__m128 v21; // [rsp+40h] [rbp-19h]
	int v22[8]; // [rsp+50h] [rbp-9h] BYREF
	__int128 v23; // [rsp+70h] [rbp+17h] BYREF
	__m128 v24; // [rsp+80h] [rbp+27h]

	*((_QWORD*)&v20 + 1) = a2[1];
	LODWORD(v20) = 1;
	v21.m128_i32[1] = 0;
	(*(void(__fastcall**)(__int64, __int128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v20,
		&unk_140C3FE88,
		&unk_140C3FE88,
		&unk_140C3FE88);
	v4 = *((_DWORD*)a2 + 5);
	v5 = *(int*)(a1 + 1616) >> v4;
	v21.m128_u64[0] = 0x3F80000000000000i64;
	*(_QWORD*)&v20 = 0i64;
	if (v5 < 1)
		v5 = 1;
	DWORD2(v20) = v5;
	v6 = *(int*)(a1 + 1620) >> v4;
	if (v6 < 1)
		v6 = 1;
	HIDWORD(v20) = v6;
	*(_QWORD*)&v23 = 0i64;
	*((_QWORD*)&v23 + 1) = *((_QWORD*)&v20 + 1);
	v24.m128_u64[0] = v21.m128_u64[0];
	(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, &v23);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		0i64,
		*a2,
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 2232),
		*((unsigned int*)a2 + 8));
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
		qword_140C65670,
		*((unsigned int*)a2 + 6),
		*((unsigned int*)a2 + 7),
		0i64);
	v7 = *((_DWORD*)a2 + 5);
	v8 = _mm_cvtsi32_si128(0);
	v9 = *(int*)(a1 + 1616) >> v7;
	v22[4] = v9;
	v10 = *(int*)(a1 + 1620) >> v7;
	v23 = 0i64;
	if (v9 < (int)qword_140C77768)
		v9 = qword_140C77768;
	v22[5] = v10;
	if (v10 < SHIDWORD(qword_140C77768))
		v10 = HIDWORD(qword_140C77768);
	v11 = *((_DWORD*)a2 + 4);
	v24 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v9), v8),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v10), v8)));
	v12 = *(int*)(a1 + 1616) >> v11;
	v13 = _mm_cvtsi32_si128(0);
	v22[2] = v12;
	v14 = *(int*)(a1 + 1620) >> v11;
	v15 = *a2;
	v20 = 0i64;
	if (v12 < (int)qword_140C77768)
		v12 = qword_140C77768;
	v22[3] = v14;
	if (v14 < SHIDWORD(qword_140C77768))
		v14 = HIDWORD(qword_140C77768);
	v21 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), v13),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v14), v13)));
	v16 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 24i64))(v15);
	v17 = *(_DWORD*)(v16 + 8);
	LODWORD(v16) = *(_DWORD*)(v16 + 4);
	v22[1] = v17;
	v22[0] = v16;
	(*(void(__fastcall**)(__int64, __int64, __int64, int*, __int128*, __int128*))(*(_QWORD*)qword_140C65670 + 664i64))(
		qword_140C65670,
		0xFFFFFFFFi64,
		v18,
		v22,
		&v20,
		&v23);
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
}
// 140257CE1: variable 'v18' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C77768: using guessed type __int64 qword_140C77768;

