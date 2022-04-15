//----- (00000001403C48E0) ----------------------------------------------------
__int64 __fastcall sub_1403C48E0(__int64 a1, __int64 a2)
{
	int* v4; // rcx
	__int64 v5; // r14
	_QWORD* v6; // r13
	int* v7; // rdi
	int* v8; // rbx
	unsigned int v9; // edi
	__int64 v10; // r8
	__int64 v11; // rbx
	int* v12; // rdx
	float v13; // xmm1_4
	__int64 v14; // rax
	float v15; // xmm6_4
	float v16; // xmm7_4
	double v17; // xmm0_8
	__m128 v18; // xmm12
	__int64 v19; // rax
	double v20; // xmm0_8
	float v21; // xmm6_4
	float v22; // xmm2_4
	float v23; // xmm2_4
	float v24; // xmm7_4
	double v25; // xmm0_8
	double v26; // xmm1_8
	double v27; // xmm6_8
	float v28; // xmm2_4
	float v29; // xmm5_4
	__m128* v30; // rdx
	float v31; // xmm7_4
	float v32; // xmm2_4
	float v33; // xmm11_4
	float v34; // xmm9_4
	float v35; // xmm10_4
	float v36; // xmm3_4
	float v37; // xmm8_4
	float v38; // xmm4_4
	__m128 v39; // xmm2
	__m128 v40; // xmm1
	__int64 v41; // rax
	float v42; // xmm6_4
	float v43; // xmm7_4
	double v44; // xmm0_8
	__int64 v45; // rax
	double v46; // xmm1_8
	float v47; // xmm6_4
	float v48; // xmm8_4
	float v49; // xmm8_4
	float v50; // xmm7_4
	double v51; // xmm0_8
	__m128 v52; // xmm12
	double v53; // xmm1_8
	double v54; // xmm6_8
	float v55; // xmm5_4
	float v56; // xmm5_4
	float v57; // xmm10_4
	float v58; // xmm7_4
	float v59; // xmm3_4
	float v60; // xmm9_4
	__m128* v61; // rdx
	float v62; // xmm11_4
	float v63; // xmm8_4
	float v64; // xmm4_4
	__m128 v65; // xmm2
	__m128 v66; // xmm1
	int* v67; // rdx
	int* v68; // r8
	_QWORD* v69; // rcx
	double v70; // xmm6_8
	float v71; // xmm9_4
	float v72; // xmm8_4
	float v73; // xmm2_4
	float v74; // xmm0_4
	float v75; // xmm5_4
	float v76; // xmm5_4
	float v77; // xmm1_4
	float v78; // xmm0_4
	float v79; // xmm7_4
	float v80; // xmm3_4
	float v81; // xmm9_4
	float v82; // xmm10_4
	float v83; // xmm11_4
	float v84; // xmm8_4
	float v85; // xmm4_4
	__m128 v86; // xmm2
	__m128 v87; // xmm1
	__int64 v88; // r8
	__m128* v89; // rdx
	__m128 v90; // xmm1
	__int64 v91; // rax
	void(__fastcall * **v92)(_QWORD); // rcx
	double v93; // xmm6_8
	float v94; // xmm5_4
	float v95; // xmm0_4
	float v96; // xmm5_4
	float v97; // xmm1_4
	float v98; // xmm2_4
	float v99; // xmm4_4
	float v100; // xmm8_4
	float v101; // xmm5_4
	float v102; // xmm7_4
	float v103; // xmm10_4
	float v104; // xmm3_4
	float v105; // xmm14_4
	__m128 v106; // xmm2
	__m128 v107; // xmm0
	float v108; // xmm0_4
	__int64 result; // rax
	__m128 v110; // [rsp+28h] [rbp-E0h]
	__m128 v111; // [rsp+28h] [rbp-E0h]
	__m128 v112; // [rsp+28h] [rbp-E0h]
	__m128 v113; // [rsp+28h] [rbp-E0h]
	__m128 v114; // [rsp+38h] [rbp-D0h]
	__m128 v115; // [rsp+38h] [rbp-D0h]
	__m128 v116; // [rsp+38h] [rbp-D0h]
	__m128 v117; // [rsp+38h] [rbp-D0h]
	__m128 v118; // [rsp+48h] [rbp-C0h]
	__m128 v119; // [rsp+48h] [rbp-C0h]
	__m128 v120; // [rsp+48h] [rbp-C0h]
	__m128 v121; // [rsp+48h] [rbp-C0h]
	__m128 v122; // [rsp+68h] [rbp-A0h]
	__m128 v123; // [rsp+68h] [rbp-A0h]
	__m128 v124; // [rsp+68h] [rbp-A0h]
	float v125[4]; // [rsp+78h] [rbp-90h] BYREF
	__m128 v126; // [rsp+88h] [rbp-80h]
	__m128 v127; // [rsp+98h] [rbp-70h] BYREF
	__m128 v128; // [rsp+A8h] [rbp-60h] BYREF
	__m128 v129[2]; // [rsp+B8h] [rbp-50h] BYREF

	*(_QWORD*)(a1 + 8) = 1i64;
	*(_QWORD*)a1 = off_140B66490;
	*(_QWORD*)(a1 + 16) = qword_140C77760;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	v4 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 80) = v4;
	*(_QWORD*)(a1 + 88) = v4;
	*(_QWORD*)(a1 + 96) = v4 + 4;
	if (v4)
		*(_WORD*)v4 = 0;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 152) = 0i64;
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_QWORD*)(a1 + 184) = 0i64;
	*(_QWORD*)(a1 + 192) = 0i64;
	*(_QWORD*)(a1 + 200) = 0i64;
	*(_QWORD*)(a1 + 216) = 0i64;
	*(_QWORD*)(a1 + 224) = 0i64;
	*(_QWORD*)(a1 + 232) = 0i64;
	*(_QWORD*)(a1 + 248) = 0i64;
	*(_QWORD*)(a1 + 256) = 0i64;
	*(_QWORD*)(a1 + 264) = 0i64;
	*(_QWORD*)(a1 + 280) = 0i64;
	*(_QWORD*)(a1 + 288) = 0i64;
	*(_QWORD*)(a1 + 296) = 0i64;
	*(_QWORD*)(a1 + 312) = 0i64;
	*(_QWORD*)(a1 + 320) = 0i64;
	*(_QWORD*)(a1 + 328) = 0i64;
	*(_QWORD*)(a1 + 344) = 0i64;
	*(_QWORD*)(a1 + 352) = 0i64;
	*(_QWORD*)(a1 + 360) = 0i64;
	v5 = 0i64;
	*(_QWORD*)(a1 + 376) = 0i64;
	*(_QWORD*)(a1 + 384) = 0i64;
	*(_QWORD*)(a1 + 392) = 0i64;
	*(_QWORD*)(a1 + 408) = 0i64;
	*(_QWORD*)(a1 + 416) = 0i64;
	*(_QWORD*)(a1 + 424) = 0i64;
	*(_QWORD*)(a1 + 440) = 0i64;
	*(_QWORD*)(a1 + 448) = 0i64;
	*(_QWORD*)(a1 + 456) = 0i64;
	*(_QWORD*)(a1 + 472) = 0i64;
	*(_QWORD*)(a1 + 480) = 0i64;
	*(_QWORD*)(a1 + 488) = 0i64;
	*(_DWORD*)(a1 + 688) = 0;
	*(_QWORD*)(a1 + 692) = 1065353216i64;
	*(_OWORD*)(a1 + 704) = 0i64;
	*(_QWORD*)(a1 + 720) = 0i64;
	*(_DWORD*)(a1 + 728) = 1065353216;
	*(_DWORD*)(a1 + 732) = 1065353216;
	*(_DWORD*)(a1 + 24) = *(_DWORD*)(*(_QWORD*)(a2 + 152)
		+ 72 * ((*(_QWORD*)(a2 + 160) - *(_QWORD*)(a2 + 152)) / 72i64)
		- 72);
	do
	{
		*(_DWORD*)(a1 + 4 * v5 + 28) = 0;
		v6 = (_QWORD*)(32 * v5 + a1 + 144);
		v7 = (int*)v6[2];
		v8 = (int*)v6[1];
		sub_1407DB590(v8, v7, 0i64);
		v6[2] += -4 * (v7 - v8);
		v9 = 0;
		if ((*(_QWORD*)(a2 + 160) - *(_QWORD*)(a2 + 152)) / 72i64)
		{
			v10 = 0i64;
			while (1)
			{
				v11 = 9 * v10;
				*(_DWORD*)(a1 + 4 * v5 + 28) += *(_DWORD*)(*(_QWORD*)(a2 + 152) + 72 * v10);
				if (v9 && !*(_DWORD*)(*(_QWORD*)(a2 + 152) + 4 * (v5 + 18 * v10) + 52))
					goto LABEL_31;
				v12 = (int*)v6[2];
				v13 = (float)*(int*)(*(_QWORD*)(a2 + 152) + 72 * v10) / (float)*(int*)(a1 + 24);
				v125[0] = v13;
				if (v12 == (int*)v6[3])
				{
					sub_1401E4420((_QWORD*)(32 * v5 + a1 + 144), v12, (int*)v125);
				}
				else
				{
					if (v12)
						*(float*)v12 = v13;
					v6[2] += 4i64;
				}
				if (!v5)
				{
					v14 = *(_QWORD*)(a2 + 152);
					v15 = *(float*)(v14 + 8 * v11 + 16);
					v16 = *(float*)(v14 + 8 * v11 + 12);
					v17 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 40))(&qword_140C77890);
					v18 = 0i64;
					v19 = *(_QWORD*)(a2 + 152);
					v20 = v17 * (float)(v15 - v16);
					v21 = *(float*)(v19 + 8 * v11 + 8);
					v22 = v20;
					v23 = v22 + v16;
					v24 = *(float*)(v19 + 8 * v11 + 4);
					v18.m128_f32[0] = (float)((float)*(int*)(a1 + 24) * v23) * 0.001;
					v25 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 40))(&qword_140C77890);
					v26 = (float)(v21 - v24);
					*(_QWORD*)&v27 = (unsigned int)dword_140C3B438;
					v28 = v25 * v26;
					*(float*)&v27 = (float)((float)(*(float*)&dword_140C3B438 * 0.0055555557) * (float)(v28 + v24)) * 0.5;
					sub_1408FE3D0(v27);
					sub_1408FC950(v27);
					sub_1408FE3D0(0.0);
					*(float*)&v25 = sub_1408FC950(0.0);
					v126.m128_f32[0] = (float)((float)(*(float*)&v25 * 0.0) * *(float*)&v27)
						+ (float)((float)(0.0 * *(float*)&v25) * *(float*)&v27);
					v126.m128_f32[1] = (float)((float)(0.0 * *(float*)&v25) * *(float*)&v27)
						- (float)((float)(*(float*)&v25 * 0.0) * *(float*)&v27);
					v126.m128_f32[2] = (float)((float)(*(float*)&v25 * *(float*)&v25) * *(float*)&v27)
						- (float)((float)(0.0 * 0.0) * *(float*)&v27);
					v126.m128_f32[3] = (float)((float)(0.0 * 0.0) * *(float*)&v27)
						+ (float)((float)(*(float*)&v25 * *(float*)&v25) * *(float*)&v27);
					v29 = _mm_shuffle_ps(v126, v126, 85).m128_f32[0];
					v30 = *(__m128**)(a1 + 320);
					*(float*)&v26 = _mm_shuffle_ps(v126, v126, 170).m128_f32[0];
					*(float*)&v25 = _mm_shuffle_ps(v126, v126, 255).m128_f32[0];
					v110.m128_i32[3] = 0;
					v118.m128_i32[3] = 0;
					v31 = (float)(v29 * 2.0) * *(float*)&v25;
					v32 = (float)(v29 * 2.0) * v126.m128_f32[0];
					v33 = (float)(v29 * 2.0) * v29;
					v34 = (float)(v126.m128_f32[0] * 2.0) * *(float*)&v25;
					v35 = (float)(v126.m128_f32[0] * 2.0) * v126.m128_f32[0];
					v36 = (float)(*(float*)&v26 * 2.0) * *(float*)&v25;
					*(float*)&v27 = (float)(*(float*)&v26 * 2.0) * v126.m128_f32[0];
					v37 = (float)(*(float*)&v26 * 2.0) * *(float*)&v26;
					v38 = (float)(*(float*)&v26 * 2.0) * v29;
					v118.m128_f32[0] = *(float*)&v27 + v31;
					v110.m128_f32[2] = *(float*)&v27 - v31;
					v110.m128_f32[0] = (float)(1.0 - v33) - v37;
					v114.m128_u64[1] = COERCE_UNSIGNED_INT(v38 + v34);
					v114.m128_f32[0] = v32 - v36;
					v110.m128_f32[1] = v32 + v36;
					v118.m128_f32[1] = v38 - v34;
					v118.m128_f32[2] = (float)(1.0 - v35) - v33;
					v114.m128_f32[1] = (float)(1.0 - v35) - v37;
					v39 = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps(v18, (__m128)0i64));
					v40 = _mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v39, v39, 85), v114),
								_mm_mul_ps(_mm_shuffle_ps(v39, v39, 0), v110)),
							_mm_mul_ps(_mm_shuffle_ps(v39, v39, 170), v118)),
						(__m128)xmmword_140B7AD00);
					v127 = v40;
					if (v30 == *(__m128**)(a1 + 328))
					{
						sub_1403D3B90((_QWORD*)(a1 + 304), v30, &v127);
					}
					else
					{
						if (v30)
							*v30 = v40;
						*(_QWORD*)(a1 + 320) += 16i64;
					}
					v41 = *(_QWORD*)(a2 + 152);
					v42 = *(float*)(v41 + 8 * v11 + 24);
					v43 = *(float*)(v41 + 8 * v11 + 20);
					v44 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 40))(&qword_140C77890);
					v45 = *(_QWORD*)(a2 + 152);
					v46 = (float)(v42 - v43);
					v47 = *(float*)(v45 + 8 * v11 + 32);
					v48 = v44 * v46;
					v49 = v48 + v43;
					v50 = *(float*)(v45 + 8 * v11 + 28);
					v51 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 40))(&qword_140C77890);
					v52 = 0i64;
					v53 = (float)(v47 - v50);
					*(_QWORD*)&v54 = (unsigned int)dword_140C3B438;
					v52.m128_f32[0] = v51 * v53;
					*(float*)&v54 = (float)((float)(*(float*)&dword_140C3B438 * 0.0055555557) * v49) * 0.5;
					v52.m128_f32[0] = v52.m128_f32[0] + v50;
					sub_1408FE3D0(v54);
					v55 = sub_1408FC950(v54);
					v122.m128_f32[0] = (float)((float)(0.0 * 0.0) * v55) + (float)((float)(0.0 * 0.0) * *(float*)&v54);
					v122.m128_f32[1] = (float)((float)(0.0 * 0.0) * v55) - (float)((float)(0.0 * 0.0) * *(float*)&v54);
					v122.m128_f32[3] = (float)((float)(0.0 * 0.0) * *(float*)&v54) + (float)((float)(0.0 * 0.0) * v55);
					v122.m128_f32[2] = (float)((float)(0.0 * 0.0) * *(float*)&v54) - (float)((float)(0.0 * 0.0) * v55);
					v56 = _mm_shuffle_ps(v122, v122, 85).m128_f32[0];
					*(float*)&v53 = _mm_shuffle_ps(v122, v122, 170).m128_f32[0];
					*(float*)&v51 = _mm_shuffle_ps(v122, v122, 255).m128_f32[0];
					v57 = (float)(v122.m128_f32[0] * 2.0) * v122.m128_f32[0];
					v58 = (float)(v56 * 2.0) * *(float*)&v51;
					v59 = (float)(*(float*)&v53 * 2.0) * *(float*)&v51;
					v60 = (float)(v122.m128_f32[0] * 2.0) * *(float*)&v51;
					v61 = *(__m128**)(a1 + 352);
					v62 = (float)(v56 * 2.0) * v56;
					v111.m128_i32[3] = 0;
					v115.m128_i32[3] = 0;
					v119.m128_i32[3] = 0;
					v63 = (float)(*(float*)&v53 * 2.0) * *(float*)&v53;
					v64 = (float)(*(float*)&v53 * 2.0) * v56;
					*(float*)&v53 = (float)(*(float*)&v53 * 2.0) * v122.m128_f32[0];
					v119.m128_f32[0] = *(float*)&v53 + v58;
					v111.m128_f32[0] = (float)(1.0 - v62) - v63;
					v111.m128_f32[2] = *(float*)&v53 - v58;
					v115.m128_f32[0] = (float)((float)(v56 * 2.0) * v122.m128_f32[0]) - v59;
					v111.m128_f32[1] = (float)((float)(v56 * 2.0) * v122.m128_f32[0]) + v59;
					v115.m128_f32[2] = v64 + v60;
					v115.m128_f32[1] = (float)(1.0 - v57) - v63;
					v119.m128_f32[2] = (float)(1.0 - v57) - v62;
					v119.m128_f32[1] = v64 - v60;
					v52.m128_f32[0] = (float)((float)((float)(v52.m128_f32[0] * (float)*(int*)(a1 + 24))
						* (float)*(int*)(a1 + 24))
						* 0.001)
						* 0.001;
					v65 = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps(v52, (__m128)0i64));
					v66 = _mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v65, v65, 85), v115),
								_mm_mul_ps(_mm_shuffle_ps(v65, v65, 0), v111)),
							_mm_mul_ps(_mm_shuffle_ps(v65, v65, 170), v119)),
						(__m128)xmmword_140B7AD00);
					v128 = v66;
					if (v61 == *(__m128**)(a1 + 360))
					{
						sub_1403D3B90((_QWORD*)(a1 + 336), v61, &v128);
					}
					else
					{
						if (v61)
							*v61 = v66;
						*(_QWORD*)(a1 + 352) += 16i64;
					}
					goto LABEL_31;
				}
				if (v5 == 1)
					break;
				switch (v5)
				{
				case 3i64:
					v69 = (_QWORD*)(a1 + 432);
					v88 = *(_QWORD*)(a2 + 152) + 40i64;
				LABEL_45:
					v67 = (int*)v69[2];
					v68 = (int*)(v88 + 8 * v11);
					if (v67 != (int*)v69[3])
					{
						if (v67)
							*v67 = *v68;
						v69[2] += 4i64;
						break;
					}
				LABEL_30:
					sub_1401E4420(v69, v67, v68);
					break;
				case 2i64:
					v89 = *(__m128**)(a1 + 480);
					v90 = _mm_mul_ps(
						_mm_cvtepi32_ps(
							_mm_shuffle_epi32(
								_mm_unpacklo_epi16(
									_mm_unpacklo_epi8(
										_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(a2 + 152) + 8 * v11 + 36)), 0),
										(__m128i)0i64),
									(__m128i)0i64),
								198)),
						(__m128)xmmword_140B7AB70);
					v129[0] = v90;
					if (v89 == *(__m128**)(a1 + 488))
					{
						sub_1403D3B90((_QWORD*)(a1 + 464), v89, v129);
					}
					else
					{
						if (v89)
							*v89 = v90;
						*(_QWORD*)(a1 + 480) += 16i64;
					}
					break;
				case 4i64:
					v69 = (_QWORD*)(a1 + 400);
					v88 = *(_QWORD*)(a2 + 152) + 48i64;
					goto LABEL_45;
				}
			LABEL_31:
				v10 = ++v9;
				if (v9 >= (unsigned __int64)((*(_QWORD*)(a2 + 160) - *(_QWORD*)(a2 + 152)) / 72i64))
					goto LABEL_32;
			}
			v67 = *(int**)(a1 + 384);
			v68 = (int*)(*(_QWORD*)(a2 + 152) + 44i64 + 8 * v11);
			if (v67 != *(int**)(a1 + 392))
			{
				if (v67)
					*v67 = *v68;
				*(_QWORD*)(a1 + 384) += 4i64;
				goto LABEL_31;
			}
			v69 = (_QWORD*)(a1 + 368);
			goto LABEL_30;
		}
	LABEL_32:
		++v5;
	} while (v5 < 5);
	if (*(_DWORD*)(a2 + 76) == 4)
	{
		*(_QWORD*)&v70 = (unsigned int)dword_140C3B438;
		*(_DWORD*)(a1 + 12) = 1;
		*(float*)&v70 = (float)((float)(*(float*)&v70 * 0.0055555557) * *(float*)(a2 + 84)) * 0.5;
		sub_1408FE3D0(v70);
		v71 = *(float*)&v70;
		sub_1408FC950(v70);
		v72 = *(float*)&v70;
		sub_1408FE3D0(0.0);
		LODWORD(v70) = sub_1408FC950(0.0);
		v73 = v72 * (float)(*(float*)&v70 * 0.0);
		v74 = v71 * (float)(*(float*)&v70 * 0.0);
		v75 = 0.0 * *(float*)&v70;
		*(float*)&v70 = *(float*)&v70 * *(float*)&v70;
		v123.m128_f32[0] = v73 + (float)(v71 * v75);
		v123.m128_f32[1] = (float)(v72 * v75) - v74;
		v123.m128_f32[2] = (float)(v71 * *(float*)&v70) - (float)(v72 * (float)(0.0 * 0.0));
		v123.m128_f32[3] = (float)(v71 * (float)(0.0 * 0.0)) + (float)(v72 * *(float*)&v70);
		v76 = _mm_shuffle_ps(v123, v123, 85).m128_f32[0];
		v77 = _mm_shuffle_ps(v123, v123, 170).m128_f32[0];
		v78 = _mm_shuffle_ps(v123, v123, 255).m128_f32[0];
		v79 = (float)(v76 * 2.0) * v78;
		v80 = (float)(v77 * 2.0) * v78;
		v81 = (float)(v123.m128_f32[0] * 2.0) * v78;
		v82 = (float)(v123.m128_f32[0] * 2.0) * v123.m128_f32[0];
		v83 = (float)(v76 * 2.0) * v76;
		v84 = (float)(v77 * 2.0) * v77;
		v85 = (float)(v77 * 2.0) * v76;
		v112.m128_f32[0] = (float)(1.0 - v83) - v84;
		v112.m128_f32[1] = (float)((float)(v76 * 2.0) * v123.m128_f32[0]) + v80;
		v112.m128_i32[3] = 0;
		v116.m128_f32[0] = (float)((float)(v76 * 2.0) * v123.m128_f32[0]) - v80;
		v116.m128_i32[3] = 0;
		v120.m128_i32[3] = 0;
		v112.m128_f32[2] = (float)((float)(v77 * 2.0) * v123.m128_f32[0]) - v79;
		v116.m128_f32[2] = v85 + v81;
		v116.m128_f32[1] = (float)(1.0 - v82) - v84;
		v120.m128_f32[2] = (float)(1.0 - v82) - v83;
		v120.m128_f32[0] = (float)((float)(v77 * 2.0) * v123.m128_f32[0]) + v79;
		v86 = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 88), (__m128)0i64));
		v120.m128_f32[1] = v85 - v81;
		v87 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v86, v86, 85), v116), _mm_mul_ps(_mm_shuffle_ps(v86, v86, 0), v112)),
				_mm_mul_ps(_mm_shuffle_ps(v86, v86, 170), v120)),
			(__m128)xmmword_140B7AD00);
		*(_DWORD*)(a1 + 16) = (int)v87.m128_f32[0];
		*(_DWORD*)(a1 + 20) = (int)_mm_shuffle_ps(v87, v87, 85).m128_f32[0];
	}
	v91 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v91;
		while (*(_WORD*)(a2 + 2 * v91));
	}
	sub_14001C480(a1 + 72, (int*)a2, (int*)(a2 + 2 * v91));
	v92 = *(void(__fastcall****)(_QWORD))(sub_1400E58C0(*(_QWORD*)(qword_140C65898 + 29504), (int*)a2) + 96);
	*(_QWORD*)(a1 + 104) = v92;
	if (v92)
		(**v92)(v92);
	*(_QWORD*)&v93 = (unsigned int)dword_140C3B438;
	*(float*)&v93 = *(float*)&dword_140C3B438 * 0.0055555557;
	*(__m128*)(a1 + 112) = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(
						_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a2 + 68)), 0),
						(__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	*(float*)&v93 = (float)(*(float*)&v93 * *(float*)(a2 + 84)) * 0.5;
	sub_1408FE3D0(v93);
	sub_1408FC950(v93);
	sub_1408FE3D0(0.0);
	v94 = sub_1408FC950(0.0);
	v124.m128_f32[0] = (float)((float)(0.0 * v94) * *(float*)&v93) + (float)((float)(v94 * 0.0) * *(float*)&v93);
	v124.m128_f32[3] = (float)((float)(0.0 * 0.0) * *(float*)&v93) + (float)((float)(v94 * v94) * *(float*)&v93);
	v124.m128_f32[2] = (float)((float)(v94 * v94) * *(float*)&v93) - (float)((float)(0.0 * 0.0) * *(float*)&v93);
	v124.m128_f32[1] = (float)((float)(0.0 * v94) * *(float*)&v93) - (float)((float)(v94 * 0.0) * *(float*)&v93);
	v95 = _mm_shuffle_ps(v124, v124, 170).m128_f32[0];
	v96 = _mm_shuffle_ps(v124, v124, 255).m128_f32[0];
	v97 = _mm_shuffle_ps(v124, v124, 85).m128_f32[0];
	v98 = (float)(v97 * 2.0) * v124.m128_f32[0];
	v99 = (float)(v95 * 2.0) * v124.m128_f32[0];
	v100 = v96 * (float)(v124.m128_f32[0] * 2.0);
	*(float*)&v93 = v96 * (float)(v97 * 2.0);
	v101 = v96 * (float)(v95 * 2.0);
	v102 = (float)(v95 * 2.0) * v95;
	v103 = (float)(v97 * 2.0) * v97;
	v104 = (float)(v95 * 2.0) * v97;
	v113.m128_f32[0] = (float)(1.0 - v103) - v102;
	v105 = 1.0 - (float)((float)(v124.m128_f32[0] * 2.0) * v124.m128_f32[0]);
	v113.m128_i32[3] = 0;
	v113.m128_f32[1] = v98 + v101;
	v117.m128_f32[0] = v98 - v101;
	v113.m128_f32[2] = v99 - *(float*)&v93;
	v117.m128_f32[1] = v105 - v102;
	v117.m128_u64[1] = COERCE_UNSIGNED_INT(v104 + v100);
	v121.m128_f32[1] = v104 - v100;
	v106 = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 88), (__m128)0i64));
	v121.m128_u64[1] = COERCE_UNSIGNED_INT(v105 - v103);
	v121.m128_f32[0] = v99 + *(float*)&v93;
	*(__m128*)(a1 + 128) = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v106, v106, 85), v117),
				_mm_mul_ps(_mm_shuffle_ps(v106, v106, 0), v113)),
			_mm_mul_ps(_mm_shuffle_ps(v106, v106, 170), v121)),
		(__m128)xmmword_140B7AD00);
	*(_DWORD*)(a1 + 688) = *(_DWORD*)(a2 + 180);
	*(float*)(a1 + 692) = *(float*)(a2 + 184) * 0.001;
	*(_DWORD*)(a1 + 696) = *(_DWORD*)(a2 + 176);
	v107 = (__m128) * (unsigned int*)(a2 + 176);
	v107.m128_f32[0] = v107.m128_f32[0] * 30.0;
	*(__m128*)(a1 + 704) = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps(v107, (__m128)0i64));
	*(_DWORD*)(a1 + 720) = 0;
	*(_DWORD*)(a1 + 724) = *(_DWORD*)(a2 + 188);
	v107.m128_i32[0] = *(_DWORD*)(a2 + 192);
	*(_DWORD*)(a1 + 732) = v107.m128_i32[0];
	if (v107.m128_f32[0] == 0.0)
		*(_DWORD*)(a1 + 732) = 1065353216;
	v108 = *(float*)(a2 + 196);
	result = a1;
	*(float*)(a1 + 728) = v108;
	if (v108 == 0.0)
		*(_DWORD*)(a1 + 728) = 1065353216;
	return result;
}
// 140B66490: using guessed type __int64 (__fastcall *off_140B66490[23])();
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C77760: using guessed type __int64 qword_140C77760;
// 140C77890: using guessed type __int64 qword_140C77890;
// 1403C48E0: using guessed type __m128 var_100[2];
// 1403C48E0: using guessed type float anonymous_0[4];

