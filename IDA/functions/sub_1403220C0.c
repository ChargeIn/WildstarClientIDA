//----- (00000001403220C0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1403220C0(__int64 a1, __m128* a2)
{
	__m128* v2; // rsi
	unsigned __int64 v3; // r14
	__m128 v6; // xmm7
	__m128 v7; // xmm3
	__m128 v8; // xmm4
	__m128 v9; // xmm1
	__m128 v10; // xmm12
	float v11; // xmm2_4
	float v12; // xmm0_4
	__m128 v13; // xmm5
	__m128 v14; // xmm2
	__m128 v15; // xmm5
	float v16; // xmm0_4
	__m128 v17; // xmm3
	__m128 v18; // xmm3
	__m128 v19; // xmm5
	__m128 v20; // xmm9
	float v21; // xmm9_4
	__int64 v22; // rdx
	unsigned int v23; // edi
	char v24; // al
	__m128 v25; // xmm14
	float v26; // xmm10_4
	double v27; // xmm15_8
	__m128 v28; // xmm2
	float v29; // xmm0_4
	__m128 v30; // xmm12
	float* v31; // r15
	int v32; // eax
	double v33; // xmm10_8
	double v34; // xmm0_8
	double v35; // xmm0_8
	__int64* v36; // rcx
	__int64 v37; // rax
	double v38; // xmm0_8
	__int64* v39; // rcx
	__int64 v40; // rax
	double v41; // xmm0_8
	float v42; // xmm6_4
	double v43; // xmm0_8
	float v44; // xmm7_4
	double v45; // xmm0_8
	float v46; // xmm3_4
	float v47; // xmm4_4
	float v48; // xmm5_4
	double v49; // xmm14_8
	double v50; // xmm2_8
	float v51; // xmm7_4
	float v52; // xmm0_4
	float v53; // xmm6_4
	float v54; // xmm6_4
	float v55; // xmm0_4
	float v56; // xmm6_4
	__int64 v57; // rax
	float v58; // xmm4_4
	float v59; // xmm1_4
	__int64 v60; // rax
	float v61; // xmm2_4
	float v62; // xmm2_4
	__m128 v63; // xmm8
	__m128 v64; // xmm6
	__m128 v65; // xmm0
	__m128i v66; // xmm2
	__m128i v67; // xmm1
	__m128 v68; // xmm0
	__m128i v69; // xmm1
	__m128 v70; // xmm4
	__m128 v71; // xmm1
	unsigned int v72; // edx
	unsigned int v73; // edx
	__int64 v74; // rax
	__m128 v75; // xmm1
	__m128 v76; // xmm7
	__m128 v77; // xmm7
	__m128 v78; // xmm2
	__m128 v79; // xmm3
	unsigned __int64 v80; // r14
	__m128 v81; // xmm3
	__m128i v82; // xmm1
	__m128i v83; // xmm1
	__m128 v84; // xmm0
	__m128i v85; // xmm1
	__m128 v86; // xmm2
	__m128 v87; // xmm3
	unsigned int v88; // edx
	unsigned int v89; // edx
	__int64 v90; // rax
	__m128 v91; // xmm1
	__m128 v92; // xmm6
	__m128 v93; // xmm6
	__m128 v94; // xmm2
	__m128 v95; // xmm3
	unsigned __int64 v96; // r14
	__m128i v97; // xmm1
	__m128* v98; // rax
	__m128i v99; // xmm1
	__m128i v100; // xmm1
	__m128 v101; // xmm2
	__m128 v102; // xmm3
	unsigned int v103; // ecx
	__int64 v104; // rax
	__m128 v105; // xmm1
	__m128 v106; // xmm6
	__m128 v107; // xmm6
	__m128 v108; // xmm2
	__m128 v109; // xmm3
	unsigned __int64 result; // rax
	float v111; // [rsp+28h] [rbp-B9h]
	__m128 v112; // [rsp+38h] [rbp-A9h] BYREF
	__m128 v113; // [rsp+48h] [rbp-99h] BYREF
	__m128 v114; // [rsp+58h] [rbp-89h] BYREF
	float* v115; // [rsp+148h] [rbp+67h] BYREF
	float v116; // [rsp+150h] [rbp+6Fh] BYREF
	float v117; // [rsp+158h] [rbp+77h]
	float v118; // [rsp+160h] [rbp+7Fh]

	v2 = (__m128*)a2->m128_u64[1];
	v3 = a2->m128_u64[0];
	v113 = a2[2];
	v6 = 0i64;
	v7 = v2[6];
	v8 = _mm_sub_ps(v2[5], a2[1]);
	v9 = _mm_mul_ps(v7, v7);
	v10 = (__m128)0x40400000u;
	v11 = (float)(v9.m128_f32[0] + _mm_shuffle_ps(v9, v9, 85).m128_f32[0]) + _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
	v12 = 1.0 / fsqrt(v11);
	v13 = (__m128)0x40400000u;
	v13.m128_f32[0] = 3.0 - (float)((float)(v11 * v12) * v12);
	v14 = _mm_mul_ps(v8, v8);
	v13.m128_f32[0] = fmaxf((float)(v13.m128_f32[0] * 0.5) * v12, 0.0);
	v14.m128_f32[0] = (float)(v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 85).m128_f32[0])
		+ _mm_shuffle_ps(v14, v14, 170).m128_f32[0];
	v15 = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v7);
	v16 = fsqrt(v14.m128_f32[0]);
	v17 = (__m128)0x40400000u;
	v17.m128_f32[0] = fmaxf(
		(float)((float)(3.0 - (float)((float)(v14.m128_f32[0] * (float)(1.0 / v16)) * (float)(1.0 / v16)))
			* 0.5)
		* (float)(1.0 / v16),
		0.0);
	v18 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v8);
	v19 = _mm_sub_ps(
		_mm_mul_ps(_mm_shuffle_ps(v15, v15, 210), _mm_shuffle_ps(v18, v18, 201)),
		_mm_mul_ps(_mm_shuffle_ps(v15, v15, 201), _mm_shuffle_ps(v18, v18, 210)));
	if ((*(_BYTE*)(*(_QWORD*)(a1 + 1256) + 40i64) & 2) != 0)
	{
		v20 = _mm_mul_ps(v19, v19);
		v20.m128_f32[0] = fsqrt(
			(float)(v20.m128_f32[0] + _mm_shuffle_ps(v20, v20, 85).m128_f32[0])
			+ _mm_shuffle_ps(v20, v20, 170).m128_f32[0]);
		v21 = v20.m128_f32[0] + (float)((float)(a2[3].m128_f32[0] - v20.m128_f32[0]) * a2[3].m128_f32[1]);
		a2[3].m128_f32[0] = v21;
	}
	else
	{
		v21 = 1.0;
	}
	v22 = *(_QWORD*)(a1 + 1256);
	LOWORD(v23) = 0;
	v24 = *(_BYTE*)(v22 + 1072);
	v25 = 0i64;
	v26 = 0.0;
	*(_QWORD*)&v27 = COERCE_UNSIGNED_INT((float)v2[1].m128_i32[2]);
	*(float*)&v27 = *(float*)&v27 * *(float*)(a1 + 1524);
	LODWORD(v115) = 0;
	v116 = 0.0;
	v28 = _mm_mul_ps(v19, v19);
	v28.m128_f32[0] = (float)(v28.m128_f32[0] + _mm_shuffle_ps(v28, v28, 85).m128_f32[0])
		+ _mm_shuffle_ps(v28, v28, 170).m128_f32[0];
	v29 = 1.0 / fsqrt(v28.m128_f32[0]);
	v10.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v28.m128_f32[0] * v29) * v29)) * 0.5) * v29, 0.0);
	v30 = _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), v19);
	if (v24)
	{
		if (v24 == 1)
		{
			v31 = (float*)&v115;
		}
		else if (v24 == 2)
		{
			v31 = &v116;
		}
		else
		{
			v31 = v115;
		}
		v32 = *(_DWORD*)(v22 + 40);
		v33 = v27;
		if ((v32 & 0x1000) == 0)
			*(float*)&v33 = *(float*)&v27 * *(float*)(a1 + 1392);
		if ((v32 & 0x800) != 0)
		{
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 56) + 16i64))(*(_QWORD*)(a1 + 56), v2[1].m128_u32[1]);
			v34 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			v111 = *(float*)&v34;
			v35 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			v36 = *(__int64**)(a1 + 56);
			v37 = *v36;
			v117 = *(float*)&v35;
			v38 = (*(double(__fastcall**)(__int64*))(v37 + 56))(v36);
			v39 = *(__int64**)(a1 + 56);
			v40 = *v39;
			v118 = *(float*)&v38;
			v41 = (*(double(__fastcall**)(__int64*))(v40 + 56))(v39);
			v42 = *(float*)&v41;
			v43 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			v44 = *(float*)&v43;
			v45 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			v46 = *(float*)(a1 + 1200);
			v49 = v33;
			HIDWORD(v50) = HIDWORD(v27);
			v47 = *(float*)&v45;
			LODWORD(v45) = *(_DWORD*)(a1 + 1232);
			v48 = (float)*(int*)(a1 + 1336);
			*(float*)&v50 = (float)((float)(*(float*)&v33 * 1.5) * v46) + v44;
			*(float*)&v33 = (float)((float)((float)(*(float*)&v33 * 0.89999998) * v46) + v47)
				+ (float)((float)(*(float*)&v45 * 0.89999998) * v48);
			*(float*)&v49 = (float)((float)((float)(*(float*)&v49 * 2.0) * v46) + v42)
				+ (float)((float)(*(float*)&v45 * 2.0) * v48);
			*(float*)&v50 = *(float*)&v50 + (float)((float)(*(float*)&v45 * 1.5) * v48);
			v51 = (float)(v117 + v111) + v118;
			if (v51 == 0.0)
			{
				*v31 = 0.0;
				v6 = 0i64;
			}
			else
			{
				v52 = sub_1408FE3D0(v50);
				v53 = v52 * v117;
				v54 = v53 + (float)(sub_1408FE3D0(v49) * v111);
				v55 = sub_1408FE3D0(v33);
				v56 = (float)((float)(v54 + (float)(v55 * v118)) * *(float*)(a1 + 1216)) / v51;
				v6 = 0i64;
				*v31 = v56;
			}
		}
		else
		{
			*v31 = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(
				(float)((float)*(int*)(a1 + 1336) * *(float*)(a1 + 1232))
				+ (float)(*(float*)&v33 * *(float*)(a1 + 1200)))))
				* *(float*)(a1 + 1216);
		}
		v57 = *(_QWORD*)(a1 + 1256);
		v58 = *v31;
		if ((*(_DWORD*)(v57 + 40) & 0x2000) != 0)
		{
			v59 = *(float*)(v57 + 948) == 0.0
				? 0.0
				: fabs((float)(v2->m128_f32[3] - *(float*)(*(_QWORD*)(a1 + 1416) + 12i64)) * *(float*)(a1 + 1528));
			if (v59 < *(float*)(a1 + 1184))
				*v31 = fmaxf(v6.m128_f32[0], fminf(v59 * *(float*)(a1 + 1520), 1.0)) * v58;
		}
		v60 = *(_QWORD*)(a1 + 1256);
		if ((*(_DWORD*)(v60 + 40) & 0x4000) != 0)
		{
			v61 = *(float*)(v60 + 948) == 0.0
				? 0.0
				: fabs((float)(v2->m128_f32[3] - *(float*)(*(_QWORD*)(a1 + 1424) + 12i64)) * *(float*)(a1 + 1528));
			if (v61 < *(float*)(a1 + 1184))
			{
				v62 = fmaxf(v6.m128_f32[0], fminf(v61 * *(float*)(a1 + 1520), 1.0)) * v58;
				if (fabs(v62) < fabs(*v31))
					*v31 = v62;
			}
		}
		v26 = v116;
		v25 = (__m128)(unsigned int)v115;
	}
	v63 = (__m128)v2->m128_u32[2];
	v63.m128_f32[0] = (float)((float)(v63.m128_f32[0] * 0.5) * v21) * a2[3].m128_f32[2];
	v64 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128)v2[2].m128_u32[0], (__m128)v2[2].m128_u32[2]),
		_mm_unpacklo_ps((__m128)v2[2].m128_u32[1], (__m128)v2->m128_u32[1]));
	v114 = v64;
	if (a2[3].m128_i32[3])
	{
		v64 = _mm_mul_ps(v64, v113);
		v114 = v64;
	}
	v65 = v63;
	v65.m128_f32[0] = v63.m128_f32[0] + v26;
	v66 = (__m128i)_mm_sub_ps(v2[5], _mm_mul_ps(_mm_shuffle_ps(v65, v65, 0), v30));
	*(_DWORD*)v3 = _mm_cvtsi128_si32(v66);
	*(_DWORD*)(v3 + 4) = _mm_cvtsi128_si32(_mm_srli_si128(v66, 4));
	*(_DWORD*)(v3 + 8) = _mm_cvtsi128_si32(_mm_srli_si128(v66, 8));
	v67 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(_mm_min_ps(_mm_max_ps(v6, v64), (__m128)xmmword_140B7B240), (__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v68 = 0i64;
	v69 = _mm_packus_epi16(v67, v67);
	*(_DWORD*)(v3 + 12) = _mm_cvtsi128_si32(_mm_packus_epi16(v69, v69));
	v70 = (__m128) * (unsigned int*)(a1 + 1396);
	v71 = v25;
	v70.m128_f32[0] = v70.m128_f32[0] + v2->m128_f32[3];
	v71.m128_f32[0] = v25.m128_f32[0] + *(float*)(a1 + 1400);
	v112 = _mm_unpacklo_ps(_mm_unpacklo_ps(v70, (__m128)0i64), _mm_unpacklo_ps(v71, (__m128)0i64));
	sub_1401C95B0(&v115, (__m128i*) & v112);
	*(_DWORD*)(v3 + 16) = (_DWORD)v115;
	LODWORD(v115) = LODWORD(v27);
	v72 = LODWORD(v27) & 0x7FFFFFFF;
	if ((LODWORD(v27) & 0x7FFFFFFFu) >= 0x33800000)
	{
		if (v72 > 0x387FEFFF)
		{
			if (v72 > 0x47FFEFFF)
				LOWORD(v73) = 17407;
			else
				v73 = (v72 - 939520000) >> 13;
		}
		else
		{
			v73 = (((LODWORD(v27) & 0x7FFFFF | 0x800000u) >> (113 - (v72 >> 23))) + 4096) >> 13;
		}
	}
	else
	{
		LOWORD(v73) = 0;
	}
	*(_WORD*)(v3 + 20) = WORD1(v27) & 0x8000 | v73;
	v74 = *(_QWORD*)(a1 + 1256);
	if (*(_WORD*)(v74 + 1028))
	{
		if ((*(_BYTE*)(v74 + 40) & 4) != 0)
		{
			v75 = (__m128)v2->m128_u32[3];
			v75.m128_f32[0] = (float)(v75.m128_f32[0] - *(float*)(a1 + 1296)) * *(float*)(a1 + 1300);
			v76 = v75;
		}
		else
		{
			v76 = (__m128)v2->m128_u32[3];
		}
		v77 = _mm_unpacklo_ps(_mm_unpacklo_ps(v76, (__m128)0x3F800000u), (__m128)0i64);
		sub_140325540((_WORD*)(v3 + 22), (unsigned int*)(a1 + 1168));
		v78 = _mm_mul_ps(*(__m128*)(a1 + 1456), v77);
		v78.m128_f32[0] = (float)(v78.m128_f32[0] + _mm_shuffle_ps(v78, v78, 85).m128_f32[0])
			+ _mm_shuffle_ps(v78, v78, 170).m128_f32[0];
		v79 = _mm_mul_ps(*(__m128*)(a1 + 1440), v77);
		v68 = 0i64;
		v79.m128_f32[0] = (float)(v79.m128_f32[0] + _mm_shuffle_ps(v79, v79, 85).m128_f32[0])
			+ _mm_shuffle_ps(v79, v79, 170).m128_f32[0];
		v112 = _mm_unpacklo_ps(_mm_unpacklo_ps(v79, (__m128)0i64), _mm_unpacklo_ps(v78, (__m128)0i64));
		sub_1401C95B0(&v115, (__m128i*) & v112);
		*(_DWORD*)(v3 + 24) = (_DWORD)v115;
		v6 = 0i64;
	}
	v80 = *(unsigned int*)(a1 + 1432) + v3;
	if ((*(_BYTE*)(*(_QWORD*)(a1 + 1256) + 40i64) & 0x20) != 0)
	{
		v68 = (__m128)v2[3].m128_u32[2];
		v81 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)v2[3].m128_u32[0], v68),
			_mm_unpacklo_ps((__m128)v2[3].m128_u32[1], (__m128)v2->m128_u32[1]));
		v112 = v81;
		if (a2[3].m128_i32[3])
		{
			v81 = _mm_mul_ps(v81, v113);
			v112 = v81;
		}
	}
	else
	{
		v81 = v112;
	}
	v68.m128_f32[0] = v26;
	v82 = (__m128i)_mm_sub_ps(v2[5], _mm_mul_ps(_mm_shuffle_ps(v68, v68, 0), v30));
	*(_DWORD*)v80 = _mm_cvtsi128_si32(v82);
	*(_DWORD*)(v80 + 4) = _mm_cvtsi128_si32(_mm_srli_si128(v82, 4));
	*(_DWORD*)(v80 + 8) = _mm_cvtsi128_si32(_mm_srli_si128(v82, 8));
	if ((*(_BYTE*)(*(_QWORD*)(a1 + 1256) + 40i64) & 0x20) != 0)
		v113 = _mm_mul_ps(_mm_add_ps(v81, v64), (__m128)xmmword_140B7AC50);
	else
		v113 = v64;
	v83 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(_mm_min_ps(_mm_max_ps(v6, v113), (__m128)xmmword_140B7B240), (__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v84 = 0i64;
	v85 = _mm_packus_epi16(v83, v83);
	*(_DWORD*)(v80 + 12) = _mm_cvtsi128_si32(_mm_packus_epi16(v85, v85));
	v86 = (__m128) * (unsigned int*)(a1 + 1400);
	v87 = (__m128) * (unsigned int*)(a1 + 1396);
	v87.m128_f32[0] = v87.m128_f32[0] + v2->m128_f32[3];
	v86.m128_f32[0] = (float)(v86.m128_f32[0] + 0.5) + v25.m128_f32[0];
	v113 = _mm_unpacklo_ps(_mm_unpacklo_ps(v87, (__m128)0i64), _mm_unpacklo_ps(v86, (__m128)0i64));
	sub_1401C95B0(&v115, (__m128i*) & v113);
	*(_DWORD*)(v80 + 16) = (_DWORD)v115;
	LODWORD(v115) = LODWORD(v27);
	v88 = LODWORD(v27) & 0x7FFFFFFF;
	if ((LODWORD(v27) & 0x7FFFFFFFu) >= 0x33800000)
	{
		if (v88 > 0x387FEFFF)
		{
			if (v88 > 0x47FFEFFF)
				LOWORD(v89) = 17407;
			else
				v89 = (v88 - 939520000) >> 13;
		}
		else
		{
			v89 = (((LODWORD(v27) & 0x7FFFFF | 0x800000u) >> (113 - (v88 >> 23))) + 4096) >> 13;
		}
	}
	else
	{
		LOWORD(v89) = 0;
	}
	*(_WORD*)(v80 + 20) = WORD1(v27) & 0x8000 | v89;
	v90 = *(_QWORD*)(a1 + 1256);
	if (*(_WORD*)(v90 + 1028))
	{
		if ((*(_BYTE*)(v90 + 40) & 4) != 0)
		{
			v91 = (__m128)v2->m128_u32[3];
			v91.m128_f32[0] = (float)(v91.m128_f32[0] - *(float*)(a1 + 1296)) * *(float*)(a1 + 1300);
			v92 = v91;
		}
		else
		{
			v92 = (__m128)v2->m128_u32[3];
		}
		v93 = _mm_unpacklo_ps(_mm_unpacklo_ps(v92, (__m128)0x3F800000u), (__m128)xmmword_140B7A310);
		sub_140325540((_WORD*)(v80 + 22), (unsigned int*)(a1 + 1168));
		v94 = _mm_mul_ps(*(__m128*)(a1 + 1456), v93);
		v94.m128_f32[0] = (float)(v94.m128_f32[0] + _mm_shuffle_ps(v94, v94, 85).m128_f32[0])
			+ _mm_shuffle_ps(v94, v94, 170).m128_f32[0];
		v95 = _mm_mul_ps(*(__m128*)(a1 + 1440), v93);
		v84 = 0i64;
		v95.m128_f32[0] = (float)(v95.m128_f32[0] + _mm_shuffle_ps(v95, v95, 85).m128_f32[0])
			+ _mm_shuffle_ps(v95, v95, 170).m128_f32[0];
		v113 = _mm_unpacklo_ps(_mm_unpacklo_ps(v95, (__m128)0i64), _mm_unpacklo_ps(v94, (__m128)0i64));
		sub_1401C95B0(&v115, (__m128i*) & v113);
		*(_DWORD*)(v80 + 24) = (_DWORD)v115;
	}
	v96 = *(unsigned int*)(a1 + 1432) + v80;
	v84.m128_f32[0] = v63.m128_f32[0] - v26;
	v97 = (__m128i)_mm_add_ps(v2[5], _mm_mul_ps(_mm_shuffle_ps(v84, v84, 0), v30));
	*(_DWORD*)v96 = _mm_cvtsi128_si32(v97);
	*(_DWORD*)(v96 + 4) = _mm_cvtsi128_si32(_mm_srli_si128(v97, 4));
	*(_DWORD*)(v96 + 8) = _mm_cvtsi128_si32(_mm_srli_si128(v97, 8));
	v98 = &v112;
	if ((*(_BYTE*)(*(_QWORD*)(a1 + 1256) + 40i64) & 0x20) == 0)
		v98 = &v114;
	v99 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(_mm_min_ps(_mm_max_ps(v6, *v98), (__m128)xmmword_140B7B240), (__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v100 = _mm_packus_epi16(v99, v99);
	*(_DWORD*)(v96 + 12) = _mm_cvtsi128_si32(_mm_packus_epi16(v100, v100));
	v101 = (__m128) * (unsigned int*)(a1 + 1400);
	v102 = (__m128) * (unsigned int*)(a1 + 1396);
	v102.m128_f32[0] = v102.m128_f32[0] + v2->m128_f32[3];
	v101.m128_f32[0] = (float)(v101.m128_f32[0] + 1.0) + v25.m128_f32[0];
	v114 = _mm_unpacklo_ps(_mm_unpacklo_ps(v102, (__m128)0i64), _mm_unpacklo_ps(v101, (__m128)0i64));
	sub_1401C95B0(&v115, (__m128i*) & v114);
	*(_DWORD*)(v96 + 16) = (_DWORD)v115;
	LODWORD(v115) = LODWORD(v27);
	v103 = LODWORD(v27) & 0x7FFFFFFF;
	if ((LODWORD(v27) & 0x7FFFFFFFu) >= 0x33800000)
	{
		if (v103 > 0x387FEFFF)
		{
			if (v103 > 0x47FFEFFF)
				LOWORD(v23) = 17407;
			else
				v23 = (v103 - 939520000) >> 13;
		}
		else
		{
			v23 = (((LODWORD(v27) & 0x7FFFFF | 0x800000u) >> (113 - (v103 >> 23))) + 4096) >> 13;
		}
	}
	*(_WORD*)(v96 + 20) = WORD1(v27) & 0x8000 | v23;
	v104 = *(_QWORD*)(a1 + 1256);
	if (*(_WORD*)(v104 + 1028))
	{
		if ((*(_BYTE*)(v104 + 40) & 4) != 0)
		{
			v105 = (__m128)v2->m128_u32[3];
			v105.m128_f32[0] = (float)(v105.m128_f32[0] - *(float*)(a1 + 1296)) * *(float*)(a1 + 1300);
			v106 = v105;
		}
		else
		{
			v106 = (__m128)v2->m128_u32[3];
		}
		v107 = _mm_unpacklo_ps(_mm_unpacklo_ps(v106, (__m128)0x3F800000u), (__m128)xmmword_140B7A330);
		sub_140325540((_WORD*)(v96 + 22), (unsigned int*)(a1 + 1168));
		v108 = _mm_mul_ps(*(__m128*)(a1 + 1456), v107);
		v108.m128_f32[0] = (float)(v108.m128_f32[0] + _mm_shuffle_ps(v108, v108, 85).m128_f32[0])
			+ _mm_shuffle_ps(v108, v108, 170).m128_f32[0];
		v109 = _mm_mul_ps(*(__m128*)(a1 + 1440), v107);
		v109.m128_f32[0] = (float)(v109.m128_f32[0] + _mm_shuffle_ps(v109, v109, 85).m128_f32[0])
			+ _mm_shuffle_ps(v109, v109, 170).m128_f32[0];
		v114 = _mm_unpacklo_ps(_mm_unpacklo_ps(v109, (__m128)0i64), _mm_unpacklo_ps(v108, (__m128)0i64));
		sub_1401C95B0(&v115, (__m128i*) & v114);
		*(_DWORD*)(v96 + 24) = (_DWORD)v115;
	}
	result = v96 + *(unsigned int*)(a1 + 1432);
	a2->m128_u64[0] = result;
	return result;
}
// 140B7A310: using guessed type __int128 xmmword_140B7A310;
// 140B7A330: using guessed type __int128 xmmword_140B7A330;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;

