//----- (0000000140364CC0) ----------------------------------------------------
__int64 __fastcall sub_140364CC0(__int64 a1)
{
	int v2; // xmm0_4
	__int64 v3; // rax
	__m128 v4; // xmm0
	__m128 v5; // xmm2
	__m128 v6; // xmm3
	__m128 v7; // xmm5
	__m128 v8; // xmm3
	__m128 v9; // xmm1
	__m128 v10; // xmm4
	__m128 v11; // xmm1
	__int128 v13[4]; // [rsp+30h] [rbp-48h] BYREF
	int v14; // [rsp+80h] [rbp+8h] BYREF

	if (*(_DWORD*)(a1 + 4304))
	{
		if ((*(unsigned int(__fastcall**)(_QWORD, int*, _QWORD))(**(_QWORD**)(a1 + 4296) + 40i64))(
			*(_QWORD*)(a1 + 4296),
			&v14,
			0i64))
		{
			return 0i64;
		}
		if (v14)
			v2 = 1065353216;
		else
			v2 = 0;
		*(_DWORD*)(a1 + 4292) = v2;
		*(_DWORD*)(a1 + 4304) = 0;
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 88i64),
		0i64);
	(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 320i64))(
		qword_140C65670,
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 80i64),
		1i64);
	v3 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 224i64))(
		qword_140C65670,
		16i64,
		1i64);
	if (v3)
	{
		*(_QWORD*)v3 = 0i64;
		*(_QWORD*)(v3 + 8) = 0i64;
		*(_DWORD*)v3 = *(_DWORD*)(a1 + 912);
		*(_DWORD*)(v3 + 4) = *(_DWORD*)(a1 + 916);
		*(_DWORD*)(v3 + 8) = *(_DWORD*)(a1 + 920);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 232i64))(qword_140C65670);
		v4 = *(__m128*)(a1 + 1488);
		v5 = *(__m128*)(a1 + 1520);
		v6 = *(__m128*)(a1 + 1472);
		v7 = _mm_unpackhi_ps(v6, v4);
		v8 = _mm_unpacklo_ps(v6, v4);
		v9 = *(__m128*)(a1 + 1504);
		v10 = _mm_unpackhi_ps(v9, v5);
		v11 = _mm_unpacklo_ps(v9, v5);
		v13[0] = (__int128)_mm_shuffle_ps(v8, v11, 68);
		v13[1] = (__int128)_mm_shuffle_ps(v8, v11, 238);
		v13[2] = (__int128)_mm_shuffle_ps(v7, v10, 68);
		v13[3] = (__int128)_mm_shuffle_ps(v7, v10, 238);
		(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 328i64))(
			qword_140C65670,
			64i64,
			v13);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 4296) + 24i64))(*(_QWORD*)(a1 + 4296));
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int))(*(_QWORD*)qword_140C65670 + 648i64))(
			qword_140C65670,
			0i64,
			0i64,
			1i64,
			1);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 4296) + 32i64))(*(_QWORD*)(a1 + 4296));
		*(_DWORD*)(a1 + 4304) = 1;
	}
	return 0i64;
}
// 140C65670: using guessed type __int64 qword_140C65670;

