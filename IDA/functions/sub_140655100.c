//----- (0000000140655100) ----------------------------------------------------
__int64 __fastcall sub_140655100(_QWORD* a1)
{
	int* v2; // rax
	unsigned int v3; // r13d
	int* v4; // rdi
	int* v5; // rax
	__int64 v6; // rax
	__int64 v7; // r15
	__int64 v8; // rcx
	int v9; // edi
	unsigned __int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // rcx
	int v14; // eax
	__int64 v15; // r14
	__int64 v16; // rax
	unsigned int v17; // edi
	int** v18; // rbx
	__int64 v19; // rcx
	unsigned __int64 v20; // rax
	__int64 v21; // rbx
	__int64 v22; // rax
	int v23; // r15d
	__int64 v24; // rcx
	_QWORD* v25; // rax
	__int64 v26; // rdx
	_QWORD* v27; // rax
	__int64 v28; // r11
	__int64 v29; // rdx
	int v30; // r10d
	_QWORD* v31; // rax
	__int64 v32; // r11
	__int64 v33; // rdx
	int v34; // r10d
	__int64 v35; // rcx
	_QWORD* v36; // rax
	__int64 v37; // rdx
	unsigned __int16* v38; // r10
	__int64 v39; // rbx
	BOOL v40; // eax
	__int64 v41; // rcx
	_QWORD* v42; // rax
	unsigned __int64* v43; // rdx
	unsigned __int64 v44; // r8
	_DWORD* v45; // rcx
	bool v46; // zf
	__int64* v47; // rax
	_QWORD* v48; // rax
	__int64 v49; // rdx
	int v50; // r10d
	_QWORD* v51; // rax
	__int64 v52; // rdx
	int v53; // r10d
	int v54; // r9d
	unsigned __int16* v55; // r8
	__int64 v56; // r11
	_QWORD* v57; // rax
	__int64 v58; // rdx
	int v59; // r10d
	_QWORD* v60; // rax
	__int64 v61; // r10
	__int64 v62; // rcx
	_DWORD* v63; // rax
	__int64 v64; // rcx
	_DWORD* v65; // rax
	__int64 v66; // rdx
	__int64 v67; // rcx
	_QWORD* v68; // rbx
	unsigned int* v69; // r14
	unsigned int v70; // edx
	__int64 v71; // r8
	__int64 v72; // rcx
	__int64 v73; // rax
	__int64* v74; // rax
	__int64 v75; // rcx
	__int64 v76; // rax
	__int64 v77; // r15
	unsigned int v78; // eax
	_DWORD* v79; // rax
	int v80; // eax
	__int64 v81; // rax
	__int64 v82; // rcx
	__int64 v83; // rdi
	__int64 v84; // rax
	int v85; // edi
	_QWORD* v86; // rax
	__int64 v87; // rdx
	_QWORD* v88; // rax
	__int64 v89; // r10
	__int64 v90; // rdx
	_QWORD* v91; // rax
	__int64 v92; // r10
	__int64 v93; // rdx
	int v94; // r11d
	__int64 v95; // rcx
	_QWORD* v96; // rax
	__int64 v97; // rdx
	unsigned __int16* v98; // r10
	__int64 v99; // r11
	__int64 v100; // rcx
	unsigned int v101; // edx
	__int64 v102; // rcx
	_DWORD* v103; // rax
	_QWORD* v104; // rax
	__int64 v105; // r11
	__int64 v106; // rdx
	int v107; // r10d
	_QWORD* v108; // rax
	int v109; // r9d
	__int64 v110; // r10
	__int64 v111; // rdx
	unsigned int v112; // r14d
	_QWORD* v113; // rax
	__int64 v114; // r10
	unsigned __int64* v115; // rdx
	unsigned __int64 v116; // r8
	_DWORD* v117; // rcx
	__int64* v118; // rax
	__int64 v119; // rdx
	__int64 v120; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__m128* v123; // rbx
	__int64 v124; // rcx
	__int64* v125; // rdi
	__int64 v126; // rcx
	unsigned __int64 v127; // rax
	__int64 v128; // rbx
	__int64 v129; // rax
	int v130; // ebx
	__int64 v131; // rcx
	_QWORD* v132; // rax
	__int64 v133; // rdx
	_QWORD* v134; // rax
	__int64 v135; // r10
	__int64 v136; // rdx
	__int64 v137; // rax
	_QWORD* v138; // rax
	__int64 v139; // r8
	__int64 v140; // rdx
	int v141; // r10d
	_QWORD* v142; // rax
	__int64 v143; // rdx
	int v144; // r10d
	__int64 v145; // rdx
	int v146; // eax
	__int64 v147; // rdx
	__int64 v148; // r14
	__int64 v149; // r15
	_QWORD* v150; // rbx
	int v151; // eax
	__int64 v152; // rcx
	int v153; // edi
	_QWORD* v154; // rax
	__int64 v155; // rdx
	_QWORD* v156; // rax
	__int64 v157; // r10
	__int64 v158; // rdx
	__int64 v159; // rdx
	int v160; // eax
	__int64 v161; // rcx
	int v162; // edi
	_QWORD* v163; // rax
	__int64 v164; // rdx
	_QWORD* v165; // rax
	__int64 v166; // r10
	__int64 v167; // rdx
	__int64 v168; // rdx
	__int64* v169; // rdi
	__int64 v170; // rax
	__m128i v171; // xmm0
	_QWORD* v172; // rbx
	int v173; // esi
	_QWORD* v174; // rax
	__int64 v175; // rdx
	_QWORD* v176; // rax
	__int64 v177; // r10
	__int64 v178; // rdx
	int v179; // eax
	__int64 v180; // rcx
	unsigned int* v181; // rax
	int v182; // r14d
	int v183; // eax
	__int64 v184; // rcx
	__int64 v185; // r9
	__int64 v186; // rcx
	__int64* v187; // rdi
	__int64 v188; // rax
	__m128i v189; // xmm0
	_QWORD* v190; // rax
	__int64 v191; // rdx
	_QWORD* v192; // rax
	__int64 v193; // r10
	__int64 v194; // rdx
	_QWORD* v195; // rax
	__int64 v196; // r10
	__int64 v197; // rdx
	int v198; // eax
	__int64 v199; // rcx
	unsigned int* v200; // rax
	__int64 v201; // rdx
	__int64* v202; // rax
	__int64 v203; // r11
	__int64 v204; // r9
	int v205; // r8d
	__int64 v206; // rdx
	int* v207; // rbx
	__int64 v208; // rcx
	__int64(__fastcall * *v210)(); // [rsp+28h] [rbp-79h] BYREF
	_QWORD* v211; // [rsp+30h] [rbp-71h]
	_QWORD* v212; // [rsp+38h] [rbp-69h]
	int v213; // [rsp+40h] [rbp-61h]
	__int64 v214[2]; // [rsp+48h] [rbp-59h] BYREF
	__int64 v215; // [rsp+58h] [rbp-49h] BYREF
	__int64 v216; // [rsp+60h] [rbp-41h]
	__m128* v217; // [rsp+68h] [rbp-39h]
	int v218; // [rsp+70h] [rbp-31h]
	unsigned int v219; // [rsp+74h] [rbp-2Dh]
	int** v220; // [rsp+78h] [rbp-29h]
	__int64(__fastcall * *v221)(); // [rsp+80h] [rbp-21h] BYREF
	int v222; // [rsp+88h] [rbp-19h]
	_QWORD* v223; // [rsp+90h] [rbp-11h]
	int v224; // [rsp+98h] [rbp-9h]
	int* v225; // [rsp+A0h] [rbp-1h]
	__int64 v226; // [rsp+A8h] [rbp+7h] BYREF
	__int64 v227; // [rsp+B0h] [rbp+Fh]
	unsigned int v228; // [rsp+110h] [rbp+6Fh] BYREF
	__int64* v229; // [rsp+118h] [rbp+77h] BYREF
	__int64 v230; // [rsp+120h] [rbp+7Fh] BYREF

	v2 = sub_14018B280(24i64, 0);
	v3 = 1;
	*(_QWORD*)v2 = v2;
	*((_QWORD*)v2 + 1) = v2;
	v4 = v2;
	v225 = v2;
	v5 = (int*)sub_1406622C0((__int64)a1, 1);
	if (v5)
	{
		v6 = sub_1403D90D0(qword_140C65898, *v5);
		v7 = v6;
		v217 = (__m128*)v6;
		if (v6)
		{
			if (*(_QWORD*)(v6 + 24))
			{
				v8 = a1[4];
				v214[1] = v6;
				v214[0] = (__int64)off_140B66440;
				v9 = 1;
				v221 = off_140B569F0;
				v10 = *(_QWORD*)(v8 + 112);
				v228 = 1;
				v223 = a1;
				v224 = 1;
				if (*(_QWORD*)(v8 + 120) >= v10)
					sub_14005E2C0((__int64)a1);
				v11 = a1[2];
				v12 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v11 + 8) = 5;
				*(_QWORD*)v11 = v12;
				a1[2] += 16i64;
				v222 = sub_1400578C0((__int64)a1);
				v13 = *(_QWORD*)qword_140C65B80;
				v215 = v13;
				if (v13)
				{
					v14 = 0;
					v218 = *(_DWORD*)(v13 + 16);
					LODWORD(v229) = 0;
					if (v218 > 0)
					{
						do
						{
							v15 = sub_1405FC730(v13, v14);
							if (v15)
							{
								v16 = *(_QWORD*)(qword_140C65898 + 27728);
								if (!v16
									|| ((*(_DWORD*)(v16 + 8) >> 1) & 1) == 0
									|| (*(_DWORD*)(*(_QWORD*)(v15 + 8) + 12i64) & 0x40000) != 0)
								{
									if ((unsigned int)sub_140552F50(v15))
									{
										v17 = 0;
										v219 = *(_DWORD*)(v15 + 16);
										if (v219)
										{
											v18 = (int**)(v15 + 24);
											v220 = (int**)(v15 + 24);
											do
											{
												if (!(unsigned int)sub_1405510D0(v15, v17))
												{
													if ((unsigned int)sub_140553790(v15, v17))
													{
														if ((unsigned int)sub_140550F70(v15, v17, 1))
														{
															LODWORD(v230) = 0;
															if ((unsigned int)sub_140550C50(v15, v7, v17, &v230))
															{
																v19 = a1[4];
																v212 = a1;
																v210 = off_140B569F0;
																v20 = *(_QWORD*)(v19 + 112);
																v213 = 1;
																if (*(_QWORD*)(v19 + 120) >= v20)
																	sub_14005E2C0((__int64)a1);
																v21 = a1[2];
																v22 = sub_14005C1B0((__int64)a1, 0, 0);
																*(_DWORD*)(v21 + 8) = 5;
																*(_QWORD*)v21 = v22;
																a1[2] += 16i64;
																v23 = sub_1400578C0((__int64)a1);
																v24 = *(_QWORD*)(a1[4] + 160i64);
																LODWORD(v211) = v23;
																v25 = sub_14005C3C0(v24, v23);
																v26 = a1[2];
																*(_QWORD*)v26 = *v25;
																*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
																a1[2] += 16i64;
																sub_1400F0870((__int64)a1, v26, L"strType", L"Quest");
																a1[2] -= 16i64;
																v27 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v23);
																*(_QWORD*)v28 = *v27;
																*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
																a1[2] += 16i64;
																sub_1400F06F0((__int64)a1, v29, L"eType", v30);
																a1[2] -= 16i64;
																v31 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v23);
																*(_QWORD*)v32 = *v31;
																*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
																a1[2] += 16i64;
																sub_1400F06F0((__int64)a1, v33, L"idQuest", v34);
																a1[2] -= 16i64;
																sub_14034BDD0(v35, *(_DWORD*)(*(_QWORD*)(v15 + 8) + 4i64));
																v36 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v23);
																v37 = a1[2];
																*(_QWORD*)v37 = *v36;
																*(_DWORD*)(v37 + 8) = *((_DWORD*)v36 + 2);
																a1[2] += 16i64;
																sub_1400F0870((__int64)a1, v37, L"strTitle", v38);
																a1[2] -= 16i64;
																v39 = a1[2];
																v40 = sub_140553750(v15, v17);
																v41 = *(_QWORD*)(a1[4] + 160i64);
																LODWORD(v230) = v40;
																v42 = sub_14005C3C0(v41, v23);
																*(_QWORD*)v39 = *v42;
																*(_DWORD*)(v39 + 8) = *((_DWORD*)v42 + 2);
																a1[2] += 16i64;
																v43 = (unsigned __int64*)sub_14018F0E0(&v226, L"bShowCount")[1];
																if (v43)
																{
																	v44 = -1i64;
																	do
																		++v44;
																	while (*((_BYTE*)v43 + v44));
																	sub_140058710((__int64)a1, v43, v44);
																}
																else
																{
																	*(_DWORD*)(a1[2] + 8i64) = 0;
																	a1[2] += 16i64;
																}
																if (v227)
																	sub_14018B900(v227, 0);
																v45 = (_DWORD*)a1[2];
																v46 = (_DWORD)v230 == 0;
																v45[2] = 1;
																*v45 = !v46;
																a1[2] += 16i64;
																v47 = (__int64*)sub_1400580E0((__int64)a1, -3);
																sub_14005EA50((__int64)a1, v47, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
																a1[2] -= 48i64;
																if (sub_140553750(v15, v17))
																{
																	sub_1405515C0(v15, v17);
																	v48 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v23);
																	v49 = a1[2];
																	*(_QWORD*)v49 = *v48;
																	*(_DWORD*)(v49 + 8) = *((_DWORD*)v48 + 2);
																	a1[2] += 16i64;
																	sub_1400F06F0((__int64)a1, v49, L"nCompleted", v50);
																	a1[2] -= 16i64;
																	sub_140551840(v15, v17);
																	v51 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v23);
																	v54 = v53;
																	v55 = L"nNeeded";
																	*(_QWORD*)v56 = *v51;
																	*(_DWORD*)(v56 + 8) = *((_DWORD*)v51 + 2);
																}
																else
																{
																	sub_140551630(v15, v17);
																	v57 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v23);
																	v58 = a1[2];
																	*(_QWORD*)v58 = *v57;
																	*(_DWORD*)(v58 + 8) = *((_DWORD*)v57 + 2);
																	a1[2] += 16i64;
																	sub_1400F06F0((__int64)a1, v58, L"nCompleted", v59);
																	a1[2] -= 16i64;
																	v60 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v23);
																	v54 = 100;
																	v55 = L"nNeeded";
																	*(_QWORD*)v61 = *v60;
																	*(_DWORD*)(v61 + 8) = *((_DWORD*)v60 + 2);
																}
																a1[2] += 16i64;
																sub_1400F06F0((__int64)a1, v52, v55, v54);
																a1[2] -= 16i64;
																v63 = (_DWORD*)sub_1403BA420(v62, 1, **(_DWORD**)(v15 + 8));
																if (v63)
																{
																	LODWORD(v230) = *v63;
																	if ((unsigned int)sub_1403D3470(a1, (int*)&v230))
																	{
																		sub_1400FB540((__int64)&v210);
																		a1[2] -= 16i64;
																	}
																}
																v18 = v220;
																if (v17 <= *(_DWORD*)(v15 + 16))
																{
																	if (*v220)
																	{
																		v65 = (_DWORD*)sub_1403BA420(v64, 2, **v220);
																		if (v65)
																		{
																			LODWORD(v230) = *v65;
																			if ((unsigned int)sub_1403D3470(a1, (int*)&v230))
																			{
																				sub_1400FB540((__int64)&v210);
																				a1[2] -= 16i64;
																			}
																		}
																	}
																}
																sub_1400FB1D0((__int64)&v221);
																sub_1400579E0((__int64)a1, v66, v23);
																v7 = (__int64)v217;
															}
														}
													}
												}
												++v18;
												++v17;
												v220 = v18;
											} while (v17 < v219);
										}
									}
								}
							}
							v13 = v215;
							v14 = (_DWORD)v229 + 1;
							LODWORD(v229) = v14;
						} while (v14 < v218);
						v9 = 1;
					}
				}
				v67 = *(_QWORD*)(qword_140C65898 + 27728);
				if (!v67 || ((*(_DWORD*)(v67 + 8) >> 1) & 1) == 0)
				{
					sub_14048B2A0((__int64)&v210, qword_140C65948 + 40);
					if (v212)
					{
						v68 = (_QWORD*)v211[2];
						if (v68 != v211)
						{
							while (1)
							{
								v69 = (unsigned int*)v68[5];
								if (!v69)
									goto LABEL_84;
								v70 = *v69;
								v71 = *(_QWORD*)(qword_140C65948 + 16);
								v72 = v71;
								v73 = *(_QWORD*)(v71 + 8);
								while (v73)
								{
									if (*(_DWORD*)(v73 + 32) < v70)
									{
										v73 = *(_QWORD*)(v73 + 24);
									}
									else
									{
										v72 = v73;
										v73 = *(_QWORD*)(v73 + 16);
									}
								}
								if (v72 == v71 || v70 < *(_DWORD*)(v72 + 32))
								{
									v215 = *(_QWORD*)(qword_140C65948 + 16);
									v74 = &v215;
								}
								else
								{
									v230 = v72;
									v74 = &v230;
								}
								v75 = qword_140C65948;
								v76 = *v74;
								if (v76 == *(_QWORD*)(qword_140C65948 + 16))
									goto LABEL_84;
								v77 = *(_QWORD*)(v76 + 40);
								if (!v77)
									goto LABEL_84;
								v78 = v69[1];
								if (!v78)
									break;
								if (v78 == 7)
								{
									if (!*(_DWORD*)(v77 + 8)
										|| (v103 = (_DWORD*)(*(__int64(__fastcall**)(__int64*))(v214[0] + 8))(v214),
											!(unsigned int)sub_1403B4A20((__int64)v214, v103)))
									{
										v80 = sub_14048D610(v75, *v69, v217[863].m128_u32[2]);
										goto LABEL_63;
									}
								}
								else if (*(_DWORD*)(v77 + 84))
								{
									goto LABEL_62;
								}
							LABEL_84:
								v120 = v68[3];
								if (v120)
								{
									v68 = (_QWORD*)v68[3];
									for (i = *(_QWORD**)(v120 + 16); i; i = (_QWORD*)i[2])
										v68 = i;
								}
								else
								{
									for (j = v68[1]; v68 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
										v68 = (_QWORD*)j;
									if (v68[3] != j)
										v68 = (_QWORD*)j;
								}
								v9 = v228;
								if (v68 == v211)
									goto LABEL_93;
							}
							if (*(_DWORD*)(v77 + 8))
							{
							LABEL_62:
								v79 = (_DWORD*)(*(__int64(__fastcall**)(__int64*))(v214[0] + 8))(v214);
								v80 = sub_1403B4A20((__int64)v214, v79);
							}
							else
							{
								v80 = 0;
							}
						LABEL_63:
							if (!v80)
							{
								v81 = a1[2];
								*(_DWORD*)(v81 + 8) = 3;
								v228 = v9 + 1;
								*(double*)v81 = (double)v9;
								v82 = a1[4];
								a1[2] += 16i64;
								if (*(_QWORD*)(v82 + 120) >= *(_QWORD*)(v82 + 112))
									sub_14005E2C0((__int64)a1);
								v83 = a1[2];
								v84 = sub_14005C1B0((__int64)a1, 0, 0);
								*(_DWORD*)(v83 + 8) = 5;
								*(_QWORD*)v83 = v84;
								a1[2] += 16i64;
								v85 = sub_1400578C0((__int64)a1);
								v86 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v85);
								v87 = a1[2];
								*(_QWORD*)v87 = *v86;
								*(_DWORD*)(v87 + 8) = *((_DWORD*)v86 + 2);
								a1[2] += 16i64;
								sub_1400F0870((__int64)a1, v87, L"strType", L"Challenge");
								a1[2] -= 16i64;
								v88 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v85);
								*(_QWORD*)v89 = *v88;
								*(_DWORD*)(v89 + 8) = *((_DWORD*)v88 + 2);
								a1[2] += 16i64;
								sub_1400F06F0((__int64)a1, v90, L"eType", 1);
								a1[2] -= 16i64;
								v91 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v85);
								*(_QWORD*)v92 = *v91;
								*(_DWORD*)(v92 + 8) = *((_DWORD*)v91 + 2);
								a1[2] += 16i64;
								sub_1400F06F0((__int64)a1, v93, L"idChallenge", v94);
								a1[2] -= 16i64;
								sub_14034BDD0(v95, *(_DWORD*)(v77 + 68));
								v96 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v85);
								v97 = a1[2];
								*(_QWORD*)v97 = *v96;
								*(_DWORD*)(v97 + 8) = *((_DWORD*)v96 + 2);
								a1[2] += 16i64;
								sub_1400F0870((__int64)a1, v97, L"strTitle", v98);
								v99 = a1[2];
								LODWORD(v229) = 0;
								a1[2] = v99 - 16;
								if (sub_14048F880(v100, *(_DWORD*)v77))
								{
									if ((*(_BYTE*)(v77 + 12) & 8) == 0)
									{
										sub_14048F9F0(v102, v101);
										LODWORD(v229) = 100;
									}
								}
								else
								{
									LODWORD(v229) = v69[6];
								}
								v104 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v85);
								*(_QWORD*)v105 = *v104;
								*(_DWORD*)(v105 + 8) = *((_DWORD*)v104 + 2);
								a1[2] += 16i64;
								sub_1400F06F0((__int64)a1, v106, L"nCompleted", v107);
								a1[2] -= 16i64;
								v108 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v85);
								v109 = (int)v229;
								*(_QWORD*)v110 = *v108;
								*(_DWORD*)(v110 + 8) = *((_DWORD*)v108 + 2);
								a1[2] += 16i64;
								sub_1400F06F0((__int64)a1, v111, L"nNeeded", v109);
								a1[2] -= 16i64;
								v112 = v69[12];
								v113 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v85);
								*(_QWORD*)v114 = *v113;
								*(_DWORD*)(v114 + 8) = *((_DWORD*)v113 + 2);
								a1[2] += 16i64;
								v115 = (unsigned __int64*)sub_14018F0E0(&v226, L"bActivated")[1];
								if (v115)
								{
									v116 = -1i64;
									do
										++v116;
									while (*((_BYTE*)v115 + v116));
									sub_140058710((__int64)a1, v115, v116);
								}
								else
								{
									*(_DWORD*)(a1[2] + 8i64) = 0;
									a1[2] += 16i64;
								}
								if (v227)
									sub_14018B900(v227, 0);
								v117 = (_DWORD*)a1[2];
								v117[2] = 1;
								*v117 = v112 != 0;
								a1[2] += 16i64;
								v118 = (__int64*)sub_1400580E0((__int64)a1, -3);
								sub_14005EA50((__int64)a1, v118, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
								a1[2] -= 48i64;
								sub_1400FB1D0((__int64)&v221);
								sub_1400579E0((__int64)a1, v119, v85);
							}
							goto LABEL_84;
						}
					}
				LABEL_93:
					sub_140008410((__int64)&v210);
					sub_14018B900((__int64)v211, 0);
				}
				v123 = v217;
				v229 = 0i64;
				if ((unsigned int)sub_1405F5860(v67, (__int64)v217, 0, &v229))
				{
					v125 = v229;
					if (v229)
					{
						v126 = a1[4];
						v212 = a1;
						v210 = off_140B569F0;
						v127 = *(_QWORD*)(v126 + 112);
						v213 = 1;
						if (*(_QWORD*)(v126 + 120) >= v127)
							sub_14005E2C0((__int64)a1);
						v128 = a1[2];
						v129 = sub_14005C1B0((__int64)a1, 0, 0);
						*(_DWORD*)(v128 + 8) = 5;
						*(_QWORD*)v128 = v129;
						a1[2] += 16i64;
						v130 = sub_1400578C0((__int64)a1);
						v131 = *(_QWORD*)(a1[4] + 160i64);
						LODWORD(v211) = v130;
						v132 = sub_14005C3C0(v131, v130);
						v133 = a1[2];
						*(_QWORD*)v133 = *v132;
						*(_DWORD*)(v133 + 8) = *((_DWORD*)v132 + 2);
						a1[2] += 16i64;
						sub_1400F0870((__int64)a1, v133, L"strType", L"PublicEvent");
						a1[2] -= 16i64;
						v134 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v130);
						*(_QWORD*)v135 = *v134;
						*(_DWORD*)(v135 + 8) = *((_DWORD*)v134 + 2);
						a1[2] += 16i64;
						sub_1400F06F0((__int64)a1, v136, L"eType", 6);
						a1[2] -= 16i64;
						v137 = (*(__int64(__fastcall**)(__int64*))(*v125 + 320))(v125);
						if ((unsigned int)sub_140432D60(a1, v137))
						{
							sub_1400FB540((__int64)&v210);
							a1[2] -= 16i64;
						}
						(*(void(__fastcall**)(__int64*))(*v125 + 152))(v125);
						v138 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v130);
						v139 = a1[2];
						*(_QWORD*)v139 = *v138;
						v140 = *((unsigned int*)v138 + 2);
						*(_DWORD*)(v139 + 8) = v140;
						a1[2] += 16i64;
						sub_1400F06F0((__int64)a1, v140, L"nCompleted", v141);
						a1[2] -= 16i64;
						(*(void(__fastcall**)(__int64*))(*v125 + 208))(v125);
						v142 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v130);
						v143 = a1[2];
						*(_QWORD*)v143 = *v142;
						*(_DWORD*)(v143 + 8) = *((_DWORD*)v142 + 2);
						a1[2] += 16i64;
						sub_1400F06F0((__int64)a1, v143, L"nNeeded", v144);
						a1[2] -= 16i64;
						sub_1400FB1D0((__int64)&v221);
						sub_1400579E0((__int64)a1, v145, v130);
						v123 = v217;
					}
				}
				if (!qword_140C65970)
					goto LABEL_140;
				v146 = *(_DWORD*)(qword_140C65970 + 8);
				if (v146 == 2)
				{
					v216 = 0i64;
					v215 = 0i64;
					sub_140570C90(v124, (__int64)v123, 0, &v215);
					v148 = v216;
					v149 = v215;
					if (v216)
					{
						v150 = (_QWORD*)(v215 + 8);
						do
						{
							if (*v150 && (*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)*v150 + 40i64))(*v150))
							{
								v210 = off_140B569F0;
								v212 = a1;
								v213 = 1;
								sub_140058900((__int64)a1, v147, 0);
								v151 = sub_1400578C0((__int64)a1);
								v152 = *(_QWORD*)(a1[4] + 160i64);
								v153 = v151;
								LODWORD(v211) = v151;
								v154 = sub_14005C3C0(v152, v151);
								v155 = a1[2];
								*(_QWORD*)v155 = *v154;
								*(_DWORD*)(v155 + 8) = *((_DWORD*)v154 + 2);
								a1[2] += 16i64;
								sub_1400F0870((__int64)a1, v155, L"strType", L"Scientist");
								a1[2] -= 16i64;
								v156 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v153);
								*(_QWORD*)v157 = *v156;
								*(_DWORD*)(v157 + 8) = *((_DWORD*)v156 + 2);
								a1[2] += 16i64;
								sub_1400F06F0((__int64)a1, v158, L"eType", 3);
								a1[2] -= 16i64;
								if ((unsigned int)sub_140432AC0(a1, *(_QWORD*)(*v150 + 48i64)))
								{
									sub_1400FB540((__int64)&v210);
									a1[2] -= 16i64;
								}
								sub_1400FB1D0((__int64)&v221);
								sub_1400579E0((__int64)a1, v159, v153);
							}
							if (*((_DWORD*)v150 - 1))
							{
								v210 = off_140B569F0;
								v212 = a1;
								v213 = 1;
								sub_140058900((__int64)a1, v147, 0);
								v160 = sub_1400578C0((__int64)a1);
								v161 = *(_QWORD*)(a1[4] + 160i64);
								v162 = v160;
								LODWORD(v211) = v160;
								v163 = sub_14005C3C0(v161, v160);
								v164 = a1[2];
								*(_QWORD*)v164 = *v163;
								*(_DWORD*)(v164 + 8) = *((_DWORD*)v163 + 2);
								a1[2] += 16i64;
								sub_1400F0870((__int64)a1, v164, L"strType", L"Scientist");
								a1[2] -= 16i64;
								v165 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v162);
								*(_QWORD*)v166 = *v165;
								*(_DWORD*)(v166 + 8) = *((_DWORD*)v165 + 2);
								a1[2] += 16i64;
								sub_1400F06F0((__int64)a1, v167, L"eType", 3);
								a1[2] -= 16i64;
								v228 = *((_DWORD*)v150 - 1);
								if ((unsigned int)sub_1403D3470(a1, (int*)&v228))
								{
									sub_1400FB540((__int64)&v210);
									a1[2] -= 16i64;
								}
								sub_1400FB1D0((__int64)&v221);
								sub_1400579E0((__int64)a1, v168, v162);
							}
							v150 += 2;
							--v148;
						} while (v148);
						v149 = v215;
					}
					if (v149)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v149 - 16) + 8i64))(v149 - 16);
					goto LABEL_140;
				}
				if (v146 == 3)
				{
					v229 = 0i64;
					if ((unsigned int)sub_140571850(v124, (__int64)v123, (__int64*)&v229) == 101
						&& (!qword_140C65970 || !(unsigned int)sub_140571AC0(qword_140C65970, v123, (__int64*)&v229)))
					{
						goto LABEL_140;
					}
					v169 = v229;
					if (!v229)
						goto LABEL_140;
					v170 = a1[2];
					v171 = _mm_cvtsi32_si128(v228);
					*(_DWORD*)(v170 + 8) = 3;
					*(_QWORD*)v170 = *(_OWORD*)&_mm_cvtepi32_pd(v171);
					a1[2] += 16i64;
					sub_1400FA0F0((__int64)&v210, (__int64)a1, 1);
					v172 = v212;
					v173 = (int)v211;
					v174 = sub_14005C3C0(*(_QWORD*)(v212[4] + 160i64), (int)v211);
					v175 = v172[2];
					*(_QWORD*)v175 = *v174;
					*(_DWORD*)(v175 + 8) = *((_DWORD*)v174 + 2);
					v172[2] += 16i64;
					sub_1400F0870((__int64)v172, v175, L"strType", L"Explorer");
					v172[2] -= 16i64;
					v176 = sub_14005C3C0(*(_QWORD*)(v172[4] + 160i64), v173);
					*(_QWORD*)v177 = *v176;
					*(_DWORD*)(v177 + 8) = *((_DWORD*)v176 + 2);
					v172[2] += 16i64;
					sub_1400F06F0((__int64)v172, v178, L"eType", 2);
					v172[2] -= 16i64;
					if ((unsigned int)sub_140432AC0(v172, v169[6]))
					{
						sub_1400FB540((__int64)&v210);
						v172[2] -= 16i64;
					}
					v179 = (*(__int64(__fastcall**)(__int64*))(*v169 + 8))(v169);
					v181 = (unsigned int*)sub_1403BA420(v180, 0, v179);
					if (!v181 || (v228 = *v181, !(unsigned int)sub_1403D3470(v172, (int*)&v228)))
					{
					LABEL_139:
						sub_1400FB1D0((__int64)&v221);
						sub_1400579E0((__int64)v172, v201, v173);
					LABEL_140:
						v202 = sub_14005C3C0(*(_QWORD*)(v223[4] + 160i64), v222);
						v204 = *(_QWORD*)(v203 + 16);
						v205 = v222;
						v206 = *v202;
						*(_QWORD*)v204 = *v202;
						*(_DWORD*)(v204 + 8) = *((_DWORD*)v202 + 2);
						*(_QWORD*)(v203 + 16) += 16i64;
						sub_1400579E0(v203, v206, v205);
						v4 = v225;
						v214[0] = (__int64)off_140B66400;
						goto LABEL_142;
					}
				}
				else
				{
					if (v146)
						goto LABEL_140;
					v229 = 0i64;
					v182 = 1;
					v183 = sub_140570810(v124, (__int64)v123, (__int64*)&v229);
					if (v183 != 1 && v183 != 4)
					{
						v182 = 0;
						if (!(unsigned int)sub_140570990(v184, (__int64)v123, &v229, v185)
							&& !(unsigned int)sub_140570AB0(v186, (__int64)v123, (__int64*)&v229))
						{
							goto LABEL_140;
						}
					}
					v187 = v229;
					if (!v229)
						goto LABEL_140;
					v188 = a1[2];
					v189 = _mm_cvtsi32_si128(v228);
					*(_DWORD*)(v188 + 8) = 3;
					*(_QWORD*)v188 = *(_OWORD*)&_mm_cvtepi32_pd(v189);
					a1[2] += 16i64;
					sub_1400FA0F0((__int64)&v210, (__int64)a1, 1);
					v172 = v212;
					v173 = (int)v211;
					v190 = sub_14005C3C0(*(_QWORD*)(v212[4] + 160i64), (int)v211);
					v191 = v172[2];
					*(_QWORD*)v191 = *v190;
					*(_DWORD*)(v191 + 8) = *((_DWORD*)v190 + 2);
					v172[2] += 16i64;
					sub_1400F0870((__int64)v172, v191, L"strType", L"Soldier");
					v172[2] -= 16i64;
					v192 = sub_14005C3C0(*(_QWORD*)(v172[4] + 160i64), v173);
					*(_QWORD*)v193 = *v192;
					*(_DWORD*)(v193 + 8) = *((_DWORD*)v192 + 2);
					v172[2] += 16i64;
					sub_1400F06F0((__int64)v172, v194, L"eType", 4);
					v172[2] -= 16i64;
					v195 = sub_14005C3C0(*(_QWORD*)(v172[4] + 160i64), v173);
					*(_QWORD*)v196 = *v195;
					*(_DWORD*)(v196 + 8) = *((_DWORD*)v195 + 2);
					v172[2] += 16i64;
					sub_1400F0630((__int64)v172, v197, L"bIsActivated", v182);
					v172[2] -= 16i64;
					if ((unsigned int)sub_140432AC0(v172, v187[6]))
					{
						sub_1400FB540((__int64)&v210);
						v172[2] -= 16i64;
					}
					v198 = (*(__int64(__fastcall**)(__int64*))(*v187 + 8))(v187);
					v200 = (unsigned int*)sub_1403BA420(v199, 0, v198);
					if (!v200)
						goto LABEL_139;
					v228 = *v200;
					if (!(unsigned int)sub_1403D3470(v172, (int*)&v228))
						goto LABEL_139;
				}
				sub_1400FB540((__int64)&v210);
				v172[2] -= 16i64;
				goto LABEL_139;
			}
		}
	}
	v3 = 0;
LABEL_142:
	v207 = *(int**)v4;
	while (v207 != v4)
	{
		v208 = (__int64)v207;
		v207 = *(int**)v207;
		sub_14018B900(v208, 0);
	}
	*(_QWORD*)v4 = v4;
	*((_QWORD*)v4 + 1) = v4;
	sub_14018B900((__int64)v4, 0);
	return v3;
}
// 1406553BA: variable 'v28' is possibly undefined
// 1406553CC: variable 'v29' is possibly undefined
// 1406553CC: variable 'v30' is possibly undefined
// 140655401: variable 'v32' is possibly undefined
// 140655413: variable 'v33' is possibly undefined
// 140655413: variable 'v34' is possibly undefined
// 140655424: variable 'v35' is possibly undefined
// 140655461: variable 'v38' is possibly undefined
// 140655586: variable 'v50' is possibly undefined
// 1406555B4: variable 'v53' is possibly undefined
// 1406555C1: variable 'v56' is possibly undefined
// 14065560A: variable 'v59' is possibly undefined
// 14065563B: variable 'v61' is possibly undefined
// 14065564D: variable 'v52' is possibly undefined
// 140655661: variable 'v62' is possibly undefined
// 1406556AF: variable 'v64' is possibly undefined
// 1406556F5: variable 'v66' is possibly undefined
// 140655909: variable 'v89' is possibly undefined
// 14065591B: variable 'v90' is possibly undefined
// 14065594B: variable 'v92' is possibly undefined
// 14065595D: variable 'v93' is possibly undefined
// 14065595D: variable 'v94' is possibly undefined
// 14065596B: variable 'v95' is possibly undefined
// 1406559A7: variable 'v98' is possibly undefined
// 1406559BF: variable 'v100' is possibly undefined
// 140655A0A: variable 'v75' is possibly undefined
// 140655A28: variable 'v102' is possibly undefined
// 140655A28: variable 'v101' is possibly undefined
// 140655A63: variable 'v105' is possibly undefined
// 140655A75: variable 'v106' is possibly undefined
// 140655A75: variable 'v107' is possibly undefined
// 140655AA3: variable 'v110' is possibly undefined
// 140655AB5: variable 'v111' is possibly undefined
// 140655AE3: variable 'v114' is possibly undefined
// 140655B8A: variable 'v119' is possibly undefined
// 140655C08: variable 'v67' is possibly undefined
// 140655CE0: variable 'v135' is possibly undefined
// 140655CF2: variable 'v136' is possibly undefined
// 140655D70: variable 'v141' is possibly undefined
// 140655DBD: variable 'v144' is possibly undefined
// 140655DD8: variable 'v145' is possibly undefined
// 140655E0F: variable 'v124' is possibly undefined
// 140655E5C: variable 'v147' is possibly undefined
// 140655ED6: variable 'v157' is possibly undefined
// 140655EE8: variable 'v158' is possibly undefined
// 140655F2B: variable 'v159' is possibly undefined
// 140655FC6: variable 'v166' is possibly undefined
// 140655FD8: variable 'v167' is possibly undefined
// 14065601E: variable 'v168' is possibly undefined
// 140656138: variable 'v177' is possibly undefined
// 14065614A: variable 'v178' is possibly undefined
// 140656187: variable 'v180' is possibly undefined
// 1406561E9: variable 'v184' is possibly undefined
// 1406561E9: variable 'v185' is possibly undefined
// 1406561F9: variable 'v186' is possibly undefined
// 1406562AF: variable 'v193' is possibly undefined
// 1406562C1: variable 'v194' is possibly undefined
// 1406562EE: variable 'v196' is possibly undefined
// 140656300: variable 'v197' is possibly undefined
// 14065633D: variable 'v199' is possibly undefined
// 140656382: variable 'v201' is possibly undefined
// 14065639E: variable 'v203' is possibly undefined
// 140B2C798: using guessed type wchar_t aChallenge_0[10];
// 140B2C7B0: using guessed type wchar_t aNneeded_1[8];
// 140B2C7D8: using guessed type wchar_t aNneeded_0[8];
// 140B2C7E8: using guessed type wchar_t aNcompleted_0[11];
// 140B2C800: using guessed type wchar_t aBshowcount[11];
// 140B2C818: using guessed type wchar_t aNcompleted[11];
// 140B2C830: using guessed type wchar_t aIdquest[8];
// 140B2C840: using guessed type wchar_t aStrtitle_2[9];
// 140B2C858: using guessed type wchar_t aStrtype[8];
// 140B2C868: using guessed type wchar_t aEtype_5[6];
// 140B2C878: using guessed type wchar_t aQuest_8[6];
// 140B2C888: using guessed type wchar_t aStrtype_2[8];
// 140B2C898: using guessed type wchar_t aEtype_8[6];
// 140B2C8A8: using guessed type wchar_t aNneeded_3[8];
// 140B2C8B8: using guessed type wchar_t aScientist_0[10];
// 140B2C8F0: using guessed type wchar_t aNcompleted_2[11];
// 140B2C908: using guessed type wchar_t aStrtype_1[8];
// 140B2C918: using guessed type wchar_t aEtype_7[6];
// 140B2C928: using guessed type wchar_t aBactivated[11];
// 140B2C940: using guessed type wchar_t aPublicevent_1[12];
// 140B2C958: using guessed type wchar_t aNcompleted_1[11];
// 140B2C970: using guessed type wchar_t aNneeded_2[8];
// 140B2C980: using guessed type wchar_t aIdchallenge[12];
// 140B2C998: using guessed type wchar_t aStrtitle_3[9];
// 140B2C9B0: using guessed type wchar_t aStrtype_0[8];
// 140B2C9C0: using guessed type wchar_t aEtype_6[6];
// 140B2CA00: using guessed type wchar_t aEtype_11[6];
// 140B2CA10: using guessed type wchar_t aBisactivated[13];
// 140B2CA30: using guessed type wchar_t aSoldier_0[8];
// 140B2CA40: using guessed type wchar_t aStrtype_5[8];
// 140B2CA80: using guessed type wchar_t aStrtype_4[8];
// 140B2CA90: using guessed type wchar_t aEtype_10[6];
// 140B2CAB8: using guessed type wchar_t aExplorer_0[9];
// 140B2CAD0: using guessed type wchar_t aStrtype_3[8];
// 140B2CAE0: using guessed type wchar_t aEtype_9[6];
// 140B2CB08: using guessed type wchar_t aScientist_1[10];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B66400: using guessed type __int64 (__fastcall *off_140B66400[2])();
// 140B66440: using guessed type __int64 (__fastcall *off_140B66440[9])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65948: using guessed type __int64 qword_140C65948;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140C65B80: using guessed type __int64 qword_140C65B80;

