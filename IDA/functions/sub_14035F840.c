#include "../winhttp.h"

//----- (000000014035F840) ----------------------------------------------------
__int64 __fastcall sub_14035F840(__int64 a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	_OWORD* v4; // rax
	_OWORD* v5; // rsi
	__m128 v6; // xmm0
	__m128 v7; // xmm1
	__m128 v8; // xmm3
	__m128 v9; // xmm5
	__m128 v10; // xmm3
	__m128 v11; // xmm2
	__m128 v12; // xmm4
	__m128 v13; // xmm2

	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 72i64))(qword_140C65688);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 80i64))(qword_140C65688);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, 7i64);
	(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 464i64))(qword_140C65670, 1i64, 5i64);
	v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 192i64))(qword_140C65688);
	v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 216i64))(qword_140C65688);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		0i64,
		*(_QWORD*)(v2 + 72),
		0i64,
		v3);
	v4 = (_OWORD*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670
		+ 272i64))(
			qword_140C65670,
			160i64,
			0i64,
			0i64,
			0);
	v5 = v4;
	if (v4)
	{
		v4[1] = *(_OWORD*)(a1 + 592);
		v4[2] = *(_OWORD*)(a1 + 608);
		v4[3] = *(_OWORD*)(a1 + 624);
		*v4 = *(_OWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 232i64))(qword_140C65688);
		v5[4] = *(_OWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 240i64))(qword_140C65688);
		v6 = *(__m128*)(a1 + 1104);
		v7 = *(__m128*)(a1 + 1136);
		v8 = *(__m128*)(a1 + 1088);
		v9 = _mm_unpackhi_ps(v8, v6);
		v10 = _mm_unpacklo_ps(v8, v6);
		v11 = *(__m128*)(a1 + 1120);
		v12 = _mm_unpackhi_ps(v11, v7);
		v13 = _mm_unpacklo_ps(v11, v7);
		v5[5] = _mm_shuffle_ps(v10, v13, 68);
		v5[6] = _mm_shuffle_ps(v10, v13, 238);
		v5[7] = _mm_shuffle_ps(v9, v12, 68);
		v5[8] = _mm_shuffle_ps(v9, v12, 238);
		v5[9] = *(_OWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 248i64))(qword_140C65688);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 248i64),
		((*(_DWORD*)(a1 + 132) >> 25) & 1)
		+ 2
		* (((*(_DWORD*)(a1 + 132) >> 2) & 1)
			+ 2 * (((*(_DWORD*)(a1 + 132) >> 21) & 1) + 2 * (unsigned int)(*(_DWORD*)(a1 + 1608) != 0))));
	(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 664i64))(
		qword_140C65670,
		0xFFFFFFFFi64,
		*(_QWORD*)qword_140C65670,
		v2 + 88,
		v2 + 96,
		0i64);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	return 0i64;
}
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65688: using guessed type __int64 qword_140C65688;

