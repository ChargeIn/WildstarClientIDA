#include "../winhttp.h"

//----- (0000000140388E70) ----------------------------------------------------
void __fastcall sub_140388E70(__int64 a1, __m128* a2, char a3, __int64 a4)
{
	bool v4; // zf
	char v6; // si
	__m128* v8; // r14
	__m128 v9; // xmm7
	__m128 v10; // xmm6
	__m128 v11; // xmm1
	__int64* v12; // rcx
	__int64 v13; // rax
	__m128* v14; // rax
	__m128 v15; // xmm1
	__m128 v16; // xmm6
	__m128 v17; // xmm7
	int v18; // ecx
	float v19; // xmm1_4
	int v20; // edx
	int v21; // ecx
	int v22; // ecx
	float v23; // xmm1_4
	int v24; // ecx
	int v25; // edx
	float v26; // xmm1_4
	int v27; // ecx
	int v28; // edx
	int v29; // eax
	unsigned __int64 v30; // rcx
	__int64 v31; // rax
	__int64* v32; // rcx
	__int64 v33; // rdx
	__int64 v34; // r15
	int v35; // edi
	__int128 v36; // xmm0
	__int64 v37; // rax
	__int64 v38; // rax
	signed int v39; // r8d
	int v40; // ecx
	__int64 v41; // rdx
	int v42; // r13d
	float v43; // xmm9_4
	int v44; // r12d
	float v45; // xmm10_4
	float v46; // xmm11_4
	float v47; // xmm12_4
	float v48; // xmm13_4
	float v49; // xmm14_4
	float v50; // xmm15_4
	__m128i v51; // xmm7
	unsigned __int64 v52; // r8
	__int64 v53; // rax
	__m128 v54; // xmm7
	__m128 v55; // xmm6
	__m128 v56; // xmm0
	__m128 v57; // xmm4
	__m128 v58; // xmm3
	__m128 v59; // xmm8
	int v60; // esi
	unsigned int(__fastcall * v61)(__m128*, __m128*, __m128*, _QWORD); // rax
	int v62; // eax
	__m128* v63; // rax
	__int64 v64; // rcx
	unsigned int(__fastcall * v65)(__m128*, __m128*, __m128*, _QWORD); // rax
	int v66; // eax
	__m128* v67; // rax
	__int64 v68; // rcx
	unsigned int(__fastcall * v69)(__m128*, __m128*, __m128*, _QWORD); // rax
	int v70; // eax
	__m128* v71; // rax
	__int64 v72; // rcx
	unsigned int(__fastcall * v73)(__m128*, __m128*, __m128*, _QWORD); // rax
	int v74; // eax
	__m128* v75; // rax
	__int64 v76; // rcx
	int v77; // r15d
	int v78; // r14d
	int v79; // edi
	unsigned int(__fastcall * v80)(__m128*, __m128*, __m128*, _QWORD); // rax
	int v81; // eax
	__m128* v82; // rax
	__int64 v83; // rcx
	unsigned int(__fastcall * v84)(__m128*, __m128*, __m128*, _QWORD); // rax
	int v85; // eax
	__m128* v86; // rax
	__int64 v87; // rcx
	unsigned int(__fastcall * v88)(__m128*, __m128*, __m128*, _QWORD); // rax
	int v89; // eax
	__m128* v90; // rax
	__int64 v91; // rcx
	unsigned int(__fastcall * v92)(__m128*, __m128*, __m128*, _QWORD); // rax
	int v93; // eax
	__m128* v94; // rax
	__int64 v95; // rcx
	int v96; // [rsp+28h] [rbp-E0h]
	int v97; // [rsp+2Ch] [rbp-DCh]
	__m128 v98; // [rsp+38h] [rbp-D0h] BYREF
	__int64 v99; // [rsp+48h] [rbp-C0h]
	__m128 v100; // [rsp+58h] [rbp-B0h] BYREF
	__m128 v101; // [rsp+68h] [rbp-A0h] BYREF
	__m128 v102; // [rsp+78h] [rbp-90h] BYREF
	int v103; // [rsp+88h] [rbp-80h]
	int v104; // [rsp+8Ch] [rbp-7Ch]
	int v105; // [rsp+90h] [rbp-78h]
	int v106; // [rsp+94h] [rbp-74h]
	__m128 v107; // [rsp+98h] [rbp-70h] BYREF
	__m128 v108; // [rsp+A8h] [rbp-60h]
	__int64* v109; // [rsp+B8h] [rbp-50h] BYREF
	__int128 v110; // [rsp+C8h] [rbp-40h]
	__m128 v111; // [rsp+D8h] [rbp-30h]
	__int64 v112; // [rsp+E8h] [rbp-20h]

	if ((a3 & 3) != 0)
	{
		v4 = *(_DWORD*)(a1 + 32) == 15;
		v6 = a3;
		v8 = (__m128*)a1;
		LODWORD(v110) = -1;
		if (!v4)
			sub_14037CB70(a1);
		v9 = _mm_min_ps(a2[1], v8[13]);
		v10 = _mm_max_ps(*a2, v8[12]);
		if (v10.m128_f32[0] <= v9.m128_f32[0]
			&& _mm_shuffle_ps(v10, v10, 85).m128_f32[0] <= _mm_shuffle_ps(v9, v9, 85).m128_f32[0])
		{
			v11 = _mm_shuffle_ps(v10, v10, 170);
			if (v11.m128_f32[0] <= _mm_shuffle_ps(v9, v9, 170).m128_f32[0])
			{
				v12 = (__int64*)v8[1].m128_u64[0];
				v107 = v10;
				v13 = *v12;
				v108 = v9;
				v14 = (__m128*)(*(__int64(__fastcall**)(__int64*))(v13 + 40))(v12);
				v11.m128_f32[0] = 1.0 / *(float*)&dword_140C44574;
				v15 = _mm_shuffle_ps(v11, v11, 0);
				v16 = _mm_mul_ps(_mm_sub_ps(v10, v14[2]), v15);
				v17 = _mm_mul_ps(_mm_sub_ps(v9, v14[2]), v15);
				v18 = (int)v16.m128_f32[0];
				v110 = (__int128)v16;
				v111 = v17;
				if ((int)v16.m128_f32[0] != 0x80000000 && (float)v18 != v16.m128_f32[0])
					v16.m128_f32[0] = (float)(v18 - (_mm_movemask_ps(_mm_unpacklo_ps(v16, v16)) & 1));
				v19 = *((float*)&v110 + 2);
				v20 = (int)v16.m128_f32[0];
				v21 = (int)*((float*)&v110 + 2);
				if ((int)*((float*)&v110 + 2) != 0x80000000 && (float)v21 != *((float*)&v110 + 2))
					v19 = (float)(v21 - (_mm_movemask_ps(_mm_unpacklo_ps((__m128)DWORD2(v110), (__m128)DWORD2(v110))) & 1));
				v22 = (int)v19;
				v23 = v111.m128_f32[0];
				if (v20 < (int)qword_140C77760)
					v20 = qword_140C77760;
				v103 = v20;
				if (v22 < SHIDWORD(qword_140C77760))
					v22 = HIDWORD(qword_140C77760);
				v104 = v22;
				v24 = (int)v111.m128_f32[0];
				if ((int)v111.m128_f32[0] != 0x80000000 && (float)v24 != v111.m128_f32[0])
					v23 = (float)(v24 - (_mm_movemask_ps(_mm_unpacklo_ps((__m128)v111.m128_u32[0], (__m128)v111.m128_u32[0])) & 1));
				v25 = (int)v23;
				v26 = v111.m128_f32[2];
				v27 = (int)v111.m128_f32[2];
				v28 = v25 + 1;
				if ((int)v111.m128_f32[2] != 0x80000000 && (float)v27 != v111.m128_f32[2])
					v26 = (float)(v27 - (_mm_movemask_ps(_mm_unpacklo_ps((__m128)v111.m128_u32[2], (__m128)v111.m128_u32[2])) & 1));
				v29 = (int)v26 + 1;
				if (v28 > 16)
					v28 = 16;
				if (v29 > 16)
					v29 = 16;
				v30 = v8[1].m128_u64[0];
				v105 = v28;
				v106 = v29;
				(*(void(__fastcall**)(unsigned __int64, _QWORD, __int64**, __int64))(*(_QWORD*)v30 + 72i64))(
					v30,
					0i64,
					&v109,
					1i64);
				v31 = (*(__int64(__fastcall**)(__int64*))(*v109 + 16))(v109);
				v32 = (__int64*)v8[1].m128_u64[0];
				v33 = *v32;
				v34 = v31;
				v112 = v31;
				v35 = 33 * v104;
				v36 = *(_OWORD*)((*(__int64(__fastcall**)(__int64*))(v33 + 40))(v32) + 32);
				v37 = *v109;
				v97 = 33 * v104;
				v110 = v36;
				v38 = (*(__int64(__fastcall**)(__int64*))(v37 + 24))(v109);
				v39 = v104;
				v40 = v106;
				v96 = v104;
				v41 = v38 + v104 * *(_DWORD*)(v34 + 44);
				v99 = v41;
				if (v104 < v106)
				{
					v42 = v103;
					v43 = v108.m128_f32[2];
					v44 = 0;
					v45 = v108.m128_f32[1];
					v46 = v107.m128_f32[2];
					v47 = v107.m128_f32[1];
					v48 = v108.m128_f32[0];
					v49 = v107.m128_f32[0];
					v50 = *((float*)&v110 + 2);
					do
					{
						if (v42 < v105)
						{
							do
							{
								if ((*(_WORD*)(v41 + 2i64 * v42) & 0x8000) == 0 || (v6 & 2) != 0)
								{
									v51 = _mm_cvtsi32_si128(v39);
									v52 = v8[9].m128_u64[1];
									v53 = (unsigned int)(v35 + v42);
									v54 = _mm_cvtepi32_ps(v51);
									v55 = (__m128)COERCE_UNSIGNED_INT((float)v42);
									v54.m128_f32[0] = (float)(v54.m128_f32[0] * *(float*)&dword_140C44574) + v50;
									v55.m128_f32[0] = (float)(v55.m128_f32[0] * *(float*)&dword_140C44574) + *(float*)&v110;
									v56 = (__m128)(unsigned int)dword_140C44574;
									v56.m128_f32[0] = *(float*)&dword_140C44574 * 0.5;
									v57 = v55;
									v57.m128_f32[0] = v55.m128_f32[0] + *(float*)&dword_140C44574;
									v102 = _mm_unpacklo_ps(
										_mm_unpacklo_ps(v55, v54),
										_mm_unpacklo_ps((__m128) * (unsigned int*)(v52 + 16 * v53 + 12), (__m128)0i64));
									v107 = _mm_unpacklo_ps(
										_mm_unpacklo_ps(v57, v54),
										_mm_unpacklo_ps(
											(__m128) * (unsigned int*)(v52 + 16i64 * (unsigned int)(v53 + 1) + 12),
											(__m128)0i64));
									v58 = v56;
									v58.m128_f32[0] = (float)(*(float*)&dword_140C44574 * 0.5) + v55.m128_f32[0];
									v56.m128_f32[0] = (float)(*(float*)&dword_140C44574 * 0.5) + v54.m128_f32[0];
									v54.m128_f32[0] = v54.m128_f32[0] + *(float*)&dword_140C44574;
									v59 = _mm_unpacklo_ps(
										_mm_unpacklo_ps(v58, v56),
										_mm_unpacklo_ps(
											(__m128) * (unsigned int*)(v52 + 16i64 * (unsigned int)(v53 + 17) + 12),
											(__m128)0i64));
									v98 = v59;
									v100 = _mm_unpacklo_ps(
										_mm_unpacklo_ps(v55, v54),
										_mm_unpacklo_ps(
											(__m128) * (unsigned int*)(v52 + 16i64 * (unsigned int)(v53 + 33) + 12),
											(__m128)0i64));
									v101 = _mm_unpacklo_ps(
										_mm_unpacklo_ps(v57, v54),
										_mm_unpacklo_ps(
											(__m128) * (unsigned int*)(v52 + 16i64 * (unsigned int)(v53 + 34) + 12),
											(__m128)0i64));
									if (v59.m128_f32[0] >= v49)
									{
										v60 = 0;
										if (v59.m128_f32[0] > v48)
											v60 = 2;
									}
									else
									{
										v60 = 1;
									}
									if (v98.m128_f32[1] >= v47)
									{
										if (v98.m128_f32[1] > v45)
											v60 |= 8u;
									}
									else
									{
										v60 |= 4u;
									}
									if (v98.m128_f32[2] >= v46)
									{
										if (v98.m128_f32[2] > v43)
											v60 |= 0x20u;
									}
									else
									{
										v60 |= 0x10u;
									}
									if (v60)
									{
										if (v102.m128_f32[0] >= v49)
										{
											v77 = 0;
											if (v102.m128_f32[0] > v48)
												v77 = 2;
										}
										else
										{
											v77 = 1;
										}
										if (v102.m128_f32[1] >= v47)
										{
											if (v102.m128_f32[1] > v45)
												v77 |= 8u;
										}
										else
										{
											v77 |= 4u;
										}
										if (v102.m128_f32[2] >= v46)
										{
											if (v102.m128_f32[2] > v43)
												v77 |= 0x20u;
										}
										else
										{
											v77 |= 0x10u;
										}
										if (v107.m128_f32[0] >= v49)
										{
											if (v107.m128_f32[0] > v48)
												v44 = 2;
										}
										else
										{
											v44 = 1;
										}
										if (v107.m128_f32[1] >= v47)
										{
											if (v107.m128_f32[1] > v45)
												v44 |= 8u;
										}
										else
										{
											v44 |= 4u;
										}
										if (v107.m128_f32[2] >= v46)
										{
											if (v107.m128_f32[2] > v43)
												v44 |= 0x20u;
										}
										else
										{
											v44 |= 0x10u;
										}
										if (v100.m128_f32[0] >= v49)
										{
											v78 = 0;
											if (v100.m128_f32[0] > v48)
												v78 = 2;
										}
										else
										{
											v78 = 1;
										}
										if (v100.m128_f32[1] >= v47)
										{
											if (v100.m128_f32[1] > v45)
												v78 |= 8u;
										}
										else
										{
											v78 |= 4u;
										}
										if (v100.m128_f32[2] >= v46)
										{
											if (v100.m128_f32[2] > v43)
												v78 |= 0x20u;
										}
										else
										{
											v78 |= 0x10u;
										}
										if (v101.m128_f32[0] >= v49)
										{
											v79 = 0;
											if (v101.m128_f32[0] > v48)
												v79 = 2;
										}
										else
										{
											v79 = 1;
										}
										if (v101.m128_f32[1] >= v47)
										{
											if (v101.m128_f32[1] > v45)
												v79 |= 8u;
										}
										else
										{
											v79 |= 4u;
										}
										if (v101.m128_f32[2] >= v46)
										{
											if (v101.m128_f32[2] > v43)
												v79 |= 0x20u;
										}
										else
										{
											v79 |= 0x10u;
										}
										if ((v77 & v78 & v60) == 0)
										{
											v80 = *(unsigned int(__fastcall**)(__m128*, __m128*, __m128*, _QWORD))(a4 + 40);
											if (!v80 || v80(&v98, &v102, &v100, *(_QWORD*)(a4 + 48)))
											{
												v81 = *(_DWORD*)(a4 + 16);
												if (*(_DWORD*)(a4 + 12) == v81)
												{
													if (v81)
														*(_DWORD*)(a4 + 16) = 2 * v81;
													else
														*(_DWORD*)(a4 + 16) = 16;
													*(_QWORD*)(a4 + 24) = sub_14018C320(
														*(_QWORD*)(a4 + 24),
														48i64 * *(unsigned int*)(a4 + 16),
														8u);
												}
												v82 = (__m128*)(*(_QWORD*)(a4 + 24) + 16i64 * (unsigned int)(3 * *(_DWORD*)(a4 + 12)));
												*v82 = v98;
												v82[1] = v102;
												v82[2] = v100;
												v83 = *(_QWORD*)(a4 + 32);
												++* (_DWORD*)(a4 + 12);
												if (v83)
												{
													sub_14018B900(v83, 0);
													*(_QWORD*)(a4 + 32) = 0i64;
												}
											}
										}
										if ((v77 & v44 & v60) == 0)
										{
											v84 = *(unsigned int(__fastcall**)(__m128*, __m128*, __m128*, _QWORD))(a4 + 40);
											if (!v84 || v84(&v98, &v107, &v102, *(_QWORD*)(a4 + 48)))
											{
												v85 = *(_DWORD*)(a4 + 16);
												if (*(_DWORD*)(a4 + 12) == v85)
												{
													if (v85)
														*(_DWORD*)(a4 + 16) = 2 * v85;
													else
														*(_DWORD*)(a4 + 16) = 16;
													*(_QWORD*)(a4 + 24) = sub_14018C320(
														*(_QWORD*)(a4 + 24),
														48i64 * *(unsigned int*)(a4 + 16),
														8u);
												}
												v86 = (__m128*)(*(_QWORD*)(a4 + 24) + 16i64 * (unsigned int)(3 * *(_DWORD*)(a4 + 12)));
												*v86 = v98;
												v86[1] = v107;
												v86[2] = v102;
												v87 = *(_QWORD*)(a4 + 32);
												++* (_DWORD*)(a4 + 12);
												if (v87)
												{
													sub_14018B900(v87, 0);
													*(_QWORD*)(a4 + 32) = 0i64;
												}
											}
										}
										if ((v78 & v79 & v60) == 0)
										{
											v88 = *(unsigned int(__fastcall**)(__m128*, __m128*, __m128*, _QWORD))(a4 + 40);
											if (!v88 || v88(&v98, &v100, &v101, *(_QWORD*)(a4 + 48)))
											{
												v89 = *(_DWORD*)(a4 + 16);
												if (*(_DWORD*)(a4 + 12) == v89)
												{
													if (v89)
														*(_DWORD*)(a4 + 16) = 2 * v89;
													else
														*(_DWORD*)(a4 + 16) = 16;
													*(_QWORD*)(a4 + 24) = sub_14018C320(
														*(_QWORD*)(a4 + 24),
														48i64 * *(unsigned int*)(a4 + 16),
														8u);
												}
												v90 = (__m128*)(*(_QWORD*)(a4 + 24) + 16i64 * (unsigned int)(3 * *(_DWORD*)(a4 + 12)));
												*v90 = v98;
												v90[1] = v100;
												v90[2] = v101;
												v91 = *(_QWORD*)(a4 + 32);
												++* (_DWORD*)(a4 + 12);
												if (v91)
												{
													sub_14018B900(v91, 0);
													*(_QWORD*)(a4 + 32) = 0i64;
												}
											}
										}
										if ((v44 & v79 & v60) != 0)
											goto LABEL_169;
										v92 = *(unsigned int(__fastcall**)(__m128*, __m128*, __m128*, _QWORD))(a4 + 40);
										if (v92)
										{
											if (!v92(&v98, &v101, &v107, *(_QWORD*)(a4 + 48)))
												goto LABEL_169;
										}
										v93 = *(_DWORD*)(a4 + 16);
										if (*(_DWORD*)(a4 + 12) == v93)
										{
											if (v93)
												*(_DWORD*)(a4 + 16) = 2 * v93;
											else
												*(_DWORD*)(a4 + 16) = 16;
											*(_QWORD*)(a4 + 24) = sub_14018C320(*(_QWORD*)(a4 + 24), 48i64 * *(unsigned int*)(a4 + 16), 8u);
										}
										v94 = (__m128*)(*(_QWORD*)(a4 + 24) + 16i64 * (unsigned int)(3 * *(_DWORD*)(a4 + 12)));
										*v94 = v98;
										v94[1] = v101;
										v94[2] = v107;
										v95 = *(_QWORD*)(a4 + 32);
										++* (_DWORD*)(a4 + 12);
										if (!v95)
										{
										LABEL_169:
											v44 = 0;
										}
										else
										{
											sub_14018B900(v95, 0);
											v44 = 0;
											*(_QWORD*)(a4 + 32) = 0i64;
										}
										v35 = v97;
										v8 = (__m128*)a1;
									}
									else
									{
										v61 = *(unsigned int(__fastcall**)(__m128*, __m128*, __m128*, _QWORD))(a4 + 40);
										if (!v61 || v61(&v98, &v102, &v100, *(_QWORD*)(a4 + 48)))
										{
											v62 = *(_DWORD*)(a4 + 16);
											if (*(_DWORD*)(a4 + 12) == v62)
											{
												if (v62)
													*(_DWORD*)(a4 + 16) = 2 * v62;
												else
													*(_DWORD*)(a4 + 16) = 16;
												*(_QWORD*)(a4 + 24) = sub_14018C320(
													*(_QWORD*)(a4 + 24),
													48i64 * *(unsigned int*)(a4 + 16),
													8u);
											}
											v63 = (__m128*)(*(_QWORD*)(a4 + 24) + 16i64 * (unsigned int)(3 * *(_DWORD*)(a4 + 12)));
											*v63 = v98;
											v63[1] = v102;
											v63[2] = v100;
											v64 = *(_QWORD*)(a4 + 32);
											++* (_DWORD*)(a4 + 12);
											if (v64)
											{
												sub_14018B900(v64, 0);
												*(_QWORD*)(a4 + 32) = 0i64;
											}
										}
										v65 = *(unsigned int(__fastcall**)(__m128*, __m128*, __m128*, _QWORD))(a4 + 40);
										if (!v65 || v65(&v98, &v107, &v102, *(_QWORD*)(a4 + 48)))
										{
											v66 = *(_DWORD*)(a4 + 16);
											if (*(_DWORD*)(a4 + 12) == v66)
											{
												if (v66)
													*(_DWORD*)(a4 + 16) = 2 * v66;
												else
													*(_DWORD*)(a4 + 16) = 16;
												*(_QWORD*)(a4 + 24) = sub_14018C320(
													*(_QWORD*)(a4 + 24),
													48i64 * *(unsigned int*)(a4 + 16),
													8u);
											}
											v67 = (__m128*)(*(_QWORD*)(a4 + 24) + 16i64 * (unsigned int)(3 * *(_DWORD*)(a4 + 12)));
											*v67 = v98;
											v67[1] = v107;
											v67[2] = v102;
											v68 = *(_QWORD*)(a4 + 32);
											++* (_DWORD*)(a4 + 12);
											if (v68)
											{
												sub_14018B900(v68, 0);
												*(_QWORD*)(a4 + 32) = 0i64;
											}
										}
										v69 = *(unsigned int(__fastcall**)(__m128*, __m128*, __m128*, _QWORD))(a4 + 40);
										if (!v69 || v69(&v98, &v100, &v101, *(_QWORD*)(a4 + 48)))
										{
											v70 = *(_DWORD*)(a4 + 16);
											if (*(_DWORD*)(a4 + 12) == v70)
											{
												if (v70)
													*(_DWORD*)(a4 + 16) = 2 * v70;
												else
													*(_DWORD*)(a4 + 16) = 16;
												*(_QWORD*)(a4 + 24) = sub_14018C320(
													*(_QWORD*)(a4 + 24),
													48i64 * *(unsigned int*)(a4 + 16),
													8u);
											}
											v71 = (__m128*)(*(_QWORD*)(a4 + 24) + 16i64 * (unsigned int)(3 * *(_DWORD*)(a4 + 12)));
											*v71 = v98;
											v71[1] = v100;
											v71[2] = v101;
											v72 = *(_QWORD*)(a4 + 32);
											++* (_DWORD*)(a4 + 12);
											if (v72)
											{
												sub_14018B900(v72, 0);
												*(_QWORD*)(a4 + 32) = 0i64;
											}
										}
										v73 = *(unsigned int(__fastcall**)(__m128*, __m128*, __m128*, _QWORD))(a4 + 40);
										if (!v73 || v73(&v98, &v101, &v107, *(_QWORD*)(a4 + 48)))
										{
											v74 = *(_DWORD*)(a4 + 16);
											if (*(_DWORD*)(a4 + 12) == v74)
											{
												if (v74)
													*(_DWORD*)(a4 + 16) = 2 * v74;
												else
													*(_DWORD*)(a4 + 16) = 16;
												*(_QWORD*)(a4 + 24) = sub_14018C320(
													*(_QWORD*)(a4 + 24),
													48i64 * *(unsigned int*)(a4 + 16),
													8u);
											}
											v75 = (__m128*)(*(_QWORD*)(a4 + 24) + 16i64 * (unsigned int)(3 * *(_DWORD*)(a4 + 12)));
											*v75 = v98;
											v75[1] = v101;
											v75[2] = v107;
											v76 = *(_QWORD*)(a4 + 32);
											++* (_DWORD*)(a4 + 12);
											if (v76)
											{
												sub_14018B900(v76, 0);
												*(_QWORD*)(a4 + 32) = 0i64;
											}
										}
									}
									v41 = v99;
									v6 = a3;
									v39 = v96;
								}
								++v42;
							} while (v42 < v105);
							v40 = v106;
							v42 = v103;
							v34 = v112;
						}
						++v39;
						v35 += 33;
						v41 += *(int*)(v34 + 44);
						v97 = v35;
						v96 = v39;
						v99 = v41;
					} while (v39 < v40);
				}
				(*(void(__fastcall**)(__int64*))(*v109 + 8))(v109);
			}
		}
	}
}
// 140C44574: using guessed type int dword_140C44574;
// 140C77760: using guessed type __int64 qword_140C77760;

