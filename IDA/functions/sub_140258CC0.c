//----- (0000000140258CC0) ----------------------------------------------------
__int64 __fastcall sub_140258CC0(__int64 a1, __int64 a2, __int64 a3)
{
	int v6; // ecx
	int v7; // eax
	int v8; // eax
	int v9; // eax
	__int64 v10; // r8
	__int64 v11; // rdx
	int v12; // eax
	__int32 v13; // xmm0_4
	__int64 v14; // rax
	__m128 v16; // [rsp+30h] [rbp-40h] BYREF
	__int64 v17; // [rsp+40h] [rbp-30h]
	__int64 v18[3]; // [rsp+50h] [rbp-20h] BYREF

	v16.m128_u64[1] = *(_QWORD*)(a2 + 8);
	v16.m128_i32[0] = 1;
	HIDWORD(v17) = 0;
	(*(void(__fastcall**)(__int64, __m128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v16,
		&unk_140C3FE88,
		&unk_140C3FE88,
		&unk_140C3FE88);
	v6 = *(_DWORD*)(a2 + 20);
	v7 = *(int*)(a1 + 1616) >> v6;
	v17 = 0x3F80000000000000i64;
	v16.m128_u64[0] = 0i64;
	if (v7 < 1)
		v7 = 1;
	v16.m128_i32[2] = v7;
	v8 = *(int*)(a1 + 1620) >> v6;
	if (v8 < 1)
		v8 = 1;
	v16.m128_i32[3] = v8;
	v18[0] = 0i64;
	v18[1] = v16.m128_i64[1];
	v18[2] = v17;
	(*(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, v18);
	v9 = dword_140C400D0;
	v10 = 0i64;
	if (*(_DWORD*)qword_140C63750 < dword_140C400D0)
		v9 = *(_DWORD*)qword_140C63750;
	LOBYTE(v10) = *((_BYTE*)&dword_140C400E0 + v9) != 0;
	(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 2264),
		v10);
	v11 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
		qword_140C65670,
		48i64,
		0i64,
		0i64,
		0);
	if (v11)
	{
		v12 = dword_140C40110;
		if (*(_DWORD*)qword_140C63750 < dword_140C40110)
			v12 = *(_DWORD*)qword_140C63750;
		*(_DWORD*)v11 = *((_DWORD*)&xmmword_140C40120 + v12);
		*(_DWORD*)(v11 + 4) = *(_DWORD*)(a3 + 24);
		*(_DWORD*)(v11 + 8) = *(_DWORD*)(a3 + 28);
		*(_DWORD*)(v11 + 12) = *(_DWORD*)(a3 + 32);
		*(_OWORD*)(v11 + 16) = *(_OWORD*)a3;
		v13 = *(_DWORD*)(a3 + 36);
		v16 = _mm_mul_ps(
			_mm_shuffle_ps((__m128) * (unsigned int*)(a3 + 12), (__m128) * (unsigned int*)(a3 + 12), 0),
			*(__m128*)a3);
		v16.m128_i32[3] = v13;
		*(__m128*)(v11 + 32) = v16;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		0i64,
		*(_QWORD*)a2,
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		1i64,
		*(_QWORD*)(a1 + 2048),
		0i64,
		0i64);
	v14 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a3 + 96) + 248i64))(*(_QWORD*)(a3 + 96));
	(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 352i64))(qword_140C65670, 2i64, v14);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
		qword_140C65670,
		*(unsigned int*)(a2 + 24),
		*(unsigned int*)(a2 + 28),
		0i64);
	v16.m128_u64[0] = *(_QWORD*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 8) + 24i64))(*(_QWORD*)(a2 + 8))
		+ 4);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, __m128*, __int64, __int64))(*(_QWORD*)qword_140C65670 + 664i64))(
		qword_140C65670,
		0xFFFFFFFFi64,
		*(_QWORD*)qword_140C65670,
		&v16,
		a1 + 1744,
		a1 + 1744);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	return 1i64;
}
// 140C400D0: using guessed type int dword_140C400D0;
// 140C400E0: using guessed type int dword_140C400E0;
// 140C40110: using guessed type int dword_140C40110;
// 140C40120: using guessed type __int128 xmmword_140C40120;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;

