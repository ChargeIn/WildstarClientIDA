//----- (00000001407BA940) ----------------------------------------------------
__int64 __fastcall sub_1407BA940(__int64 a1, _DWORD* a2, __m128* a3, float* a4)
{
	__m128 v4; // xmm11
	int v9; // eax
	unsigned __int64 v10; // rcx
	_DWORD* v11; // rax
	__m128 v12; // xmm8
	unsigned __int64 v13; // rcx
	_DWORD* v14; // rax
	__m128 v15; // xmm7
	__m128 v16; // xmm1
	float v17; // xmm1_4
	__m128 v18; // xmm2
	float v19; // xmm0_4
	double v20; // xmm0_8
	__m128 v21; // xmm13
	__m128 v22; // xmm3
	__m128 v23; // xmm6
	float v24; // xmm9_4
	__m128 v25; // xmm12
	__m128 v26; // xmm2
	float v27; // xmm0_4
	__m128 v28; // xmm6
	__m128 v29; // xmm5
	__m128 v30; // xmm4
	float v31; // xmm1_4
	__m128 v32; // xmm2
	__m128 v33; // xmm2
	__m128 v34; // xmm0
	__m128 v35; // xmm7
	__m128 v36; // xmm1
	__m128 v37; // xmm11
	__m128 v38; // xmm5
	__m128 v39; // xmm0
	__m128 v40; // xmm6
	float v41; // xmm3_4
	float v42; // xmm2_4
	__m128 v43; // xmm7
	float v44; // xmm7_4
	float v45; // xmm9_4
	__m128 v46; // xmm2
	float v47; // xmm5_4
	float v48; // xmm0_4
	__m128 v49; // xmm13
	__m128 v50; // xmm2
	__m128 v51; // xmm3
	__m128 v52; // xmm5
	__m128 v53; // xmm1
	bool v54; // zf
	__m128 v55; // xmm3
	__m128 v56; // xmm1
	__m128 v57; // xmm6
	__m128 v58; // xmm6
	__m128 v59; // xmm4
	__m128 v60; // xmm5
	__m128 v61; // xmm3
	float v62; // xmm3_4
	float v63; // xmm7_4
	__m128 v64; // xmm2
	float v65; // xmm2_4
	__m128 v66; // xmm6
	__m128 v67; // xmm3
	__m128 v68; // xmm2
	__m128 v69; // xmm1
	__m128 v70; // xmm11
	__m128 v71; // xmm2
	__m128 v72; // xmm3
	__m128 v73; // xmm1
	float v74; // xmm0_4
	float v75; // xmm1_4
	int v76; // ecx
	int v77; // eax
	int v78; // r15d
	__m128 v79; // xmm10
	__m128 v80; // xmm6
	float v81; // xmm6_4
	__m128 v82; // xmm1
	__m128 v83; // xmm7
	__m128 v84; // xmm9
	float v85; // xmm9_4
	int v86; // eax
	double v87; // xmm0_8
	__m128 v88; // xmm7
	__m128 v89; // xmm11
	__m128 v90; // xmm10
	float v91; // xmm10_4
	__m128 v92; // xmm0
	__m128 v93; // xmm7
	__m128* v94; // rax
	__m128 v95; // xmm6
	__m128 v96; // xmm11
	__m128 v97; // xmm10
	__m128 v98; // xmm4
	__m128 v99; // xmm5
	float v100; // xmm5_4
	float v101; // xmm3_4
	__m128 v102; // xmm0
	__m128 v103; // xmm0
	float v104; // xmm0_4
	bool v105; // cf
	__int64 result; // rax
	__m128 v107; // xmm1
	__m128 v108; // xmm2
	int v109; // eax
	__m128 v110; // [rsp+30h] [rbp-99h] BYREF
	__m128 v111; // [rsp+40h] [rbp-89h] BYREF
	__m128 v112; // [rsp+50h] [rbp-79h] BYREF

	sub_1407B64C0(a1, (__m128*)(a1 + 64), (__m128*)(a1 + 64), 16449);
	sub_1407B74E0(a1);
	sub_1407B8180(a1);
	if ((unsigned __int64)qword_140C7F878 >= 2)
	{
		v10 = 0i64;
		if (!qword_140C7F898)
		{
		LABEL_7:
			v9 = 1;
			goto LABEL_8;
		}
		v11 = (_DWORD*)(qword_140C7F890 + 48);
		while (!*v11)
		{
			++v10;
			v11 += 16;
			if (v10 >= qword_140C7F898)
				goto LABEL_7;
		}
	}
	v9 = 0;
LABEL_8:
	*(_DWORD*)(a1 + 212) = v9;
	if (v9)
	{
		*(_DWORD*)(a1 + 180) = 0;
		*(_DWORD*)(a1 + 168) = 0;
		*(_DWORD*)(a1 + 192) = 0;
		v12 = 0i64;
		*(_DWORD*)(a1 + 208) = 0;
		*a3 = 0i64;
		sub_1407B7940((__m128*)a1);
		sub_1407B8180(a1);
		if ((unsigned __int64)qword_140C7F878 >= 2)
		{
			v13 = 0i64;
			if (!qword_140C7F898)
			{
			LABEL_14:
				sub_1407BC9B0();
				sub_1402626B0(&qword_140C7F870, 0i64);
				goto LABEL_34;
			}
			v14 = (_DWORD*)(qword_140C7F890 + 48);
			while (!*v14)
			{
				++v13;
				v14 += 16;
				if (v13 >= qword_140C7F898)
					goto LABEL_14;
			}
		}
	}
	sub_1407B89B0((__m128*)a1, &v110, (__m128*)(a1 + 96));
	v15 = v110;
	v16 = _mm_sub_ps(*(__m128*)(a1 + 96), v110);
	v18 = _mm_mul_ps(v16, v16);
	v17 = *(float*)(a1 + 288);
	v18.m128_f32[0] = fsqrt(
		(float)(v18.m128_f32[0] + _mm_shuffle_ps(v18, v18, 85).m128_f32[0])
		+ _mm_shuffle_ps(v18, v18, 170).m128_f32[0]);
	if (v18.m128_f32[0] > v17)
	{
		v19 = *(float*)(a1 + 292);
		if (v19 > v17)
		{
			v18.m128_f32[0] = (float)(v18.m128_f32[0] - v17) / (float)(v19 - v17);
			v20 = sub_1408FBFC0(*(double*)v18.m128_u64, 2.0);
			*(float*)(a1 + 176) = *(float*)&v20 + *(float*)(a1 + 176);
		}
	}
	v21 = (__m128)0x40400000u;
	*(__m128*)(a1 + 96) = v15;
	v22 = *(__m128*)(a1 + 240);
	v23 = (__m128)0x40400000u;
	v12 = 0i64;
	v24 = *(float*)(a1 + 280);
	v25 = (__m128) * (unsigned int*)(a1 + 284);
	v26 = _mm_mul_ps(v22, v22);
	v26.m128_f32[0] = (float)(v26.m128_f32[0] + _mm_shuffle_ps(v26, v26, 85).m128_f32[0])
		+ _mm_shuffle_ps(v26, v26, 170).m128_f32[0];
	v27 = 1.0 / fsqrt(v26.m128_f32[0]);
	v23.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v26.m128_f32[0] * v27) * v27)) * 0.5) * v27, 0.0);
	v28 = _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), v22);
	if (v24 == v25.m128_f32[0])
	{
		v25 = (__m128) * (unsigned int*)(a1 + 280);
	}
	else
	{
		v29 = (__m128)0x40400000u;
		v30 = _mm_mul_ps(v15, v15);
		v30.m128_f32[0] = (float)(v30.m128_f32[0] + _mm_shuffle_ps(v30, v30, 85).m128_f32[0])
			+ _mm_shuffle_ps(v30, v30, 170).m128_f32[0];
		v31 = 1.0 / fsqrt(v30.m128_f32[0]);
		v29.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v30.m128_f32[0] * v31) * v31)) * 0.5) * v31, 0.0);
		v32 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v29, v29, 0), v15), v28);
		v25.m128_f32[0] = (float)((float)(v25.m128_f32[0] - v24)
			* fmaxf(
				0.0,
				fminf(
					(float)(v32.m128_f32[0] + _mm_shuffle_ps(v32, v32, 85).m128_f32[0])
					+ _mm_shuffle_ps(v32, v32, 170).m128_f32[0],
					1.0)))
			+ v24;
	}
	if (*(float*)(a1 + 172) >= 0.5 || *(_DWORD*)(a1 + 192))
	{
		v37 = 0i64;
	}
	else
	{
		v33 = _mm_mul_ps(v28, v15);
		v34 = _mm_shuffle_ps(v33, v33, 85);
		v34.m128_f32[0] = (float)(v34.m128_f32[0] + v33.m128_f32[0]) + _mm_shuffle_ps(v33, v33, 170).m128_f32[0];
		v35 = _mm_sub_ps(v15, _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0), v28));
		v36 = _mm_mul_ps(v35, v35);
		v4.m128_f32[0] = fsqrt(
			(float)(v36.m128_f32[0] + _mm_shuffle_ps(v36, v36, 85).m128_f32[0])
			+ _mm_shuffle_ps(v36, v36, 170).m128_f32[0]);
		v37 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), v28), (__m128)xmmword_140B7B2D0);
	}
	v38 = 0i64;
	if (*(_DWORD*)(a1 + 312))
	{
		v39 = _mm_add_ps(
			*(__m128*)(a1 + 64),
			_mm_mul_ps(_mm_mul_ps((__m128)xmmword_140B7ABD0, *(__m128*)(a1 + 96)), (__m128)xmmword_140B7AC50));
		v40 = _mm_sub_ps(*(__m128*)(a1 + 256), v39);
		v111 = v39;
		v110 = v40;
		v41 = _mm_shuffle_ps(v40, v40, 85).m128_f32[0];
		if (v41 > 0.0)
		{
			v42 = *(float*)(a1 + 300);
			if (v111.m128_f32[1] >= v42)
				v110.m128_i32[1] = 0;
			else
				v110.m128_i32[1] = fminf(v42 - v111.m128_f32[1], v41);
			v40 = v110;
		}
		v43 = _mm_mul_ps(v40, v40);
		v44 = fsqrt(
			(float)(v43.m128_f32[0] + _mm_shuffle_ps(v43, v43, 85).m128_f32[0])
			+ _mm_shuffle_ps(v43, v43, 170).m128_f32[0]);
		v45 = fmaxf(*(float*)(a1 + 296) - 0.5, 0.0);
		if (v44 > v45)
		{
			v46 = _mm_mul_ps(v40, v40);
			v47 = (float)(v46.m128_f32[0] + _mm_shuffle_ps(v46, v46, 85).m128_f32[0])
				+ _mm_shuffle_ps(v46, v46, 170).m128_f32[0];
			v48 = fsqrt(v47);
			v21.m128_f32[0] = fmaxf(
				(float)((float)(3.0 - (float)((float)(v47 * (float)(1.0 / v48)) * (float)(1.0 / v48))) * 0.5)
				* (float)(1.0 / v48),
				0.0);
			v49 = _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v40);
			v50 = _mm_mul_ps(v49, *(__m128*)(a1 + 96));
			v51 = (__m128)0x42C80000u;
			v51.m128_f32[0] = fminf(
				100.0,
				100.0
				- (float)((float)((float)(v50.m128_f32[0] + _mm_shuffle_ps(v50, v50, 85).m128_f32[0])
					+ _mm_shuffle_ps(v50, v50, 170).m128_f32[0])
					* 5.0));
			v52 = v51;
			v52.m128_f32[0] = fmaxf(v51.m128_f32[0], 0.0) * (float)(v44 - v45);
			v38 = _mm_mul_ps(_mm_shuffle_ps(v52, v52, 0), v49);
		}
	}
	v53 = v25;
	v53.m128_f32[0] = fminf(v25.m128_f32[0], *(float*)&dword_140C54A08);
	*a3 = _mm_add_ps(
		_mm_add_ps(
			_mm_mul_ps(_mm_sub_ps(*(__m128*)(a1 + 224), *(__m128*)(a1 + 96)), _mm_shuffle_ps(v53, v53, 0)),
			_mm_add_ps(v38, *(__m128*)(a1 + 240))),
		v37);
LABEL_34:
	v54 = *(_DWORD*)(a1 + 160) == 0;
	*a2 = 0;
	*a4 = 0.0;
	if (!v54 || *(_DWORD*)(a1 + 164))
	{
		v107 = (__m128) * (unsigned int*)(a1 + 280);
		v107.m128_f32[0] = fminf(v107.m128_f32[0], *(float*)&dword_140C54A08);
		v108 = _mm_add_ps(_mm_mul_ps(*(__m128*)(a1 + 112), _mm_shuffle_ps(v107, v107, 0)), *a3);
		*a3 = v108;
		v54 = *(_DWORD*)(a1 + 164) == 0;
		v111 = _mm_add_ps(*(__m128*)(a1 + 96), _mm_mul_ps(v108, (__m128)xmmword_140B7ABA0));
		if (v54)
			v109 = sub_1407B80B0((__m128*)a1, &v111);
		else
			v109 = 0;
		*(_DWORD*)(a1 + 168) = v109;
		*(_DWORD*)(a1 + 180) = 0;
		*(_DWORD*)(a1 + 192) = 0;
		*(_DWORD*)(a1 + 208) = 0;
		return 1i64;
	}
	v55 = *(__m128*)(a1 + 128);
	v56 = _mm_mul_ps(v55, v55);
	if ((float)((float)(v56.m128_f32[0] + _mm_shuffle_ps(v56, v56, 85).m128_f32[0])
		+ _mm_shuffle_ps(v56, v56, 170).m128_f32[0]) > 0.0000099999997)
	{
		v57 = _mm_sub_ps(v12, v55);
		v111 = v57;
		if ((unsigned int)sub_1407B7FE0((__m128*)a1, &v111))
		{
			v111 = v57;
			v58 = _mm_sub_ps(v12, *sub_1407B89B0((__m128*)a1, &v110, &v111));
			v59 = _mm_sub_ps(*(__m128*)(a1 + 128), v58);
			v60 = v58;
			v61 = _mm_mul_ps(v58, v58);
			v62 = fsqrt(
				(float)(v61.m128_f32[0] + _mm_shuffle_ps(v61, v61, 85).m128_f32[0])
				+ _mm_shuffle_ps(v61, v61, 170).m128_f32[0]);
			if (*(_DWORD*)(a1 + 180))
				v63 = *(float*)(a1 + 276);
			else
				v63 = *(float*)(a1 + 272);
			v64 = _mm_mul_ps(v59, v59);
			v65 = fsqrt(
				(float)(v64.m128_f32[0] + _mm_shuffle_ps(v64, v64, 85).m128_f32[0])
				+ _mm_shuffle_ps(v64, v64, 170).m128_f32[0])
				* v63;
			if (v62 > v65 && v62 > 0.0000099999997)
			{
				v58.m128_f32[0] = v65 / v62;
				v58 = _mm_mul_ps(_mm_shuffle_ps(v58, v58, 0), v60);
			}
			v66 = _mm_add_ps(v58, v59);
			v111 = _mm_add_ps(*(__m128*)(a1 + 96), v66);
			*(__m128*)(a1 + 96) = *sub_1407B89B0((__m128*)a1, &v110, &v111);
			*(__m128*)(a1 + 128) = v12;
			*(__m128*)(a1 + 144) = v66;
			*(_DWORD*)(a1 + 168) = 1;
			*(_DWORD*)(a1 + 180) = 1;
			*(_DWORD*)(a1 + 192) = 1;
			*(_QWORD*)(a1 + 196) = 1i64;
			v67 = *(__m128*)(a1 + 240);
			*(_DWORD*)(a1 + 208) = 0;
			v68 = _mm_mul_ps(v67, v66);
			v69 = _mm_mul_ps(v67, v67);
			*(float*)(a1 + 204) = -(float)((float)((float)(v68.m128_f32[0] + _mm_shuffle_ps(v68, v68, 85).m128_f32[0])
				+ _mm_shuffle_ps(v68, v68, 170).m128_f32[0])
				/ (float)((float)(v69.m128_f32[0] + _mm_shuffle_ps(v69, v69, 85).m128_f32[0])
					+ _mm_shuffle_ps(v69, v69, 170).m128_f32[0]));
		}
	}
	v111 = _mm_add_ps(*(__m128*)(a1 + 96), _mm_mul_ps(*a3, (__m128)xmmword_140B7ABA0));
	if ((unsigned int)sub_1407B7FE0((__m128*)a1, &v111))
	{
		sub_1407B89B0((__m128*)a1, &v111, a3);
		v76 = 0;
		v70 = *a3;
		v71 = _mm_sub_ps(*a3, v111);
		v72 = _mm_mul_ps(v111, v111);
		v73 = _mm_mul_ps(v71, v71);
		v72.m128_f32[0] = fsqrt(
			(float)(v72.m128_f32[0] + _mm_shuffle_ps(v72, v72, 85).m128_f32[0])
			+ _mm_shuffle_ps(v72, v72, 170).m128_f32[0]);
		v74 = fsqrt(
			(float)(v73.m128_f32[0] + _mm_shuffle_ps(v73, v73, 85).m128_f32[0])
			+ _mm_shuffle_ps(v73, v73, 170).m128_f32[0]);
		v75 = v74 * *(float*)(a1 + 276);
		LOBYTE(v76) = v72.m128_f32[0] > (float)(v74 * *(float*)(a1 + 272));
		if (v72.m128_f32[0] > v75 && *(_DWORD*)(a1 + 180))
		{
			*a4 = v75;
			v77 = 1;
		}
		else
		{
			v77 = 0;
		}
		if (v76 || (v78 = 0, v77))
			v78 = 1;
		v79 = *(__m128*)(a1 + 112);
		v80 = _mm_mul_ps(v79, v79);
		v81 = fsqrt(
			(float)(v80.m128_f32[0] + _mm_shuffle_ps(v80, v80, 85).m128_f32[0])
			+ _mm_shuffle_ps(v80, v80, 170).m128_f32[0]);
		if (v81 <= 0.0000099999997)
		{
			v83 = v12;
		}
		else
		{
			v82 = _mm_mul_ps(v70, v70);
			if ((float)((float)(v82.m128_f32[0] + _mm_shuffle_ps(v82, v82, 85).m128_f32[0])
				+ _mm_shuffle_ps(v82, v82, 170).m128_f32[0]) <= *(float*)&dword_140C54B18)
			{
				v83 = *sub_1407B89B0((__m128*)a1, &v112, (__m128*)(a1 + 112));
			}
			else
			{
				if ((unsigned int)sub_1407B7FE0((__m128*)a1, (__m128*)(a1 + 112)))
				{
					v111 = _mm_sub_ps(v12, v70);
					sub_1407B8E80((__m128*)a1, &v110, (__m128*)(a1 + 112), &v111);
					v83 = v110;
					v84 = _mm_mul_ps(v110, v110);
					v85 = fsqrt(
						(float)(v84.m128_f32[0] + _mm_shuffle_ps(v84, v84, 85).m128_f32[0])
						+ _mm_shuffle_ps(v84, v84, 170).m128_f32[0])
						/ v81;
					v86 = sub_1407BA0D0((__m128*)a1, (__m128*)(a1 + 112), a3, v78, v85, &v110);
					*a2 = v86;
					if (!v86)
					{
						*(_QWORD*)&v87 = *(unsigned int*)(a1 + 272);
						*(float*)&v87 = sub_140934E10(*(float*)&v87);
						if (v85 <= sub_1408FC950(v87))
							v83 = *sub_1407B89B0((__m128*)a1, &v111, (__m128*)(a1 + 112));
						goto LABEL_66;
					}
				}
				else
				{
					v88 = _mm_sub_ps(v12, v79);
					v111 = v88;
					if ((unsigned int)sub_1407B7FE0((__m128*)a1, &v111))
					{
						v110 = v88;
						v111 = _mm_sub_ps(v12, v70);
						v89 = _mm_sub_ps(v12, *sub_1407B8E80((__m128*)a1, &v112, &v110, &v111));
						v90 = _mm_mul_ps(v89, v89);
						v92 = (__m128) * (unsigned int*)(a1 + 272);
						v91 = fsqrt(
							(float)(v90.m128_f32[0] + _mm_shuffle_ps(v90, v90, 85).m128_f32[0])
							+ _mm_shuffle_ps(v90, v90, 170).m128_f32[0]);
						v92.m128_f32[0] = sub_140934E10(v92.m128_f32[0]);
						if (v91 <= (float)(sub_1408FC950(*(double*)v92.m128_u64) * v81))
						{
							v83 = *(__m128*)(a1 + 112);
						}
						else
						{
							v88.m128_f32[0] = v81 * v81;
							v92.m128_f32[0] = v91 * v91;
							v83 = _mm_div_ps(_mm_mul_ps(_mm_shuffle_ps(v88, v88, 0), v89), _mm_shuffle_ps(v92, v92, 0));
						}
						goto LABEL_66;
					}
				}
				v83 = v110;
			}
		}
	LABEL_66:
		v54 = *a2 == 0;
		v93 = _mm_mul_ps(
			_mm_sub_ps(v83, *(__m128*)(a1 + 96)),
			_mm_shuffle_ps((__m128)(unsigned int)dword_140C54A08, (__m128)(unsigned int)dword_140C54A08, 0));
		v110 = v93;
		if (v54)
		{
			v94 = sub_1407B89B0((__m128*)a1, &v112, &v110);
			v93 = v110;
		}
		else
		{
			v111 = v93;
			v94 = &v111;
		}
		v95 = *v94;
		v96 = _mm_sub_ps(*sub_1407B89B0((__m128*)a1, &v112, a3), *v94);
		v97 = _mm_sub_ps(_mm_sub_ps(*a3, v95), v96);
		v98 = _mm_mul_ps(v96, v96);
		v98.m128_f32[0] = fsqrt(
			(float)(v98.m128_f32[0] + _mm_shuffle_ps(v98, v98, 85).m128_f32[0])
			+ _mm_shuffle_ps(v98, v98, 170).m128_f32[0]);
		v99 = _mm_mul_ps(v97, v97);
		v100 = fsqrt(
			(float)(v99.m128_f32[0] + _mm_shuffle_ps(v99, v99, 85).m128_f32[0])
			+ _mm_shuffle_ps(v99, v99, 170).m128_f32[0]);
		if (v98.m128_f32[0] <= 0.0000099999997)
		{
			v103 = v12;
		}
		else
		{
			if (v78)
				v101 = *(float*)(a1 + 276);
			else
				v101 = *(float*)(a1 + 272);
			v102 = v98;
			v102.m128_f32[0] = fmaxf(v98.m128_f32[0] - (float)(v101 * v100), 0.0) / v98.m128_f32[0];
			v103 = _mm_mul_ps(_mm_shuffle_ps(v102, v102, 0), v96);
		}
		*a3 = _mm_add_ps(_mm_add_ps(v103, v97), v93);
		v104 = *(float*)(a1 + 204);
		*(_DWORD*)(a1 + 168) = 0;
		v105 = v104 < *(float*)(a1 + 200);
		*(_DWORD*)(a1 + 180) = v78;
		if (v105 || *(float*)(a1 + 100) <= 0.0)
		{
			*(_DWORD*)(a1 + 192) = 0;
			*(_DWORD*)(a1 + 208) = 0;
		}
		goto LABEL_80;
	}
	*(_DWORD*)(a1 + 168) = 1;
	if (*(float*)(a1 + 172) >= 0.1)
		*(_DWORD*)(a1 + 180) = 1;
LABEL_80:
	if (!*(_DWORD*)(a1 + 168))
		return 1i64;
	if (fabs(*(float*)(a1 + 112)) > 0.0000099999997)
		a3->m128_f32[0] = (float)((float)(fmaxf(
			v12.m128_f32[0],
			fminf(1.0 - (float)(*(float*)(a1 + 96) / *(float*)(a1 + 112)), 1.0))
			* *(float*)(a1 + 112))
			* 2.0)
		+ a3->m128_f32[0];
	result = 1i64;
	if (fabs(*(float*)(a1 + 120)) > 0.0000099999997)
		a3->m128_f32[2] = (float)((float)(fmaxf(
			v12.m128_f32[0],
			fminf(1.0 - (float)(*(float*)(a1 + 104) / *(float*)(a1 + 120)), 1.0))
			* *(float*)(a1 + 120))
			* 2.0)
		+ a3->m128_f32[2];
	return result;
}
// 1407BAC9B: variable 'v4' is possibly undefined
// 140B63928: using guessed type int dword_140B63928;
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7ABA0: using guessed type __int128 xmmword_140B7ABA0;
// 140B7ABD0: using guessed type __int128 xmmword_140B7ABD0;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B2D0: using guessed type __int128 xmmword_140B7B2D0;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C54A08: using guessed type int dword_140C54A08;
// 140C54B18: using guessed type int dword_140C54B18;
// 140C7F870: using guessed type __int64 qword_140C7F870;
// 140C7F878: using guessed type __int64 qword_140C7F878;
// 140C7F890: using guessed type __int64 qword_140C7F890;
// 140C7F898: using guessed type __int64 qword_140C7F898;

