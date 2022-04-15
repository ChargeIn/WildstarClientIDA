//----- (0000000140321360) ----------------------------------------------------
__int64 __fastcall sub_140321360(
	__int64 a1,
	__int64* a2,
	__m128* a3,
	__m128* a4,
	float a5,
	__m128* a6,
	float* a7,
	float a8,
	float a9,
	__m128* a10)
{
	__m128 v10; // xmm7
	float v15; // xmm8_4
	__m128 v16; // xmm7
	__m128 v17; // xmm15
	__m128 v18; // xmm1
	__m128 v19; // xmm3
	__m128 v20; // xmm5
	__m128 v21; // xmm4
	__m128 v22; // xmm1
	float v23; // xmm2_4
	float v24; // xmm0_4
	__m128 v25; // xmm2
	__m128 v26; // xmm5
	float v27; // xmm0_4
	__m128 v28; // xmm3
	__m128 v29; // xmm3
	__m128 v30; // xmm5
	__m128 v31; // xmm12
	float v32; // xmm12_4
	int v33; // ecx
	__int64 v34; // rdx
	unsigned int v35; // eax
	unsigned int v36; // edi
	__m128 v37; // xmm2
	__m128 v38; // xmm11
	__m128 v39; // xmm9
	float v40; // xmm0_4
	char v41; // al
	__m128 v42; // xmm15
	__m128 v43; // xmm0
	__m128 v44; // xmm6
	__m128 v45; // xmm0
	__m128 v46; // xmm7
	__m128* v47; // r14
	int v48; // eax
	double v49; // xmm11_8
	double v50; // xmm0_8
	__int64* v51; // rcx
	__int64 v52; // rax
	double v53; // xmm0_8
	__int64* v54; // rcx
	__int64 v55; // rax
	double v56; // xmm0_8
	__int64* v57; // rcx
	__int64 v58; // rax
	double v59; // xmm0_8
	float v60; // xmm6_4
	double v61; // xmm0_8
	float v62; // xmm7_4
	double v63; // xmm0_8
	float v64; // xmm3_4
	float v65; // xmm4_4
	float v66; // xmm5_4
	float v67; // xmm8_4
	float v68; // xmm7_4
	double v69; // xmm2_8
	float v70; // xmm0_4
	float v71; // xmm6_4
	float v72; // xmm6_4
	float v73; // xmm0_4
	float v74; // xmm6_4
	__int64 v75; // rax
	float v76; // xmm4_4
	float v77; // xmm1_4
	__int64 v78; // rax
	float v79; // xmm2_4
	float v80; // xmm2_4
	_DWORD* v81; // rcx
	__m128* v82; // r12
	__m128 v83; // xmm0
	__m128 v84; // xmm12
	__m128 v85; // xmm8
	__m128i v86; // xmm2
	__m128i v87; // xmm1
	__m128i v88; // xmm1
	__m128 v89; // xmm0
	float v90; // xmm4_4
	float v91; // xmm5_4
	float v92; // eax
	unsigned int v93; // edx
	unsigned int v94; // edx
	__int64 v95; // rax
	__m128 v96; // xmm1
	__m128 v97; // xmm6
	__m128 v98; // xmm2
	__m128 v99; // xmm3
	_DWORD* v100; // rcx
	__m128 v101; // xmm3
	__m128 v102; // xmm2
	__m128 v103; // xmm7
	__m128 v104; // xmm3
	__m128i v105; // xmm1
	__m128i v106; // xmm1
	__m128i v107; // xmm1
	__m128 v108; // xmm2
	__m128 v109; // xmm1
	__int64 v110; // r9
	unsigned int v111; // edx
	unsigned int v112; // edx
	__int64 v113; // rax
	__m128 v114; // xmm1
	__m128 v115; // xmm6
	__m128 v116; // xmm2
	__m128 v117; // xmm3
	_DWORD* v118; // rcx
	__m128 v119; // xmm3
	__m128i v120; // xmm1
	__m128i v121; // xmm1
	__m128i v122; // xmm1
	__m128 v123; // xmm2
	__int64 v124; // r8
	unsigned int v125; // ecx
	__int64 v126; // rax
	__m128 v127; // xmm6
	__m128 v128; // xmm2
	__m128 v129; // xmm3
	__int64 result; // rax
	float v131; // [rsp+28h] [rbp-E0h]
	__m128 v132; // [rsp+38h] [rbp-D0h] BYREF
	__m128 v133; // [rsp+48h] [rbp-C0h]
	__m128 v134; // [rsp+58h] [rbp-B0h]
	__m128i v135[11]; // [rsp+68h] [rbp-A0h] BYREF
	unsigned __int32 v136; // [rsp+168h] [rbp+60h]
	unsigned __int32 v137; // [rsp+170h] [rbp+68h]
	unsigned int v138; // [rsp+178h] [rbp+70h] BYREF
	float v139; // [rsp+180h] [rbp+78h]

	v15 = a5;
	v10.m128_f32[0] = a5;
	v16 = _mm_shuffle_ps(v10, v10, 0);
	v17 = (__m128)0x40400000u;
	v18 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(a4[5], a3[5]), v16), a3[5]);
	v19 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(a4[6], a3[6]), v16), a3[6]);
	v20 = (__m128)0x40400000u;
	v134 = v16;
	v133 = v18;
	v21 = _mm_sub_ps(v18, *a6);
	v22 = _mm_mul_ps(v19, v19);
	v23 = (float)(v22.m128_f32[0] + _mm_shuffle_ps(v22, v22, 85).m128_f32[0]) + _mm_shuffle_ps(v22, v22, 170).m128_f32[0];
	v24 = 1.0 / fsqrt(v23);
	v20.m128_f32[0] = 3.0 - (float)((float)(v23 * v24) * v24);
	v25 = _mm_mul_ps(v21, v21);
	v20.m128_f32[0] = fmaxf((float)(v20.m128_f32[0] * 0.5) * v24, 0.0);
	v25.m128_f32[0] = (float)(v25.m128_f32[0] + _mm_shuffle_ps(v25, v25, 85).m128_f32[0])
		+ _mm_shuffle_ps(v25, v25, 170).m128_f32[0];
	v26 = _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v19);
	v27 = fsqrt(v25.m128_f32[0]);
	v28 = (__m128)0x40400000u;
	v28.m128_f32[0] = fmaxf(
		(float)((float)(3.0 - (float)((float)(v25.m128_f32[0] * (float)(1.0 / v27)) * (float)(1.0 / v27)))
			* 0.5)
		* (float)(1.0 / v27),
		0.0);
	v29 = _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v21);
	v30 = _mm_sub_ps(
		_mm_mul_ps(_mm_shuffle_ps(v26, v26, 210), _mm_shuffle_ps(v29, v29, 201)),
		_mm_mul_ps(_mm_shuffle_ps(v26, v26, 201), _mm_shuffle_ps(v29, v29, 210)));
	if ((*(_BYTE*)(*(_QWORD*)(a1 + 1256) + 40i64) & 2) != 0)
	{
		v31 = _mm_mul_ps(v30, v30);
		v31.m128_f32[0] = fsqrt(
			(float)(v31.m128_f32[0] + _mm_shuffle_ps(v31, v31, 85).m128_f32[0])
			+ _mm_shuffle_ps(v31, v31, 170).m128_f32[0]);
		v32 = v31.m128_f32[0] + (float)((float)(*a7 - v31.m128_f32[0]) * 0.0);
		*a7 = v32;
	}
	else
	{
		v32 = 1.0;
	}
	v33 = a3[1].m128_i32[2];
	v38 = (__m128)a4->m128_u32[2];
	v39 = (__m128)a4->m128_u32[3];
	v34 = *(_QWORD*)(a1 + 1256);
	v35 = a4[1].m128_i32[2] - v33;
	LOWORD(v36) = 0;
	v39.m128_f32[0] = v39.m128_f32[0] - a3->m128_f32[3];
	v37 = _mm_mul_ps(v30, v30);
	v38.m128_f32[0] = (float)((float)(v38.m128_f32[0] - a3->m128_f32[2]) * v15) + a3->m128_f32[2];
	v138 = 0;
	v38.m128_f32[0] = v38.m128_f32[0] * a9;
	v39.m128_f32[0] = (float)(v39.m128_f32[0] * v15) + a3->m128_f32[3];
	v37.m128_f32[0] = (float)(v37.m128_f32[0] + _mm_shuffle_ps(v37, v37, 85).m128_f32[0])
		+ _mm_shuffle_ps(v37, v37, 170).m128_f32[0];
	a9 = 0.0;
	v40 = 1.0 / fsqrt(v37.m128_f32[0]);
	v137 = v38.m128_i32[0];
	v44 = (__m128)_mm_cvtsi32_si128(v35);
	v41 = *(_BYTE*)(v34 + 1072);
	v44.m128_u64[0] = _mm_cvtepi32_ps((__m128i)v44).m128_u64[0];
	v17.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v37.m128_f32[0] * v40) * v40)) * 0.5) * v40, 0.0);
	v42 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v30);
	v43 = _mm_sub_ps(a4[2], a3[2]);
	v44.m128_f32[0] = (float)((float)(v44.m128_f32[0] * v15) + (float)v33) * *(float*)(a1 + 1524);
	a5 = v44.m128_f32[0];
	v45 = _mm_mul_ps(v43, v16);
	v46 = (__m128)a4->m128_u32[1];
	v46.m128_f32[0] = (float)(v46.m128_f32[0] - a3->m128_f32[1]) * v15;
	v132 = _mm_add_ps(v45, a3[2]);
	v46.m128_f32[0] = v46.m128_f32[0] + a3->m128_f32[1];
	v136 = v46.m128_i32[0];
	if (v41)
	{
		if (v41 == 1)
		{
			v47 = (__m128*) & v138;
		}
		else if (v41 == 2)
		{
			v47 = (__m128*) & a9;
		}
		else
		{
			v47 = a6;
		}
		v48 = *(_DWORD*)(v34 + 40);
		v49 = *(double*)v44.m128_u64;
		if ((v48 & 0x1000) == 0)
			*(float*)&v49 = v44.m128_f32[0] * *(float*)(a1 + 1392);
		if ((v48 & 0x800) != 0)
		{
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 56) + 16i64))(*(_QWORD*)(a1 + 56), a3[1].m128_u32[1]);
			v50 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			v51 = *(__int64**)(a1 + 56);
			v52 = *v51;
			v139 = *(float*)&v50;
			v53 = (*(double(__fastcall**)(__int64*))(v52 + 56))(v51);
			v54 = *(__int64**)(a1 + 56);
			v55 = *v54;
			a8 = *(float*)&v53;
			v56 = (*(double(__fastcall**)(__int64*))(v55 + 56))(v54);
			v57 = *(__int64**)(a1 + 56);
			v58 = *v57;
			LODWORD(a6) = LODWORD(v56);
			v59 = (*(double(__fastcall**)(__int64*))(v58 + 56))(v57);
			v60 = *(float*)&v59;
			v61 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			v62 = *(float*)&v61;
			v63 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
			v64 = *(float*)(a1 + 1200);
			HIDWORD(v69) = HIDWORD(v49);
			v65 = *(float*)&v63;
			v66 = (float)*(int*)(a1 + 1336);
			*(float*)&v69 = (float)((float)(*(float*)&v49 * 1.5) * v64) + v62;
			v131 = (float)((float)((float)(*(float*)&v49 * 2.0) * v64) + v60)
				+ (float)((float)(*(float*)(a1 + 1232) * 2.0) * v66);
			LODWORD(v63) = *(_DWORD*)(a1 + 1232);
			*(float*)&v49 = (float)((float)((float)(*(float*)&v49 * 0.89999998) * v64) + v65)
				+ (float)((float)(*(float*)&v63 * 0.89999998) * v66);
			v67 = v139;
			v68 = (float)(a8 + v139) + *(float*)&a6;
			*(float*)&v69 = *(float*)&v69 + (float)((float)(*(float*)&v63 * 1.5) * v66);
			if (v68 == 0.0)
			{
				v44.m128_f32[0] = a5;
				v46 = (__m128)v136;
				v47->m128_i32[0] = 0;
			}
			else
			{
				v70 = sub_1408FE3D0(v69);
				v71 = v70 * a8;
				v72 = v71 + (float)(sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)LODWORD(v131))) * v67);
				v73 = sub_1408FE3D0(v49);
				v74 = (float)((float)(v72 + (float)(v73 * *(float*)&a6)) * *(float*)(a1 + 1216)) / v68;
				v46 = (__m128)v136;
				v47->m128_f32[0] = v74;
				v44.m128_f32[0] = a5;
			}
		}
		else
		{
			v47->m128_f32[0] = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(
				(float)((float)*(int*)(a1 + 1336)
					* *(float*)(a1 + 1232))
				+ (float)(*(float*)&v49 * *(float*)(a1 + 1200)))))
				* *(float*)(a1 + 1216);
		}
		v75 = *(_QWORD*)(a1 + 1256);
		v76 = v47->m128_f32[0];
		if ((*(_DWORD*)(v75 + 40) & 0x2000) != 0)
		{
			v77 = *(float*)(v75 + 948) == 0.0
				? 0.0
				: fabs((float)(v39.m128_f32[0] - *(float*)(*(_QWORD*)(a1 + 1416) + 12i64)) * *(float*)(a1 + 1528));
			if (v77 < *(float*)(a1 + 1184))
				v47->m128_f32[0] = fmaxf(0.0, fminf(v77 * *(float*)(a1 + 1520), 1.0)) * v76;
		}
		v78 = *(_QWORD*)(a1 + 1256);
		if ((*(_DWORD*)(v78 + 40) & 0x4000) != 0)
		{
			v79 = *(float*)(v78 + 948) == 0.0
				? 0.0
				: fabs((float)(v39.m128_f32[0] - *(float*)(*(_QWORD*)(a1 + 1424) + 12i64)) * *(float*)(a1 + 1528));
			if (v79 < *(float*)(a1 + 1184))
			{
				v80 = fmaxf(0.0, fminf(v79 * *(float*)(a1 + 1520), 1.0)) * v76;
				if (fabs(v80) < fabs(v47->m128_f32[0]))
					v47->m128_f32[0] = v80;
			}
		}
		v38 = (__m128)v137;
	}
	v81 = (_DWORD*)*a2;
	v82 = a10;
	v38.m128_f32[0] = (float)(v38.m128_f32[0] * 0.5) * v32;
	v83 = v38;
	v84 = (__m128)v138;
	v83.m128_f32[0] = v38.m128_f32[0] + a9;
	v85 = _mm_mul_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)v132.m128_u32[0], (__m128)v132.m128_u32[2]),
			_mm_unpacklo_ps((__m128)v132.m128_u32[1], v46)),
		*a10);
	v86 = (__m128i)_mm_sub_ps(v133, _mm_mul_ps(_mm_shuffle_ps(v83, v83, 0), v42));
	v135[0] = (__m128i)v85;
	*v81 = _mm_cvtsi128_si32(v86);
	v81[1] = _mm_cvtsi128_si32(_mm_srli_si128(v86, 4));
	v81[2] = _mm_cvtsi128_si32(_mm_srli_si128(v86, 8));
	v87 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, v85), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v89 = v84;
	v88 = _mm_packus_epi16(v87, v87);
	*(_DWORD*)(*a2 + 12) = _mm_cvtsi128_si32(_mm_packus_epi16(v88, v88));
	v89.m128_f32[0] = v84.m128_f32[0] + *(float*)(a1 + 1400);
	sub_1401C96D0(&a8, v39.m128_f32[0] + *(float*)(a1 + 1396));
	sub_1401C96D0((_WORD*)&a8 + 1, v89.m128_f32[0]);
	v92 = a8;
	a8 = v44.m128_f32[0];
	v93 = v44.m128_i32[0] & 0x7FFFFFFF;
	*(float*)(*a2 + 16) = v92;
	if ((v44.m128_i32[0] & 0x7FFFFFFFu) >= 0x33800000)
	{
		if (v93 > 0x387FEFFF)
		{
			if (v93 > 0x47FFEFFF)
				LOWORD(v94) = 17407;
			else
				v94 = (v93 - 939520000) >> 13;
		}
		else
		{
			v94 = (((v44.m128_i32[0] & 0x7FFFFF | 0x800000u) >> (113 - (v93 >> 23))) + 4096) >> 13;
		}
	}
	else
	{
		LOWORD(v94) = 0;
	}
	*(_WORD*)(*a2 + 20) = v44.m128_i16[1] & 0x8000 | v94;
	v95 = *(_QWORD*)(a1 + 1256);
	if (*(_WORD*)(v95 + 1028))
	{
		if ((*(_BYTE*)(v95 + 40) & 4) != 0)
		{
			v96 = v39;
			v96.m128_f32[0] = (float)(v39.m128_f32[0] - *(float*)(a1 + 1296)) * *(float*)(a1 + 1300);
			v97 = v96;
		}
		else
		{
			v97 = v39;
		}
		v44 = _mm_unpacklo_ps(_mm_unpacklo_ps(v97, (__m128)0x3F800000u), (__m128)0i64);
		sub_140325540((_WORD*)(*a2 + 22), (unsigned int*)(a1 + 1168));
		v98 = _mm_mul_ps(*(__m128*)(a1 + 1456), v44);
		v98.m128_f32[0] = (float)(v98.m128_f32[0] + _mm_shuffle_ps(v98, v98, 85).m128_f32[0])
			+ _mm_shuffle_ps(v98, v98, 170).m128_f32[0];
		v99 = _mm_mul_ps(*(__m128*)(a1 + 1440), v44);
		v89 = 0i64;
		v99.m128_f32[0] = (float)(v99.m128_f32[0] + _mm_shuffle_ps(v99, v99, 85).m128_f32[0])
			+ _mm_shuffle_ps(v99, v99, 170).m128_f32[0];
		v132 = _mm_unpacklo_ps(_mm_unpacklo_ps(v99, (__m128)0i64), _mm_unpacklo_ps(v98, (__m128)0i64));
		sub_1401C95B0(&a8, (__m128i*) & v132);
		v44.m128_f32[0] = a5;
		v90 = a9;
		v91 = 0.5;
		*(float*)(*a2 + 24) = a8;
	}
	*a2 += *(unsigned int*)(a1 + 1432);
	v100 = (_DWORD*)*a2;
	if ((*(_BYTE*)(*(_QWORD*)(a1 + 1256) + 40i64) & 0x20) != 0)
	{
		v101 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(a4[3], a3[3]), v134), a3[3]);
		v89 = _mm_shuffle_ps(v101, v101, 170);
		v102 = (__m128)xmmword_140B7AC50;
		v103 = _mm_mul_ps(
			_mm_unpacklo_ps(_mm_unpacklo_ps(v101, v89), _mm_unpacklo_ps(_mm_shuffle_ps(v101, v101, 85), v46)),
			*v82);
		v85 = _mm_mul_ps(_mm_add_ps(v103, (__m128)v135[0]), (__m128)xmmword_140B7AC50);
	}
	else
	{
		v103 = (__m128)v135[0];
		v102 = (__m128)xmmword_140B7AC50;
	}
	v89.m128_f32[0] = v90;
	v104 = v39;
	v105 = (__m128i)_mm_sub_ps(v133, _mm_mul_ps(_mm_shuffle_ps(v89, v89, 0), v42));
	*v100 = _mm_cvtsi128_si32(v105);
	v100[1] = _mm_cvtsi128_si32(_mm_srli_si128(v105, 4));
	v100[2] = _mm_cvtsi128_si32(_mm_srli_si128(v105, 8));
	v106 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, v85), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				v102)),
		198);
	v107 = _mm_packus_epi16(v106, v106);
	*(_DWORD*)(*a2 + 12) = _mm_cvtsi128_si32(_mm_packus_epi16(v107, v107));
	v108 = (__m128) * (unsigned int*)(a1 + 1400);
	v104.m128_f32[0] = v39.m128_f32[0] + *(float*)(a1 + 1396);
	v109 = 0i64;
	v108.m128_f32[0] = (float)(v108.m128_f32[0] + v91) + v84.m128_f32[0];
	v135[0] = (__m128i)_mm_unpacklo_ps(_mm_unpacklo_ps(v104, (__m128)0i64), _mm_unpacklo_ps(v108, (__m128)0i64));
	sub_1401C95B0(&a8, v135);
	*(float*)(*a2 + 16) = a8;
	v110 = *a2;
	a8 = v44.m128_f32[0];
	v111 = v44.m128_i32[0] & 0x7FFFFFFF;
	if ((v44.m128_i32[0] & 0x7FFFFFFFu) >= 0x33800000)
	{
		if (v111 > 0x387FEFFF)
		{
			if (v111 > 0x47FFEFFF)
				LOWORD(v112) = 17407;
			else
				v112 = (v111 - 939520000) >> 13;
		}
		else
		{
			v112 = (((v44.m128_i32[0] & 0x7FFFFF | 0x800000u) >> (113 - (v111 >> 23))) + 4096) >> 13;
		}
	}
	else
	{
		LOWORD(v112) = 0;
	}
	*(_WORD*)(v110 + 20) = v44.m128_i16[1] & 0x8000 | v112;
	v113 = *(_QWORD*)(a1 + 1256);
	if (*(_WORD*)(v113 + 1028))
	{
		if ((*(_BYTE*)(v113 + 40) & 4) != 0)
		{
			v114 = v39;
			v114.m128_f32[0] = (float)(v39.m128_f32[0] - *(float*)(a1 + 1296)) * *(float*)(a1 + 1300);
			v115 = v114;
		}
		else
		{
			v115 = v39;
		}
		v44 = _mm_unpacklo_ps(_mm_unpacklo_ps(v115, (__m128)0x3F800000u), (__m128)xmmword_140B7A310);
		sub_140325540((_WORD*)(*a2 + 22), (unsigned int*)(a1 + 1168));
		v116 = _mm_mul_ps(*(__m128*)(a1 + 1456), v44);
		v116.m128_f32[0] = (float)(v116.m128_f32[0] + _mm_shuffle_ps(v116, v116, 85).m128_f32[0])
			+ _mm_shuffle_ps(v116, v116, 170).m128_f32[0];
		v117 = _mm_mul_ps(*(__m128*)(a1 + 1440), v44);
		v117.m128_f32[0] = (float)(v117.m128_f32[0] + _mm_shuffle_ps(v117, v117, 85).m128_f32[0])
			+ _mm_shuffle_ps(v117, v117, 170).m128_f32[0];
		v109 = 0i64;
		v135[0] = (__m128i)_mm_unpacklo_ps(_mm_unpacklo_ps(v117, (__m128)0i64), _mm_unpacklo_ps(v116, (__m128)0i64));
		sub_1401C95B0(&a8, v135);
		v44.m128_f32[0] = a5;
		*(float*)(*a2 + 24) = a8;
	}
	*a2 += *(unsigned int*)(a1 + 1432);
	v118 = (_DWORD*)*a2;
	if ((*(_BYTE*)(*(_QWORD*)(a1 + 1256) + 40i64) & 0x20) != 0)
		v85 = v103;
	v119 = v39;
	v109.m128_f32[0] = v38.m128_f32[0] - a9;
	v120 = (__m128i)_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v109, v109, 0), v42), v133);
	*v118 = _mm_cvtsi128_si32(v120);
	v118[1] = _mm_cvtsi128_si32(_mm_srli_si128(v120, 4));
	v118[2] = _mm_cvtsi128_si32(_mm_srli_si128(v120, 8));
	v121 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps((__m128)0i64, v85), (__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v122 = _mm_packus_epi16(v121, v121);
	*(_DWORD*)(*a2 + 12) = _mm_cvtsi128_si32(_mm_packus_epi16(v122, v122));
	v123 = (__m128) * (unsigned int*)(a1 + 1400);
	v119.m128_f32[0] = v39.m128_f32[0] + *(float*)(a1 + 1396);
	v123.m128_f32[0] = (float)(v123.m128_f32[0] + 1.0) + v84.m128_f32[0];
	v135[0] = (__m128i)_mm_unpacklo_ps(_mm_unpacklo_ps(v119, (__m128)0i64), _mm_unpacklo_ps(v123, (__m128)0i64));
	sub_1401C95B0(&a5, v135);
	*(float*)(*a2 + 16) = a5;
	v124 = *a2;
	a5 = v44.m128_f32[0];
	v125 = v44.m128_i32[0] & 0x7FFFFFFF;
	if ((v44.m128_i32[0] & 0x7FFFFFFFu) >= 0x33800000)
	{
		if (v125 > 0x387FEFFF)
		{
			if (v125 > 0x47FFEFFF)
				LOWORD(v36) = 17407;
			else
				v36 = (v125 - 939520000) >> 13;
		}
		else
		{
			v36 = (((v44.m128_i32[0] & 0x7FFFFF | 0x800000u) >> (113 - (v125 >> 23))) + 4096) >> 13;
		}
	}
	*(_WORD*)(v124 + 20) = v44.m128_i16[1] & 0x8000 | v36;
	v126 = *(_QWORD*)(a1 + 1256);
	if (*(_WORD*)(v126 + 1028))
	{
		if ((*(_BYTE*)(v126 + 40) & 4) != 0)
			v39.m128_f32[0] = (float)(v39.m128_f32[0] - *(float*)(a1 + 1296)) * *(float*)(a1 + 1300);
		v127 = _mm_unpacklo_ps(_mm_unpacklo_ps(v39, (__m128)0x3F800000u), (__m128)xmmword_140B7A330);
		sub_140325540((_WORD*)(*a2 + 22), (unsigned int*)(a1 + 1168));
		v128 = _mm_mul_ps(*(__m128*)(a1 + 1456), v127);
		v128.m128_f32[0] = (float)(v128.m128_f32[0] + _mm_shuffle_ps(v128, v128, 85).m128_f32[0])
			+ _mm_shuffle_ps(v128, v128, 170).m128_f32[0];
		v129 = _mm_mul_ps(*(__m128*)(a1 + 1440), v127);
		v129.m128_f32[0] = (float)(v129.m128_f32[0] + _mm_shuffle_ps(v129, v129, 85).m128_f32[0])
			+ _mm_shuffle_ps(v129, v129, 170).m128_f32[0];
		v135[0] = (__m128i)_mm_unpacklo_ps(_mm_unpacklo_ps(v129, (__m128)0i64), _mm_unpacklo_ps(v128, (__m128)0i64));
		sub_1401C95B0(&a5, v135);
		*(float*)(*a2 + 24) = a5;
	}
	result = *(unsigned int*)(a1 + 1432);
	*a2 += result;
	return result;
}
// 1403213F7: variable 'v10' is possibly undefined
// 140321C57: variable 'v90' is possibly undefined
// 140321CDC: variable 'v91' is possibly undefined
// 140B7A310: using guessed type __int128 xmmword_140B7A310;
// 140B7A330: using guessed type __int128 xmmword_140B7A330;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;

