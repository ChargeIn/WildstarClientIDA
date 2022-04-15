//----- (0000000140363090) ----------------------------------------------------
__int64 __fastcall sub_140363090(__int64 a1)
{
	__int64* v1; // r14
	__int64* v3; // r15
	__m128* i; // rdi
	float v5; // xmm0_4
	float v6; // xmm0_4
	__int64 v7; // rbx
	int* v8; // rax
	int* v9; // r12
	float v10; // xmm0_4
	float v11; // xmm0_4
	__int64 v12; // rbx
	int* v13; // rax
	int* v14; // r12
	__int64 v15; // rbx
	__m128* v16; // rax
	__m128 v17; // xmm4
	__m128 v18; // xmm3
	__m128 v19; // xmm2
	__m128 v20; // xmm6
	__m128 v21; // xmm2
	__m128 v22; // xmm1
	__m128 v23; // xmm5
	__m128 v24; // xmm1
	__m128 v25; // xmm0
	__m128 v26; // xmm1
	__m128 v27; // xmm3
	__m128 v28; // xmm5
	__m128 v29; // xmm3
	__m128 v30; // xmm2
	__m128 v31; // xmm4
	__int64 v32; // rbx
	__m128 v33; // xmm4
	__m128 v34; // xmm3
	__m128 v35; // xmm2
	__m128 v36; // xmm6
	__m128 v37; // xmm2
	__m128 v38; // xmm1
	__m128 v39; // xmm5
	__m128 v40; // xmm1
	__int64 v41; // r8
	unsigned __int64 j; // rdx
	__int64 v43; // rcx
	__m128 v44; // xmm1
	__m128 v45; // xmm1
	__m128* v46; // rax
	__m128 v47; // xmm4
	__m128 v48; // xmm3
	__m128 v49; // xmm2
	__m128 v50; // xmm6
	__m128 v51; // xmm2
	__m128 v52; // xmm1
	__m128 v53; // xmm5
	__m128 v54; // xmm1
	__m128 v55; // xmm0
	__m128 v56; // xmm1
	__m128 v57; // xmm3
	__m128 v58; // xmm5
	__m128 v59; // xmm3
	__m128 v60; // xmm2
	__m128 v61; // xmm4
	__int64 v62; // rbx
	__m128 v63; // xmm4
	__m128 v64; // xmm3
	__m128 v65; // xmm2
	__m128 v66; // xmm6
	__m128 v67; // xmm2
	__m128 v68; // xmm1
	__m128 v69; // xmm5
	__m128 v70; // xmm1
	__int64 v71; // rsi
	__int64 v72; // rdi
	unsigned int v73; // ebx
	__int64 v74; // rcx
	_QWORD* v75; // rcx
	__int64 result; // rax
	__int64 v77; // [rsp+20h] [rbp-58h]

	v1 = (__int64*)(a1 + 4792);
	sub_1400523E0((__int64*)(a1 + 4792));
	v3 = (__int64*)(a1 + 4816);
	sub_1400523E0((__int64*)(a1 + 4816));
	for (i = *(__m128**)(a1 + 2336); i; i = (__m128*)i[89].m128_u64[0])
	{
		if (i[64].m128_u64[1])
		{
			if (!*(_DWORD*)(a1 + 852)
				|| ((v5 = i[67].m128_f32[1] - *(float*)(a1 + 916), v5 <= 0.0)
					? (v6 = v5 * i[81].m128_f32[2])
					: (v6 = v5 * i[81].m128_f32[1]),
					v6 >= i[81].m128_f32[0]))
			{
				if ((unsigned int)sub_14035BDF0((__m128*)a1, i + 66))
				{
					v7 = v1[1];
					v8 = sub_14018DB00(*v1, v7 + 1, 8i64);
					v9 = v8;
					*(_QWORD*)&v8[2 * v7] = i;
					if ((int*)*v1 != v8)
					{
						sub_1407DB590(v8, (int*)*v1, 8 * v1[1]);
						if (*v1)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v1 - 16) + 8i64))(*v1 - 16);
						*v1 = (__int64)v9;
					}
					v1[1] = v7 + 1;
				}
			}
		}
		if ((i[70].m128_i8[0] & 1) != 0)
		{
			if (!*(_DWORD*)(a1 + 852)
				|| ((v10 = i[75].m128_f32[1] - *(float*)(a1 + 916), v10 <= 0.0)
					? (v11 = v10 * i[81].m128_f32[2])
					: (v11 = v10 * i[81].m128_f32[1]),
					v11 >= i[81].m128_f32[0]))
			{
				if ((unsigned int)sub_14035BDF0((__m128*)a1, i + 74))
				{
					v12 = *(_QWORD*)(a1 + 4824);
					v13 = sub_14018DB00(*v3, v12 + 1, 8i64);
					v14 = v13;
					*(_QWORD*)&v13[2 * v12] = i;
					if ((int*)*v3 != v13)
					{
						sub_1407DB590(v13, (int*)*v3, 8i64 * *(_QWORD*)(a1 + 4824));
						if (*v3)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v3 - 16) + 8i64))(*v3 - 16);
						*v3 = (__int64)v14;
					}
					*(_QWORD*)(a1 + 4824) = v12 + 1;
				}
			}
		}
	}
	if (!*(_QWORD*)(a1 + 4800) && !*(_QWORD*)(a1 + 4824))
		return 0i64;
	v15 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 192i64))(qword_140C65688);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		0i64,
		*(_QWORD*)(v15 + 40),
		0i64,
		0i64);
	v77 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 216i64))(qword_140C65688);
	(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		1i64,
		*(_QWORD*)(v15 + 72));
	if ((*(_DWORD*)(a1 + 132) & 0x8000000) != 0)
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 344i64))(qword_140C65670, 0i64);
	if (*(_QWORD*)(a1 + 4824))
	{
		LODWORD(v77) = 0;
		v16 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD*)qword_140C65670
			+ 256i64))(
				qword_140C65670,
				128i64,
				0i64,
				0i64,
				v77);
		if (v16)
		{
			v17 = *(__m128*)(a1 + 976);
			v18 = *(__m128*)(a1 + 1008);
			v19 = *(__m128*)(a1 + 960);
			v20 = _mm_unpackhi_ps(v19, v17);
			v21 = _mm_unpacklo_ps(v19, v17);
			v22 = *(__m128*)(a1 + 992);
			v23 = _mm_unpackhi_ps(v22, v18);
			v24 = _mm_unpacklo_ps(v22, v18);
			*v16 = _mm_shuffle_ps(v21, v24, 68);
			v16[1] = _mm_shuffle_ps(v21, v24, 238);
			v16[2] = _mm_shuffle_ps(v20, v23, 68);
			v25 = *(__m128*)(a1 + 1296);
			v26 = *(__m128*)(a1 + 1328);
			v27 = *(__m128*)(a1 + 1280);
			v28 = _mm_unpackhi_ps(v27, v25);
			v29 = _mm_unpacklo_ps(v27, v25);
			v30 = _mm_unpacklo_ps(*(__m128*)(a1 + 1312), v26);
			v31 = _mm_unpackhi_ps(*(__m128*)(a1 + 1312), v26);
			v16[3] = _mm_shuffle_ps(v29, v30, 68);
			v16[4] = _mm_shuffle_ps(v29, v30, 238);
			v16[5] = _mm_shuffle_ps(v28, v31, 68);
			v16[6] = _mm_shuffle_ps(v28, v31, 238);
			v16[7].m128_f32[0] = (float)*(int*)(*(_QWORD*)(a1 + 4808) + 36i64);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
		}
		v32 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
			qword_140C65670,
			96i64,
			0i64);
		if (v32)
		{
			*(_OWORD*)v32 = *(_OWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 232i64))(qword_140C65688);
			v33 = *(__m128*)(a1 + 1104);
			v34 = *(__m128*)(a1 + 1136);
			v35 = *(__m128*)(a1 + 1088);
			v36 = _mm_unpackhi_ps(v35, v33);
			v37 = _mm_unpacklo_ps(v35, v33);
			v38 = *(__m128*)(a1 + 1120);
			v39 = _mm_unpackhi_ps(v38, v34);
			v40 = _mm_unpacklo_ps(v38, v34);
			*(__m128*)(v32 + 16) = _mm_shuffle_ps(v37, v40, 68);
			*(__m128*)(v32 + 32) = _mm_shuffle_ps(v37, v40, 238);
			*(__m128*)(v32 + 48) = _mm_shuffle_ps(v36, v39, 68);
			*(_DWORD*)(v32 + 64) = *(_DWORD*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 64i64))(*(_QWORD*)(a1 + 24))
				+ 20);
			*(_OWORD*)(v32 + 80) = *(_OWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 248i64))(qword_140C65688);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
		}
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 320i64))(
			qword_140C65670,
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 184i64),
			0i64);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
			qword_140C65670,
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 192i64),
			0i64);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 336i64))(
			qword_140C65670,
			(unsigned int)(*(_DWORD*)(a1 + 4336) != 0) + 1);
		(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 304i64))(
			qword_140C65670,
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 216i64),
			18i64);
		v41 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 224i64))(
			qword_140C65670,
			8 * (unsigned int)*(_QWORD*)(a1 + 4824),
			18i64);
		if (v41)
		{
			for (j = 0i64; j < *(_QWORD*)(a1 + 4824); *(_QWORD*)(v41 + 8 * j - 8) = _mm_shuffle_ps(v45, v45, 136).m128_u64[0])
			{
				++j;
				v43 = *(_QWORD*)(*v3 + 8 * j - 8);
				v44 = _mm_mul_ps(
					_mm_sub_ps(
						_mm_div_ps(
							_mm_cvtepi32_ps(
								_mm_unpacklo_epi32(
									_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v43 + 8)), _mm_cvtsi32_si128(0)),
									_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v43 + 12)), _mm_cvtsi32_si128(0)))),
							(__m128)xmmword_140B7B490),
						(__m128)xmmword_140B7AC50),
					(__m128)xmmword_140B7B4B0);
				v45 = _mm_unpacklo_ps(_mm_unpacklo_ps(v44, _mm_shuffle_ps(v44, v44, 85)), (__m128)0i64);
			}
			(*(void(__fastcall**)(__int64, unsigned __int64, __int64))(*(_QWORD*)qword_140C65670 + 232i64))(
				qword_140C65670,
				j,
				v41);
		}
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 648i64))(
			qword_140C65670,
			4i64,
			0i64);
	}
	if (!*(_QWORD*)(a1 + 4800))
		return 0i64;
	v46 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 256i64))(
		qword_140C65670,
		112i64,
		0i64);
	if (v46)
	{
		v47 = *(__m128*)(a1 + 976);
		v48 = *(__m128*)(a1 + 1008);
		v49 = *(__m128*)(a1 + 960);
		v50 = _mm_unpackhi_ps(v49, v47);
		v51 = _mm_unpacklo_ps(v49, v47);
		v52 = *(__m128*)(a1 + 992);
		v53 = _mm_unpackhi_ps(v52, v48);
		v54 = _mm_unpacklo_ps(v52, v48);
		*v46 = _mm_shuffle_ps(v51, v54, 68);
		v46[1] = _mm_shuffle_ps(v51, v54, 238);
		v46[2] = _mm_shuffle_ps(v50, v53, 68);
		v55 = *(__m128*)(a1 + 1296);
		v56 = *(__m128*)(a1 + 1328);
		v57 = *(__m128*)(a1 + 1280);
		v58 = _mm_unpackhi_ps(v57, v55);
		v59 = _mm_unpacklo_ps(v57, v55);
		v60 = _mm_unpacklo_ps(*(__m128*)(a1 + 1312), v56);
		v61 = _mm_unpackhi_ps(*(__m128*)(a1 + 1312), v56);
		v46[3] = _mm_shuffle_ps(v59, v60, 68);
		v46[4] = _mm_shuffle_ps(v59, v60, 238);
		v46[5] = _mm_shuffle_ps(v58, v61, 68);
		v46[6] = _mm_shuffle_ps(v58, v61, 238);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
	}
	v62 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
		qword_140C65670,
		80i64,
		0i64);
	if (v62)
	{
		*(_OWORD*)v62 = *(_OWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 232i64))(qword_140C65688);
		v63 = *(__m128*)(a1 + 1104);
		v64 = *(__m128*)(a1 + 1136);
		v65 = *(__m128*)(a1 + 1088);
		v66 = _mm_unpackhi_ps(v65, v63);
		v67 = _mm_unpacklo_ps(v65, v63);
		v68 = *(__m128*)(a1 + 1120);
		v69 = _mm_unpackhi_ps(v68, v64);
		v70 = _mm_unpacklo_ps(v68, v64);
		*(__m128*)(v62 + 16) = _mm_shuffle_ps(v67, v70, 68);
		*(__m128*)(v62 + 32) = _mm_shuffle_ps(v67, v70, 238);
		*(__m128*)(v62 + 48) = _mm_shuffle_ps(v66, v69, 68);
		*(_OWORD*)(v62 + 64) = *(_OWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 248i64))(qword_140C65688);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 320i64))(
		qword_140C65670,
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 152i64),
		0i64);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 160i64),
		0i64);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 336i64))(
		qword_140C65670,
		2 - (unsigned int)(*(_DWORD*)(a1 + 4336) != 0));
	v71 = *(_QWORD*)(a1 + 4800);
	if (!v71)
		return 0i64;
	while (1)
	{
		v72 = *(_QWORD*)(*v1 + 8 * v71-- - 8);
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
			qword_140C65670,
			1i64,
			0i64);
		v73 = 0;
		if (*(_QWORD*)(v72 + 1032))
			break;
	LABEL_52:
		if (!v71)
			return 0i64;
	}
	v74 = 0i64;
	while (1)
	{
		v75 = *(_QWORD**)(*(_QWORD*)(v72 + 1040) + 8 * v74);
		if (v75)
		{
			result = sub_140393160(v75);
			if ((int)result < 0)
				return result;
		}
		v74 = ++v73;
		if ((unsigned __int64)v73 >= *(_QWORD*)(v72 + 1032))
			goto LABEL_52;
	}
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B490: using guessed type __int128 xmmword_140B7B490;
// 140B7B4B0: using guessed type __int128 xmmword_140B7B4B0;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65688: using guessed type __int64 qword_140C65688;

