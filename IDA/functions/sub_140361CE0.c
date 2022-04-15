//----- (0000000140361CE0) ----------------------------------------------------
__int64 __fastcall sub_140361CE0(__int64 a1)
{
	__m128 v2; // xmm0
	float v3; // xmm8_4
	float v4; // xmm9_4
	float v5; // xmm7_4
	__m128 v6; // xmm1
	float v7; // xmm8_4
	__m128 v8; // xmm2
	__m128 v9; // xmm1
	__m128 v10; // xmm6
	__m128* v11; // r8
	__m128 v12; // xmm0
	__m128 v13; // xmm1
	__m128 v14; // xmm3
	__m128 v15; // xmm5
	__m128 v16; // xmm3
	__m128 v17; // xmm2
	__m128 v18; // xmm4
	_OWORD* v19; // rax
	__m128* v20; // rbx
	__m128 v21; // xmm2
	__m128 v22; // xmm1
	__m128* v23; // rax
	__int128 v25[4]; // [rsp+50h] [rbp-128h] BYREF
	__m128 v26; // [rsp+90h] [rbp-E8h] BYREF
	__m128 v27; // [rsp+A0h] [rbp-D8h]
	__m128 v28; // [rsp+B0h] [rbp-C8h]
	__m128 v29; // [rsp+C0h] [rbp-B8h]
	__m128* v30[10]; // [rsp+D0h] [rbp-A8h] BYREF

	(*(void (**)(void))(*(_QWORD*)qword_140C65670 + 296i64))();
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 80i64))(qword_140C65688);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD*)qword_140C65670 + 432i64))(
		qword_140C65670,
		0i64,
		0i64,
		0i64,
		2);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 344i64))(qword_140C65670, 0i64);
	(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
		qword_140C65670,
		1i64,
		1i64,
		0i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, 7i64);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 408i64))(qword_140C65670, 0i64);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, 0i64);
	v2 = (__m128)0x3E800000u;
	v3 = *(float*)(a1 + 136) * 0.25;
	v4 = v3 * 0.25;
	v5 = v3 * v3;
	if ((*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670 + 256i64))(
		qword_140C65670,
		128i64,
		0i64,
		0i64,
		0))
	{
		v2.m128_f32[0] = 0.99000001;
		v6 = _mm_mul_ps((__m128)xmmword_140C78410, _mm_shuffle_ps(v2, v2, 0));
		v25[0] = (__int128)v6;
		v6.m128_f32[0] = _mm_shuffle_ps((__m128)xmmword_140B7ACF0, (__m128)xmmword_140B7ACF0, 85).m128_f32[0];
		v25[1] = (__int128)_mm_mul_ps((__m128)xmmword_140C78420, _mm_shuffle_ps(v6, v6, 0));
		v25[3] = xmmword_140C78440;
		v25[2] = (__int128)_mm_mul_ps(
			(__m128)xmmword_140C78430,
			_mm_shuffle_ps((__m128)0x3F7D70A4u, (__m128)0x3F7D70A4u, 0));
		v30[0] = (__m128*)(a1 + 960);
		v30[1] = (__m128*)v25;
		sub_1401AFB10(v30, &v26);
		v7 = v3 - v4;
		v8 = _mm_unpacklo_ps(v26, v27);
		v9 = _mm_unpacklo_ps(v28, v29);
		v10 = _mm_shuffle_ps(_mm_unpackhi_ps(v26, v27), _mm_unpackhi_ps(v28, v29), 68);
		*v11 = _mm_shuffle_ps(v8, v9, 68);
		v11[1] = _mm_shuffle_ps(v8, v9, 238);
		v11[2] = v10;
		v12 = *(__m128*)(a1 + 1296);
		v13 = *(__m128*)(a1 + 1328);
		v14 = *(__m128*)(a1 + 1280);
		v15 = _mm_unpackhi_ps(v14, v12);
		v16 = _mm_unpacklo_ps(v14, v12);
		v17 = _mm_unpacklo_ps(*(__m128*)(a1 + 1312), v13);
		v18 = _mm_unpackhi_ps(*(__m128*)(a1 + 1312), v13);
		v11[3] = _mm_shuffle_ps(v16, v17, 68);
		v11[4] = _mm_shuffle_ps(v16, v17, 238);
		v11[5] = _mm_shuffle_ps(v15, v18, 68);
		v11[6] = _mm_shuffle_ps(v15, v18, 238);
		v11[7].m128_f32[0] = 1.0 / v7;
		v11[7].m128_f32[1] = -(float)((float)(1.0 / v7) * v4);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
	}
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 320i64))(
		qword_140C65670,
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 224i64),
		0i64);
	v19 = (_OWORD*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
		qword_140C65670,
		16i64,
		0i64);
	if (v19)
	{
		*v19 = xmmword_140B7A660;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 232i64),
		0i64);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 312i64))(
		qword_140C65670,
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 240i64));
	(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 304i64))(
		qword_140C65670,
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 120i64),
		4i64);
	v20 = *(__m128**)(a1 + 2336);
	if (!v20)
		return 0i64;
	do
	{
		if (v5 <= v20[3].m128_f32[0])
			break;
		v21 = _mm_sub_ps(_mm_max_ps(v20[12], _mm_min_ps(*(__m128*)(a1 + 912), v20[13])), *(__m128*)(a1 + 912));
		v22 = _mm_mul_ps(v21, v21);
		if ((float)((float)(v22.m128_f32[0] + _mm_shuffle_ps(v22, v22, 85).m128_f32[0])
			+ _mm_shuffle_ps(v22, v22, 170).m128_f32[0]) < v5
			&& (unsigned int)sub_14035BDF0((__m128*)a1, v20 + 12))
		{
			v23 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD))(*(_QWORD*)qword_140C65670
				+ 256i64))(
					qword_140C65670,
					16i64,
					1i64,
					8i64,
					0);
			if (v23)
			{
				*v23 = _mm_shuffle_ps(v20[12], v20[12], 136);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
			}
			(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 304i64))(
				qword_140C65670,
				*(_QWORD*)(v20[10].m128_u64[0] + 32),
				4i64);
			(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, _DWORD, int, _DWORD, int))(*(_QWORD*)qword_140C65670
				+ 656i64))(
					qword_140C65670,
					3i64,
					0i64,
					3072i64,
					0,
					545,
					0,
					1);
		}
		v20 = (__m128*)v20[89].m128_u64[0];
	} while (v20);
	return 0i64;
}
// 140361F10: variable 'v11' is possibly undefined
// 140B7A660: using guessed type __int128 xmmword_140B7A660;
// 140B7ACF0: using guessed type __int128 xmmword_140B7ACF0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65688: using guessed type __int64 qword_140C65688;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;

