//----- (000000014025AFD0) ----------------------------------------------------
__int64 __fastcall sub_14025AFD0(__int64 a1, __int64 a2)
{
	__int64 v4; // rdx
	__int64 v5; // rdx
	__m128* v6; // rax
	__m128 v7; // xmm0
	__m128 v8; // xmm1
	__m128 v9; // xmm3
	__m128 v10; // xmm5
	__m128 v11; // xmm3
	__m128 v12; // xmm2
	__m128 v13; // xmm4
	_OWORD* v14; // rax
	__int64 v15; // rsi
	__m128 v16; // xmm3
	__m128 v17; // xmm2
	__m128 v18; // xmm1
	__m128 v19; // xmm6
	__int64 v20; // r14
	__int64 v21; // rsi
	__int64 v22; // r9
	__int64 v23; // r9
	__int64 v24; // r8
	__m128 v25; // xmm2
	__m128 v26; // xmm1
	__m128 v27; // xmm6
	__int64 v28; // r10
	float v29; // xmm0_4
	__m128 v30; // xmm11
	float v31; // xmm13_4
	float v32; // xmm0_4
	__m128 v33; // xmm7
	__int64 v34; // rcx
	__int64 v35; // rdx
	__m128 v36; // xmm1
	__m128 v37; // xmm6
	__m128 v38; // xmm0
	__m128 v39; // xmm2
	float v40; // xmm7_4
	__int64 v41; // rax
	__m128 v42; // xmm1
	__m128i v43; // xmm1
	double v44; // xmm0_8
	__m128 v45; // xmm2
	__m128 v46; // xmm1
	__m128 v47; // xmm6
	__m128 v48; // xmm2
	__m128 v49; // xmm2
	__m128* v51; // [rsp+48h] [rbp-C0h]
	__int64 v52; // [rsp+50h] [rbp-B8h]
	__m128 v53; // [rsp+58h] [rbp-B0h] BYREF
	__m128 v54; // [rsp+68h] [rbp-A0h]
	__m128 v55; // [rsp+78h] [rbp-90h]
	__m128 v56; // [rsp+88h] [rbp-80h]
	__int128 v57[4]; // [rsp+98h] [rbp-70h] BYREF
	__m128* v58; // [rsp+D8h] [rbp-30h] BYREF
	__int64 v59; // [rsp+E0h] [rbp-28h]
	__m128* v60[2]; // [rsp+128h] [rbp+20h] BYREF
	__m128 v61[4]; // [rsp+138h] [rbp+30h] BYREF

	if (*(_DWORD*)(a1 + 148))
	{
		v4 = *(_QWORD*)(a1 + 2064);
		*(_DWORD*)(a1 + 148) = 0;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 312i64))(qword_140C65670, v4);
		v5 = *(_QWORD*)(a1 + 2080);
		*(_QWORD*)(a1 + 2472) = 36i64;
		(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 304i64))(
			qword_140C65670,
			v5,
			1i64,
			0i64);
		*(_QWORD*)(a1 + 2480) = 8i64;
		v6 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670
			+ 256i64))(
				qword_140C65670,
				64i64,
				0i64,
				0i64,
				0);
		if (v6)
		{
			v7 = *(__m128*)(a1 + 304);
			v8 = *(__m128*)(a1 + 336);
			v9 = *(__m128*)(a1 + 288);
			v10 = _mm_unpackhi_ps(v9, v7);
			v11 = _mm_unpacklo_ps(v9, v7);
			v12 = _mm_unpacklo_ps(*(__m128*)(a1 + 320), v8);
			v13 = _mm_unpackhi_ps(*(__m128*)(a1 + 320), v8);
			*v6 = _mm_shuffle_ps(v11, v12, 68);
			v6[1] = _mm_shuffle_ps(v11, v12, 238);
			v6[2] = _mm_shuffle_ps(v10, v13, 68);
			v6[3] = _mm_shuffle_ps(v10, v13, 238);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
		}
		(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 320i64))(
			qword_140C65670,
			*(_QWORD*)(a1 + 2136),
			1i64);
		v14 = (_OWORD*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
			qword_140C65670,
			48i64,
			0i64);
		if (v14)
		{
			*v14 = *(_OWORD*)(a1 + 544);
			v14[1] = *(_OWORD*)(a1 + 560);
			v14[2] = *(_OWORD*)(a1 + 592);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
		}
	}
	v15 = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD))(*(_QWORD*)qword_140C65670 + 256i64))(
		qword_140C65670,
		48i64,
		1i64,
		4i64,
		0);
	if (v15)
	{
		sub_1402523A0((__m128*)a2, (__int64)&v53);
		v16 = _mm_sub_ps(v54, v53);
		v57[0] = (__int128)_mm_unpacklo_ps(_mm_unpacklo_ps(v16, (__m128)0i64), (__m128)0i64);
		v57[1] = (__int128)_mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps(_mm_shuffle_ps(v16, v16, 85), (__m128)0i64));
		v57[2] = (__int128)_mm_unpacklo_ps(_mm_unpacklo_ps((__m128)0i64, _mm_shuffle_ps(v16, v16, 170)), (__m128)0i64);
		v60[1] = (__m128*)(a2 + 16);
		v57[3] = (__int128)_mm_unpacklo_ps(
			_mm_unpacklo_ps(v53, _mm_shuffle_ps(v53, v53, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v53, v53, 85), (__m128)0x3F800000u));
		v60[0] = (__m128*)v57;
		sub_1401AFB10(v60, v61);
		v51 = v61;
		v52 = a1 + 160;
		v58 = v61;
		v59 = a1 + 160;
		sub_1401AFB10(&v58, &v53);
		v17 = _mm_unpacklo_ps(v53, v54);
		v18 = _mm_unpacklo_ps(v55, v56);
		v19 = _mm_shuffle_ps(_mm_unpackhi_ps(v53, v54), _mm_unpackhi_ps(v55, v56), 68);
		*(__m128*)v15 = _mm_shuffle_ps(v17, v18, 68);
		*(__m128*)(v15 + 16) = _mm_shuffle_ps(v17, v18, 238);
		*(__m128*)(v15 + 32) = v19;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
	}
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, 15i64);
	(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 464i64))(
		qword_140C65670,
		1i64,
		1i64,
		4i64);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, 0i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, 4i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 416i64))(qword_140C65670, 1i64);
	(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 424i64))(
		qword_140C65670,
		128i64,
		24i64,
		128i64);
	v20 = 2i64;
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int))(*(_QWORD*)qword_140C65670 + 432i64))(
		qword_140C65670,
		0i64,
		0i64,
		2i64,
		5);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		0i64,
		*(_QWORD*)(a1 + 1720),
		0i64,
		*(_QWORD*)(a1 + 2056));
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		2i64,
		*(_QWORD*)(a2 + 688),
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		3i64,
		*(_QWORD*)(a2 + 696),
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		4i64,
		*(_QWORD*)(a2 + 704),
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		5i64,
		*(_QWORD*)(a2 + 712),
		0i64,
		0i64);
	v21 = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
		qword_140C65670,
		416i64,
		1i64,
		3i64,
		0);
	if (v21)
	{
		v22 = a2 + 336;
		do
		{
			v58 = (__m128*)(a1 + 224);
			v59 = v22;
			sub_1401AFB10(&v58, &v53);
			v22 = v23 + 64;
			v24 += 48i64;
			v25 = _mm_unpacklo_ps(v53, v54);
			v26 = _mm_unpacklo_ps(v55, v56);
			v27 = _mm_shuffle_ps(_mm_unpackhi_ps(v53, v54), _mm_unpackhi_ps(v55, v56), 68);
			*(__m128*)(v24 - 80) = _mm_shuffle_ps(v25, v26, 68);
			*(__m128*)(v24 - 64) = _mm_shuffle_ps(v25, v26, 238);
			*(__m128*)(v24 - 48) = v27;
		} while (v28 != 1);
		*(__m128*)(v21 + 96) = _mm_shuffle_ps((__m128) * (unsigned int*)(a2 + 612), (__m128) * (unsigned int*)(a2 + 612), 0);
		*(__m128*)(v21 + 112) = _mm_shuffle_ps((__m128) * (unsigned int*)(a2 + 616), (__m128) * (unsigned int*)(a2 + 616), 0);
		v29 = *(float*)(a2 + 592) - *(float*)(a2 + 576);
		if (v29 <= 0.0000099999997)
		{
			v30 = 0i64;
		}
		else
		{
			v30 = (__m128)0x3F000000u;
			v30.m128_f32[0] = 0.5 / v29;
		}
		v31 = *(float*)(a2 + 584);
		v32 = *(float*)(a2 + 600) - v31;
		if (v32 <= 0.0000099999997)
		{
			v33 = 0i64;
		}
		else
		{
			v33 = (__m128)0x3F000000u;
			v33.m128_f32[0] = 0.5 / v32;
		}
		v58 = (__m128*)(a1 + 224);
		v59 = a2 + 464;
		sub_1401AFB10(&v58, &v53);
		v34 = v21 + 224;
		v35 = a2 - v21;
		v36 = _mm_unpacklo_ps(v55, v56);
		v37 = _mm_shuffle_ps(_mm_unpackhi_ps(v53, v54), _mm_unpackhi_ps(v55, v56), 68);
		v38 = _mm_unpacklo_ps(v53, v54);
		*(__m128*)(v21 + 128) = _mm_shuffle_ps(v38, v36, 68);
		*(__m128*)(v21 + 144) = _mm_shuffle_ps(v38, v36, 238);
		v39 = _mm_unpacklo_ps(v33, (__m128)0i64);
		v40 = v33.m128_f32[0] * v31;
		*(__m128*)(v21 + 160) = v37;
		*(_QWORD*)(v21 + 176) = _mm_unpacklo_ps(_mm_unpacklo_ps(v30, (__m128)0i64), v39).m128_u64[0];
		v41 = v21 + 184;
		do
		{
			v34 += 16i64;
			v41 += 4i64;
			*(float*)(v41 - 4) = (float)((float)(1.0 - *(float*)(v35 + v41 + 432)) * 0.5) - v40;
			*(__m128*)(v34 - 48) = _mm_shuffle_ps(
				(__m128) * (unsigned int*)(v35 + v41 + 440),
				(__m128) * (unsigned int*)(v35 + v41 + 440),
				0);
			*(__m128*)(v34 - 16) = _mm_shuffle_ps(
				(__m128) * (unsigned int*)(v35 + v41 + 448),
				(__m128) * (unsigned int*)(v35 + v41 + 448),
				0);
			--v20;
		} while (v20);
		*(_OWORD*)(v21 + 256) = *(_OWORD*)(a2 + 656);
		*(_OWORD*)(v21 + 272) = *(_OWORD*)(a2 + 672);
		v42 = _mm_shuffle_ps((__m128) * (unsigned int*)(a2 + 644), (__m128) * (unsigned int*)(a2 + 644), 0);
		*(__m128*)(v21 + 288) = v42;
		v42.m128_f32[0] = *(float*)(a2 + 644) * -0.5;
		v43 = (__m128i)_mm_shuffle_ps(v42, v42, 0);
		*(_DWORD*)(v21 + 304) = _mm_cvtsi128_si32(v43);
		*(_DWORD*)(v21 + 308) = _mm_cvtsi128_si32(_mm_srli_si128(v43, 4));
		*(_DWORD*)(v21 + 312) = _mm_cvtsi128_si32(_mm_srli_si128(v43, 8));
		*(_QWORD*)&v44 = *(unsigned int*)(a2 + 608);
		*(float*)&v44 = *(float*)&v44 * 0.5;
		v51 = (__m128*)(a1 + 224);
		v52 = a2 + 272;
		*(float*)(v21 + 316) = sub_1408FC950(v44) - 0.0000099999997;
		v58 = (__m128*)(a1 + 224);
		v59 = a2 + 272;
		sub_1401AFB10(&v58, &v53);
		v45 = _mm_unpacklo_ps(v53, v54);
		v46 = _mm_unpacklo_ps(v55, v56);
		v47 = _mm_shuffle_ps(_mm_unpackhi_ps(v53, v54), _mm_unpackhi_ps(v55, v56), 68);
		*(__m128*)(v21 + 320) = _mm_shuffle_ps(v45, v46, 68);
		*(__m128*)(v21 + 336) = _mm_shuffle_ps(v45, v46, 238);
		*(__m128*)(v21 + 352) = v47;
		if (*(float*)(a2 + 528) <= 0.0000099999997
			|| *(float*)(a2 + 532) <= 0.0000099999997
			|| *(float*)(a2 + 536) <= 0.0000099999997)
		{
			*(_OWORD*)(v21 + 368) = 0i64;
		}
		else
		{
			v48 = _mm_rcp_ps(_mm_mul_ps(*(__m128*)(a2 + 528), *(__m128*)(a2 + 528)));
			*(__m128*)(v21 + 368) = _mm_unpacklo_ps(
				_mm_unpacklo_ps(v48, _mm_shuffle_ps(v48, v48, 170)),
				_mm_unpacklo_ps(_mm_shuffle_ps(v48, v48, 85), (__m128)0x3F800000u));
		}
		if (*(float*)(a2 + 544) <= 0.0000099999997
			|| *(float*)(a2 + 548) <= 0.0000099999997
			|| *(float*)(a2 + 552) <= 0.0000099999997)
		{
			*(_OWORD*)(v21 + 384) = 0i64;
		}
		else
		{
			v49 = _mm_rcp_ps(_mm_mul_ps(*(__m128*)(a2 + 544), *(__m128*)(a2 + 544)));
			*(__m128*)(v21 + 384) = _mm_unpacklo_ps(
				_mm_unpacklo_ps(v49, _mm_shuffle_ps(v49, v49, 170)),
				_mm_unpacklo_ps(_mm_shuffle_ps(v49, v49, 85), (__m128)0x3F800000u));
		}
		*(_OWORD*)(v21 + 400) = *(_OWORD*)(a2 + 560);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	(*(void(__fastcall**)(__int64, _QWORD, bool))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 2160),
		*(float*)(a1 + 332) == 0.0);
	if (*(_QWORD*)(a1 + 2472))
		(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, int, __m128*, __int64))(*(_QWORD*)qword_140C65670 + 656i64))(
			qword_140C65670,
			3i64,
			0i64,
			*(unsigned int*)(a1 + 2472),
			0,
			*(_DWORD*)(a1 + 2480),
			0,
			1,
			v51,
			v52);
	else
		(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, int))(*(_QWORD*)qword_140C65670 + 648i64))(
			qword_140C65670,
			3i64,
			0i64,
			*(unsigned int*)(a1 + 2480),
			1);
	return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, 7i64);
}
// 14025B4F3: variable 'v23' is possibly undefined
// 14025B4F7: variable 'v24' is possibly undefined
// 14025B53E: variable 'v28' is possibly undefined
// 14025B986: variable 'v51' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;
// 14025AFD0: using guessed type __m128 var_F0[4];

