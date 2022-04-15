//----- (00000001407B64C0) ----------------------------------------------------
__int64 __fastcall sub_1407B64C0(__int64 a1, __m128* a2, __m128* a3, int a4)
{
	int v5; // r11d
	__m128 v6; // xmm1
	__m128 v7; // xmm2
	float v8; // xmm9_4
	__m128 v9; // xmm7
	__m128 v10; // xmm8
	float v11; // xmm1_4
	float v12; // xmm0_4
	float v13; // xmm3_4
	float v14; // xmm5_4
	float v15; // xmm0_4
	float v16; // xmm6_4
	float v17; // xmm2_4
	float v18; // xmm0_4
	float v19; // xmm0_4
	__m128* v20; // r14
	__m128 v21; // xmm2
	__m128 v22; // xmm1
	__m128* v23; // r13
	unsigned int v24; // ebx
	__m128* v25; // r15
	__int64 v26; // rdx
	__m128 v27; // xmm0
	float v28; // xmm5_4
	__m128 v29; // xmm3
	__m128 v30; // xmm13
	__m128 v31; // xmm2
	float v32; // xmm0_4
	float v33; // xmm5_4
	float v34; // xmm3_4
	float v35; // xmm1_4
	float v36; // xmm0_4
	float v37; // xmm3_4
	float v38; // xmm2_4
	float v39; // xmm3_4
	float v40; // xmm1_4
	float v41; // xmm0_4
	float v42; // xmm3_4
	float v43; // xmm2_4
	float v44; // xmm3_4
	float v45; // xmm0_4
	float v46; // xmm3_4
	float v47; // xmm2_4
	float v48; // xmm3_4
	float v49; // xmm1_4
	float v50; // xmm0_4
	float v51; // xmm3_4
	float v52; // xmm2_4
	float v53; // xmm3_4
	float v54; // xmm1_4
	float v55; // xmm0_4
	float v56; // xmm3_4
	float v57; // xmm2_4
	float v58; // xmm3_4
	float v59; // xmm0_4
	float v60; // xmm3_4
	float v61; // xmm2_4
	float v62; // xmm3_4
	float v63; // xmm1_4
	float v64; // xmm0_4
	float v65; // xmm3_4
	float v66; // xmm2_4
	float v67; // xmm3_4
	float v68; // xmm1_4
	float v69; // xmm0_4
	float v70; // xmm3_4
	float v71; // xmm1_4
	int v72; // ecx
	float v73; // xmm2_4
	int v74; // ecx
	float v75; // xmm1_4
	int v76; // ecx
	float v77; // xmm2_4
	int v78; // ecx
	float v79; // xmm1_4
	int v80; // ecx
	float v81; // xmm2_4
	int v82; // ecx
	float v83; // xmm3_4
	float v84; // xmm4_4
	__m128 v85; // xmm0
	__m128 v86; // xmm1
	__m128 v87; // xmm0
	__m128 v88; // xmm2
	float v89; // xmm4_4
	__m128 v90; // xmm0
	__m128 v91; // xmm1
	__m128 v92; // xmm0
	__m128 v93; // xmm2
	__m128i v94; // xmm2
	__m128* v95; // r9
	__m128* v96; // r10
	__int64 v97; // rcx
	unsigned int v98; // r11d
	unsigned __int64 v99; // rdi
	__int64 v100; // rbx
	__m128* v101; // rax
	__int64 v102; // rdx
	__m128 v103; // xmm1
	bool v104; // zf
	__m128 v105; // xmm1
	__m128 v106; // xmm1
	__m128 v107; // xmm6
	__m128 v108; // xmm0
	__m128 v109; // xmm4
	__m128 v110; // xmm0
	__m128 v111; // xmm2
	__m128 v113; // [rsp+30h] [rbp-D0h]
	__m128 v114; // [rsp+40h] [rbp-C0h] BYREF
	__m128 v115; // [rsp+50h] [rbp-B0h]
	__m128 v116; // [rsp+60h] [rbp-A0h]
	__m128* v117; // [rsp+70h] [rbp-90h] BYREF
	__int64 v118; // [rsp+78h] [rbp-88h]

	v5 = a4;
	if (*(_DWORD*)(a1 + 304))
		v5 = a4 | 4;
	v6 = *a2;
	v7 = *(__m128*)(a1 + 416);
	v8 = *(float*)(a1 + 864);
	v9 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), *(__m128*)(a1 + 544)),
					_mm_mul_ps(_mm_shuffle_ps(v6, v6, 85), *(__m128*)(a1 + 560))),
				_mm_mul_ps(_mm_shuffle_ps(v6, v6, 170), *(__m128*)(a1 + 576))),
			*(__m128*)(a1 + 592)),
		v7);
	v10 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 0), *(__m128*)(a1 + 544)),
					_mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 85), *(__m128*)(a1 + 560))),
				_mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 170), *(__m128*)(a1 + 576))),
			*(__m128*)(a1 + 592)),
		v7);
	if (a2->m128_f32[0] < v8)
		goto LABEL_18;
	v11 = *(float*)(a1 + 880);
	if (a2->m128_f32[0] >= v11)
		goto LABEL_18;
	v12 = a2->m128_f32[1];
	v13 = *(float*)(a1 + 868);
	if (v12 < v13)
		goto LABEL_18;
	v14 = *(float*)(a1 + 884);
	if (v12 >= v14)
		goto LABEL_18;
	v15 = a2->m128_f32[2];
	v16 = *(float*)(a1 + 872);
	if (v15 < v16)
		goto LABEL_18;
	v17 = *(float*)(a1 + 888);
	if (v15 < v17
		&& a3->m128_f32[0] >= v8
		&& a3->m128_f32[0] < v11
		&& (v18 = a3->m128_f32[1], v18 >= v13)
		&& v18 < v14
		&& (v19 = a3->m128_f32[2], v19 >= v16)
		&& v19 < v17
		&& (v20 = (__m128*)(a1 + 672),
			v21 = _mm_sub_ps(
				*(__m128*)(a1 + 448),
				_mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 672), (__m128) * (unsigned int*)(a1 + 712)),
					_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 692), (__m128)0i64))),
			v22 = _mm_mul_ps(v21, v21),
			(float)((float)(v22.m128_f32[0] + _mm_shuffle_ps(v22, v22, 85).m128_f32[0])
				+ _mm_shuffle_ps(v22, v22, 170).m128_f32[0]) < *(float*)&dword_140C3C7A8)
		&& *(_DWORD*)(a1 + 896) == v5)
	{
		v23 = (__m128*)(a1 + 736);
		v118 = a1 + 544;
		v24 = 0;
		v117 = (__m128*)(a1 + 736);
		sub_1401AFB10(&v117, (__m128*)(a1 + 608));
		v25 = (__m128*)(a1 + 800);
		v117 = (__m128*)(a1 + 480);
		v118 = a1 + 800;
		sub_1401AFB10(&v117, v20);
	}
	else
	{
	LABEL_18:
		v26 = a1 + 480;
		v24 = 1;
		v27 = _mm_mul_ps(*(__m128*)(a1 + 464), (__m128)xmmword_140B7B2A0);
		v28 = *(float*)(a1 + 480);
		v29 = (__m128) * (unsigned int*)(a1 + 528);
		v30 = _mm_mul_ps(_mm_add_ps(v9, v10), (__m128)xmmword_140B7AC50);
		v31 = _mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 532), (__m128)0i64);
		v116 = _mm_add_ps(v27, _mm_max_ps(_mm_max_ps((__m128)xmmword_140C798D0, v9), v10));
		v115 = _mm_sub_ps(_mm_min_ps(_mm_min_ps((__m128)xmmword_140C798C0, v9), v10), v27);
		v114 = _mm_unpacklo_ps(_mm_unpacklo_ps(v29, (__m128) * (unsigned int*)(a1 + 536)), v31);
		v113 = v114;
		if (v28 <= 0.0)
		{
			v32 = v28 * v116.m128_f32[0];
			v33 = v28 * v115.m128_f32[0];
		}
		else
		{
			v32 = v28 * v115.m128_f32[0];
			v33 = v28 * v116.m128_f32[0];
		}
		v34 = *(float*)(a1 + 496);
		v35 = v114.m128_f32[0] + v32;
		if (v34 <= 0.0)
		{
			v36 = v34 * v116.m128_f32[1];
			v37 = v34 * v115.m128_f32[1];
		}
		else
		{
			v36 = v34 * v115.m128_f32[1];
			v37 = v34 * v116.m128_f32[1];
		}
		v38 = (float)(v114.m128_f32[0] + v33) + v37;
		v39 = *(float*)(a1 + 512);
		v40 = v35 + v36;
		if (v39 <= 0.0)
		{
			v41 = v39 * v116.m128_f32[2];
			v42 = v39 * v115.m128_f32[2];
		}
		else
		{
			v41 = v39 * v115.m128_f32[2];
			v42 = v39 * v116.m128_f32[2];
		}
		v43 = v38 + v42;
		v44 = *(float*)(a1 + 484);
		v113.m128_f32[0] = v43;
		v114.m128_f32[0] = v40 + v41;
		if (v44 <= 0.0)
		{
			v45 = v44 * v116.m128_f32[0];
			v46 = v44 * v115.m128_f32[0];
		}
		else
		{
			v45 = v44 * v115.m128_f32[0];
			v46 = v44 * v116.m128_f32[0];
		}
		v47 = v113.m128_f32[1] + v46;
		v48 = *(float*)(a1 + 500);
		v49 = v114.m128_f32[1] + v45;
		if (v48 <= 0.0)
		{
			v50 = v48 * v116.m128_f32[1];
			v51 = v48 * v115.m128_f32[1];
		}
		else
		{
			v50 = v48 * v115.m128_f32[1];
			v51 = v48 * v116.m128_f32[1];
		}
		v52 = v47 + v51;
		v53 = *(float*)(a1 + 516);
		v54 = v49 + v50;
		if (v53 <= 0.0)
		{
			v55 = v53 * v116.m128_f32[2];
			v56 = v53 * v115.m128_f32[2];
		}
		else
		{
			v55 = v53 * v115.m128_f32[2];
			v56 = v53 * v116.m128_f32[2];
		}
		v57 = v52 + v56;
		v58 = *(float*)(a1 + 488);
		v113.m128_f32[1] = v57;
		v114.m128_f32[1] = v54 + v55;
		if (v58 <= 0.0)
		{
			v59 = v58 * v116.m128_f32[0];
			v60 = v58 * v115.m128_f32[0];
		}
		else
		{
			v59 = v58 * v115.m128_f32[0];
			v60 = v58 * v116.m128_f32[0];
		}
		v61 = v113.m128_f32[2] + v60;
		v62 = *(float*)(a1 + 504);
		v63 = v114.m128_f32[2] + v59;
		if (v62 <= 0.0)
		{
			v64 = v62 * v116.m128_f32[1];
			v65 = v62 * v115.m128_f32[1];
		}
		else
		{
			v64 = v62 * v115.m128_f32[1];
			v65 = v62 * v116.m128_f32[1];
		}
		v66 = v61 + v65;
		v67 = *(float*)(a1 + 520);
		v68 = v63 + v64;
		if (v67 <= 0.0)
		{
			v69 = v67 * v116.m128_f32[2];
			v70 = v67 * v115.m128_f32[2];
		}
		else
		{
			v69 = v67 * v115.m128_f32[2];
			v70 = v67 * v116.m128_f32[2];
		}
		v114.m128_f32[2] = v68 + v69;
		v71 = v114.m128_f32[0];
		v113.m128_f32[2] = v66 + v70;
		v115 = v114;
		v72 = (int)v114.m128_f32[0];
		v116 = v113;
		if ((int)v114.m128_f32[0] != 0x80000000 && (float)v72 != v114.m128_f32[0])
			v71 = (float)(v72 - (_mm_movemask_ps(_mm_unpacklo_ps(v114, v114)) & 1));
		v73 = v115.m128_f32[1];
		v115.m128_f32[0] = v71;
		v74 = (int)v115.m128_f32[1];
		if ((int)v115.m128_f32[1] != 0x80000000 && (float)v74 != v115.m128_f32[1])
			v73 = (float)(v74 - (_mm_movemask_ps(_mm_unpacklo_ps((__m128)v115.m128_u32[1], (__m128)v115.m128_u32[1])) & 1));
		v75 = v115.m128_f32[2];
		v115.m128_f32[1] = v73;
		v76 = (int)v115.m128_f32[2];
		if ((int)v115.m128_f32[2] != 0x80000000 && (float)v76 != v115.m128_f32[2])
			v75 = (float)(v76 - (_mm_movemask_ps(_mm_unpacklo_ps((__m128)v115.m128_u32[2], (__m128)v115.m128_u32[2])) & 1));
		v77 = v116.m128_f32[0];
		v115.m128_f32[2] = v75;
		v78 = (int)v116.m128_f32[0];
		if ((int)v116.m128_f32[0] != 0x80000000 && (float)v78 != v116.m128_f32[0])
			v77 = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps((__m128)v116.m128_u32[0], (__m128)v116.m128_u32[0])) & 1) + v78);
		v79 = v116.m128_f32[1];
		v116.m128_f32[0] = v77;
		v80 = (int)v116.m128_f32[1];
		if ((int)v116.m128_f32[1] != 0x80000000 && (float)v80 != v116.m128_f32[1])
			v79 = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps((__m128)v116.m128_u32[1], (__m128)v116.m128_u32[1])) & 1) + v80);
		v81 = v116.m128_f32[2];
		v116.m128_f32[1] = v79;
		v82 = (int)v116.m128_f32[2];
		if ((int)v116.m128_f32[2] != 0x80000000 && (float)v82 != v116.m128_f32[2])
			v81 = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps((__m128)v116.m128_u32[2], (__m128)v116.m128_u32[2])) & 1) + v82);
		v83 = *(float*)(a1 + 468);
		v84 = *(float*)(a1 + 472);
		v20 = (__m128*)(a1 + 672);
		v23 = (__m128*)(a1 + 736);
		v85 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 464), (__m128) * (unsigned int*)(a1 + 464), 0);
		v86 = _mm_mul_ps(*(__m128*)ymmword_140C78410.m256_f32, v85);
		v116.m128_f32[2] = v81;
		v85.m128_f32[0] = v83;
		v87 = _mm_shuffle_ps(v85, v85, 0);
		*(__m128*)(a1 + 608) = v86;
		v88 = _mm_mul_ps(*(__m128*) & ymmword_140C78410.m256_f32[4], v87);
		v87.m128_f32[0] = v84;
		*(__m128*)(a1 + 624) = v88;
		*(__m128*)(a1 + 640) = _mm_mul_ps((__m128)xmmword_140C78430, _mm_shuffle_ps(v87, v87, 0));
		*(_OWORD*)(a1 + 656) = xmmword_140C78440;
		*(_DWORD*)(a1 + 656) = _mm_cvtsi128_si32((__m128i)v30);
		*(_DWORD*)(a1 + 660) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v30, 4));
		*(_DWORD*)(a1 + 664) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v30, 8));
		v89 = *(float*)(a1 + 456);
		v90 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 448), (__m128) * (unsigned int*)(a1 + 448), 0);
		v91 = _mm_mul_ps(*(__m128*)ymmword_140C78410.m256_f32, v90);
		v90.m128_f32[0] = *(float*)(a1 + 452);
		v92 = _mm_shuffle_ps(v90, v90, 0);
		*(__m128*)(a1 + 672) = v91;
		v93 = _mm_mul_ps(*(__m128*) & ymmword_140C78410.m256_f32[4], v92);
		v92.m128_f32[0] = v89;
		*(__m128*)(a1 + 688) = v93;
		*(__m128*)(a1 + 704) = _mm_mul_ps((__m128)xmmword_140C78430, _mm_shuffle_ps(v92, v92, 0));
		*(_OWORD*)(a1 + 720) = xmmword_140C78440;
		v94 = (__m128i)_mm_sub_ps((__m128)0i64, _mm_mul_ps(*(__m128*)(a1 + 448), v30));
		*(_DWORD*)(a1 + 720) = _mm_cvtsi128_si32(v94);
		v118 = v26;
		*(_DWORD*)(a1 + 724) = _mm_cvtsi128_si32(_mm_srli_si128(v94, 4));
		*(_DWORD*)(a1 + 728) = _mm_cvtsi128_si32(_mm_srli_si128(v94, 8));
		v117 = (__m128*)(a1 + 608);
		sub_1401AFB10(&v117, (__m128*)(a1 + 736));
		v25 = (__m128*)(a1 + 800);
		v117 = v95;
		v118 = a1 + 672;
		sub_1401AFB10(&v117, (__m128*)(a1 + 800));
		*v96 = v115;
		v96[1] = v116;
		v97 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(a1 + 896) = v98;
		if ((*(int(__fastcall**)(__int64, __m128*, _QWORD, __m128*, _QWORD))(*(_QWORD*)v97 + 416i64))(
			v97,
			v96,
			v98,
			&v114,
			0i64) >= 0)
		{
			v99 = 3 * (*(unsigned int (**)(void))(*(_QWORD*)v114.m128_u64[0] + 16i64))();
			sub_1402626B0((__int64*)(a1 + 904), v99);
			v100 = *(_QWORD*)(a1 + 904);
			v101 = (__m128*)(*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)v114.m128_u64[0] + 24i64))(v114.m128_u64[0]);
			sub_1401ADE90(v100, v102, v101, 16i64, (__m128*)(a1 + 800), v99);
			(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v114.m128_u64[0] + 8i64))(v114.m128_u64[0]);
			v24 = 1;
		}
		*(_DWORD*)(a1 + 352) = 0;
	}
	*(__m128*)(a1 + 368) = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v9, v9, 85), v20[1]),
				_mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), *v20)),
			_mm_mul_ps(_mm_shuffle_ps(v9, v9, 170), v20[2])),
		v20[3]);
	v103 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), *v20), _mm_mul_ps(_mm_shuffle_ps(v10, v10, 85), v20[1])),
			_mm_mul_ps(_mm_shuffle_ps(v10, v10, 170), v20[2])),
		v20[3]);
	*(__m128*)(a1 + 384) = v103;
	*(__m128*)(a1 + 400) = _mm_sub_ps(v103, *(__m128*)(a1 + 368));
	v104 = *(_DWORD*)(a1 + 308) == 0;
	*(_DWORD*)(a1 + 356) = 0;
	if (!v104)
	{
		v105 = *(__m128*)(a1 + 320);
		*(__m128*)(a1 + 1184) = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v105, v105, 85), v25[1]),
					_mm_mul_ps(_mm_shuffle_ps(v105, v105, 0), *v25)),
				_mm_mul_ps(_mm_shuffle_ps(v105, v105, 170), v25[2])),
			v25[3]);
		v106 = *(__m128*)(a1 + 336);
		v107 = _mm_unpackhi_ps(*v23, v23[1]);
		v108 = v23[2];
		v109 = _mm_unpackhi_ps(v108, v23[3]);
		v110 = _mm_unpacklo_ps(v108, v23[3]);
		v111 = _mm_unpacklo_ps(*v23, v23[1]);
		*(__m128*)(a1 + 1200) = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v106, v106, 85), _mm_shuffle_ps(v111, v110, 238)),
					_mm_mul_ps(_mm_shuffle_ps(v106, v106, 0), _mm_shuffle_ps(v111, v110, 68))),
				_mm_mul_ps(_mm_shuffle_ps(v106, v106, 170), _mm_shuffle_ps(v107, v109, 68))),
			_mm_shuffle_ps(v107, v109, 238));
	}
	return v24;
}
// 1407B6CA1: variable 'v95' is possibly undefined
// 1407B6CCA: variable 'v96' is possibly undefined
// 1407B6CDC: variable 'v98' is possibly undefined
// 1407B6D5B: variable 'v102' is possibly undefined
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B2A0: using guessed type __int128 xmmword_140B7B2A0;
// 140C3C7A8: using guessed type int dword_140C3C7A8;
// 140C78410: using guessed type __m256 ymmword_140C78410;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 140C798C0: using guessed type __int128 xmmword_140C798C0;
// 140C798D0: using guessed type __int128 xmmword_140C798D0;

