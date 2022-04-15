//----- (000000014025FA40) ----------------------------------------------------
__int64 __fastcall sub_14025FA40(__m128* a1, int* a2, unsigned __int64 a3, __m128* a4, unsigned __int64 a5, __m128* a6)
{
	__int64 v10; // rdx
	__int64 v11; // r9
	int* v12; // rbx
	int* v13; // rax
	int* v14; // rcx
	unsigned __int64 v16; // rax
	int* v17; // rax
	int* v18; // rax
	__m128* v19; // r15
	unsigned __int64 v20; // rdx
	__int64 v21; // r8
	__int64 v22; // rax
	__m128* v23; // rbx
	unsigned __int64 v24; // r12
	__int64 v25; // rdi
	__m128* v26; // rsi
	__int64* v27; // r15
	__m128* v28; // rbp
	__m128* v29; // r14
	__m128* v30; // r9
	__m128* v31; // r8
	_OWORD* m128_f32; // rdi
	_OWORD* v33; // r11
	_OWORD* v34; // r10
	__m128 v35; // xmm5
	__int64 v36; // rcx
	__m128 v37; // xmm4
	__m128 v38; // xmm1
	float v39; // xmm3_4
	__m128 v40; // xmm1
	float v41; // xmm2_4
	float v42; // xmm0_4
	float v43; // xmm1_4
	__m128 v44; // xmm7
	__int64 v45; // rdx
	__int64 v46; // rax
	__int64 v47; // rcx
	__m128 v48; // xmm8
	float v49; // xmm10_4
	__int64 v50; // rdx
	__int64 v51; // rax
	__m128 v52; // xmm1
	__m128 v53; // xmm5
	__m128 v54; // xmm6
	__m128 v55; // xmm3
	__m128 v56; // xmm5
	__m128 v57; // xmm2
	__m128 v58; // xmm5
	float v59; // xmm0_4
	__m128 v60; // xmm4
	__m128 v61; // xmm2
	__m128 v62; // xmm0
	__m128 v63; // xmm2
	__m128 v64; // xmm1
	__m128 v65; // xmm2
	__m128 v66; // xmm1
	__m128 v67; // xmm6
	__m128 v68; // xmm3
	__m128 v69; // xmm1
	__m128 v70; // xmm2
	__m128* v71; // rsi
	__int64* v72; // r13
	__m128 v73; // xmm10
	__m128* v74; // rdi
	__m128* v75; // r14
	__m128* v76; // r9
	__m128* v77; // r8
	__m128* v78; // r12
	__m128* v79; // r15
	__m128* v80; // rbp
	__m128* v81; // rsi
	__m128* v82; // r11
	__m128* v83; // r10
	__int64 v84; // rax
	float v85; // xmm0_4
	float v86; // xmm1_4
	__int64 v87; // rdx
	__int64 v88; // rcx
	__m128 v89; // xmm11
	__int64 v90; // rax
	__m128 v91; // xmm12
	__int64 v92; // rdx
	float v93; // xmm7_4
	__int64 v94; // rcx
	__m128 v95; // xmm5
	__m128 v96; // xmm3
	__m128 v97; // xmm0
	__m128 v98; // xmm3
	__m128 v99; // xmm6
	__m128 v100; // xmm2
	__m128 v101; // xmm0
	__m128 v102; // xmm2
	__m128 v103; // xmm4
	__m128 v104; // xmm2
	float v105; // xmm14_4
	__int64 v106; // rcx
	float v107; // xmm0_4
	__m128 v108; // xmm4
	__m128 v109; // xmm5
	__m128 v110; // xmm1
	__m128 v111; // xmm0
	__m128 v112; // xmm1
	__m128 v113; // xmm6
	__m128 v114; // xmm2
	__m128 v115; // xmm3
	__m128 v116; // xmm0
	__m128 v117; // xmm2
	__m128 v118; // xmm3
	__m128 v119; // xmm7
	__m128 v120; // xmm1
	__m128 v121; // xmm3
	__m128 v122; // xmm8
	__m128 v123; // xmm2
	__m128 v124; // xmm4
	__m128 v125; // xmm0
	__m128 v126; // xmm2
	__m128 v127; // xmm4
	__m128 v128; // xmm5
	__m128 v129; // xmm2
	float v130; // xmm1_4
	__m128 v131; // xmm2
	float v132; // xmm1_4
	__m128 v133; // xmm2
	__int64 v134; // rdi
	int* v135; // rbx
	int* v136; // rax
	__int64 v138; // [rsp+38h] [rbp-110h]
	__int64* v139; // [rsp+40h] [rbp-108h]
	float v140; // [rsp+48h] [rbp-100h]
	float v141; // [rsp+50h] [rbp-F8h]
	float v142; // [rsp+54h] [rbp-F4h]
	float v143; // [rsp+58h] [rbp-F0h]

	sub_1402626B0(&a1[152].m128_i64[1], a5);
	sub_1401ADE90(a1[152].m128_i64[1], v10, a4, 16i64, a6, (unsigned int)a5);
	v12 = (int*)a1[152].m128_u64[1];
	v13 = v12;
	v14 = &v12[4 * a5];
	if (v12 >= v14)
		return 0i64;
	while (*((float*)v13 + 2) >= 0.0)
	{
		v13 = (int*)((char*)v13 + v11);
		if (v13 >= v14)
			return 0i64;
	}
	v16 = a1[152].m128_u64[1];
	while ((float)-a1[28].m128_f32[3] >= *(float*)(v16 + 8))
	{
		v16 += v11;
		if (v16 >= (unsigned __int64)v14)
		{
			v17 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 240i64))(
				qword_140C65670,
				(unsigned int)(2 * a3),
				0i64);
			if (v17)
			{
				sub_1407DB590(v17, a2, 2 * a3);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 248i64))(qword_140C65670);
				v18 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 224i64))(
					qword_140C65670,
					(unsigned int)(16 * a5),
					1i64);
				if (v18)
				{
					sub_1407DB590(v18, v12, 16 * a5);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 232i64))(qword_140C65670);
					a1[154].m128_u64[1] = a3;
					a1[155].m128_u64[0] = a5;
					return 1i64;
				}
			}
			return 0i64;
		}
	}
	v19 = a1;
	sub_1402626B0(&a1[153].m128_i64[1], a3);
	v20 = 0i64;
	if (a3)
	{
		v21 = 0i64;
		do
		{
			v22 = *((unsigned __int16*)a2 + v20++);
			v21 += 16i64;
			*(_OWORD*)(v21 + a1[153].m128_u64[1] - 16) = *(_OWORD*)&v12[4 * v22];
		} while (v20 < a3);
	}
	v23 = (__m128*)a1[153].m128_u64[1];
	v24 = 0i64;
	v25 = 1i64;
	do
	{
		v25 = 1 - v25;
		v138 = v25;
		v26 = &v19[*(int*)((char*)&unk_140B60428 + v24) + 28];
		v27 = &v19[v25 + 152].m128_i64[1];
		v139 = v27;
		sub_1402626B0(v27, 2 * a3);
		v28 = &v23[a3];
		v29 = (__m128*) * v27;
		if (v23 >= v28)
			goto LABEL_32;
		v30 = v29 + 2;
		v31 = v29 + 1;
		m128_f32 = (_OWORD*)v29[5].m128_f32;
		v33 = (_OWORD*)v29[4].m128_f32;
		v34 = (_OWORD*)v29[3].m128_f32;
		do
		{
			v35 = *v26;
			v36 = 0i64;
			v37 = _mm_mul_ps(*v23, *v26);
			v38 = _mm_mul_ps(v23[1], *v26);
			v141 = (float)((float)(v37.m128_f32[0] + _mm_shuffle_ps(v37, v37, 85).m128_f32[0])
				+ _mm_shuffle_ps(v37, v37, 170).m128_f32[0])
				+ _mm_shuffle_ps(v35, v35, 255).m128_f32[0];
			v39 = (float)(v38.m128_f32[0] + _mm_shuffle_ps(v38, v38, 85).m128_f32[0])
				+ _mm_shuffle_ps(v38, v38, 170).m128_f32[0];
			v40 = _mm_mul_ps(v23[2], v35);
			v142 = v39 + _mm_shuffle_ps(v35, v35, 255).m128_f32[0];
			v41 = v40.m128_f32[0];
			LODWORD(v42) = _mm_shuffle_ps(v40, v40, 85).m128_u32[0];
			LODWORD(v43) = _mm_shuffle_ps(v40, v40, 170).m128_u32[0];
			if (v141 > v142)
				v36 = 1i64;
			v143 = (float)((float)(v41 + v42) + v43) + v26->m128_f32[3];
			if (v143 < *(&v141 + v36))
				v36 = 2i64;
			v44 = (__m128) * ((unsigned int*)&v141 + v36);
			if (v44.m128_f32[0] < 0.0)
			{
				v45 = qword_140B60400[v36];
				v46 = qword_140B60408[v36];
				v47 = v36;
				v48 = (__m128) * ((unsigned int*)&v141 + v45);
				v49 = *(&v141 + v46);
				v50 = v45;
				v51 = v46;
				if (v48.m128_f32[0] > 0.0)
				{
					v58 = v23[v47];
					v59 = v44.m128_f32[0] - v48.m128_f32[0];
					if (v49 <= 0.0)
					{
						v60 = v23[v50];
						v44.m128_f32[0] = v44.m128_f32[0] / v59;
						m128_f32 += 6;
						v29 += 6;
						v34 += 6;
						v33 += 6;
						v31 += 6;
						v30 += 6;
						v61 = v44;
						v61.m128_f32[0] = fminf(v44.m128_f32[0], 1.0);
						v62 = v61;
						v63 = v23[v51];
						v29[-6] = v58;
						v31[-6] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v60, v58), _mm_shuffle_ps(v62, v62, 0)), v58);
						v48.m128_f32[0] = v48.m128_f32[0] / (float)(v48.m128_f32[0] - v49);
						v64 = v48;
						v64.m128_f32[0] = fminf(v48.m128_f32[0], 1.0);
						v65 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v63, v60), _mm_shuffle_ps(v64, v64, 0)), v60);
						v30[-6] = v65;
						*(v34 - 6) = v23[v47];
						*(v33 - 6) = v65;
						*(m128_f32 - 6) = v23[v51];
						goto LABEL_30;
					}
					v66 = v44;
					v66.m128_f32[0] = v44.m128_f32[0] / v59;
					v67 = _mm_sub_ps(v23[v50], v58);
					v68 = v66;
					v69 = v23[v51];
					*v29 = v58;
					v68.m128_f32[0] = fminf(v68.m128_f32[0], 1.0);
					v44.m128_f32[0] = v44.m128_f32[0] / (float)(v44.m128_f32[0] - v49);
					*v31 = _mm_add_ps(_mm_mul_ps(v67, _mm_shuffle_ps(v68, v68, 0)), v58);
					v70 = v44;
					v70.m128_f32[0] = fminf(v44.m128_f32[0], 1.0);
					*v30 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v69, v58), _mm_shuffle_ps(v70, v70, 0)), v58);
				}
				else
				{
					if (v49 > 0.0)
					{
						v52 = v23[v47];
						m128_f32 += 6;
						v29 += 6;
						v34 += 6;
						v33 += 6;
						v31 += 6;
						v30 += 6;
						v48.m128_f32[0] = v48.m128_f32[0] / (float)(v48.m128_f32[0] - v49);
						v53 = v23[v51];
						v54 = _mm_sub_ps(v53, v52);
						v55 = v48;
						v55.m128_f32[0] = fminf(v48.m128_f32[0], 1.0);
						v56 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v53, v23[v50]), _mm_shuffle_ps(v55, v55, 0)), v23[v50]);
						v29[-6] = v52;
						v44.m128_f32[0] = v44.m128_f32[0] / (float)(v44.m128_f32[0] - v49);
						v57 = v44;
						v57.m128_f32[0] = fminf(v44.m128_f32[0], 1.0);
						v31[-6] = v23[v50];
						v30[-6] = v56;
						*(v34 - 6) = v23[v47];
						*(v33 - 6) = v56;
						*(m128_f32 - 6) = _mm_add_ps(_mm_mul_ps(v54, _mm_shuffle_ps(v57, v57, 0)), v52);
						goto LABEL_30;
					}
					*v29 = v23[v47];
					*v31 = v23[v50];
					*v30 = v23[v51];
				}
				v29 += 3;
				v34 += 3;
				v33 += 3;
				m128_f32 += 3;
				v31 += 3;
				v30 += 3;
			}
		LABEL_30:
			v23 += 3;
		} while (v23 < v28);
		v27 = v139;
		v25 = v138;
	LABEL_32:
		a3 = ((__int64)v29 - *v27) >> 4;
		if (!a3)
			return 0i64;
		sub_1402626B0(v27, a3);
		v23 = (__m128*) * v27;
		v19 = a1;
		v24 += 4i64;
	} while (v24 < 0x10);
	v71 = a1;
	v72 = &a1[-v25 + 153].m128_i64[1];
	v73 = _mm_shuffle_ps(a1[28], a1[28], 255);
	v73.m128_f32[0] = v73.m128_f32[0] + 0.001;
	sub_1402626B0(v72, 3 * a3);
	v74 = (__m128*) * v72;
	v75 = &v23[a3];
	if (v23 < v75)
	{
		v76 = v74 + 2;
		v77 = v74 + 1;
		v78 = v74 + 8;
		v79 = v74 + 7;
		v80 = v74 + 6;
		v81 = v74 + 5;
		v82 = v74 + 4;
		v83 = v74 + 3;
		while (1)
		{
			v84 = 0i64;
			v85 = v73.m128_f32[0] + v23[1].m128_f32[2];
			v86 = v73.m128_f32[0] + v23[2].m128_f32[2];
			*(float*)&v139 = v73.m128_f32[0] + v23->m128_f32[2];
			*((float*)&v139 + 1) = v85;
			v140 = v86;
			if (*(float*)&v139 > v85)
				v84 = 1i64;
			if (v86 < *((float*)&v139 + v84))
				v84 = 2i64;
			v87 = qword_140B60400[v84];
			v88 = qword_140B60408[v84];
			v89 = (__m128) * ((unsigned int*)&v139 + v84);
			v90 = v84;
			if (v89.m128_f32[0] > 0.0)
			{
				v129 = v73;
				v129.m128_f32[0] = v73.m128_f32[0] / (float)(v73.m128_f32[0] - v89.m128_f32[0]);
				v130 = v73.m128_f32[0] - *((float*)&v139 + v87);
				*v74 = _mm_mul_ps(_mm_shuffle_ps(v129, v129, 0), v23[v90]);
				v131 = v73;
				v131.m128_f32[0] = v73.m128_f32[0] / v130;
				v132 = v73.m128_f32[0] - *((float*)&v139 + v88);
				*v77 = _mm_mul_ps(_mm_shuffle_ps(v131, v131, 0), v23[v87]);
				v133 = v73;
				v133.m128_f32[0] = v73.m128_f32[0] / v132;
				*v76 = _mm_mul_ps(_mm_shuffle_ps(v133, v133, 0), v23[v88]);
				goto LABEL_51;
			}
			v91 = (__m128) * ((unsigned int*)&v139 + v87);
			v92 = v87;
			if (v91.m128_f32[0] <= 0.0)
				break;
			v105 = *((float*)&v139 + v88);
			v106 = v88;
			v107 = v89.m128_f32[0] - v91.m128_f32[0];
			if (v105 > 0.0)
			{
				v119 = v23[v90];
				v120 = v89;
				v120.m128_f32[0] = v89.m128_f32[0] / v107;
				v121 = v120;
				v121.m128_f32[0] = fminf(v89.m128_f32[0] / v107, 1.0);
				v122 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v23[v92], v119), _mm_shuffle_ps(v121, v121, 0)), v119);
				v89.m128_f32[0] = v89.m128_f32[0] / (float)(v89.m128_f32[0] - v105);
				v123 = v89;
				v123.m128_f32[0] = fminf(v89.m128_f32[0], 1.0);
				v124 = v73;
				v125 = v123;
				v126 = v73;
				v124.m128_f32[0] = v73.m128_f32[0] / (float)(v73.m128_f32[0] - v91.m128_f32[0]);
				v126.m128_f32[0] = v73.m128_f32[0] / (float)(v73.m128_f32[0] - v105);
				v127 = _mm_mul_ps(_mm_shuffle_ps(v124, v124, 0), v23[v92]);
				v128 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v23[v106], v119), _mm_shuffle_ps(v125, v125, 0)), v119);
				v104 = _mm_mul_ps(_mm_shuffle_ps(v126, v126, 0), v23[v106]);
				*v74 = v119;
				*v77 = v122;
				*v76 = v128;
				*v83 = v122;
				*v82 = v127;
				*v81 = v128;
				*v80 = v128;
				*v79 = v127;
			LABEL_48:
				*v78 = v104;
				goto LABEL_49;
			}
			v108 = v23[v92];
			v109 = v23[v90];
			v89.m128_f32[0] = v89.m128_f32[0] / v107;
			v110 = v89;
			v110.m128_f32[0] = fminf(v89.m128_f32[0], 1.0);
			v111 = v110;
			v112 = v91;
			v113 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v108, v109), _mm_shuffle_ps(v111, v111, 0)), v109);
			v112.m128_f32[0] = v91.m128_f32[0] / (float)(v91.m128_f32[0] - v105);
			v114 = v112;
			v114.m128_f32[0] = fminf(v112.m128_f32[0], 1.0);
			v115 = v23[v106];
			*v74 = v109;
			*v77 = v113;
			v116 = v114;
			v117 = v73;
			v117.m128_f32[0] = v73.m128_f32[0] / (float)(v73.m128_f32[0] - v91.m128_f32[0]);
			v118 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v115, v108), _mm_shuffle_ps(v116, v116, 0)), v108);
			*v76 = v118;
			*v83 = v23[v90];
			*v82 = v118;
			*v81 = v23[v106];
			*v80 = v113;
			*v79 = _mm_mul_ps(_mm_shuffle_ps(v117, v117, 0), v108);
			*v78 = v118;
		LABEL_49:
			v74 += 9;
			v83 += 9;
			v82 += 9;
			v81 += 9;
			v80 += 9;
			v79 += 9;
			v78 += 9;
			v77 += 9;
			v76 += 9;
		LABEL_52:
			v23 += 3;
			if (v23 >= v75)
			{
				v71 = a1;
				goto LABEL_54;
			}
		}
		v93 = *((float*)&v139 + v88);
		v94 = v88;
		if (v93 <= 0.0)
		{
			*v74 = v23[v90];
			*v77 = v23[v92];
			*v76 = v23[v94];
		LABEL_51:
			v74 += 3;
			v83 += 3;
			v82 += 3;
			v81 += 3;
			v80 += 3;
			v79 += 3;
			v78 += 3;
			v77 += 3;
			v76 += 3;
			goto LABEL_52;
		}
		v95 = v23[v94];
		v91.m128_f32[0] = v91.m128_f32[0] / (float)(v91.m128_f32[0] - v93);
		v96 = v91;
		v96.m128_f32[0] = fminf(v91.m128_f32[0], 1.0);
		v97 = v96;
		v98 = v23[v90];
		v99 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v95, v23[v92]), _mm_shuffle_ps(v97, v97, 0)), v23[v92]);
		*v74 = v98;
		v89.m128_f32[0] = v89.m128_f32[0] / (float)(v89.m128_f32[0] - v93);
		v100 = v89;
		v100.m128_f32[0] = fminf(v89.m128_f32[0], 1.0);
		v101 = v100;
		v102 = v73;
		v102.m128_f32[0] = v73.m128_f32[0] / (float)(v73.m128_f32[0] - v93);
		*v77 = v23[v92];
		*v76 = v99;
		v103 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v95, v98), _mm_shuffle_ps(v101, v101, 0)), v98);
		v104 = _mm_mul_ps(_mm_shuffle_ps(v102, v102, 0), v95);
		*v83 = v23[v90];
		*v82 = v99;
		*v81 = v103;
		*v80 = v103;
		*v79 = v99;
		goto LABEL_48;
	}
LABEL_54:
	v134 = ((__int64)v74 - *v72) >> 4;
	if (!v134)
		return 0i64;
	sub_1402626B0(v72, v134);
	v135 = (int*)*v72;
	v136 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 224i64))(
		qword_140C65670,
		(unsigned int)(16 * v134),
		1i64);
	if (!v136)
		return 0i64;
	sub_1407DB590(v136, v135, 16 * v134);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 232i64))(qword_140C65670);
	v71[154].m128_u64[1] = 0i64;
	v71[155].m128_u64[0] = v134;
	return 1i64;
}
// 14025FAB7: variable 'v10' is possibly undefined
// 14025FAE7: variable 'v11' is possibly undefined
// 140B60400: using guessed type __int64 qword_140B60400[];
// 140B60408: using guessed type __int64 qword_140B60408[6];
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C65670: using guessed type __int64 qword_140C65670;

