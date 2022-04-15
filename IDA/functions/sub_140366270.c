//----- (0000000140366270) ----------------------------------------------------
__int64 __fastcall sub_140366270(__int64 a1)
{
	__int64 v2; // rcx
	__int64 i; // rbx
	__int64 v4; // rsi
	_QWORD* v5; // rax
	__int64 v6; // rcx
	_QWORD* v7; // rbx
	__int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	__m128 v11; // xmm2
	__m128 v12; // xmm4
	__m128 v13; // xmm6
	__m128 v14; // xmm3
	int v15; // eax
	bool v16; // zf
	__int64 v17; // rax
	__int64 v18; // r9
	__int128 v20; // [rsp+30h] [rbp-48h] BYREF
	int v21; // [rsp+44h] [rbp-34h]

	v2 = *(_QWORD*)(a1 + 6208);
	LODWORD(v20) = -1;
	(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v2 + 32i64))(v2, &v20);
	if (*(_QWORD*)(a1 + 5360))
	{
		v20 = 0i64;
		(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
			qword_140C65670,
			1i64,
			&v20);
		for (i = *(_QWORD*)(a1 + 5360); i; i = *(_QWORD*)(i + 912))
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 96i64))(qword_140C65688, i + 32);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 192i64))(qword_140C65688);
		v5 = (_QWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 208i64))(qword_140C65688);
		LODWORD(v20) = 1;
		v6 = *v5;
		v21 = 0;
		*((_QWORD*)&v20 + 1) = v6;
		v7 = v5;
		(*(void(__fastcall**)(__int64, __int128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
			qword_140C65670,
			&v20,
			&unk_140C3FE88,
			&unk_140C3FE88,
			&unk_140C3FE88);
		v20 = 0i64;
		(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
			qword_140C65670,
			1i64,
			&v20);
		v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 216i64))(qword_140C65688);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			0i64,
			*(_QWORD*)(v4 + 72),
			0i64,
			v8);
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			1i64,
			*(_QWORD*)(v4 + 40));
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			2i64,
			v7[1]);
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			3i64,
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 512i64));
		v9 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
			qword_140C65670,
			224i64,
			0i64,
			0i64,
			0i64);
		if (v9)
		{
			v10 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 512i64) + 24i64))(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 512i64));
			v11 = (__m128)0x3F800000u;
			v12 = (__m128)0x3F800000u;
			v13 = (__m128)0x3F800000u;
			v12.m128_f32[0] = 1.0 / (float)*(int*)(v4 + 88);
			v13.m128_f32[0] = 1.0 / (float)*(int*)(v10 + 8);
			v11.m128_f32[0] = 1.0 / (float)*(int*)(v4 + 92);
			v14 = v13;
			v13.m128_f32[0] = v13.m128_f32[0] * 1.5;
			v14.m128_f32[0] = v14.m128_f32[0] * 0.5;
			*(__m128*)v9 = _mm_unpacklo_ps(_mm_unpacklo_ps(v12, (__m128)0i64), _mm_unpacklo_ps(v11, (__m128)0i64));
			*(_OWORD*)(v9 + 16) = *(_OWORD*)(a1 + 320);
			*(__m128*)(v9 + 32) = _mm_unpacklo_ps(
				_mm_unpacklo_ps(v14, (__m128)0x3F800000u),
				_mm_unpacklo_ps(v13, (__m128)0x3F800000u));
			*(_OWORD*)(v9 + 80) = *(_OWORD*)(a1 + 352);
			*(_OWORD*)(v9 + 96) = *(_OWORD*)(a1 + 368);
			*(_OWORD*)(v9 + 112) = *(_OWORD*)(a1 + 384);
			*(_OWORD*)(v9 + 128) = *(_OWORD*)(a1 + 400);
			*(_OWORD*)(v9 + 144) = *(_OWORD*)(a1 + 416);
			*(_OWORD*)(v9 + 160) = *(_OWORD*)(a1 + 432);
			*(_OWORD*)(v9 + 176) = *(_OWORD*)(a1 + 448);
			*(_OWORD*)(v9 + 192) = *(_OWORD*)(a1 + 464);
			*(_OWORD*)(v9 + 48) = *(_OWORD*)(a1 + 336);
			*(_OWORD*)(v9 + 64) = *(_OWORD*)(a1 + 976);
			*(_OWORD*)(v9 + 208) = *(_OWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 248i64))(qword_140C65688);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
		}
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
			qword_140C65670,
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 520i64),
			0i64);
		v15 = dword_140C40550;
		if (*(_DWORD*)qword_140C63750 < dword_140C40550)
			v15 = *(_DWORD*)qword_140C63750;
		v16 = byte_140C40560[v15] == 0;
		v17 = *(_QWORD*)qword_140C65670;
		if (v16)
		{
			(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(v17 + 424))(qword_140C65670, 128i64, 128i64, 128i64);
			v18 = 1i64;
		}
		else
		{
			(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD))(v17 + 424))(qword_140C65670, 128i64, 128i64, 0i64);
			v18 = 0i64;
		}
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int))(*(_QWORD*)qword_140C65670 + 432i64))(
			qword_140C65670,
			0i64,
			0i64,
			v18,
			2);
		(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 664i64))(
			qword_140C65670,
			0xFFFFFFFFi64,
			*(_QWORD*)qword_140C65670,
			v4 + 88,
			v4 + 96,
			v4 + 96);
	}
	return 0i64;
}
// 140C40550: using guessed type int dword_140C40550;
// 140C40560: using guessed type _BYTE byte_140C40560[32];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65688: using guessed type __int64 qword_140C65688;

