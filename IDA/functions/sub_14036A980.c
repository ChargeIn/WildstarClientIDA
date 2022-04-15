//----- (000000014036A980) ----------------------------------------------------
__int64 __fastcall sub_14036A980(_QWORD* a1, __int64 a2, char a3, unsigned int a4, int** a5)
{
	unsigned int v5; // r15d
	int* v10; // rbx
	int v11; // r12d
	_QWORD* v12; // rcx
	_QWORD* v13; // r8
	__int64 v14; // rax
	_QWORD* v15; // rdi
	int v16; // r15d
	int v17; // r14d
	__int64 i; // r8
	__int64 v19; // rdx
	__int64 v20; // rax
	bool v21; // zf
	__int64 j; // r8
	__int64 v23; // rdx
	__int64 v24; // rax
	unsigned __int64 k; // rdx
	__int64 v26; // rcx
	_QWORD* v27; // r9
	__int64 v28; // rax
	__int64 v29; // rax
	int* v30; // rax
	_QWORD* v31; // rdi
	int* m; // r14
	__int64 v33; // rax
	unsigned __int64 v34; // rcx
	__m128* v35; // rdx
	__m128 v36; // xmm2
	__m128 v37; // xmm4
	__m128 v38; // xmm5
	unsigned __int64 v39; // rax
	__m128* v40; // rcx
	__m128 v41; // xmm2
	__m128 v42; // xmm1
	__int64 v43; // rax
	unsigned __int64 v44; // rcx
	__m128 v45; // xmm0
	__m128 v46; // xmm4
	__m128 v47; // xmm2
	__m128 v48; // xmm5
	__m128 v49; // xmm0
	__m128 v50; // xmm8
	__m128 v51; // xmm7
	__m128 v52; // xmm5
	__m128 v53; // xmm4
	float* v54; // rax
	__m128 v55; // xmm2
	__m128* v56; // rax
	__int64 v57; // rcx
	__m128 v58; // xmm3
	__m128 v59; // xmm2
	__int64 v60; // rax
	unsigned __int64 v61; // rcx
	__m128* v62; // rdx
	__m128 v63; // xmm2
	__m128 v64; // xmm4
	__m128 v65; // xmm5
	__m128* v66; // rcx
	unsigned __int64 v67; // rax
	__m128 v68; // xmm2
	__m128 v69; // xmm1
	_QWORD* v70; // rcx
	__int64 v71; // rcx
	_QWORD* n; // rdi
	__int64 v73; // rax
	unsigned __int64 v74; // rcx
	__m128* v75; // rdx
	__m128 v76; // xmm2
	__m128 v77; // xmm4
	__m128 v78; // xmm5
	unsigned __int64 v79; // rax
	__m128* v80; // rcx
	__m128 v81; // xmm2
	__m128 v82; // xmm1
	__int64 v83; // rax
	unsigned __int64 v84; // rcx
	__m128 v85; // xmm0
	__m128 v86; // xmm4
	__m128 v87; // xmm2
	__m128 v88; // xmm5
	__m128 v89; // xmm0
	__m128 v90; // xmm8
	__m128 v91; // xmm7
	__m128 v92; // xmm5
	__m128 v93; // xmm4
	float* v94; // rax
	__m128 v95; // xmm2
	__m128* v96; // rax
	__int64 v97; // rcx
	__m128 v98; // xmm3
	__m128 v99; // xmm2
	__int64 v100; // rax
	unsigned __int64 v101; // rcx
	__m128* v102; // rdx
	__m128 v103; // xmm2
	__m128 v104; // xmm4
	__m128 v105; // xmm5
	__m128* v106; // rcx
	unsigned __int64 v107; // rax
	__m128 v108; // xmm0
	__m128 v109; // xmm1
	_QWORD* v110; // rcx
	__int64 v111; // rcx
	_QWORD* ii; // rdi
	__int64 v113; // rax
	unsigned __int64 v114; // rcx
	__m128* v115; // rdx
	__m128 v116; // xmm2
	__m128 v117; // xmm5
	__m128 v118; // xmm6
	unsigned __int64 v119; // rax
	__m128* v120; // rcx
	__m128 v121; // xmm2
	__m128 v122; // xmm1
	_QWORD* v123; // rcx
	__int64 v124; // rcx
	int v126[4]; // [rsp+30h] [rbp-158h] BYREF
	int v127[4]; // [rsp+40h] [rbp-148h] BYREF
	char v128[96]; // [rsp+50h] [rbp-138h] BYREF
	char v129[96]; // [rsp+B0h] [rbp-D8h] BYREF

	v5 = a4;
	if (!a5)
		return 2147942487i64;
	v10 = sub_14018B280(32i64, 0);
	if (v10)
	{
		*(_QWORD*)v10 = off_140B787C0;
		v10[6] = 1;
		*((_QWORD*)v10 + 1) = 0i64;
		*((_QWORD*)v10 + 2) = 0i64;
	}
	else
	{
		v10 = 0i64;
	}
	v11 = a3 & 1;
	if ((a3 & 1) != 0)
	{
		v12 = (_QWORD*)a1[657];
		if (v12)
		{
			v13 = a1 + 662;
			do
			{
				if (!v12[138])
				{
					v12[138] = v13;
					v12[139] = *v13;
					*v13 = v12;
					v14 = v12[139];
					if (v14)
						*(_QWORD*)(v14 + 1104) = v12 + 139;
				}
				++* ((_QWORD*)v10 + 1);
				v12 = (_QWORD*)v12[129];
			} while (v12);
		}
	}
	sub_140357DF0((__int64)a1, a2);
	v15 = (_QWORD*)a1[291];
	if (v15)
	{
		v16 = a3 & 2;
		v17 = a3 & 4;
		do
		{
			if (v11)
			{
				for (i = *(_QWORD*)(v15[3] + 64i64); i; i = *(_QWORD*)(i + 24))
				{
					v19 = *(_QWORD*)(i + 8);
					if (!*(_QWORD*)(v19 + 1104))
					{
						*(_QWORD*)(v19 + 1104) = a1 + 662;
						*(_QWORD*)(v19 + 1112) = a1[662];
						a1[662] = v19;
						v20 = *(_QWORD*)(v19 + 1112);
						if (v20)
							*(_QWORD*)(v20 + 1104) = v19 + 1112;
						++* ((_QWORD*)v10 + 1);
					}
				}
			}
			if (v16)
			{
				v21 = v15[181] == 0i64;
				v126[0] = -1;
				if (!v21)
					sub_14037CC30((__int64)v15, (__int64)v126);
				for (j = *(_QWORD*)(v15[3] + 48i64); j; j = *(_QWORD*)(j + 24))
				{
					v23 = *(_QWORD*)(*(_QWORD*)(j + 8) + 32i64);
					if (!*(_QWORD*)(v23 + 1232))
					{
						*(_QWORD*)(v23 + 1232) = a1 + 632;
						*(_QWORD*)(v23 + 1240) = a1[632];
						a1[632] = v23;
						v24 = *(_QWORD*)(v23 + 1240);
						if (v24)
							*(_QWORD*)(v24 + 1232) = v23 + 1240;
						++* ((_QWORD*)v10 + 1);
					}
				}
			}
			if (v17)
			{
				v21 = v15[181] == 0i64;
				v127[0] = -1;
				if (!v21)
					sub_14037CC30((__int64)v15, (__int64)v127);
				for (k = 0i64; k < v15[129]; ++k)
				{
					v26 = *(_QWORD*)(v15[130] + 8 * k);
					if (v26)
					{
						v27 = a1 + 541;
						if (!*(_QWORD*)(v26 + 224))
						{
							*(_QWORD*)(v26 + 224) = v27;
							*(_QWORD*)(v26 + 232) = *v27;
							*v27 = v26;
							v28 = *(_QWORD*)(v26 + 232);
							if (v28)
								*(_QWORD*)(v28 + 224) = v26 + 232;
						}
						++* ((_QWORD*)v10 + 1);
					}
				}
			}
			v15 = (_QWORD*)v15[176];
		} while (v15);
		v5 = a4;
	}
	v29 = 8i64 * *((_QWORD*)v10 + 1);
	if (!is_mul_ok(*((_QWORD*)v10 + 1), 8ui64))
		v29 = -1i64;
	v30 = sub_14018B280(v29, 0);
	*((_QWORD*)v10 + 2) = v30;
	v31 = (_QWORD*)a1[662];
	for (m = v30; v31; v31 = (_QWORD*)a1[662])
	{
		v33 = (*(__int64(__fastcall**)(_QWORD*, _QWORD))(*v31 + 80i64))(v31, v5);
		v34 = 0i64;
		v35 = (__m128*)a2;
		while (1)
		{
			v36 = _mm_mul_ps(*v35, *(__m128*)(v33 + 32));
			if ((float)((float)((float)(v36.m128_f32[0] + _mm_shuffle_ps(v36, v36, 85).m128_f32[0])
				+ _mm_shuffle_ps(v36, v36, 170).m128_f32[0])
				+ v35->m128_f32[3]) > *(float*)(v33 + 48))
				break;
			++v34;
			++v35;
			if (v34 >= 6)
			{
				v37 = *(__m128*)v33;
				v38 = *(__m128*)(v33 + 16);
				v39 = 0i64;
				v40 = (__m128*)a2;
				while (1)
				{
					v41 = _mm_cmplt_ps((__m128)0i64, *v40);
					v42 = _mm_mul_ps(_mm_or_ps(_mm_andnot_ps(v41, v38), _mm_and_ps(v41, v37)), *v40);
					if ((float)((float)((float)(v42.m128_f32[0] + _mm_shuffle_ps(v42, v42, 85).m128_f32[0])
						+ _mm_shuffle_ps(v42, v42, 170).m128_f32[0])
						+ v40->m128_f32[3]) > 0.0)
						goto LABEL_63;
					++v39;
					++v40;
					if (v39 >= 6)
					{
						v43 = (*(__int64(__fastcall**)(_QWORD*, __m128*))(*v31 + 56i64))(v31, v35);
						v44 = a2;
						v45 = *(__m128*)(v43 + 32);
						v46 = _mm_unpackhi_ps(*(__m128*)v43, *(__m128*)(v43 + 16));
						v47 = _mm_unpackhi_ps(v45, *(__m128*)(v43 + 48));
						v48 = _mm_unpacklo_ps(*(__m128*)v43, *(__m128*)(v43 + 16));
						v49 = _mm_unpacklo_ps(v45, *(__m128*)(v43 + 48));
						v50 = _mm_shuffle_ps(v46, v47, 68);
						v51 = _mm_shuffle_ps(v48, v49, 68);
						v52 = _mm_shuffle_ps(v48, v49, 238);
						v53 = _mm_shuffle_ps(v46, v47, 238);
						while (v44 < a2 + 96)
						{
							v54 = (float*)&v128[v44 - a2];
							_mm_prefetch((const char*)(v44 + 24), 0);
							v55 = *(__m128*)v44;
							v44 += 16i64;
							_mm_stream_ps(
								v54,
								_mm_add_ps(
									_mm_add_ps(
										_mm_add_ps(
											_mm_mul_ps(_mm_shuffle_ps(v55, v55, 85), v52),
											_mm_mul_ps(_mm_shuffle_ps(v55, v55, 0), v51)),
										_mm_mul_ps(_mm_shuffle_ps(v55, v55, 170), v50)),
									_mm_mul_ps(_mm_shuffle_ps(v55, v55, 255), v53)));
						}
						_mm_sfence();
						v56 = (__m128*)v128;
						v57 = 6i64;
						do
						{
							v58 = *v56++;
							v59 = _mm_mul_ps(v58, v58);
							v59.m128_f32[0] = 1.0
								/ fsqrt(
									(float)(v59.m128_f32[0] + _mm_shuffle_ps(v59, v59, 85).m128_f32[0])
									+ _mm_shuffle_ps(v59, v59, 170).m128_f32[0]);
							v56[-1] = _mm_mul_ps(_mm_shuffle_ps(v59, v59, 0), v58);
							--v57;
						} while (v57);
						v60 = (*(__int64(__fastcall**)(_QWORD*, _QWORD))(*v31 + 72i64))(v31, v5);
						v61 = 0i64;
						v62 = (__m128*)v128;
						while (1)
						{
							v63 = _mm_mul_ps(*v62, *(__m128*)(v60 + 32));
							if ((float)((float)((float)(v63.m128_f32[0] + _mm_shuffle_ps(v63, v63, 85).m128_f32[0])
								+ _mm_shuffle_ps(v63, v63, 170).m128_f32[0])
								+ v62->m128_f32[3]) > *(float*)(v60 + 48))
								goto LABEL_63;
							++v61;
							++v62;
							if (v61 >= 6)
							{
								v64 = *(__m128*)v60;
								v65 = *(__m128*)(v60 + 16);
								v66 = (__m128*)v128;
								v67 = 0i64;
								while (1)
								{
									v68 = _mm_cmplt_ps((__m128)0i64, *v66);
									v69 = _mm_mul_ps(_mm_or_ps(_mm_andnot_ps(v68, v65), _mm_and_ps(v68, v64)), *v66);
									if ((float)((float)((float)(v69.m128_f32[0] + _mm_shuffle_ps(v69, v69, 85).m128_f32[0])
										+ _mm_shuffle_ps(v69, v69, 170).m128_f32[0])
										+ v66->m128_f32[3]) > 0.0)
										goto LABEL_63;
									++v67;
									++v66;
									if (v67 >= 6)
									{
										*(_QWORD*)m = v31;
										m += 2;
										(*(void(__fastcall**)(_QWORD*, __m128*)) * v31)(v31, v62);
										goto LABEL_63;
									}
								}
							}
						}
					}
				}
			}
		}
	LABEL_63:
		v70 = (_QWORD*)v31[138];
		if (v70)
			*v70 = v31[139];
		v71 = v31[139];
		if (v71)
			*(_QWORD*)(v71 + 1104) = v31[138];
		v31[138] = 0i64;
		v31[139] = 0i64;
	}
	for (n = (_QWORD*)a1[632]; n; n = (_QWORD*)a1[632])
	{
		v73 = (*(__int64(__fastcall**)(_QWORD*, _QWORD))(*n + 80i64))(n, v5);
		v74 = 0i64;
		v75 = (__m128*)a2;
		while (1)
		{
			v76 = _mm_mul_ps(*v75, *(__m128*)(v73 + 32));
			if ((float)((float)((float)(v76.m128_f32[0] + _mm_shuffle_ps(v76, v76, 85).m128_f32[0])
				+ _mm_shuffle_ps(v76, v76, 170).m128_f32[0])
				+ v75->m128_f32[3]) > *(float*)(v73 + 48))
				break;
			++v74;
			++v75;
			if (v74 >= 6)
			{
				v77 = *(__m128*)v73;
				v78 = *(__m128*)(v73 + 16);
				v79 = 0i64;
				v80 = (__m128*)a2;
				while (1)
				{
					v81 = _mm_cmplt_ps((__m128)0i64, *v80);
					v82 = _mm_mul_ps(_mm_or_ps(_mm_andnot_ps(v81, v78), _mm_and_ps(v81, v77)), *v80);
					if ((float)((float)((float)(v82.m128_f32[0] + _mm_shuffle_ps(v82, v82, 85).m128_f32[0])
						+ _mm_shuffle_ps(v82, v82, 170).m128_f32[0])
						+ v80->m128_f32[3]) > 0.0)
						goto LABEL_86;
					++v79;
					++v80;
					if (v79 >= 6)
					{
						v83 = (*(__int64(__fastcall**)(_QWORD*, __m128*))(*n + 56i64))(n, v75);
						v84 = a2;
						v85 = *(__m128*)(v83 + 32);
						v86 = _mm_unpackhi_ps(*(__m128*)v83, *(__m128*)(v83 + 16));
						v87 = _mm_unpackhi_ps(v85, *(__m128*)(v83 + 48));
						v88 = _mm_unpacklo_ps(*(__m128*)v83, *(__m128*)(v83 + 16));
						v89 = _mm_unpacklo_ps(v85, *(__m128*)(v83 + 48));
						v90 = _mm_shuffle_ps(v86, v87, 68);
						v91 = _mm_shuffle_ps(v88, v89, 68);
						v92 = _mm_shuffle_ps(v88, v89, 238);
						v93 = _mm_shuffle_ps(v86, v87, 238);
						while (v84 < a2 + 96)
						{
							v94 = (float*)&v129[v84 - a2];
							_mm_prefetch((const char*)(v84 + 24), 0);
							v95 = *(__m128*)v84;
							v84 += 16i64;
							_mm_stream_ps(
								v94,
								_mm_add_ps(
									_mm_add_ps(
										_mm_add_ps(
											_mm_mul_ps(_mm_shuffle_ps(v95, v95, 85), v92),
											_mm_mul_ps(_mm_shuffle_ps(v95, v95, 0), v91)),
										_mm_mul_ps(_mm_shuffle_ps(v95, v95, 170), v90)),
									_mm_mul_ps(_mm_shuffle_ps(v95, v95, 255), v93)));
						}
						_mm_sfence();
						v96 = (__m128*)v129;
						v97 = 6i64;
						do
						{
							v98 = *v96++;
							v99 = _mm_mul_ps(v98, v98);
							v99.m128_f32[0] = 1.0
								/ fsqrt(
									(float)(v99.m128_f32[0] + _mm_shuffle_ps(v99, v99, 85).m128_f32[0])
									+ _mm_shuffle_ps(v99, v99, 170).m128_f32[0]);
							v96[-1] = _mm_mul_ps(_mm_shuffle_ps(v99, v99, 0), v98);
							--v97;
						} while (v97);
						v100 = (*(__int64(__fastcall**)(_QWORD*, _QWORD))(*n + 72i64))(n, v5);
						v101 = 0i64;
						v102 = (__m128*)v129;
						while (1)
						{
							v103 = _mm_mul_ps(*v102, *(__m128*)(v100 + 32));
							if ((float)((float)((float)(v103.m128_f32[0] + _mm_shuffle_ps(v103, v103, 85).m128_f32[0])
								+ _mm_shuffle_ps(v103, v103, 170).m128_f32[0])
								+ v102->m128_f32[3]) > *(float*)(v100 + 48))
								goto LABEL_86;
							++v101;
							++v102;
							if (v101 >= 6)
							{
								v104 = *(__m128*)v100;
								v105 = *(__m128*)(v100 + 16);
								v106 = (__m128*)v129;
								v107 = 0i64;
								while (1)
								{
									v108 = _mm_cmplt_ps((__m128)0i64, *v106);
									v109 = _mm_mul_ps(_mm_or_ps(_mm_and_ps(v104, v108), _mm_andnot_ps(v108, v105)), *v106);
									if ((float)((float)((float)(v109.m128_f32[0] + _mm_shuffle_ps(v109, v109, 85).m128_f32[0])
										+ _mm_shuffle_ps(v109, v109, 170).m128_f32[0])
										+ v106->m128_f32[3]) > 0.0)
										goto LABEL_86;
									++v107;
									++v106;
									if (v107 >= 6)
									{
										*(_QWORD*)m = n;
										m += 2;
										(*(void(__fastcall**)(_QWORD*, __m128*)) * n)(n, v102);
										goto LABEL_86;
									}
								}
							}
						}
					}
				}
			}
		}
	LABEL_86:
		v110 = (_QWORD*)n[154];
		if (v110)
			*v110 = n[155];
		v111 = n[155];
		if (v111)
			*(_QWORD*)(v111 + 1232) = n[154];
		n[154] = 0i64;
		n[155] = 0i64;
	}
	for (ii = (_QWORD*)a1[541]; ii; ii = (_QWORD*)a1[541])
	{
		v113 = (*(__int64(__fastcall**)(_QWORD*, _QWORD))(*ii + 80i64))(ii, v5);
		v114 = 0i64;
		v115 = (__m128*)a2;
		while (1)
		{
			v116 = _mm_mul_ps(*(__m128*)(v113 + 32), *v115);
			if ((float)((float)((float)(v116.m128_f32[0] + _mm_shuffle_ps(v116, v116, 85).m128_f32[0])
				+ _mm_shuffle_ps(v116, v116, 170).m128_f32[0])
				+ v115->m128_f32[3]) > *(float*)(v113 + 48))
				break;
			++v114;
			++v115;
			if (v114 >= 6)
			{
				v117 = *(__m128*)v113;
				v118 = *(__m128*)(v113 + 16);
				v119 = 0i64;
				v120 = (__m128*)a2;
				while (1)
				{
					v121 = _mm_cmplt_ps((__m128)0i64, *v120);
					v122 = _mm_mul_ps(_mm_or_ps(_mm_andnot_ps(v121, v118), _mm_and_ps(v121, v117)), *v120);
					if ((float)((float)((float)(v122.m128_f32[0] + _mm_shuffle_ps(v122, v122, 85).m128_f32[0])
						+ _mm_shuffle_ps(v122, v122, 170).m128_f32[0])
						+ v120->m128_f32[3]) > 0.0)
						goto LABEL_99;
					++v119;
					++v120;
					if (v119 >= 6)
					{
						*(_QWORD*)m = ii;
						m += 2;
						(*(void(__fastcall**)(_QWORD*, __m128*)) * ii)(ii, v115);
						goto LABEL_99;
					}
				}
			}
		}
	LABEL_99:
		v123 = (_QWORD*)ii[28];
		if (v123)
			*v123 = ii[29];
		v124 = ii[29];
		if (v124)
			*(_QWORD*)(v124 + 224) = ii[28];
		ii[28] = 0i64;
		ii[29] = 0i64;
	}
	*((_QWORD*)v10 + 1) = ((__int64)m - *((_QWORD*)v10 + 2)) >> 3;
	*a5 = v10;
	return 0i64;
}
// 140B787C0: using guessed type __int64 (__fastcall *off_140B787C0[5])();
// 14036A980: using guessed type int var_158[4];
// 14036A980: using guessed type int var_148[4];

