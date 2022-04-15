//----- (00000001402DA040) ----------------------------------------------------
__int64 __fastcall sub_1402DA040(__int64* a1, unsigned __int64 a2, __m128* a3, int a4)
{
	__int64 v4; // rax
	__m128* v5; // r13
	__int16 v6; // r12
	__int64 v9; // rax
	__int32* v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64 v13; // rsi
	__int64 v14; // rax
	__int64 v15; // rbx
	__int64 v16; // r12
	int* v17; // rdi
	__int64 v18; // rax
	unsigned int v19; // r10d
	unsigned __int8* v20; // r8
	float v21; // xmm7_4
	float v22; // xmm4_4
	float v23; // xmm3_4
	float v24; // xmm2_4
	int v25; // eax
	int v26; // eax
	int v27; // eax
	int v28; // eax
	int v29; // eax
	int v30; // eax
	int v31; // eax
	int* v32; // r9
	unsigned __int8* v33; // rdx
	float v34; // xmm2_4
	int v35; // eax
	int v36; // eax
	int v37; // eax
	int v38; // eax
	int v39; // eax
	int v40; // eax
	int v41; // eax
	unsigned int v42; // edx
	__int64 v43; // r10
	__int64 v44; // rcx
	__int64 v45; // r8
	int v46; // r9d
	__int64 v47; // rax
	__int64 v48; // rax
	__int64 v49; // rax
	__int64 v50; // rax
	__int64 v51; // r9
	int v52; // r10d
	unsigned int* v53; // r8
	__int64 v54; // rax
	float* m128_f32; // rdx
	__m128* v56; // r8
	unsigned int v57; // r9d
	unsigned __int64 v58; // rcx
	__int64 v59; // rax
	float v60; // xmm0_4
	__int64 v61; // rax
	float v62; // xmm0_4
	__int64 v63; // rax
	float v64; // xmm0_4
	__int64 v65; // rax
	float v66; // xmm0_4
	__int64 v67; // rax
	float v68; // xmm0_4
	int v69; // eax
	__int32* v70; // rax
	__int64 v71; // rcx
	__int64 v72; // rax
	__m128 v73; // xmm4
	int v74; // esi
	__m128 v75; // xmm3
	int v76; // edi
	__int64 v77; // r13
	int v78; // ebx
	unsigned __int16* v79; // rdx
	__int64 v80; // rcx
	__m128 v81; // xmm7
	__m128 v82; // xmm5
	__m128 v83; // xmm8
	float v84; // xmm9_4
	float v85; // xmm2_4
	float v86; // xmm3_4
	float v87; // xmm2_4
	float v88; // xmm0_4
	__m128 v89; // xmm3
	float v90; // xmm0_4
	__m128 v91; // xmm2
	__m128 v92; // xmm4
	float v93; // xmm3_4
	float v94; // xmm2_4
	float v95; // xmm0_4
	float v96; // xmm1_4
	bool v97; // cf
	__m128 v98; // xmm2
	__m128 v99; // xmm3
	__m128 v100; // xmm0
	__m128 v101; // xmm3
	__m128 v102; // xmm2
	__m128 v103; // xmm2
	float v104; // xmm3_4
	__m128 v105; // xmm4
	__m128 v106; // xmm2
	__m128 v107; // xmm4
	__m128 v108; // xmm3
	__int64 v109; // rax
	__int64 v110; // rax
	__int64 v111; // rbx
	__int64 v112; // rdi
	__int64 v113; // rsi
	__int64 v114; // rax
	__m128* v115; // rsi
	__int64 v116; // rbx
	__int64 v117; // rax
	__m128* v118; // rax
	__m128 v119; // xmm0
	__int64 v120; // rcx
	__int64 v121; // rax
	__int64 v122; // rbx
	__int64 v123; // rdi
	__int64 v124; // rax
	__int64 v125; // rcx
	__int32 v126; // xmm0_4
	int v127; // eax
	bool v128; // zf
	__int64 v129; // rax
	__int64 v130; // rax
	int v131; // ebx
	unsigned int v132; // ebx
	__int64 v133; // rax
	__int64 v134; // rax
	__int64 v135; // rax
	int v136; // ebx
	__int64 v137; // rax
	__int64 v138; // rdi
	int v139; // ebx
	__int64 v140; // rax
	__int64 v141; // rdx
	unsigned __int16* v142; // rcx
	__m128i v143; // xmm0
	float v144; // xmm5_4
	__m128i v145; // xmm1
	__int64 v146; // rcx
	__int64 v147; // rax
	__int64 v148; // rax
	int v149; // ebx
	__int64 v150; // rax
	unsigned int v151; // edx
	__int64 v152; // rcx
	__int64 v154; // [rsp+28h] [rbp-E0h] BYREF
	int v155; // [rsp+30h] [rbp-D8h]
	int v156; // [rsp+34h] [rbp-D4h]
	__int64 v157; // [rsp+38h] [rbp-D0h] BYREF
	__m128 v158; // [rsp+48h] [rbp-C0h] BYREF
	__m128 v159; // [rsp+58h] [rbp-B0h] BYREF
	__m128 v160; // [rsp+68h] [rbp-A0h] BYREF
	__m128 v161; // [rsp+78h] [rbp-90h]
	__m128 v162; // [rsp+88h] [rbp-80h] BYREF
	float v163[16]; // [rsp+98h] [rbp-70h] BYREF
	unsigned int v164[16]; // [rsp+D8h] [rbp-30h] BYREF
	int v165[16]; // [rsp+118h] [rbp+10h] BYREF

	v4 = *a1;
	v5 = (__m128*)a2;
	v158.m128_u64[0] = a2;
	v6 = a4;
	v155 = a4;
	v160.m128_i32[0] = -1;
	(*(void(__fastcall**)(__int64*, __m128*))(v4 + 48))(a1, &v160);
	if ((v6 & 0x308) != 0)
	{
		if ((v6 & 8) != 0)
		{
			v9 = *a1;
			v154 = 0i64;
			(*(void(__fastcall**)(__int64*, __int64, __int64*))(v9 + 72))(a1, 1i64, &v154);
			v10 = (__int32*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v154 + 24i64))(v154);
			a3[1].m128_i32[0] = *v10;
			a3[1].m128_i32[1] = v10[1];
			a3[1].m128_i32[2] = v10[2];
			v11 = v154;
			a3[1].m128_i32[3] = v10[3];
			if (v11)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		}
		if ((v6 & 0x300) != 0)
		{
			v12 = *a1;
			v154 = 0i64;
			(*(void(__fastcall**)(__int64*, __int64, __int64*))(v12 + 72))(a1, 6i64, &v154);
			v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v154 + 16i64))(v154);
			v14 = *a1;
			v157 = 0i64;
			(*(void(__fastcall**)(__int64*, __int64, __int64*))(v14 + 72))(a1, 7i64, &v157);
			v15 = 0i64;
			v16 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v157 + 16i64))(v157);
			v17 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v154 + 24i64))(v154);
			v18 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v157 + 24i64))(v157);
			v19 = 0;
			v20 = (unsigned __int8*)v18;
			v21 = v5->m128_f32[0];
			v22 = v5->m128_f32[1];
			do
			{
				if (v19)
					v23 = v22;
				else
					v23 = 1.0 - v22;
				v24 = (float)(1.0 - v21) * v23;
				if (*v17 && *v20)
				{
					v165[v15] = *v17;
					v25 = *v20;
					v164[v15] = v15;
					v163[v15] = (float)((float)v25 * 0.0039215689) * v24;
					v15 = (unsigned int)(v15 + 1);
				}
				v26 = v17[1];
				if (v26 && v20[1])
				{
					v165[v15] = v26;
					v27 = v20[1];
					v164[v15] = v15;
					v163[v15] = (float)((float)v27 * 0.0039215689) * v24;
					v15 = (unsigned int)(v15 + 1);
				}
				v28 = v17[2];
				if (v28 && v20[2])
				{
					v165[v15] = v28;
					v29 = v20[2];
					v164[v15] = v15;
					v163[v15] = (float)((float)v29 * 0.0039215689) * v24;
					v15 = (unsigned int)(v15 + 1);
				}
				v30 = v17[3];
				if (v30 && v20[3])
				{
					v165[v15] = v30;
					v31 = v20[3];
					v164[v15] = v15;
					v163[v15] = (float)((float)v31 * 0.0039215689) * v24;
					v15 = (unsigned int)(v15 + 1);
				}
				v32 = (int*)((char*)v17 + *(int*)(v13 + 40));
				v33 = &v20[*(int*)(v16 + 40)];
				v34 = v21 * v23;
				if (*v32 && *v33)
				{
					v165[v15] = *v32;
					v35 = *v33;
					v164[v15] = v15;
					v163[v15] = (float)((float)v35 * 0.0039215689) * v34;
					v15 = (unsigned int)(v15 + 1);
				}
				v36 = v32[1];
				if (v36 && v33[1])
				{
					v165[v15] = v36;
					v37 = v33[1];
					v164[v15] = v15;
					v163[v15] = (float)((float)v37 * 0.0039215689) * v34;
					v15 = (unsigned int)(v15 + 1);
				}
				v38 = v32[2];
				if (v38 && v33[2])
				{
					v165[v15] = v38;
					v39 = v33[2];
					v164[v15] = v15;
					v163[v15] = (float)((float)v39 * 0.0039215689) * v34;
					v15 = (unsigned int)(v15 + 1);
				}
				v40 = v32[3];
				if (v40 && v33[3])
				{
					v165[v15] = v40;
					v41 = v33[3];
					v164[v15] = v15;
					v163[v15] = (float)((float)v41 * 0.0039215689) * v34;
					v15 = (unsigned int)(v15 + 1);
				}
				++v19;
				v17 = (int*)((char*)v17 + *(int*)(v13 + 44));
				v20 += *(int*)(v16 + 44);
			} while (v19 < 2);
			sub_1401C3280(
				(__int64(__fastcall*)(_QWORD, _QWORD, __int64))sub_1402D9DD0,
				v164,
				(unsigned int)v15,
				(__int64)v165);
			v42 = 0;
			while (v42 < (unsigned int)v15)
			{
				v43 = v42++;
				v44 = v42;
				if (v42 >= (unsigned int)v15)
					break;
				if ((int)(v15 - v42) < 4)
				{
				LABEL_44:
					if (v42 >= (unsigned int)v15)
						break;
					v51 = v164[v43];
					v52 = v165[v51];
					v53 = &v164[v44];
					while (1)
					{
						v54 = *v53;
						if (v52 != v165[v54])
							break;
						++v42;
						++v53;
						v163[v51] = v163[v51] + v163[v54];
						v163[v54] = 0.0;
						if (v42 >= (unsigned int)v15)
							goto LABEL_51;
					}
				}
				else
				{
					v45 = v164[v43];
					v46 = v165[v45];
					while (1)
					{
						v47 = v164[v44];
						if (v46 != v165[v47])
							break;
						v163[v45] = v163[v45] + v163[v47];
						v163[v47] = 0.0;
						v48 = v164[v44 + 1];
						if (v46 != v165[v48])
						{
							++v42;
							break;
						}
						v163[v45] = v163[v45] + v163[v48];
						v163[v48] = 0.0;
						v49 = v164[v44 + 2];
						if (v46 != v165[v49])
						{
							v42 += 2;
							break;
						}
						v163[v45] = v163[v45] + v163[v49];
						v163[v49] = 0.0;
						v50 = v164[v44 + 3];
						if (v46 != v165[v50])
						{
							v42 += 3;
							break;
						}
						v42 += 4;
						v44 += 4i64;
						v163[v45] = v163[v45] + v163[v50];
						v163[v50] = 0.0;
						if (v42 >= (int)v15 - 3)
							goto LABEL_44;
					}
				}
			}
		LABEL_51:
			sub_1401C3280(
				(__int64(__fastcall*)(_QWORD, _QWORD, __int64))sub_1402D9DF0,
				v164,
				(unsigned int)v15,
				(__int64)v163);
			v57 = 0;
			v58 = 0i64;
			if ((unsigned int)v15 > 4)
				LODWORD(v15) = 4;
			if ((int)v15 < 4)
			{
			LABEL_60:
				if (v57 < (unsigned int)v15)
				{
					m128_f32 = a3[v58 / 4 + 6].m128_f32;
					do
					{
						v67 = *(unsigned int*)((char*)m128_f32 + (char*)v164 - (char*)a3 - 96);
						v68 = v163[v67];
						if (v68 <= 0.0)
							break;
						v69 = v165[v67];
						++v57;
						*m128_f32 = v68;
						*((_DWORD*)m128_f32++ - 4) = v69;
					} while (v57 < (unsigned int)v15);
				}
			}
			else
			{
				m128_f32 = a3[6].m128_f32;
				v56 = a3 + 5;
				while (1)
				{
					v59 = v164[v58];
					v60 = v163[v59];
					if (v60 <= 0.0)
						break;
					v56->m128_i32[0] = v165[v59];
					v61 = v164[v58 + 1];
					*m128_f32 = v60;
					v62 = v163[v61];
					if (v62 <= 0.0)
					{
						++v57;
						break;
					}
					v56->m128_i32[1] = v165[v61];
					v63 = v164[v58 + 2];
					m128_f32[1] = v62;
					v64 = v163[v63];
					if (v64 <= 0.0)
					{
						v57 += 2;
						break;
					}
					v56->m128_i32[2] = v165[v63];
					v65 = v164[v58 + 3];
					m128_f32[2] = v64;
					v66 = v163[v65];
					if (v66 <= 0.0)
					{
						v57 += 3;
						break;
					}
					v57 += 4;
					v58 += 4i64;
					v56->m128_i32[3] = v165[v65];
					++v56;
					m128_f32[3] = v66;
					m128_f32 += 4;
					if (v57 >= (int)v15 - 3)
						goto LABEL_60;
				}
			}
			if (v57 < 4)
			{
				v70 = &a3[6].m128_i32[v57];
				v71 = 4 - v57;
				do
				{
					*(v70 - 4) = 0;
					*v70++ = 0;
					--v71;
				} while (v71);
			}
			if (v157)
				(*(void(__fastcall**)(__int64, float*, __m128*))(*(_QWORD*)v157 + 8i64))(v157, m128_f32, v56);
			if (v154)
				(*(void(__fastcall**)(__int64, float*, __m128*))(*(_QWORD*)v154 + 8i64))(v154, m128_f32, v56);
			v6 = v155;
		}
	}
	if ((v6 & 7) != 0)
	{
		v72 = *a1;
		v73 = _mm_mul_ps(*v5, (__m128)xmmword_140B7B3F0);
		v154 = 0i64;
		v74 = (int)v73.m128_f32[0];
		v75 = _mm_shuffle_ps(v73, v73, 85);
		v76 = (int)v75.m128_f32[0];
		v73.m128_f32[0] = v73.m128_f32[0] - (float)(int)v73.m128_f32[0];
		v75.m128_f32[0] = v75.m128_f32[0] - (float)(int)v75.m128_f32[0];
		v159 = _mm_unpacklo_ps(_mm_unpacklo_ps(v73, (__m128)0i64), _mm_unpacklo_ps(v75, (__m128)0i64));
		(*(void(__fastcall**)(__int64*, _QWORD, __int64*, __int64))(v72 + 72))(a1, 0i64, &v154, 1i64);
		v77 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v154 + 16i64))(v154);
		v78 = v74 * *(_DWORD*)(v77 + 40) + v76 * *(_DWORD*)(v77 + 44);
		v79 = (unsigned __int16*)(v78 + (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v154 + 24i64))(v154));
		if ((v6 & 1) != 0)
			a3[4].m128_i32[0] = *v79 >> 15;
		if ((v6 & 6) == 0)
			goto LABEL_99;
		v80 = *(int*)(v77 + 44);
		v81 = (__m128)COERCE_UNSIGNED_INT((float)(*v79 & 0x7FFF));
		v82 = (__m128)COERCE_UNSIGNED_INT((float)(v79[1] & 0x7FFF));
		v81.m128_f32[0] = (float)(v81.m128_f32[0] * *(float*)&dword_140C41B9C) - *(float*)&dword_140C41B94;
		v82.m128_f32[0] = (float)(v82.m128_f32[0] * *(float*)&dword_140C41B9C) - *(float*)&dword_140C41B94;
		v83 = (__m128)COERCE_UNSIGNED_INT((float)(*(unsigned __int16*)((char*)v79 + v80) & 0x7FFF));
		v83.m128_f32[0] = (float)(v83.m128_f32[0] * *(float*)&dword_140C41B9C) - *(float*)&dword_140C41B94;
		v92 = v83;
		v84 = (float)((float)(*(unsigned __int16*)((char*)v79 + v80 + 2) & 0x7FFF) * *(float*)&dword_140C41B9C)
			- *(float*)&dword_140C41B94;
		v85 = 1.0
			/ (float)((float)((float)(v82.m128_f32[0] - v83.m128_f32[0]) * (float)(v82.m128_f32[0] - v83.m128_f32[0])) + 1.0);
		v86 = 1.0 / (float)((float)((float)(v81.m128_f32[0] - v84) * (float)(v81.m128_f32[0] - v84)) + 1.0);
		v92.m128_f32[0] = (float)(v83.m128_f32[0] + v82.m128_f32[0]) * v85;
		v87 = v85 + v86;
		v88 = (float)(v84 + v81.m128_f32[0]) * v86;
		v89 = (__m128)v159.m128_u32[0];
		v92.m128_f32[0] = v92.m128_f32[0] + v88;
		v90 = 0.5 / v87;
		v91 = (__m128)v159.m128_u32[1];
		v91.m128_f32[0] = v159.m128_f32[1] - v159.m128_f32[0];
		v89.m128_f32[0] = (float)(v159.m128_f32[0] + v159.m128_f32[1]) - 1.0;
		v92.m128_f32[0] = v92.m128_f32[0] * v90;
		v159 = _mm_unpacklo_ps(_mm_unpacklo_ps(v89, (__m128)0i64), _mm_unpacklo_ps(v91, (__m128)0i64));
		v93 = v159.m128_f32[1];
		v94 = v159.m128_f32[0];
		if ((v6 & 2) == 0)
		{
		LABEL_89:
			if ((v6 & 4) == 0)
			{
			LABEL_99:
				if (v154)
					(*(void(__fastcall**)(__int64, unsigned __int16*))(*(_QWORD*)v154 + 8i64))(v154, v79);
				v5 = (__m128*)v158.m128_u64[0];
				goto LABEL_102;
			}
			v92.m128_f32[0] = v92.m128_f32[0] * 2.0;
			if (v93 >= 0.0)
			{
				v97 = v94 < 0.0;
				v99 = v83;
				v98 = _mm_unpacklo_ps((__m128)(unsigned int)dword_140C41BA0, (__m128)0i64);
				if (v97)
				{
					v104 = v83.m128_f32[0] + v81.m128_f32[0];
					v81.m128_f32[0] = v81.m128_f32[0] - v83.m128_f32[0];
					v100 = v81;
					v99.m128_f32[0] = v104 - v92.m128_f32[0];
				}
				else
				{
					v99.m128_f32[0] = v83.m128_f32[0] - v84;
					v92.m128_f32[0] = (float)(v92.m128_f32[0] - v83.m128_f32[0]) - v84;
					v100 = v92;
				}
			}
			else
			{
				v97 = v94 < 0.0;
				v98 = _mm_unpacklo_ps((__m128)(unsigned int)dword_140C41BA0, (__m128)0i64);
				if (!v97)
				{
					v92.m128_f32[0] = v92.m128_f32[0] - v82.m128_f32[0];
					v82.m128_f32[0] = v82.m128_f32[0] - v84;
					v92.m128_f32[0] = v92.m128_f32[0] - v84;
					v101 = _mm_unpacklo_ps(_mm_unpacklo_ps(v92, v82), v98);
					v102 = _mm_mul_ps(v101, v101);
					v102.m128_f32[0] = 1.0
						/ fsqrt(
							(float)(v102.m128_f32[0] + _mm_shuffle_ps(v102, v102, 85).m128_f32[0])
							+ _mm_shuffle_ps(v102, v102, 170).m128_f32[0]);
					v103 = _mm_mul_ps(_mm_shuffle_ps(v102, v102, 0), v101);
				LABEL_98:
					*a3 = v103;
					goto LABEL_99;
				}
				v99 = v81;
				v99.m128_f32[0] = v81.m128_f32[0] - v82.m128_f32[0];
				v82.m128_f32[0] = (float)(v82.m128_f32[0] + v81.m128_f32[0]) - v92.m128_f32[0];
				v100 = v82;
			}
			v105 = _mm_unpacklo_ps(_mm_unpacklo_ps(v99, v100), v98);
			v106 = _mm_mul_ps(v105, v105);
			v106.m128_f32[0] = 1.0
				/ fsqrt(
					(float)(v106.m128_f32[0] + _mm_shuffle_ps(v106, v106, 85).m128_f32[0])
					+ _mm_shuffle_ps(v106, v106, 170).m128_f32[0]);
			v103 = _mm_mul_ps(_mm_shuffle_ps(v106, v106, 0), v105);
			goto LABEL_98;
		}
		if (v159.m128_f32[1] >= 0.0)
		{
			v95 = (float)(v83.m128_f32[0] - v92.m128_f32[0]) * v159.m128_f32[1];
			if (v159.m128_f32[0] < 0.0)
			{
				v96 = v92.m128_f32[0] - v81.m128_f32[0];
				goto LABEL_88;
			}
		}
		else
		{
			v95 = (float)(v92.m128_f32[0] - v82.m128_f32[0]) * v159.m128_f32[1];
			if (v159.m128_f32[0] < 0.0)
			{
				v96 = v92.m128_f32[0] - v81.m128_f32[0];
			LABEL_88:
				a3[4].m128_f32[1] = (float)((float)(v96 * v159.m128_f32[0]) + v92.m128_f32[0]) + v95;
				goto LABEL_89;
			}
		}
		v96 = v84 - v92.m128_f32[0];
		goto LABEL_88;
	}
LABEL_102:
	if ((v6 & 0x1CF0) != 0)
	{
		v107 = _mm_mul_ps(*v5, (__m128)xmmword_140B7B450);
		v159 = v107;
		v108 = _mm_shuffle_ps(v107, v107, 85);
		v155 = (int)v107.m128_f32[0];
		v156 = (int)v108.m128_f32[0];
		v107.m128_f32[0] = v107.m128_f32[0] - (float)(int)v107.m128_f32[0];
		v108.m128_f32[0] = v108.m128_f32[0] - (float)(int)v108.m128_f32[0];
		v160 = _mm_unpacklo_ps(_mm_unpacklo_ps(v107, (__m128)0i64), _mm_unpacklo_ps(v108, (__m128)0i64));
		v161 = _mm_sub_ps((__m128)xmmword_140B7B240, v160);
		if ((v6 & 0x10) != 0)
		{
			v109 = *a1;
			v157 = 0i64;
			(*(void(__fastcall**)(__int64*, __int64, __int64*, __int64))(v109 + 72))(a1, 17i64, &v157, 1i64);
			v110 = *a1;
			v154 = 0i64;
			(*(void(__fastcall**)(__int64*, __int64, __int64*, __int64))(v110 + 72))(a1, 18i64, &v154, 1i64);
			v111 = v154;
			v112 = v157;
			v113 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v154 + 16i64))(v154);
			v114 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v111 + 24i64))(v111);
			v115 = sub_140250F60(&v158, v114, *(_DWORD*)(v113 + 44), &v159);
			v116 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v112 + 16i64))(v112);
			v117 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v112 + 24i64))(v112);
			v118 = sub_140250F60(&v162, v117, *(_DWORD*)(v116 + 44), &v159);
			if (v118->m128_f32[3] >= 0.5)
			{
				v158 = _mm_sub_ps(_mm_add_ps(*v118, _mm_mul_ps(*v115, (__m128)xmmword_140B7A790)), (__m128)xmmword_140B7B240);
				v158.m128_f32[3] = (float)((float)(1.0 - v158.m128_f32[0]) - _mm_shuffle_ps(v158, v158, 85).m128_f32[0])
					- _mm_shuffle_ps(v158, v158, 170).m128_f32[0];
				v119 = _mm_min_ps(_mm_max_ps((__m128)0i64, v158), (__m128)xmmword_140B7B240);
			}
			else
			{
				v119 = 0i64;
			}
			v120 = v154;
			a3[2] = v119;
			if (v120)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v120 + 8i64))(v120);
			if (v157)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v157 + 8i64))(v157);
		}
		if ((v6 & 0x60) != 0)
		{
			v121 = *a1;
			v154 = 0i64;
			(*(void(__fastcall**)(__int64*, __int64, __int64*))(v121 + 72))(a1, 13i64, &v154);
			v122 = v154;
			v123 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v154 + 16i64))(v154);
			v124 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v122 + 24i64))(v122);
			sub_140251170(&v158, v124, *(_DWORD*)(v123 + 44), &v159);
			v125 = v154;
			v126 = v158.m128_i32[3];
			a3[3] = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128)v158.m128_u32[0], (__m128)v158.m128_u32[2]),
				_mm_unpacklo_ps((__m128)v158.m128_u32[1], (__m128)0x3F800000u));
			a3[4].m128_i32[2] = v126;
			if (v125)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v125 + 8i64))(v125);
		}
		if ((v6 & 0x80u) != 0)
		{
			v127 = (*(__int64(__fastcall**)(__int64*, __int64))(*a1 + 64))(a1, 28i64);
			v154 = 0i64;
			v128 = v127 == 0;
			v129 = *a1;
			if (v128)
			{
				(*(void(__fastcall**)(__int64*, __int64, __int64*))(v129 + 72))(a1, 16i64, &v154);
				v130 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v154 + 16i64))(v154);
				v131 = v155 * *(_DWORD*)(v130 + 40) + v156 * *(_DWORD*)(v130 + 44);
				v132 = *(unsigned __int8*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v154 + 24i64))(v154) + v131);
				v133 = *a1;
				v157 = 0i64;
				(*(void(__fastcall**)(__int64*, __int64, __int64*))(v133 + 72))(a1, 28i64, &v157);
				a3[4].m128_i32[3] = *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v157 + 24i64))(v157)
					+ 4i64 * ((v132 >> 3) & 3));
				if (v157)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v157 + 8i64))(v157);
			}
			else
			{
				(*(void(__fastcall**)(__int64*, __int64, __int64*, __int64))(v129 + 72))(a1, 5i64, &v154, 1i64);
				a3[4].m128_i32[3] = *(_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v154 + 24i64))(v154);
			}
			if (v154)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v154 + 8i64))(v154);
		}
		if ((v6 & 0x400) != 0)
		{
			v134 = *a1;
			v154 = 0i64;
			(*(void(__fastcall**)(__int64*, __int64, __int64*))(v134 + 72))(a1, 16i64, &v154);
			v135 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v154 + 16i64))(v154);
			v136 = v155 * *(_DWORD*)(v135 + 40) + v156 * *(_DWORD*)(v135 + 44);
			a3[7].m128_i32[0] = *(unsigned __int8*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v154 + 24i64))(v154)
				+ v136);
			if (v154)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v154 + 8i64))(v154);
		}
		if ((v6 & 0x800) != 0)
		{
			v137 = *a1;
			v154 = 0i64;
			(*(void(__fastcall**)(__int64*, __int64, __int64*))(v137 + 72))(a1, 34i64, &v154);
			v138 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v154 + 16i64))(v154);
			v139 = *(_DWORD*)(v138 + 40) * v155 + v156 * *(_DWORD*)(v138 + 44);
			v140 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v154 + 24i64))(v154);
			v141 = *(int*)(v138 + 44);
			v142 = (unsigned __int16*)(v139 + v140);
			v143 = _mm_cvtsi32_si128(*v142);
			v144 = (float)v142[1];
			v145 = _mm_cvtsi32_si128(*(unsigned __int16*)((char*)v142 + v141));
			LODWORD(v140) = *(unsigned __int16*)((char*)v142 + v141 + 2);
			v146 = v154;
			a3[7].m128_f32[1] = (float)((float)((float)((float)((float)(v144 * v161.m128_f32[1]) * v160.m128_f32[0])
				+ (float)((float)(_mm_cvtepi32_ps(v143).m128_f32[0] * v161.m128_f32[1])
					* v161.m128_f32[0]))
				+ (float)((float)(_mm_cvtepi32_ps(v145).m128_f32[0] * v160.m128_f32[1])
					* v161.m128_f32[0]))
				+ (float)((float)((float)(int)v140 * v160.m128_f32[1]) * v160.m128_f32[0]))
				* 0.000015259022;
			if (v146)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v146 + 8i64))(v146);
		}
		if ((v6 & 0x1000) != 0)
		{
			v147 = *a1;
			v154 = 0i64;
			(*(void(__fastcall**)(__int64*, __int64, __int64*))(v147 + 72))(a1, 27i64, &v154);
			v148 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v154 + 16i64))(v154);
			v149 = *(_DWORD*)(v148 + 40) * v155 + v156 * *(_DWORD*)(v148 + 44);
			v150 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v154 + 24i64))(v154);
			v151 = *(unsigned __int8*)(v150 + v149);
			a3[7].m128_i32[2] = *(_BYTE*)(v150 + v149) & 3;
			a3[8].m128_i32[0] = (v151 >> 4) & 3;
			v152 = v154;
			a3[8].m128_i32[1] = v151 >> 6;
			a3[7].m128_i32[3] = (v151 >> 2) & 3;
			if (v152)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v152 + 8i64))(v152);
		}
	}
	return 1i64;
}
// 1402DA64B: variable 'm128_f32' is possibly undefined
// 1402DA64B: variable 'v56' is possibly undefined
// 1402D9DF0: using guessed type __int64 __fastcall sub_1402D9DF0();
// 140B7A790: using guessed type __int128 xmmword_140B7A790;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B3F0: using guessed type __int128 xmmword_140B7B3F0;
// 140B7B450: using guessed type __int128 xmmword_140B7B450;
// 140C41B94: using guessed type int dword_140C41B94;
// 140C41B9C: using guessed type int dword_140C41B9C;
// 140C41BA0: using guessed type int dword_140C41BA0;
// 1402DA040: using guessed type int var_E0[16];
// 1402DA040: using guessed type float var_160[16];

