//----- (00000001407C9D80) ----------------------------------------------------
__int64 __fastcall sub_1407C9D80(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
	float* v4; // rbx
	unsigned int v5; // esi
	int v6; // r10d
	int v7; // eax
	unsigned int v8; // r15d
	__int64 v9; // r14
	__int64 v10; // rbx
	int v11; // edi
	__int64 v12; // rcx
	int v13; // eax
	__int64 v14; // rcx
	__int64 v15; // rax
	float v16; // xmm1_4
	__int64* v17; // r8
	float v18; // xmm2_4
	int v19; // eax
	float v20; // xmm1_4
	float v21; // xmm0_4
	int v22; // eax
	int v23; // eax
	__int64 v24; // rdi
	__int64(__fastcall * ***v25)(); // r12
	double v26; // xmm0_8
	float v27; // xmm2_4
	float v28; // xmm4_4
	float v29; // xmm3_4
	int v30; // eax
	int v31; // edx
	float v32; // xmm4_4
	float v33; // xmm1_4
	float v34; // xmm4_4
	float v35; // xmm1_4
	int* v36; // rbx
	int* v37; // rsi
	int v38; // r8d
	unsigned int* v39; // r13
	int v40; // r11d
	__int64(__fastcall * ***v41)(); // rcx
	float v42; // xmm0_4
	float v43; // xmm15_4
	float v44; // xmm1_4
	int v45; // eax
	int v46; // edx
	unsigned int v47; // r12d
	int* v48; // rbx
	int* v49; // rbx
	_BYTE* v50; // rax
	unsigned __int64 v51; // rcx
	unsigned int v52; // esi
	_BYTE* v53; // rbx
	char* v54; // r14
	float v55; // xmm1_4
	int* v56; // rbx
	bool v57; // zf
	__int64(__fastcall * ***v58)(); // r12
	int v59; // ecx
	float v60; // xmm7_4
	int v61; // eax
	float v62; // xmm6_4
	__m128 v63; // xmm8
	float v64; // xmm1_4
	unsigned int v65; // esi
	int v66; // ebx
	unsigned int v67; // ebx
	bool v68; // cc
	__int64 v69; // rax
	__m128* v70; // rbx
	__int64 v71; // r14
	__m128* v72; // rsi
	float v73; // xmm6_4
	float v74; // xmm7_4
	double v75; // xmm0_8
	__m128 v76; // xmm5
	__int64 v77; // rax
	__m128 v78; // xmm6
	__m128 v79; // xmm0
	__m128 v80; // xmm2
	__m128 v81; // xmm0
	__m128 v82; // xmm3
	__m128** v83; // rdx
	unsigned __int64 v84; // rax
	unsigned __int64 v85; // rcx
	int v86; // eax
	unsigned __int64 v87; // rcx
	__int64 v88; // rax
	float v89; // xmm1_4
	int v90; // eax
	float v91; // xmm6_4
	unsigned __int64 v92; // rcx
	float v93; // xmm0_4
	_QWORD* v94; // rcx
	unsigned __int64 v95; // rcx
	unsigned __int64 v96; // rcx
	int* v98; // [rsp+48h] [rbp-C0h]
	unsigned int* v99; // [rsp+50h] [rbp-B8h]
	int v101; // [rsp+5Ch] [rbp-ACh]
	unsigned __int64 v102; // [rsp+60h] [rbp-A8h]
	__int64 v103; // [rsp+68h] [rbp-A0h]
	__int64(__fastcall * ***v104)(); // [rsp+70h] [rbp-98h]
	unsigned int* v105; // [rsp+78h] [rbp-90h]
	float i; // [rsp+80h] [rbp-88h]
	float v107; // [rsp+84h] [rbp-84h] BYREF
	float v108; // [rsp+88h] [rbp-80h] BYREF
	unsigned __int64 v109; // [rsp+90h] [rbp-78h]
	__int64(__fastcall * ***v110)(); // [rsp+98h] [rbp-70h]
	int v111; // [rsp+A0h] [rbp-68h]
	__int64 v112; // [rsp+A8h] [rbp-60h]
	__int64 v113; // [rsp+B0h] [rbp-58h] BYREF
	__int64 v114; // [rsp+B8h] [rbp-50h]
	__int64 v115; // [rsp+C0h] [rbp-48h]
	__int64 v116; // [rsp+C8h] [rbp-40h]
	float* v117; // [rsp+D0h] [rbp-38h]
	__int64 v118; // [rsp+D8h] [rbp-30h]
	__int64 v119[2]; // [rsp+E0h] [rbp-28h] BYREF
	__int64 v120; // [rsp+F0h] [rbp-18h] BYREF
	float v121; // [rsp+F8h] [rbp-10h]
	int v122; // [rsp+FCh] [rbp-Ch]
	int v123; // [rsp+100h] [rbp-8h]
	__int64 v124; // [rsp+104h] [rbp-4h]
	int v125; // [rsp+10Ch] [rbp+4h]
	__int64 v126; // [rsp+110h] [rbp+8h] BYREF
	float v127; // [rsp+118h] [rbp+10h]
	int v128; // [rsp+11Ch] [rbp+14h]
	int v129; // [rsp+120h] [rbp+18h]
	__int64 v130; // [rsp+124h] [rbp+1Ch]
	int v131; // [rsp+12Ch] [rbp+24h]
	__int64 v132[4]; // [rsp+130h] [rbp+28h] BYREF
	__int64 v133; // [rsp+150h] [rbp+48h] BYREF
	__m128 v134[4]; // [rsp+158h] [rbp+50h] BYREF
	int v135; // [rsp+198h] [rbp+90h]
	int v136; // [rsp+19Ch] [rbp+94h]
	int v137; // [rsp+1A0h] [rbp+98h]
	__int128 v138[4]; // [rsp+1A8h] [rbp+A0h] BYREF
	__m128* v139; // [rsp+1E8h] [rbp+E0h] BYREF
	__m128* v140; // [rsp+1F0h] [rbp+E8h]

	v4 = (float*)a3;
	v5 = a4;
	v6 = *(_DWORD*)qword_140C63750;
	v7 = dword_140C54E50;
	v117 = (float*)a3;
	if (v6 < dword_140C54E50)
		v7 = v6;
	v8 = 0;
	v111 = a2;
	v9 = a1;
	v112 = a1;
	if (*((float*)&off_140C54E40 + v7 + 8) != *(float*)(a1 + 6244) || *(_DWORD*)(a1 + 6248))
	{
		v10 = *(_QWORD*)(a1 + 6320);
		v11 = 1;
		if (!v10)
			goto LABEL_13;
		do
		{
			v12 = *(_QWORD*)(v10 + 64);
			LODWORD(v119[0]) = 0;
			v13 = (*(__int64(__fastcall**)(__int64, __int64*, _QWORD))(*(_QWORD*)v12 + 16i64))(v12, v119, 0i64);
			v14 = *(_QWORD*)(v10 + 64);
			if (v13)
			{
				v15 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v14 + 424i64))(v14, 150i64, 0i64);
				v120 = 150i64;
				v16 = *(float*)(v10 + 48);
				LODWORD(v15) = *(_DWORD*)(v15 + 20);
				v123 = 0;
				v124 = 3i64;
				v125 = 0;
				v17 = &v120;
				v18 = (float)(int)v15;
				v19 = dword_140C54E50;
				v20 = (float)((float)(v16 + 2000.0) * 0.00025000001) * v18;
				if (*(_DWORD*)qword_140C63750 < dword_140C54E50)
					v19 = *(_DWORD*)qword_140C63750;
				v14 = *(_QWORD*)(v10 + 64);
				v21 = (float)((float)(v18 * *((float*)&off_140C54E40 + v19 + 8)) * 0.001) * 0.00025000001;
				v122 = (int)v20;
				v121 = v21;
			}
			else
			{
				v11 = 0;
				v113 = 150i64;
				v114 = 1065353216i64;
				v115 = 0i64;
				v116 = 0i64;
				v17 = &v113;
			}
			(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v14 + 584i64))(v14, 0i64, v17);
			v10 = *(_QWORD*)(v10 + 88);
		} while (v10);
		if (v11)
			LABEL_13:
		*(_DWORD*)(v9 + 6248) = 0;
		v4 = v117;
		v22 = dword_140C54E50;
		if (*(_DWORD*)qword_140C63750 < dword_140C54E50)
			v22 = *(_DWORD*)qword_140C63750;
		*(_DWORD*)(v9 + 6244) = *((_DWORD*)&off_140C54E40 + v22 + 8);
	}
	v23 = *(_DWORD*)(v9 + 6240);
	if (v23 == 1)
	{
		*(_DWORD*)(v9 + 6240) = 2;
	}
	else if (v23 == 2)
	{
		v24 = *(_QWORD*)(v9 + 1256);
		*(_DWORD*)(v9 + 6240) = 3;
		if (v24)
		{
			v25 = off_140C3AD70;
			do
			{
				if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v24 + 64i64))(v24))
				{
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v24 + 56i64))(v24, v5);
					if (*(_DWORD*)(v24 + 324))
					{
						v26 = (*(double(__fastcall**)(__int64))(*(_QWORD*)v24 + 256i64))(v24);
						v27 = v4[1];
						v28 = v4[2];
						v29 = 1.0 - v28;
						v30 = *((_DWORD*)off_140C3ADA0 + 4);
						v31 = *((_DWORD*)off_140C3AD70[0] + 4);
						v101 = 1;
						v32 = v28 * *(float*)(v24 + 88);
						v33 = v27 * *(float*)(v24 + 84);
						v109 = 0i64;
						v98 = 0i64;
						v102 = 0i64;
						v34 = v32 + (float)(v33 * v29);
						v35 = *(float*)(v24 + 80) * *v4;
						v36 = (int*)qword_140C63750;
						v37 = 0i64;
						v99 = 0i64;
						v38 = *(_DWORD*)qword_140C63750;
						v110 = off_140C3AD70;
						v39 = (unsigned int*)(v9 + 6456);
						v40 = (int)(float)((float)(v34 + (float)(v35 * (float)(v29 * (float)(1.0 - v27)))) * *(float*)&v26);
						if (v38 < v30)
							v30 = v38;
						if (v38 < v31)
							v31 = v38;
						v41 = off_140C3AD78;
						v42 = *((float*)off_140C3ADA0 + v30 + 8) - *((float*)off_140C3AD70[0] + v31 + 8);
						*(_DWORD*)(v9 + 6248) = 1;
						v104 = off_140C3AD78;
						v43 = 1.0 / v42;
						v44 = (float)v40;
						v103 = v9 - (_QWORD)off_140C3AD70;
						for (i = (float)v40; ; v44 = i)
						{
							v45 = *((_DWORD*)*v41 + 4);
							v46 = *((_DWORD*)*v25 + 4);
							if (*v36 < v45)
								v45 = *v36;
							if (*v36 < v46)
								v46 = *v36;
							v47 = (int)(float)((float)((float)(*((float*)*v41 + v45 + 8) - *((float*)*v25 + v46 + 8)) * v44) * v43);
							v118 = v47;
							if (v109 <= v47)
							{
								v48 = sub_14018DB00((__int64)v98, v47, 4i64);
								if (v98 != v48)
								{
									sub_1407DB590(v48, v98, 4 * v109);
									if (v98)
										(*(void(__fastcall**)(int*))(*((_QWORD*)v98 - 2) + 8i64))(v98 - 4);
									v98 = v48;
								}
							}
							v109 = v47;
							if (v102 > v47 || (v49 = sub_14018DB00((__int64)v37, v47, 4i64), v37 == v49))
							{
								v50 = v99;
							}
							else
							{
								sub_1407DB590(v49, v37, 4 * v102);
								if (v37)
									(*(void(__fastcall**)(int*))(*((_QWORD*)v37 - 2) + 8i64))(v37 - 4);
								v50 = v49;
								v99 = (unsigned int*)v49;
							}
							v51 = v47;
							v52 = 0;
							v102 = v47;
							if (v47)
							{
								v53 = v50;
								v54 = (char*)((char*)v98 - v50);
								do
								{
									v53 += 4;
									v55 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 40))(&qword_140C77890) * 4000.0;
									*(float*)&v53[(_QWORD)v54 - 4] = v55 - 2000.0;
									*((_DWORD*)v53 - 1) = v52++;
								} while (v52 < v47);
								v51 = v47;
							}
							v56 = v98;
							v37 = (int*)v99;
							sub_1401C3280((__int64(__fastcall*)(_QWORD, _QWORD, __int64))sub_1407C4F60, v99, v51, (__int64)v98);
							v57 = v47 == 0;
							v58 = v110;
							if (!v57)
							{
								v105 = v99;
								do
								{
									v59 = *((_DWORD*)*v104 + 4);
									if (*(_DWORD*)qword_140C63750 < v59)
										v59 = *(_DWORD*)qword_140C63750;
									v61 = *((_DWORD*)*v58 + 4);
									if (*(_DWORD*)qword_140C63750 < v61)
										v61 = *(_DWORD*)qword_140C63750;
									v62 = *((float*)*v58 + v61 + 8);
									v63 = 0i64;
									v60 = *((float*)*v104 + v59 + 8);
									v63.m128_f32[0] = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 40))(&qword_140C77890)
										* (float)(v60 - v62);
									v63.m128_f32[0] = v63.m128_f32[0] + v62;
									if (*(_DWORD*)(v24 + 324) == 2)
									{
										v64 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 40))(&qword_140C77890);
										v65 = v64 < *(float*)(v24 + 320);
									}
									else
									{
										v65 = 0;
									}
									if ((*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v24 + 264i64))(
										v24,
										*(unsigned int*)(v24 + 4i64 * v65 + 312),
										v8))
									{
										v66 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v24 + 264i64))(
											v24,
											*(unsigned int*)(v24 + 4i64 * v65 + 312),
											v8)
											- 1;
										v67 = (int)((double)(*(int(__fastcall**)(__int64*))(qword_140C77890 + 24))(&qword_140C77890)
											* 2.328306436538696e-10
											* ((double)v66 + 1.0));
										v68 = (*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v24 + 264i64))(
											v24,
											*(unsigned int*)(v24 + 4i64 * v65 + 312),
											v8) <= 1;
										v69 = v103;
										if (!v68
											&& (__int64(__fastcall***)())v24 == *(__int64(__fastcall****)())((char*)v58 + v103 + 6384)
											&& v65 == *(v39 - 6)
											&& v67 == *v39)
										{
											v57 = v67 == (*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v24 + 264i64))(
												v24,
												*(unsigned int*)(v24 + 4i64 * v65 + 312),
												v8)
												- 1;
											v69 = v103;
											if (v57)
												--v67;
											else
												++v67;
										}
										*(__int64(__fastcall****)())((char*)v58 + v69 + 6384) = (__int64(__fastcall***)())v24;
										*(v39 - 6) = v65;
										*v39 = v67;
										if ((*(int(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, float*, float*, __int64*))(*(_QWORD*)v24 + 272i64))(
											v24,
											*(unsigned int*)(v24 + 4i64 * v65 + 312),
											v8,
											v67,
											&v107,
											&v108,
											&v133) >= 0)
										{
											v70 = (__m128*)sub_14018B280(96i64, 0);
											if (v70)
											{
												v70[4].m128_u64[1] = 0i64;
												v70[5].m128_u64[0] = 0i64;
												v70[5].m128_u64[1] = 0i64;
											}
											else
											{
												v70 = 0i64;
											}
											v71 = v112;
											v72 = v70 + 4;
											if ((*(int(__fastcall**)(_QWORD, __int64, __m128*, _QWORD))(**(_QWORD**)(v112 + 2992) + 40i64))(
												*(_QWORD*)(v112 + 2992),
												v133,
												v70 + 4,
												0i64) < 0)
											{
												if (v70)
												{
													v94 = (_QWORD*)v70[5].m128_u64[0];
													if (v94)
														*v94 = v70[5].m128_u64[1];
													v95 = v70[5].m128_u64[1];
													if (v95)
														*(_QWORD*)(v95 + 80) = v70[5].m128_u64[0];
													v70[5].m128_u64[0] = 0i64;
													v70[5].m128_u64[1] = 0i64;
													v96 = v70[4].m128_u64[1];
													if (v96)
														(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v96 + 8i64))(v96);
													sub_14018B900((__int64)v70, 0);
												}
											}
											else
											{
												v73 = v108;
												v74 = v107;
												v75 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 40))(&qword_140C77890);
												v76 = 0i64;
												v77 = *v105;
												v134[0] = *(__m128*)ymmword_140C78410.m256_f32;
												v134[1] = *(__m128*) & ymmword_140C78410.m256_f32[4];
												v134[2] = (__m128)xmmword_140C78430;
												v76.m128_f32[0] = v75 * (float)(v73 - v74);
												v78 = (__m128)(unsigned int)v98[v77];
												v76.m128_f32[0] = v76.m128_f32[0] + v74;
												v113 = (__int64)v138;
												v135 = v76.m128_i32[0];
												v136 = v76.m128_i32[0];
												v137 = v76.m128_i32[0];
												v114 = (__int64)v134;
												v79 = _mm_shuffle_ps(v76, v76, 0);
												v134[3] = _mm_unpacklo_ps(_mm_unpacklo_ps(v78, v63), (__m128)xmmword_140B7A4D0);
												v80 = _mm_mul_ps(*(__m128*)ymmword_140C78410.m256_f32, v79);
												v79.m128_f32[0] = v76.m128_f32[0];
												v140 = v134;
												v81 = _mm_shuffle_ps(v79, v79, 0);
												v138[0] = (__int128)v80;
												v82 = _mm_mul_ps(*(__m128*) & ymmword_140C78410.m256_f32[4], v81);
												v81.m128_f32[0] = v76.m128_f32[0];
												v138[1] = (__int128)v82;
												v138[3] = xmmword_140C78440;
												v138[2] = (__int128)_mm_mul_ps((__m128)xmmword_140C78430, _mm_shuffle_ps(v81, v81, 0));
												v139 = (__m128*)v138;
												sub_1401AFB10(&v139, v70);
												v83 = (__m128**)(v71 + 6320);
												if (!v70[5].m128_u64[0])
												{
													v70[5].m128_u64[0] = (unsigned __int64)v83;
													v70[5].m128_u64[1] = (unsigned __int64)*v83;
													*v83 = v70;
													v84 = v70[5].m128_u64[1];
													if (v84)
														*(_QWORD*)(v84 + 80) = (char*)v70 + 88;
												}
												(*(void(__fastcall**)(unsigned __int64, __m128**))(*(_QWORD*)v72->m128_u64[0] + 112i64))(
													v72->m128_u64[0],
													v83);
												v119[0] = (__int64)v70;
												v139 = v70;
												v119[1] = v71 + 6176;
												v140 = (__m128*)(v71 + 6176);
												sub_1401AFB10(&v139, v134);
												(*(void(__fastcall**)(unsigned __int64, __m128*))(*(_QWORD*)v72->m128_u64[0] + 72i64))(
													v72->m128_u64[0],
													v134);
												(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v72->m128_u64[0] + 224i64))(v72->m128_u64[0]);
												v85 = v72->m128_u64[0];
												LODWORD(v120) = 0;
												v86 = (*(__int64(__fastcall**)(unsigned __int64, __int64*, _QWORD))(*(_QWORD*)v85 + 16i64))(
													v85,
													&v120,
													0i64);
												v87 = v72->m128_u64[0];
												if (v86)
												{
													v88 = (*(__int64(__fastcall**)(unsigned __int64, __int64, _QWORD))(*(_QWORD*)v87 + 424i64))(
														v87,
														150i64,
														0i64);
													v126 = 150i64;
													LODWORD(v88) = *(_DWORD*)(v88 + 20);
													v129 = 0;
													v130 = 3i64;
													v131 = 0;
													v89 = (float)(int)v88;
													v90 = dword_140C54E50;
													v91 = (float)((float)(v78.m128_f32[0] + 2000.0) * 0.00025000001) * v89;
													if (*(_DWORD*)qword_140C63750 < dword_140C54E50)
														v90 = *(_DWORD*)qword_140C63750;
													v92 = v72->m128_u64[0];
													v93 = (float)((float)(v89 * *((float*)&off_140C54E40 + v90 + 8)) * 0.001) * 0.00025000001;
													v128 = (int)v91;
													v127 = v93;
													(*(void(__fastcall**)(unsigned __int64, _QWORD, __int64*))(*(_QWORD*)v92 + 584i64))(
														v92,
														0i64,
														&v126);
												}
												else
												{
													v132[0] = 150i64;
													v132[1] = 1065353216i64;
													v132[2] = 0i64;
													v132[3] = 0i64;
													v101 = 0;
													(*(void(__fastcall**)(unsigned __int64, _QWORD, __int64*))(*(_QWORD*)v87 + 584i64))(
														v87,
														0i64,
														v132);
												}
											}
										}
									}
									++v105;
									--v118;
								} while (v118);
								v37 = (int*)v99;
								v56 = v98;
							}
							v25 = v58 + 1;
							++v8;
							v41 = v104 + 1;
							++v39;
							v110 = v25;
							++v104;
							if (v8 >= 6)
								break;
							v36 = (int*)qword_140C63750;
						}
						v9 = v112;
						v8 = 0;
						if (v101)
							*(_DWORD*)(v112 + 6248) = 0;
						if (v37)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v37 - 2) + 8i64))(v37 - 4);
						if (v56)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v56 - 2) + 8i64))(v56 - 4);
						v5 = a4;
						v25 = off_140C3AD70;
					}
				}
				v24 = *(_QWORD*)(v24 + 120);
				v4 = v117;
			} while (v24);
		}
		*(_DWORD*)(v9 + 6328) = v111;
	}
	return 0i64;
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7A4D0: using guessed type __int128 xmmword_140B7A4D0;
// 140C3AD70: using guessed type __int64 (__fastcall ***off_140C3AD70[7])();
// 140C3AD78: using guessed type __int64 (__fastcall ***off_140C3AD78[6])();
// 140C3ADA0: using guessed type __int64 (__fastcall ***off_140C3ADA0)();
// 140C54E40: using guessed type __int64 (__fastcall **off_140C54E40)();
// 140C54E50: using guessed type int dword_140C54E50;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C77890: using guessed type __int64 qword_140C77890;
// 140C78410: using guessed type __m256 ymmword_140C78410;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;

