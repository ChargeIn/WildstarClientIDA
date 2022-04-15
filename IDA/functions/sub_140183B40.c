#include "../winhttp.h"

//----- (0000000140183B40) ----------------------------------------------------
__int64 __fastcall sub_140183B40(__int64 a1)
{
	__m128 v1; // xmm0
	__m128i v3; // xmm1
	__m128i v4; // xmm1
	__int64 v5; // r8
	__int64 result; // rax
	__int128 v7; // [rsp+30h] [rbp-48h] BYREF
	int v8; // [rsp+44h] [rbp-34h]

	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 504i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 512i64))(qword_140C65670);
	*((_QWORD*)&v7 + 1) = *(_QWORD*)(a1 + 1104);
	LODWORD(v7) = 1;
	v8 = 0;
	(*(void(__fastcall**)(__int64, __int128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v7,
		&unk_140C3FE88,
		&unk_140C3FE88,
		&unk_140C3FE88);
	(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
		qword_140C65670,
		&unk_140C3FE88,
		1i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 632i64))(qword_140C65670, 3i64);
	v7 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		&v7);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 696i64))(a1);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
		qword_140C65670,
		4i64,
		5i64,
		0i64);
	*((_QWORD*)&v7 + 1) = *(_QWORD*)(a1 + 1120);
	LODWORD(v7) = 1;
	v8 = 0;
	(*(void(__fastcall**)(__int64, __int128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v7,
		&unk_140C3FE88,
		&unk_140C3FE88,
		&unk_140C3FE88);
	*(double*)v1.m128_u64 = (*(double(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
		qword_140C65670,
		&unk_140C3FE88,
		1i64);
	v7 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		&v7);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		0i64,
		*(_QWORD*)(a1 + 1096),
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		1i64,
		*(_QWORD*)(a1 + 1104),
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		2i64,
		*(_QWORD*)(a1 + 1112),
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 1136),
		0i64);
	v1.m128_f32[0] = sub_1400C9C30(*(_QWORD*)(a1 + 16));
	v3 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(
						_mm_max_ps(
							(__m128)0i64,
							_mm_unpacklo_ps((__m128)xmmword_140B7A4C0, _mm_unpacklo_ps((__m128)0x3F800000u, v1))),
						(__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v4 = _mm_packus_epi16(v3, v3);
	(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 664i64))(
		qword_140C65670,
		(unsigned int)_mm_cvtsi128_si32(_mm_packus_epi16(v4, v4)),
		v5,
		0i64,
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
	*(_DWORD*)(a1 + 1024) = 0;
	return result;
}
// 140183D78: variable 'v1' is possibly undefined
// 140183DAE: variable 'v5' is possibly undefined
// 140B7A4C0: using guessed type __int128 xmmword_140B7A4C0;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C65670: using guessed type __int64 qword_140C65670;

