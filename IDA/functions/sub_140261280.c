//----- (0000000140261280) ----------------------------------------------------
__int64 __fastcall sub_140261280(
	__int64 a1,
	_QWORD* a2,
	__int64 a3,
	__int64 a4,
	unsigned int a5,
	unsigned int a6,
	__int64 a7)
{
	__int64 v11; // rax
	__m128 v12; // xmm0
	__m128 v13; // xmm4
	__m128 v14; // xmm2
	__m128 v15; // xmm3
	__m128 v16; // xmm5
	__m128 v17; // xmm3
	__m128 v18; // xmm1
	__m128 v19; // xmm4
	__int64 v20; // rcx
	__m128 v22[4]; // [rsp+40h] [rbp-C8h] BYREF
	__int128 v23[5]; // [rsp+80h] [rbp-88h] BYREF

	if (*(_DWORD*)(a1 + 148) != 7)
	{
		v11 = *(_QWORD*)a1;
		*(_DWORD*)(a1 + 148) = 7;
		(*(void (**)(void))(v11 + 72))();
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 80i64))(a1);
		(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 320i64))(
			qword_140C65670,
			*(_QWORD*)(a1 + 2136),
			1i64);
		v12 = *(__m128*)(a1 + 304);
		v13 = *(__m128*)(a1 + 320);
		v14 = *(__m128*)(a1 + 336);
		v15 = *(__m128*)(a1 + 288);
		v16 = _mm_unpackhi_ps(v15, v12);
		v17 = _mm_unpacklo_ps(v15, v12);
		v18 = _mm_unpacklo_ps(v13, v14);
		v19 = _mm_unpackhi_ps(v13, v14);
		v23[0] = (__int128)_mm_shuffle_ps(v17, v18, 68);
		v23[1] = (__int128)_mm_shuffle_ps(v17, v18, 238);
		v23[2] = (__int128)_mm_shuffle_ps(v16, v19, 68);
		v23[3] = (__int128)_mm_shuffle_ps(v16, v19, 238);
		(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 328i64))(
			qword_140C65670,
			64i64,
			v23);
		sub_14025F0C0((_QWORD*)a1);
		sub_14025E420(a1);
	}
	*(_QWORD*)&v23[0] = *a2;
	*((_QWORD*)&v23[0] + 1) = a1 + 160;
	sub_1401AFB10((__m128**)v23, v22);
	sub_14025F8B0(v20, (__int64)a2, v22);
	if ((*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
		qword_140C65670,
		96i64,
		2i64,
		32i64,
		0))
	{
		sub_14025EAE0((__int64)a2, (__int64)v22);
	}
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2096) + 24i64))(*(_QWORD*)(a1 + 2096));
	if (a7)
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 496i64))(qword_140C65670, a7, 0i64);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, 0i64);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, 0i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, 4i64);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 424i64))(
		qword_140C65670,
		a5 | *(_DWORD*)(a1 + 2408),
		a6 | *(_DWORD*)(a1 + 2412),
		64i64);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int))(*(_QWORD*)qword_140C65670 + 432i64))(
		qword_140C65670,
		0i64,
		0i64,
		5i64,
		2);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 2128),
		0i64);
	sub_140260520(a1);
	if (a7)
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 496i64))(qword_140C65670, 0i64, 0i64);
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2096) + 32i64))(*(_QWORD*)(a1 + 2096));
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 496i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 2096),
		0i64);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 448i64))(
		qword_140C65670,
		*(unsigned int*)(a1 + 2392));
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, 2i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, 7i64);
	(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 424i64))(
		qword_140C65670,
		64i64,
		64i64,
		a6 | 0x40);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD*)qword_140C65670 + 432i64))(
		qword_140C65670,
		0i64,
		0i64,
		0i64,
		2);
	sub_14025ECC0(a1, a3, 1);
	sub_140260520(a1);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int))(*(_QWORD*)qword_140C65670 + 432i64))(
		qword_140C65670,
		0i64,
		0i64,
		5i64,
		2);
	sub_14025ECC0(a1, a4, 0);
	sub_140260520(a1);
	return (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 496i64))(
		qword_140C65670,
		0i64,
		0i64);
}
// 1402613E6: variable 'v20' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;
// 140261280: using guessed type __m128 var_C8[4];

