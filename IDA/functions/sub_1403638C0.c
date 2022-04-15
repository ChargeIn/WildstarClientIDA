//----- (00000001403638C0) ----------------------------------------------------
__int64 __fastcall sub_1403638C0(__int64 a1)
{
	__int64 result; // rax
	unsigned __int8* v3; // rbp
	_QWORD* v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	__m128 v9; // xmm4
	__m128 v10; // xmm3
	__m128 v11; // xmm2
	__m128 v12; // xmm6
	__m128 v13; // xmm2
	__m128 v14; // xmm1
	__m128 v15; // xmm5
	__m128 v16; // xmm1
	__m128 v17; // xmm0
	__m128 v18; // xmm1
	__m128 v19; // xmm3
	__m128 v20; // xmm5
	__m128 v21; // xmm3
	__m128 v22; // xmm2
	__m128 v23; // xmm4
	__m128 v24; // xmm2
	__m128 v25; // xmm0
	__int64 v26; // rax
	__int64 v27; // rsi
	int v28; // eax
	__m128 v29; // xmm3
	__m128 v30; // xmm4
	__m128 v31; // xmm2
	__m128 v32; // xmm0
	__m128 v33; // xmm1
	__m128 v34; // xmm5
	__m128 v35; // xmm1
	__int64 v36; // rsi
	__m128* v37; // rax
	__m128 v38; // xmm4
	__m128 v39; // xmm3
	__m128 v40; // xmm2
	__m128 v41; // xmm6
	__m128 v42; // xmm2
	__m128 v43; // xmm1
	__m128 v44; // xmm5
	__m128 v45; // xmm1
	__m128 v46; // xmm0
	__m128 v47; // xmm1
	__m128 v48; // xmm3
	__m128 v49; // xmm5
	__m128 v50; // xmm3
	__m128 v51; // xmm2
	__m128 v52; // xmm4
	_QWORD* v53; // rax
	_QWORD* v54; // rsi
	int v55; // eax
	bool v56; // zf
	__int64 v57; // rax
	__int64 v58; // rax
	__int64 v59; // rax
	int v60; // r8d
	int v61; // ecx
	int v62; // r8d
	int v63; // eax

	if (!*(_QWORD*)(a1 + 4800) && !*(_QWORD*)(a1 + 4824))
		return 0i64;
	v3 = (unsigned __int8*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 64i64))(*(_QWORD*)(a1 + 24));
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 80i64))(qword_140C65688);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 296i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, 0i64);
	if ((*(_DWORD*)(a1 + 132) & 0x8000000) != 0)
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 344i64))(qword_140C65670, 0i64);
	v4 = (_QWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 192i64))(qword_140C65688);
	v5 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		10i64,
		*v4,
		0i64,
		0i64);
	v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 192i64))(qword_140C65688);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		11i64,
		*(_QWORD*)(v6 + 48),
		0i64,
		0i64);
	v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 192i64))(qword_140C65688);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		12i64,
		*(_QWORD*)(v7 + 56),
		0i64,
		0i64);
	if (!*(_QWORD*)(a1 + 4800))
		goto LABEL_16;
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 320i64))(
		qword_140C65670,
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 168i64),
		0i64);
	v8 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670 + 256i64))(
		qword_140C65670,
		176i64,
		0i64,
		0i64,
		0);
	if (v8)
	{
		v9 = *(__m128*)(a1 + 976);
		v10 = *(__m128*)(a1 + 1008);
		v11 = *(__m128*)(a1 + 960);
		v12 = _mm_unpackhi_ps(v11, v9);
		v13 = _mm_unpacklo_ps(v11, v9);
		v14 = *(__m128*)(a1 + 992);
		v15 = _mm_unpackhi_ps(v14, v10);
		v16 = _mm_unpacklo_ps(v14, v10);
		*(__m128*)v8 = _mm_shuffle_ps(v13, v16, 68);
		*(__m128*)(v8 + 16) = _mm_shuffle_ps(v13, v16, 238);
		*(__m128*)(v8 + 32) = _mm_shuffle_ps(v12, v15, 68);
		v17 = *(__m128*)(a1 + 1296);
		v18 = *(__m128*)(a1 + 1328);
		v19 = *(__m128*)(a1 + 1280);
		v20 = _mm_unpackhi_ps(v19, v17);
		v21 = _mm_unpacklo_ps(v19, v17);
		v22 = *(__m128*)(a1 + 1312);
		v23 = _mm_unpackhi_ps(v22, v18);
		v24 = _mm_unpacklo_ps(v22, v18);
		*(__m128*)(v8 + 48) = _mm_shuffle_ps(v21, v24, 68);
		*(__m128*)(v8 + 64) = _mm_shuffle_ps(v21, v24, 238);
		*(__m128*)(v8 + 80) = _mm_shuffle_ps(v20, v23, 68);
		*(__m128*)(v8 + 96) = _mm_shuffle_ps(v20, v23, 238);
		v25 = (__m128)0xBF800000;
		v25.m128_f32[0] = -1.0 / *(float*)&dword_140C44018;
		*(__m128*)(v8 + 112) = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 912), (__m128) * (unsigned int*)(a1 + 920)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 916), v25));
		*(_OWORD*)(v8 + 128) = *(_OWORD*)(a1 + 3680);
		*(_DWORD*)(v8 + 144) = *(_DWORD*)(a1 + 3648);
		*(_DWORD*)(v8 + 148) = *(_DWORD*)(a1 + 3652);
		*(_DWORD*)(v8 + 152) = *(_DWORD*)(a1 + 3656);
		*(_DWORD*)(v8 + 156) = *(_DWORD*)(a1 + 4196);
		*(_DWORD*)(v8 + 160) = *(_DWORD*)(a1 + 3664);
		*(_DWORD*)(v8 + 164) = *(_DWORD*)(a1 + 3668);
		*(_DWORD*)(v8 + 168) = *(_DWORD*)(a1 + 3672);
		*(_DWORD*)(v8 + 172) = *(_DWORD*)(a1 + 4192);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
	}
	v26 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
		qword_140C65670,
		160i64,
		0i64,
		0i64,
		0);
	v27 = v26;
	if (v26)
	{
		*(_OWORD*)v26 = *(_OWORD*)(a1 + 3680);
		*(_DWORD*)(v26 + 16) = *(_DWORD*)(a1 + 3648);
		*(_DWORD*)(v26 + 20) = *(_DWORD*)(a1 + 3652);
		*(_DWORD*)(v26 + 24) = *(_DWORD*)(a1 + 3656);
		*(_DWORD*)(v26 + 28) = *(_DWORD*)(a1 + 4196);
		*(_DWORD*)(v26 + 32) = *(_DWORD*)(a1 + 3664);
		*(_DWORD*)(v26 + 36) = *(_DWORD*)(a1 + 3668);
		*(_DWORD*)(v26 + 40) = *(_DWORD*)(a1 + 3672);
		*(_DWORD*)(v26 + 44) = *(_DWORD*)(a1 + 4192);
		v28 = dword_140C44240;
		if (*(_DWORD*)qword_140C63750 < dword_140C44240)
			v28 = *(_DWORD*)qword_140C63750;
		*(_DWORD*)(v27 + 48) = dword_140C44250[v28];
		*(_DWORD*)(v27 + 52) = 1065353216;
		v29 = *(__m128*)(a1 + 1136);
		v30 = *(__m128*)(a1 + 1104);
		v31 = *(__m128*)(a1 + 1088);
		v32 = _mm_unpacklo_ps(v31, v30);
		v33 = *(__m128*)(a1 + 1120);
		v34 = _mm_unpackhi_ps(v33, v29);
		v35 = _mm_unpacklo_ps(v33, v29);
		*(__m128*)(v27 + 64) = _mm_shuffle_ps(v32, v35, 68);
		*(__m128*)(v27 + 80) = _mm_shuffle_ps(v32, v35, 238);
		*(__m128*)(v27 + 96) = _mm_shuffle_ps(_mm_unpackhi_ps(v31, v30), v34, 68);
		*(_QWORD*)(v27 + 112) = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v3[36]), (__m128)0i64),
			_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v3[37]), (__m128)0i64)).m128_u64[0];
		*(_OWORD*)(v27 + 128) = *(_OWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 232i64))(qword_140C65688);
		*(_OWORD*)(v27 + 144) = *(_OWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 240i64))(qword_140C65688);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	v36 = 0i64;
	if (*(_QWORD*)(a1 + 4800))
	{
		while (1)
		{
			result = sub_140384D10(*(_QWORD*)(*(_QWORD*)(a1 + 4792) + 8 * v36));
			if ((int)result < 0)
				break;
			if ((unsigned __int64)++v36 >= *(_QWORD*)(a1 + 4800))
				goto LABEL_16;
		}
	}
	else
	{
		if (!*(_QWORD*)(a1 + 4824))
			return 0i64;
	LABEL_16:
		v37 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 256i64))(
			qword_140C65670,
			112i64,
			0i64);
		if (v37)
		{
			v38 = *(__m128*)(a1 + 976);
			v39 = *(__m128*)(a1 + 1008);
			v40 = *(__m128*)(a1 + 960);
			v41 = _mm_unpackhi_ps(v40, v38);
			v42 = _mm_unpacklo_ps(v40, v38);
			v43 = *(__m128*)(a1 + 992);
			v44 = _mm_unpackhi_ps(v43, v39);
			v45 = _mm_unpacklo_ps(v43, v39);
			*v37 = _mm_shuffle_ps(v42, v45, 68);
			v37[1] = _mm_shuffle_ps(v42, v45, 238);
			v37[2] = _mm_shuffle_ps(v41, v44, 68);
			v46 = *(__m128*)(a1 + 1296);
			v47 = *(__m128*)(a1 + 1328);
			v48 = *(__m128*)(a1 + 1280);
			v49 = _mm_unpackhi_ps(v48, v46);
			v50 = _mm_unpacklo_ps(v48, v46);
			v51 = _mm_unpacklo_ps(*(__m128*)(a1 + 1312), v47);
			v52 = _mm_unpackhi_ps(*(__m128*)(a1 + 1312), v47);
			v37[3] = _mm_shuffle_ps(v50, v51, 68);
			v37[4] = _mm_shuffle_ps(v50, v51, 238);
			v37[5] = _mm_shuffle_ps(v49, v52, 68);
			v37[6] = _mm_shuffle_ps(v49, v52, 238);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
		}
		v53 = (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
			qword_140C65670,
			80i64,
			0i64);
		v54 = v53;
		if (v53)
		{
			*v53 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v3[38]), (__m128)0i64),
				_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v3[39]), (__m128)0i64)).m128_u64[0];
			v55 = dword_140C443A0;
			if (*(_DWORD*)qword_140C63750 < dword_140C443A0)
				v55 = *(_DWORD*)qword_140C63750;
			*((_DWORD*)v54 + 2) = dword_140C443B0[v55];
			*((_DWORD*)v54 + 3) = *(_DWORD*)(a1 + 4776);
			*((_OWORD*)v54 + 1) = *(_OWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 232i64))(qword_140C65688);
			*((_OWORD*)v54 + 2) = *(_OWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 240i64))(qword_140C65688);
			v56 = *(_DWORD*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 64i64))(*(_QWORD*)(a1 + 24)) + 28) == 0;
			v57 = *(_QWORD*)qword_140C65670;
			if (v56)
			{
				(*(void(__fastcall**)(__int64, __int64, _QWORD))(v57 + 352))(qword_140C65670, 13i64, *(_QWORD*)(a1 + 5552));
				(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					14i64,
					*(_QWORD*)(a1 + 5560));
				*((_OWORD*)v54 + 3) = xmmword_140C77860;
				*((_OWORD*)v54 + 4) = xmmword_140C77870;
			}
			else
			{
				(*(void(__fastcall**)(__int64, __int64, _QWORD))(v57 + 352))(
					qword_140C65670,
					13i64,
					*(_QWORD*)(*(_QWORD*)(a1 + 4768) + 80i64));
				(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					14i64,
					*(_QWORD*)(*(_QWORD*)(a1 + 4768) + 88i64));
				v58 = *(_QWORD*)(a1 + 4768);
				*((_OWORD*)v54 + 3) = *(_OWORD*)(v58 + 128);
				*((_OWORD*)v54 + 4) = *(_OWORD*)(v58 + 144);
			}
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
		}
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 320i64))(
			qword_140C65670,
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 200i64),
			0i64);
		v59 = *(_QWORD*)(a1 + 4808);
		v60 = 0;
		v61 = v59 ? *(_DWORD*)(v59 + 40) : 0;
		LOBYTE(v60) = (*(_DWORD*)(a1 + 132) & 0x9023) != 0;
		v62 = (*(float*)(a1 + 4260) > 0.0) + 2 * (v61 + 2 * v60);
		v63 = dword_140C44360;
		if (*(_DWORD*)qword_140C63750 < dword_140C44360)
			v63 = *(_DWORD*)qword_140C63750;
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
			qword_140C65670,
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 208i64),
			(unsigned int)(byte_140C44370[v63] != 0) + 2 * v62);
		(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 304i64))(
			qword_140C65670,
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 216i64),
			18i64);
		if (*(_QWORD*)(a1 + 4824))
		{
			while (1)
			{
				result = sub_140384D90(*(__int64**)(*(_QWORD*)(a1 + 4816) + 8 * v5));
				if ((int)result < 0)
					break;
				if ((unsigned __int64)++v5 >= *(_QWORD*)(a1 + 4824))
					return 0i64;
			}
		}
		else
		{
			return 0i64;
		}
	}
	return result;
}
// 140C44018: using guessed type int dword_140C44018;
// 140C44240: using guessed type int dword_140C44240;
// 140C44250: using guessed type int dword_140C44250[14];
// 140C44360: using guessed type int dword_140C44360;
// 140C44370: using guessed type _BYTE byte_140C44370[32];
// 140C443A0: using guessed type int dword_140C443A0;
// 140C443B0: using guessed type int dword_140C443B0[16];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65688: using guessed type __int64 qword_140C65688;
// 140C77860: using guessed type __int128 xmmword_140C77860;
// 140C77870: using guessed type __int128 xmmword_140C77870;

