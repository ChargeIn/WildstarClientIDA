#include "../winhttp.h"

//----- (0000000140255F70) ----------------------------------------------------
__int64 __fastcall sub_140255F70(__int64 a1, __int64 a2, unsigned int a3)
{
	unsigned __int64 v3; // rax
	__m128 v7; // xmm6
	__int64 v8; // rax
	__m128 v9; // xmm3
	__int64 v10; // r8
	__int64 v11; // r8
	int v12; // eax
	__int64 v13; // r8
	float v14; // xmm1_4
	__int64 v15; // r8
	__m128 v17; // [rsp+40h] [rbp-58h] BYREF
	int v18; // [rsp+54h] [rbp-44h]
	__int64 v19; // [rsp+60h] [rbp-38h] BYREF
	float v20; // [rsp+70h] [rbp-28h]
	float v21; // [rsp+74h] [rbp-24h]

	v3 = *(_QWORD*)(a1 + 1648);
	v17.m128_i32[0] = 1;
	v17.m128_u64[1] = v3;
	v18 = 0;
	(*(void(__fastcall**)(__int64, __m128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v17,
		&unk_140C3FE88,
		&unk_140C3FE88,
		&unk_140C3FE88);
	v17.m128_u64[1] = *(_QWORD*)(a1 + 1720);
	v17.m128_i32[0] = 1;
	v18 = 0;
	(*(void(__fastcall**)(__int64, __m128*, _QWORD))(*(_QWORD*)qword_140C65670 + 528i64))(qword_140C65670, &v17, 0i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, a1 + 2328);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, 15i64);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 408i64))(qword_140C65670, 0i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, 7i64);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 424i64))(
		qword_140C65670,
		a3,
		a3,
		a3);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD*)qword_140C65670 + 432i64))(
		qword_140C65670,
		0i64,
		0i64,
		0i64,
		2);
	(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 416i64))(qword_140C65670, 1i64, 0i64);
	v7 = (__m128)0x3F800000u;
	v17 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(
						_mm_shuffle_epi32(_mm_cvtsi32_si128(dword_140B605AC[4 * *(int*)(a1 + 40)]), 0),
						(__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	(*(void(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		&v17);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		0i64,
		*(_QWORD*)(a1 + 1672),
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		1i64,
		*(_QWORD*)(a1 + 1680),
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		2i64,
		*(_QWORD*)(a1 + 1688),
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		3i64,
		*(_QWORD*)(a1 + 1712),
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		4i64,
		a2,
		0i64,
		*(_QWORD*)(a1 + 2056));
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		5i64,
		*(_QWORD*)(a1 + 1776),
		0i64,
		0i64);
	v8 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
		qword_140C65670,
		64i64,
		0i64,
		0i64,
		0);
	if (v8)
	{
		v9 = (__m128)0x3F800000u;
		v9.m128_f32[0] = 1.0 / (float)*(int*)(a1 + 1736);
		v7.m128_f32[0] = 1.0 / (float)*(int*)(a1 + 1740);
		*(__m128*)v8 = _mm_unpacklo_ps(_mm_unpacklo_ps(v9, (__m128)0i64), _mm_unpacklo_ps(v7, (__m128)0i64));
		*(_OWORD*)(v8 + 16) = *(_OWORD*)(a1 + 1856);
		*(_OWORD*)(v8 + 32) = *(_OWORD*)(a1 + 592);
		*(_OWORD*)(v8 + 48) = 0i64;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 2224),
		(unsigned int)dword_140B605A8[4 * *(int*)(a1 + 40)]);
	(*(void(__fastcall**)(__int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 664i64))(
		qword_140C65670,
		0xFFFFFFFFi64,
		v10,
		a1 + 1736,
		a1 + 1744,
		0i64);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 632i64))(qword_140C65670, 3i64);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		0i64,
		*(_QWORD*)(a1 + 1648),
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 416i64))(qword_140C65670, 0i64, 0i64);
	(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 2104),
		1i64);
	(*(void(__fastcall**)(__int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 664i64))(
		qword_140C65670,
		0xFFFFFFFFi64,
		v11,
		a1 + 1736,
		a1 + 1744,
		0i64);
	v12 = dword_140C40470;
	if (*(_DWORD*)qword_140C63750 < dword_140C40470)
		v12 = *(_DWORD*)qword_140C63750;
	if (byte_140C40480[v12])
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 56i64))(qword_140C65680);
		v13 = *(int*)(a1 + 40);
		v14 = (float)*(int*)(a1 + 2316);
		v20 = (float)*(int*)(a1 + 2312);
		v17 = (__m128)xmmword_140B7B240;
		v15 = qword_140B605A0[2 * v13];
		v21 = v14;
		v19 = 0i64;
		(*(void(__fastcall**)(__int64, _QWORD, __int64, __int64, __int64*, int, __m128*, int))(*(_QWORD*)qword_140C65680
			+ 264i64))(
				qword_140C65680,
				*(_QWORD*)(a1 + 2088),
				v15,
				-1i64,
				&v19,
				289,
				&v17,
				2);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 296i64))(qword_140C65680);
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 504i64))(qword_140C65670);
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 512i64))(qword_140C65670);
}
// 1402562C8: variable 'v10' is possibly undefined
// 140256387: variable 'v11' is possibly undefined
// 140B605A0: using guessed type __int64 qword_140B605A0[];
// 140B605A8: using guessed type int dword_140B605A8[];
// 140B605AC: using guessed type int dword_140B605AC[];
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C40470: using guessed type int dword_140C40470;
// 140C40480: using guessed type _BYTE[32];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140255F70: using guessed type __m128 var_58;

