#include "../winhttp.h"

//----- (00000001403E85D0) ----------------------------------------------------
__int64 __fastcall sub_1403E85D0(int* a1, double a2, double a3, double a4)
{
	int* v6; // rsi
	__int64* v7; // rcx
	unsigned int v8; // r13d
	__int64 v9; // rax
	int* v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rax
	float v13; // xmm0_4
	int v14; // ecx
	unsigned int v15; // ebx
	__int64 v16; // rax
	__int64 v17; // rdx
	unsigned int v18; // edi
	__int64 v19; // rax
	__int64 result; // rax
	__int64* v21; // rcx
	__int64 v22; // rax
	__int64 v23; // r8
	double v24; // xmm2_8
	__int64 v25; // rdx
	__int64 v26; // r8
	__int64 v27; // rcx
	__m128* v28; // r14
	int v29; // edi
	__int64 v30; // rcx
	float v31; // xmm7_4
	__int64 v32; // rax
	__int64 v33; // rcx
	__int64 i; // rbx
	__m128* v35; // r15
	unsigned __int64 v36; // rsi
	__m128** v37; // r9
	_QWORD* v38; // rcx
	unsigned __int64 v39; // rdx
	__m128* v40; // rcx
	unsigned __int64 v41; // rax
	unsigned __int64 v42; // rdi
	__int64* v43; // rdi
	__int64 v44; // rbx
	int* v45; // rax
	int* v46; // r13
	unsigned __int64 v47; // r15
	unsigned __int64* v48; // r14
	unsigned __int64 v49; // rdi
	__int64 v50; // rbx
	int* v51; // rbx
	unsigned __int64 j; // rdi
	__int64 v53; // rcx
	__int64 v54; // r9
	unsigned int* v55; // rax
	unsigned int v56; // xmm1_4
	__m128 v57; // xmm6
	__int64 v58; // rdx
	__int64 v59; // rdx
	__m128 v60; // xmm6
	__m128 v61; // xmm1
	int v62; // r14d
	__int64 v63; // rcx
	int v64; // eax
	int v65; // xmm0_4
	__int64 v66; // rax
	int v67; // edi
	__int64 v68; // rbx
	_QWORD* v69; // rcx
	__int64 v70; // rcx
	unsigned __int64 v71; // r13
	unsigned __int64* v72; // r15
	__int64 v73; // r14
	__m128* v74; // rbx
	unsigned __int64 v75; // rax
	unsigned int v76; // edx
	__int64 v77; // rax
	int* v78; // rdx
	_QWORD* v79; // rcx
	unsigned __int64* v80; // rbx
	unsigned __int64 v81; // rbx
	int v82; // eax
	int* v83; // rbx
	__int64 v84; // r14
	unsigned __int64 v85; // rcx
	__int64 v86; // rax
	int v87; // edx
	__int64 v88; // rax
	__m128* v89; // r10
	int v90; // edx
	__int64 v91; // rbx
	__m128* v92; // rax
	__int64 v93; // rcx
	__int64 v94; // rcx
	__int64 m; // rdi
	_QWORD* v96; // rcx
	_QWORD* v97; // rbx
	__int64 v98; // rcx
	int* v99; // rax
	__int64 v100; // rbx
	__int64 v101; // rdi
	int v102; // eax
	int* v103; // rdx
	int* v104; // rbx
	__int64 v105; // rcx
	__int64 v106; // rax
	int* n; // rax
	__int64 ii; // rax
	unsigned __int64* v109; // rbx
	__int64 v110; // rcx
	__int64 v111; // rdx
	__int64 v112; // rcx
	__int64 v113; // rdx
	__int64 v114; // r8
	__int64 v115; // rbx
	_QWORD* v116; // rcx
	__int64 v117; // rcx
	__int64 v118; // rbx
	__int64 v119; // rdx
	__m128* v120; // rax
	__m128 v121; // xmm1
	__m128* v122; // rdx
	__m128 v123; // xmm7
	__m128 v124; // xmm0
	__m128 v125; // xmm6
	__m128 v126; // xmm2
	__m128 v127; // xmm7
	__m128 v128; // xmm0
	__m128 v129; // xmm9
	__m128 v130; // xmm8
	__m128 v131; // xmm7
	__m128 v132; // xmm6
	__m128* v133; // rax
	__m128* v134; // rdx
	char* v135; // rcx
	__m128 v136; // xmm3
	__m128* v137; // rax
	__int64 v138; // rcx
	__m128 v139; // xmm3
	__m128 v140; // xmm2
	__m128* v141; // [rsp+28h] [rbp-E0h] BYREF
	LONGLONG v142; // [rsp+30h] [rbp-D8h]
	unsigned __int64 v143[2]; // [rsp+38h] [rbp-D0h] BYREF
	__int64 v144; // [rsp+48h] [rbp-C0h]
	__m128* v145; // [rsp+50h] [rbp-B8h] BYREF
	int* v146; // [rsp+58h] [rbp-B0h] BYREF
	LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp-A8h] BYREF
	__int64 v148; // [rsp+68h] [rbp-A0h] BYREF
	LONGLONG k; // [rsp+70h] [rbp-98h]
	__m128* v150; // [rsp+78h] [rbp-90h]
	int v151; // [rsp+80h] [rbp-88h] BYREF
	int v152; // [rsp+84h] [rbp-84h]
	__int64 v153; // [rsp+88h] [rbp-80h]
	void* v154; // [rsp+90h] [rbp-78h]
	unsigned __int64* v155; // [rsp+98h] [rbp-70h]
	int v156; // [rsp+A0h] [rbp-68h]
	char v157[8]; // [rsp+A8h] [rbp-60h] BYREF
	int* v158; // [rsp+B0h] [rbp-58h]
	__int64 v159; // [rsp+B8h] [rbp-50h]
	int v160[4]; // [rsp+C8h] [rbp-40h] BYREF
	__int128 v161[2]; // [rsp+D8h] [rbp-30h] BYREF
	__int64 v162; // [rsp+F8h] [rbp-10h]
	__int64 v163; // [rsp+100h] [rbp-8h]
	int v164; // [rsp+108h] [rbp+0h]
	char v165[96]; // [rsp+118h] [rbp+10h] BYREF
	__m128 v166[6]; // [rsp+178h] [rbp+70h] BYREF

	v6 = a1;
	v146 = a1;
	sub_140539860((__int64)a1, *(float*)&a2);
	sub_140539B50((__int64)v6);
	sub_14053A000((__int64)v6);
	v7 = (__int64*)*((_QWORD*)v6 + 3761);
	v8 = dword_140C636A8;
	v9 = *v7;
	LODWORD(v144) = dword_140C636A8;
	v10 = (int*)(*(__int64(__fastcall**)(__int64*, LARGE_INTEGER*))(v9 + 216))(v7, &PerformanceCount);
	v6[7525] = *v10;
	v6[7526] = v10[1];
	*((__m128*)v6 + 1883) = _mm_sub_ps(
		*(__m128*)(*(__int64(__fastcall**)(_QWORD, int*))(**((_QWORD**)v6 + 3761) + 232i64))(
			*((_QWORD*)v6 + 3761),
			v160),
		*((__m128*)v6 + 1884));
	*((_OWORD*)v6 + 1884) = *(_OWORD*)(*(__int64(__fastcall**)(_QWORD, int*))(**((_QWORD**)v6 + 3761) + 232i64))(
		*((_QWORD*)v6 + 3761),
		v160);
	if ((_DWORD)qword_140C7DC60 && !sub_140554470())
		sub_1405548F0((__int64)&qword_140C7DC60);
	sub_14043B1B0(v11, *(float*)&a2);
	v161[0] = xmmword_140C42A08;
	v161[1] = xmmword_140C42A18;
	v162 = qword_140C42A28;
	v163 = qword_140C42A30;
	v164 = dword_140C42A38;
	sub_14043DDB0((__int64)v6, v161);
	if (v6[7890] == 127)
	{
		if (v6[10] != 4)
		{
			v12 = *((_QWORD*)v6 + 4);
			if (!v12)
			{
			LABEL_9:
				sub_1404D7600((__int64)v6);
				(*(void(__fastcall**)(_QWORD))(**((_QWORD**)v6 + 3761) + 360i64))(*((_QWORD*)v6 + 3761));
				goto LABEL_12;
			}
			while (*(_DWORD*)(v12 + 40) == 4)
			{
				v12 = *(_QWORD*)(v12 + 32);
				if (!v12)
					goto LABEL_9;
			}
		}
		if ((*(unsigned int(__fastcall**)(_QWORD))(**((_QWORD**)v6 + 3761) + 184i64))(*((_QWORD*)v6 + 3761)))
			(*(void(__fastcall**)(_QWORD))(**((_QWORD**)v6 + 3761) + 408i64))(*((_QWORD*)v6 + 3761));
	LABEL_12:
		v13 = sub_1408FDE98(
			(float)((float)(dword_140C636A8 - v6[7348]) * (float)(*((float*)v6 + 7347) * 0.001))
			+ *((float*)v6 + 7345),
			*(float*)&dword_140C44F18);
		v14 = v6[7350];
		*((float*)v6 + 7344) = v13;
		if (v14)
		{
			v15 = v14;
		}
		else
		{
			v16 = *((_QWORD*)v6 + 3677);
			if (v16)
				v15 = *(_DWORD*)(v16 + 16);
			else
				v15 = 0;
		}
		if (v14)
		{
			v17 = *((_QWORD*)v6 + 3677);
			if (v17 && *(_DWORD*)(v17 + 24) > v6[7351])
				v15 = *(_DWORD*)(v17 + 16);
			v18 = v6[7352];
		}
		else
		{
			v19 = *((_QWORD*)v6 + 3677);
			if (v19)
				v18 = *(_DWORD*)(v19 + 20);
			else
				v18 = 0;
		}
		result = (*(__int64(__fastcall**)(_QWORD, __int128*))(**((_QWORD**)v6 + 3657) + 80i64))(
			*((_QWORD*)v6 + 3657),
			v161);
		if ((int)result >= 0)
		{
			result = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**((_QWORD**)v6 + 3657) + 96i64))(
				*((_QWORD*)v6 + 3657),
				(unsigned int)dword_140C636A8);
			if ((int)result >= 0)
			{
				result = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**((_QWORD**)v6 + 3657) + 112i64))(
					*((_QWORD*)v6 + 3657),
					(unsigned int)(int)*((float*)v6 + 7344));
				if ((int)result >= 0)
				{
					v21 = (__int64*)*((_QWORD*)v6 + 3657);
					v22 = *v21;
					v150 = (__m128*)(v6 + 7320);
					result = (*(__int64(__fastcall**)(__int64*))(v22 + 56))(v21);
					if ((int)result >= 0)
					{
						*(_QWORD*)&v24 = (unsigned int)v6[7353];
						result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD))(**((_QWORD**)v6 + 3657) + 128i64))(
							*((_QWORD*)v6 + 3657),
							v15,
							v23,
							v18);
						if ((int)result >= 0)
						{
							v27 = *((_QWORD*)v6 + 3635);
							v6[7350] = 0;
							sub_1405CC090(v27, v25, v26, a4);
							v28 = 0i64;
							v141 = 0i64;
							v143[0] = 0i64;
							v142 = 0i64;
							v29 = sub_140641350((__int64)v6, a2);
							if (v29 < 0 || (v29 = sub_1403A25C0((__int64)v6, a2), v29 < 0))
							{
								v71 = v143[0];
								goto LABEL_98;
							}
							v30 = *((_QWORD*)v6 + 3218);
							v145 = 0i64;
							v31 = 0.0;
							if (v30)
							{
								v32 = sub_1405B3F90(v30);
								v33 = *(_QWORD*)(v32 + 3840);
								if (v33)
								{
									v31 = *(float*)(v33 + 4800);
									v145 = *(__m128**)(v32 + 3840);
								}
							}
							for (i = *((_QWORD*)v6 + 3558); i; i = *(_QWORD*)(i + 96))
							{
								sub_1405B4F50(i, v8);
								*(_QWORD*)(i + 3880) = -1i64;
							}
							v35 = (__m128*) * ((_QWORD*)v6 + 3558);
							if (v35)
							{
								v36 = 0i64;
								do
								{
									v143[0] = v35[6].m128_u64[0];
									if (v28 && sub_1403E8550(v28, v35, v150).m128_f32[0] > 0.0)
									{
										v38 = (_QWORD*)v28[5].m128_u64[1];
										if (v38)
											*v38 = v28[6].m128_u64[0];
										v39 = v28[6].m128_u64[0];
										v40 = v28 + 6;
										if (v39)
											*(_QWORD*)(v39 + 88) = v28[5].m128_u64[1];
										v40->m128_u64[0] = 0i64;
										v28[5].m128_u64[1] = (unsigned __int64)v37;
										v40->m128_u64[0] = (unsigned __int64)*v37;
										*v37 = v28;
										if (v40->m128_u64[0])
											*(_QWORD*)(v40->m128_u64[0] + 88) = v40;
									}
									else
									{
										v28 = v35;
									}
									v41 = sub_1405B3F30((__int64)v35);
									v42 = v41;
									if (v36 <= v41)
									{
										sub_1403FC6F0((__int64*)&v141, v41 + 1);
										v36 = v142;
									}
									v43 = (__int64*)&v141[v42];
									v44 = v43[1];
									v45 = sub_14018DB00(*v43, v44 + 1, 8i64);
									v46 = v45;
									*(_QWORD*)&v45[2 * v44] = v35;
									if ((int*)*v43 != v45)
									{
										sub_1407DB590(v45, (int*)*v43, 8 * v43[1]);
										if (*v43)
											(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v43 - 16) + 8i64))(*v43 - 16);
										*v43 = (__int64)v46;
									}
									v43[1] = v44 + 1;
									v35 = (__m128*)v143[0];
								} while (v143[0]);
								v8 = v144;
								v143[0] = v36;
								v6 = v146;
							}
							v47 = 0i64;
							if (v143[0])
							{
								v48 = &v141->m128_u64[1];
								while (1)
								{
									v49 = *v48;
									v50 = *(v48 - 1);
									v146 = 0i64;
									v151 = 4;
									v152 = 7;
									v153 = sub_14001C280((__int64)v6);
									v155 = (unsigned __int64*)v50;
									v156 = v49;
									v154 = sub_14057A430;
									v29 = sub_14019DCA0((__int64)&v151, 0, 0i64, &v146);
									if (v29 < 0)
										break;
									v51 = v146;
									LODWORD(v148) = -1;
									(*(void(__fastcall**)(int*, __int64*))(*(_QWORD*)v146 + 32i64))(v146, &v148);
									for (j = 0i64; j < *v48; ++j)
										sub_1405B82A0(*(_QWORD*)(*(v48 - 1) + 8 * j), v8, v24);
									(*(void(__fastcall**)(int*))(*(_QWORD*)v51 + 8i64))(v51);
									++v47;
									v48 += 2;
									if (v47 >= v143[0])
										goto LABEL_62;
								}
								if (v146)
									(*(void(__fastcall**)(int*))(*(_QWORD*)v146 + 8i64))(v146);
								goto LABEL_96;
							}
						LABEL_62:
							if (v145)
							{
								v53 = *(_QWORD*)(sub_1405B3F90(*((_QWORD*)v6 + 3218)) + 3840);
								if (v53 == v54)
								{
									v55 = (unsigned int*)*((_QWORD*)v6 + 3636);
									*(_QWORD*)&a4 = v55[13];
									LODWORD(v24) = v55[14];
									v56 = v55[15];
									*(float*)&a4 = *(float*)&a4 + (float)(*(float*)(v53 + 4800) - v31);
									v55[14] = LODWORD(v24);
									v55[15] = v56;
									v55[13] = LODWORD(a4);
								}
							}
							sub_140559920((__m128*)v6 + 1803);
							v57 = *((__m128*)v6 + 1830);
							v29 = sub_140641520((__int64)v6, v58, *(float*)&v24);
							if (v29 < 0)
								goto LABEL_96;
							v60 = _mm_sub_ps(v57, *((__m128*)v6 + 1830));
							v61 = _mm_mul_ps(v60, v60);
							if ((float)((float)(v61.m128_f32[0] + _mm_shuffle_ps(v61, v61, 85).m128_f32[0])
								+ _mm_shuffle_ps(v61, v61, 170).m128_f32[0]) > 1024.0)
								sub_140401080(
									(__int64*)v6 + 3558,
									v59,
									(__int64(__fastcall*)(__int64, __int64, __int64))sub_1403E84D0,
									(__int64)(v6 + 7320));
							v29 = (*(__int64(__fastcall**)(_QWORD, int*))(**((_QWORD**)v6 + 3657) + 56i64))(
								*((_QWORD*)v6 + 3657),
								v6 + 7320);
							if (v29 < 0
								|| (v29 = (*(__int64(__fastcall**)(_QWORD))(**((_QWORD**)v6 + 3657) + 480i64))(*((_QWORD*)v6 + 3657)),
									v29 < 0)
								|| (v29 = sub_1406415C0((__int64)v6, a2, *(float*)&a3), v29 < 0))
							{
							LABEL_96:
								v71 = v143[0];
								goto LABEL_97;
							}
							sub_14053A210((__m128*)v6);
							v62 = v6[6584];
							v63 = *((_QWORD*)v6 + 4018);
							LODWORD(v146) = v62;
							v64 = sub_1405FDFD0(v63);
							v65 = dword_140C4AA08;
							v6[6584] = v64;
							v66 = qword_140C65A00;
							v6[6898] = 0;
							v6[6899] = v65;
							v6[6602] = 0;
							*((_QWORD*)v6 + 3304) = 0i64;
							v67 = *(_QWORD*)(v66 + 80) != 0i64;
							LODWORD(v144) = v67;
							sub_140008410((__int64)(v6 + 6576));
							LODWORD(v148) = 5;
							QueryPerformanceCounter(&PerformanceCount);
							v68 = *((_QWORD*)v6 + 3502);
							for (k = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart; v68; v68 = *((_QWORD*)v6 + 3502))
							{
								if (!(*(unsigned int(__fastcall**)(_QWORD, __int64*, _QWORD))(**(_QWORD**)(v68 + 16) + 24i64))(
									*(_QWORD*)(v68 + 16),
									&v148,
									0i64))
									break;
								v69 = *(_QWORD**)(v68 + 24);
								if (v69)
									*v69 = *(_QWORD*)(v68 + 32);
								v70 = *(_QWORD*)(v68 + 32);
								if (v70)
									*(_QWORD*)(v70 + 24) = *(_QWORD*)(v68 + 24);
								*(_QWORD*)(v68 + 24) = 0i64;
								*(_QWORD*)(v68 + 32) = 0i64;
							}
							v71 = v143[0];
							v150 = 0i64;
							if (v143[0])
							{
								v72 = (unsigned __int64*)v141;
								while (1)
								{
									v73 = 0i64;
									if (v72[1])
										break;
								LABEL_108:
									LODWORD(v143[0]) = LODWORD(a2);
									v143[1] = *v72;
									v81 = v72[1];
									v145 = 0i64;
									v151 = 4;
									v152 = 7;
									v153 = sub_14001C280((__int64)v6);
									v154 = sub_1403D90B0;
									v156 = v81;
									v155 = v143;
									v82 = sub_14019DCA0((__int64)&v151, 0, 0i64, (int**)&v145);
									v83 = (int*)v145;
									v29 = v82;
									if (v82 < 0)
										goto LABEL_122;
									v160[0] = -1;
									(*(void(__fastcall**)(__m128*, int*))(v145->m128_u64[0] + 32))(v145, v160);
									v84 = 0i64;
									if (v72[1])
									{
										while (1)
										{
											v29 = sub_14045A640(*(__m128**)(*v72 + 8 * v84));
											if (v29 < 0)
												break;
											if (++v84 >= v72[1])
												goto LABEL_112;
										}
									LABEL_122:
										if (v83)
											(*(void(__fastcall**)(int*))(*(_QWORD*)v83 + 8i64))(v83);
										goto LABEL_97;
									}
								LABEL_112:
									(*(void(__fastcall**)(int*))(*(_QWORD*)v83 + 8i64))(v83);
									v72 += 2;
									v150 = (__m128*)((char*)v150 + 1);
									if ((unsigned __int64)v150 >= v71)
									{
										v67 = v144;
										v62 = (int)v146;
										goto LABEL_114;
									}
								}
								while (1)
								{
									v74 = *(__m128**)(*v72 + 8 * v73);
									v29 = sub_140459330((__int64)v74, a2, (unsigned int*)&v148);
									if (v29 < 0)
										goto LABEL_97;
									if (!(_DWORD)v144)
									{
										v75 = v74[1].m128_u64[1];
										if (v75)
										{
											if (!v74[30].m128_i32[1] && !v74[42].m128_i32[3] && !v74[37].m128_i32[0])
											{
												v76 = *(_DWORD*)(v75 + 216);
												if (v76)
												{
													v77 = sub_1404CC070((unsigned int)v144, v76);
													if (v77)
													{
														if (sub_140722D30(v77, v74))
														{
															v145 = v74;
															v78 = *(int**)(qword_140C65A00 + 48);
															v79 = (_QWORD*)(qword_140C65A00 + 32);
															if (v78 == *(int**)(qword_140C65A00 + 56))
															{
																sub_1400B9430(v79, v78, &v145);
															}
															else
															{
																if (v78)
																	*(_QWORD*)v78 = v74;
																v79[2] += 8i64;
															}
														}
													}
												}
											}
										}
									}
									if (++v73 >= v72[1])
										goto LABEL_108;
								}
							}
						LABEL_114:
							v6[7142] = 0;
							if (!v67)
								sub_1404CC0D0();
							sub_140396A00((__int64)v6);
							v86 = *((_QWORD*)v6 + 3218);
							if (v86)
							{
								v87 = *(_DWORD*)(v86 + 264);
								if (v87)
								{
									v88 = sub_1403D90D0((__int64)v6, v87);
									if (!v88 || (unsigned int)sub_14046C6A0(v88))
									{
										sub_14055B0E0((__int64)v6, 0, a3, a4);
									}
									else if (*((_QWORD*)v6 + 3218))
									{
										sub_14055B960((__int64)v6, v89, a3, a4);
									}
								}
							}
							v90 = v6[6544];
							if (v90)
							{
								v85 = v6[6545];
								if (v85 < 0x66)
								{
									v91 = 9 * v85;
									v92 = (__m128*)sub_1403D90D0((__int64)v6, v90);
									if ((unsigned int)sub_1403ADD00(*((__m128**)v6 + 15), v92, dword_140C48160[2 * v91]))
										sub_1403A71F0((__int64)v6, 0, 0x65u, 1);
								}
							}
							if (v6[6584] != v62)
								Apollo_LUAEvent(*((_QWORD*)v6 + 3688), "CanVacuumChange", L"b");
							sub_1406006D0(v85, *(float*)&a2);
							sub_140575D20(v93);
							sub_14055A3F0(v6 + 7372);
							v29 = sub_1403A6590((__int64)v6, *(float*)&a2);
							if (v29 < 0 || (v29 = sub_1406139C0((__int64)v6, *(float*)&a2), v29 < 0))
							{
							LABEL_97:
								v28 = v141;
							LABEL_98:
								if (v71)
								{
									v80 = (unsigned __int64*)v28;
									do
									{
										if (*v80)
											(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)(*v80 - 16) + 8i64))(*v80 - 16);
										v80 += 2;
										--v71;
									} while (v71);
								}
								if (v28)
									(*(void(__fastcall**)(__m128*))(v28[-1].m128_u64[0] + 8))(v28 - 1);
								return (unsigned int)v29;
							}
							if (qword_140C65920)
								sub_140487270(v94);
							for (m = *(_QWORD*)(qword_140C659F8 + 112); m; m = *(_QWORD*)(m + 8))
							{
								v96 = *(_QWORD**)(m + 144);
								if (v96)
								{
									do
									{
										v97 = (_QWORD*)v96[3];
										(*(void(__fastcall**)(_QWORD*))(*v96 + 32i64))(v96);
										v96 = v97;
									} while (v97);
								}
							}
							v98 = *((_QWORD*)v6 + 3633);
							if (v98)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v98 + 16i64))(v98);
							v99 = sub_14018B280(40i64, 0);
							v159 = 0i64;
							v158 = v99;
							*(_BYTE*)v99 = 0;
							*((_QWORD*)v158 + 1) = 0i64;
							*((_QWORD*)v158 + 2) = v158;
							*((_QWORD*)v158 + 3) = v158;
							v100 = *((_QWORD*)v6 + 3176);
							while (v100)
							{
								v101 = v100;
								v100 = *(_QWORD*)(v100 + 24);
								v143[0] = 0i64;
								v102 = sub_14054B1B0(v101, v143);
								if (v102 < 0 || v102 == 1)
								{
									sub_14054A080(v101);
									sub_14018B900(v101, 0);
								}
								else if (v143[0])
								{
									sub_140007810((__int64)v157, (__int64)v160, v143);
								}
							}
							if (v6[6356])
								sub_1405488C0(*((_QWORD*)v6 + 3177));
							v103 = v158;
							v104 = (int*)*((_QWORD*)v158 + 2);
							if (v104 != v158)
							{
								do
								{
									v105 = *((_QWORD*)v104 + 4);
									if (v105)
									{
										sub_140548590(v105);
										v103 = v158;
									}
									v106 = *((_QWORD*)v104 + 3);
									if (v106)
									{
										v104 = (int*)*((_QWORD*)v104 + 3);
										for (n = *(int**)(v106 + 16); n; n = (int*)*((_QWORD*)n + 2))
											v104 = n;
									}
									else
									{
										for (ii = *((_QWORD*)v104 + 1); v104 == *(int**)(ii + 24); ii = *(_QWORD*)(ii + 8))
											v104 = (int*)ii;
										if (*((_QWORD*)v104 + 3) != ii)
											v104 = (int*)ii;
									}
								} while (v104 != v103);
							}
							sub_1403EB750((__int64)v6);
							sub_1403F8F50((__int64)v6);
							sub_1403F9D30((__int64)v6, a2);
							sub_14053A990((__int64)v6, a2);
							if ((unsigned int)sub_1400480B0((__int64)v6))
							{
								(*(void(__fastcall**)(_QWORD, _QWORD))(**((_QWORD**)v6 + 3761) + 376i64))(
									*((_QWORD*)v6 + 3761),
									(unsigned int)v6[7540]);
								(*(void(__fastcall**)(_QWORD))(**((_QWORD**)v6 + 3761) + 368i64))(*((_QWORD*)v6 + 3761));
							}
							sub_140008410((__int64)v157);
							sub_14018B900((__int64)v158, 0);
							if (v71)
							{
								v109 = (unsigned __int64*)v141;
								do
								{
									if (*v109)
										(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)(*v109 - 16) + 8i64))(*v109 - 16);
									v109 += 2;
									--v71;
								} while (v71);
							}
							if (v141)
								(*(void(__fastcall**)(__m128*))(v141[-1].m128_u64[0] + 8))(v141 - 1);
						LABEL_206:
							*((_QWORD*)v6 + 3217) = *((_QWORD*)v6 + 3218);
							return 0i64;
						}
					}
				}
			}
		}
		return result;
	}
	v110 = *((_QWORD*)v6 + 3657);
	LODWORD(v161[0]) |= 0x800000u;
	result = (*(__int64(__fastcall**)(__int64, __int128*))(*(_QWORD*)v110 + 80i64))(v110, v161);
	if ((int)result < 0)
		return result;
	result = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**((_QWORD**)v6 + 3657) + 96i64))(
		*((_QWORD*)v6 + 3657),
		(unsigned int)dword_140C636A8);
	if ((int)result < 0)
		return result;
	result = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**((_QWORD**)v6 + 3657) + 112i64))(
		*((_QWORD*)v6 + 3657),
		(unsigned int)(int)*((float*)v6 + 7344));
	if ((int)result < 0)
		return result;
	result = (*(__int64(__fastcall**)(_QWORD, int*))(**((_QWORD**)v6 + 3657) + 56i64))(
		*((_QWORD*)v6 + 3657),
		v6 + 7320);
	if ((int)result < 0)
		return result;
	result = (*(__int64(__fastcall**)(_QWORD))(**((_QWORD**)v6 + 3657) + 480i64))(*((_QWORD*)v6 + 3657));
	if ((int)result < 0)
		return result;
	if (*((_QWORD*)v6 + 15))
	{
		LODWORD(v141) = 20;
		QueryPerformanceCounter(&PerformanceCount);
		v112 = *((_QWORD*)v6 + 15);
		v142 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
		result = sub_140467990(v112, (unsigned int*)&v141);
		if ((int)result < 0)
			return result;
	}
	sub_140401080(
		(__int64*)v6 + 3558,
		v111,
		(__int64(__fastcall*)(__int64, __int64, __int64))sub_1403E84D0,
		(__int64)(v6 + 7320));
	LODWORD(v148) = 5;
	QueryPerformanceCounter(&PerformanceCount);
	v115 = *((_QWORD*)v6 + 3502);
	for (k = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart; v115; v115 = *((_QWORD*)v6 + 3502))
	{
		if (!(*(unsigned int(__fastcall**)(_QWORD, __int64*, _QWORD))(**(_QWORD**)(v115 + 16) + 24i64))(
			*(_QWORD*)(v115 + 16),
			&v148,
			0i64))
			break;
		v116 = *(_QWORD**)(v115 + 24);
		if (v116)
			*v116 = *(_QWORD*)(v115 + 32);
		v117 = *(_QWORD*)(v115 + 32);
		if (v117)
			*(_QWORD*)(v117 + 24) = *(_QWORD*)(v115 + 24);
		*(_QWORD*)(v115 + 24) = 0i64;
		*(_QWORD*)(v115 + 32) = 0i64;
	}
	v118 = *((_QWORD*)v6 + 3558);
	if (!v118)
	{
	LABEL_189:
		if (v6[7890] == 63)
		{
			sub_1405CC090(*((_QWORD*)v6 + 3635), v113, v114, a4);
			result = sub_140641520((__int64)v6, v119, *(float*)&a3);
			if ((int)result < 0)
				return result;
			result = sub_1406415C0((__int64)v6, a2, *(float*)&a3);
			if ((int)result < 0)
				return result;
		}
		else if (*((_QWORD*)v6 + 3218))
		{
			result = sub_140641520((__int64)v6, v113, *(float*)&a3);
			if ((int)result < 0)
				return result;
			result = sub_1406415C0((__int64)v6, a2, *(float*)&a3);
			if ((int)result < 0)
				return result;
			v120 = (__m128*) * ((_QWORD*)v6 + 3637);
			if (!v120)
				v120 = (__m128*) * ((_QWORD*)v6 + 3636);
			v121 = v120[9];
			v122 = (__m128*) * ((_QWORD*)v6 + 3637);
			v123 = v120[6];
			v124 = v120[8];
			v125 = _mm_unpackhi_ps(v123, v120[7]);
			v126 = _mm_unpackhi_ps(v124, v121);
			v127 = _mm_unpacklo_ps(v123, v120[7]);
			v128 = _mm_unpacklo_ps(v124, v121);
			v129 = _mm_shuffle_ps(v125, v126, 68);
			v130 = _mm_shuffle_ps(v127, v128, 68);
			v131 = _mm_shuffle_ps(v127, v128, 238);
			v132 = _mm_shuffle_ps(v125, v126, 238);
			if (!v122)
				v122 = (__m128*) * ((_QWORD*)v6 + 3636);
			v133 = sub_1401B20F0(v166, v122 + 14);
			v134 = v133 + 6;
			if (v133 < &v133[6])
			{
				v135 = (char*)(v165 - (char*)v133);
				do
				{
					_mm_prefetch(&v133[1].m128_i8[8], 0);
					v136 = *v133++;
					_mm_stream_ps(
						(float*)((char*)v133[-1].m128_f32 + (_QWORD)v135),
						_mm_add_ps(
							_mm_add_ps(
								_mm_add_ps(
									_mm_mul_ps(_mm_shuffle_ps(v136, v136, 0), v130),
									_mm_mul_ps(_mm_shuffle_ps(v136, v136, 85), v131)),
								_mm_mul_ps(_mm_shuffle_ps(v136, v136, 170), v129)),
							_mm_mul_ps(_mm_shuffle_ps(v136, v136, 255), v132)));
				} while (v133 < v134);
			}
			_mm_sfence();
			v137 = (__m128*)v165;
			v138 = 6i64;
			do
			{
				v139 = *v137++;
				v140 = _mm_mul_ps(v139, v139);
				v140.m128_f32[0] = 1.0
					/ fsqrt(
						(float)(v140.m128_f32[0] + _mm_shuffle_ps(v140, v140, 85).m128_f32[0])
						+ _mm_shuffle_ps(v140, v140, 170).m128_f32[0]);
				v137[-1] = _mm_mul_ps(_mm_shuffle_ps(v140, v140, 0), v139);
				--v138;
			} while (v138);
			(*(void(__fastcall**)(_QWORD, char*))(**((_QWORD**)v6 + 3657) + 64i64))(*((_QWORD*)v6 + 3657), v165);
		}
		goto LABEL_206;
	}
	while (1)
	{
		result = sub_140467990(v118, (unsigned int*)&v148);
		if ((int)result < 0)
			return result;
		v118 = *(_QWORD*)(v118 + 96);
		if (!v118)
			goto LABEL_189;
	}
}
// 1403E8847: conditional instruction was optimized away because ecx.4!=0
// 1403E86F4: variable 'v11' is possibly undefined
// 1403E88EF: variable 'v23' is possibly undefined
// 1403E890B: variable 'v25' is possibly undefined
// 1403E890B: variable 'v26' is possibly undefined
// 1403E8A1F: variable 'v37' is possibly undefined
// 1403E8BD3: variable 'v54' is possibly undefined
// 1403E8C20: variable 'v58' is possibly undefined
// 1403E8C6D: variable 'v59' is possibly undefined
// 1403E9044: variable 'v89' is possibly undefined
// 1403E90E7: variable 'v85' is possibly undefined
// 1403E90F0: variable 'v93' is possibly undefined
// 1403E9136: variable 'v94' is possibly undefined
// 1403E9449: variable 'v111' is possibly undefined
// 1403E950E: variable 'v113' is possibly undefined
// 1403E950E: variable 'v114' is possibly undefined
// 1403E9516: variable 'v119' is possibly undefined
// 1409EEE34: using guessed type wchar_t aB[2];
// 140C42A08: using guessed type __int128 xmmword_140C42A08;
// 140C42A18: using guessed type __int128 xmmword_140C42A18;
// 140C42A28: using guessed type __int64 qword_140C42A28;
// 140C42A30: using guessed type __int64 qword_140C42A30;
// 140C42A38: using guessed type int dword_140C42A38;
// 140C44F18: using guessed type int dword_140C44F18;
// 140C48160: using guessed type float dword_140C48160[10];
// 140C4AA08: using guessed type int dword_140C4AA08;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65920: using guessed type __int64 qword_140C65920;
// 140C659F8: using guessed type __int64 qword_140C659F8;
// 140C65A00: using guessed type __int64 qword_140C65A00;
// 140C7DC60: using guessed type __int64 qword_140C7DC60;
// 1403E85D0: using guessed type char var_1B0[8];
// 1403E85D0: using guessed type __m128 var_E0[6];

