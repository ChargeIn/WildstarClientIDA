#include "../winhttp.h"

//----- (0000000140562560) ----------------------------------------------------
__int64 __fastcall sub_140562560(_QWORD* a1, __int64 a2, unsigned int a3)
{
	unsigned int v7; // esi
	__int64 v8; // r9
	BOOL v9; // ebx
	__int64 v10; // rax
	__int64 v11; // r8
	__int64 v12; // rdx
	__int64 v13; // rcx
	__int64 v14; // rcx
	unsigned __int64 v15; // rcx
	unsigned __int64 v16; // rdi
	unsigned int v17; // ecx
	__int64 v18; // r13
	__int64 v19; // rsi
	unsigned __int64 v20; // r14
	_QWORD* v21; // rbx
	__int64* v22; // rbx
	unsigned int v23; // eax
	__int64 v24; // r14
	unsigned int v25; // esi
	__int64 v26; // rcx
	int v27; // r9d
	unsigned int v28; // ecx
	unsigned int v29; // edx
	unsigned __int8 v30; // r8
	unsigned int v31; // edi
	unsigned int v32; // eax
	int v33; // edi
	__int64 v34; // rdx
	__int64 v35; // rax
	__int64 v36; // rbx
	unsigned int v37; // ecx
	int v38; // ecx
	int v39; // ecx
	int* v40; // rcx
	__int64 v41; // rax
	__int64 v42; // rax
	unsigned int v43; // eax
	int v44; // eax
	int v45; // eax
	__int64 v46; // rax
	__int64 v47; // rax
	__int64 v48; // rdx
	__int64 v49; // rax
	__int64 v50; // rbx
	unsigned int v51; // ecx
	int v52; // ecx
	int v53; // ecx
	int* v54; // rcx
	__int64 v55; // rax
	__int64 v56; // rax
	unsigned int v57; // eax
	int v58; // eax
	int v59; // eax
	__int64 v60; // rax
	__int64 v61; // rax
	__int64 v62; // r8
	int v63; // edx
	__int64 v64; // rax
	__int64 v65; // rbx
	unsigned int v66; // ecx
	int v67; // ecx
	int v68; // ecx
	int* v69; // rcx
	__int64 v70; // rax
	__int64 v71; // rax
	unsigned int v72; // eax
	int v73; // eax
	int v74; // eax
	__int64 v75; // rax
	__int64 v76; // rax
	__int64 v77; // rdx
	__int64 v78; // rax
	__int64 v79; // rbx
	unsigned int v80; // ecx
	int v81; // ecx
	int v82; // ecx
	int* v83; // rcx
	__int64 v84; // rax
	__int64 v85; // rax
	unsigned int v86; // eax
	int v87; // eax
	int v88; // eax
	__int64 v89; // rax
	__int64 v90; // rax
	__int64 v91; // r8
	int v92; // edx
	__int64 v93; // rax
	__int64 v94; // rbx
	unsigned int v95; // ecx
	int v96; // ecx
	int v97; // ecx
	int* v98; // rcx
	__int64 v99; // rax
	__int64 v100; // rax
	unsigned int v101; // eax
	int v102; // eax
	int v103; // eax
	__int64 v104; // rax
	__int64 v105; // rax
	__int64 v106; // rdx
	__int64 v107; // rax
	__int64 v108; // rbx
	unsigned int v109; // ecx
	int v110; // ecx
	int v111; // ecx
	int* v112; // rcx
	__int64 v113; // rax
	__int64 v114; // rax
	unsigned int v115; // eax
	int v116; // eax
	int v117; // eax
	__int64 v118; // rax
	__int64 v119; // rax
	__int64 v120; // r9
	int v121; // ecx
	__int64 v122; // r8
	BOOL v123; // eax
	unsigned int v124; // eax
	int v125; // eax
	__int64 v126; // r9
	__int64 v127; // r8
	BOOL v128; // eax
	unsigned int v129; // eax
	int v130; // eax
	__int64 v131; // r9
	int v132; // ecx
	__int64 v133; // r8
	BOOL v134; // eax
	unsigned int v135; // eax
	int v136; // eax
	__int64 v137; // r9
	__int64 v138; // r8
	BOOL v139; // eax
	unsigned int v140; // eax
	int v141; // eax
	unsigned int v142; // ecx
	__int64 v143; // rcx
	BOOL v144; // [rsp+30h] [rbp-D0h]
	unsigned __int64 v145; // [rsp+38h] [rbp-C8h]
	__int64 v146; // [rsp+40h] [rbp-C0h]
	__int64 v147; // [rsp+40h] [rbp-C0h]
	__int64 v148; // [rsp+40h] [rbp-C0h]
	__int64 v149; // [rsp+40h] [rbp-C0h]
	__int64 v150; // [rsp+40h] [rbp-C0h]
	__int64 v151; // [rsp+40h] [rbp-C0h]
	__int64 v152; // [rsp+40h] [rbp-C0h]
	__int64 v153; // [rsp+40h] [rbp-C0h]
	__int64 v154; // [rsp+40h] [rbp-C0h]
	__int64 v155; // [rsp+40h] [rbp-C0h]
	__int64 v156; // [rsp+40h] [rbp-C0h]
	__int64 v157; // [rsp+40h] [rbp-C0h]
	__int64 v158; // [rsp+40h] [rbp-C0h]
	__int64 v159; // [rsp+40h] [rbp-C0h]
	__int64 v160; // [rsp+40h] [rbp-C0h]
	unsigned __int64 v161; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v162; // [rsp+58h] [rbp-A8h]
	__int64 v163; // [rsp+60h] [rbp-A0h]
	__int64 v164; // [rsp+68h] [rbp-98h]
	unsigned int v165; // [rsp+70h] [rbp-90h]
	unsigned __int64 v166; // [rsp+78h] [rbp-88h]
	int v167; // [rsp+80h] [rbp-80h]
	unsigned int v168; // [rsp+84h] [rbp-7Ch]
	__int64 v169; // [rsp+88h] [rbp-78h]
	__int64 v170; // [rsp+90h] [rbp-70h] BYREF
	_BOOL8 v171; // [rsp+98h] [rbp-68h]
	int* v172[2]; // [rsp+A0h] [rbp-60h] BYREF
	int* v173; // [rsp+B0h] [rbp-50h] BYREF
	int* v174; // [rsp+B8h] [rbp-48h] BYREF
	int* v175; // [rsp+C0h] [rbp-40h] BYREF
	int* v176; // [rsp+C8h] [rbp-38h] BYREF
	int* v177; // [rsp+D0h] [rbp-30h] BYREF
	int* v178; // [rsp+D8h] [rbp-28h] BYREF
	int* v179; // [rsp+E0h] [rbp-20h] BYREF
	int* v180; // [rsp+E8h] [rbp-18h] BYREF
	int* v181; // [rsp+F0h] [rbp-10h] BYREF
	int* v182; // [rsp+F8h] [rbp-8h] BYREF
	int* v183; // [rsp+100h] [rbp+0h] BYREF
	int* v184; // [rsp+108h] [rbp+8h] BYREF
	int* v185; // [rsp+110h] [rbp+10h] BYREF
	int* v186; // [rsp+118h] [rbp+18h] BYREF
	int* v187; // [rsp+120h] [rbp+20h] BYREF
	int* v188; // [rsp+128h] [rbp+28h] BYREF
	unsigned int v189; // [rsp+180h] [rbp+80h] BYREF

	v189 = a3;
	v170 = a2;
	if (!a3)
		return 0i64;
	v7 = 0;
	v168 = 0;
	v8 = sub_14023D840(a3);
	v169 = v8;
	if (!v8)
		return 79i64;
	v9 = *(_DWORD*)(*(_QWORD*)(a2 + 112) + 24i64) == 8;
	v144 = v9;
	if (v9)
	{
		v10 = a1[211];
		v11 = v10;
		v12 = v10;
		v13 = *(_QWORD*)(v10 + 8);
		while (v13)
		{
			if (*(_DWORD*)(v13 + 32) < a3)
			{
				v13 = *(_QWORD*)(v13 + 24);
			}
			else
			{
				v12 = v13;
				v13 = *(_QWORD*)(v13 + 16);
			}
		}
	}
	else
	{
		v10 = a1[207];
		v11 = v10;
		v12 = v10;
		v14 = *(_QWORD*)(v10 + 8);
		while (v14)
		{
			if (*(_DWORD*)(v14 + 32) < a3)
			{
				v14 = *(_QWORD*)(v14 + 24);
			}
			else
			{
				v12 = v14;
				v14 = *(_QWORD*)(v14 + 16);
			}
		}
	}
	if (v12 == v11 || (v166 = v12, a3 < *(_DWORD*)(v12 + 32)))
		v166 = v11;
	if (v166 != v10)
		return 0i64;
	v15 = 0i64;
	v145 = __PAIR64__(a3, v9);
	v166 = 0i64;
	v171 = v9;
	do
	{
		v16 = v8 + 4 * v15;
		v17 = *(_DWORD*)(v16 + 4);
		if (!v17)
			goto LABEL_387;
		v18 = sub_14023D400(v17);
		if (v18)
		{
			v19 = a1[239];
			v20 = (*(__int64(__fastcall**)(unsigned __int64))(v19 + 24))(v16 + 4);
			v21 = *(_QWORD**)(*(_QWORD*)(v19 + 16) + 8 * (v20 % *(_QWORD*)(v19 + 8)));
			if (v21)
			{
				while (v20 != *v21
					|| !(*(unsigned int(__fastcall**)(unsigned __int64, _QWORD*))(v19 + 32))(v16 + 4, v21 + 2))
				{
					v21 = (_QWORD*)v21[1];
					if (!v21)
						goto LABEL_29;
				}
				v22 = v21 + 3;
				if (v22)
				{
					v23 = *(_DWORD*)(v18 + 8);
					v24 = *v22;
					if (v23 >= 8)
					{
					LABEL_385:
						v7 = v168;
						goto LABEL_386;
					}
					v25 = 0;
					v165 = 0;
					if (v171)
					{
						v26 = *(_QWORD*)(v170 + 88);
						if (v26)
						{
							if (((v23 - 2) & 0xFFFFFFFD) == 0)
							{
								v27 = *(_DWORD*)(v18 + 104);
								v28 = *(_DWORD*)(v26 + 8) - 1;
								if (v27 == -1)
								{
								LABEL_54:
									v165 = v28;
									goto LABEL_55;
								}
								v29 = *(_DWORD*)(v18 + 104);
								if (v27)
								{
									v30 = 0;
									if (!(_WORD)v27)
									{
										v30 = 16;
										v29 >>= 16;
									}
									if (!(_BYTE)v29)
									{
										v30 += 8;
										v29 >>= 8;
									}
									if ((v29 & 0xF) == 0)
									{
										v30 += 4;
										v29 >>= 4;
									}
									if ((v29 & 3) == 0)
									{
										v30 += 2;
										v29 >>= 2;
									}
									if ((v29 & 1) == 0)
										++v30;
								}
								else
								{
									v30 = -1;
								}
								v31 = v28;
								if (v30 < v28)
									v31 = v30;
								v165 = v31;
								v25 = v31;
								if (v28 > v31)
								{
									while (!_bittest(&v27, v28))
									{
										if (--v28 <= v31)
											goto LABEL_55;
									}
									goto LABEL_54;
								}
							}
						}
					}
				LABEL_55:
					v32 = v165;
					v33 = __ROL4__(1, v25);
					v167 = v33;
					if (v25 <= v165)
					{
						while ((v33 & *(_DWORD*)(v18 + 104)) == 0)
						{
						LABEL_384:
							v33 = __ROL4__(v33, 1);
							++v25;
							v167 = v33;
							if (v25 > v32)
								goto LABEL_385;
						}
						if (*(_DWORD*)(v18 + 8) != 2)
						{
							if ((*(_BYTE*)(v18 + 4) & 1) != 0)
							{
								HIDWORD(v154) = *(_DWORD*)(v18 + 8);
								LODWORD(v154) = 0;
								v162 = v154;
								v161 = v145;
								LODWORD(v163) = v25;
								v164 = v24;
								sub_140566350((__int64)(a1 + 202), &v181, &v161);
							}
							if ((*(_BYTE*)(v18 + 4) & 2) != 0)
							{
								LODWORD(v155) = 1;
								HIDWORD(v155) = *(_DWORD*)(v18 + 8);
								v161 = v145;
								LODWORD(v163) = v25;
								v162 = v155;
								v164 = v24;
								sub_140566350((__int64)(a1 + 202), &v174, &v161);
							}
							if ((*(_BYTE*)(v18 + 4) & 4) != 0)
							{
								LODWORD(v156) = 2;
								HIDWORD(v156) = *(_DWORD*)(v18 + 8);
								v161 = v145;
								LODWORD(v163) = v25;
								v162 = v156;
								v164 = v24;
								sub_140566350((__int64)(a1 + 202), &v176, &v161);
							}
							if ((*(_BYTE*)(v18 + 4) & 8) != 0)
							{
								LODWORD(v157) = 3;
								HIDWORD(v157) = *(_DWORD*)(v18 + 8);
								v161 = v145;
								LODWORD(v163) = v25;
								v162 = v157;
								v164 = v24;
								sub_140566350((__int64)(a1 + 202), &v178, &v161);
							}
							if ((*(_BYTE*)(v18 + 4) & 0x20) != 0)
							{
								LODWORD(v158) = 5;
								HIDWORD(v158) = *(_DWORD*)(v18 + 8);
								v161 = v145;
								LODWORD(v163) = v25;
								v162 = v158;
								v164 = v24;
								sub_140566350((__int64)(a1 + 202), &v180, &v161);
							}
							if ((*(_BYTE*)(v18 + 4) & 0x40) != 0)
							{
								LODWORD(v159) = 6;
								HIDWORD(v159) = *(_DWORD*)(v18 + 8);
								v161 = v145;
								LODWORD(v163) = v25;
								v162 = v159;
								v164 = v24;
								sub_140566350((__int64)(a1 + 202), &v182, &v161);
							}
							if (*(char*)(v18 + 4) < 0)
							{
								LODWORD(v160) = 7;
								HIDWORD(v160) = *(_DWORD*)(v18 + 8);
								v161 = v145;
								LODWORD(v163) = v25;
								v162 = v160;
								v164 = v24;
								sub_140566350((__int64)(a1 + 202), v172, &v161);
							}
						LABEL_383:
							v32 = v165;
							goto LABEL_384;
						}
						if ((*(_BYTE*)(v18 + 4) & 1) == 0)
						{
						LABEL_135:
							if ((*(_BYTE*)(v18 + 4) & 2) == 0)
								goto LABEL_212;
							LODWORD(v147) = 1;
							if ((*(_BYTE*)(v18 + 12) & 1) != 0)
							{
							LABEL_174:
								if ((*(_BYTE*)(v18 + 12) & 2) != 0)
									goto LABEL_212;
								v77 = a1[203];
								HIDWORD(v147) = 4;
								v78 = *(_QWORD*)(v77 + 8);
								LODWORD(v163) = v25;
								v79 = v77;
								while (v78)
								{
									v79 = v78;
									if (v144)
									{
										if (!*(_DWORD*)(v78 + 32))
											goto LABEL_188;
									}
									else if (*(_DWORD*)(v78 + 32))
									{
										goto LABEL_187;
									}
									v80 = *(_DWORD*)(v78 + 36);
									if (a3 >= v80)
									{
										if (a3 > v80
											|| (v81 = *(_DWORD*)(v78 + 40), v81 <= 1)
											&& (v81 < 1 || (v82 = *(_DWORD*)(v78 + 44), v82 <= 4)
												&& (v82 < 4 || v25 >= *(_DWORD*)(v78 + 48))))
										{
										LABEL_188:
											v78 = *(_QWORD*)(v78 + 24);
											continue;
										}
									}
								LABEL_187:
									v78 = *(_QWORD*)(v78 + 16);
								}
								if (v79 == v77)
									goto LABEL_193;
								if (v144)
								{
									if (!*(_DWORD*)(v79 + 32))
										goto LABEL_205;
								}
								else if (*(_DWORD*)(v79 + 32))
								{
								LABEL_193:
									v83 = sub_14018B280(64i64, 0);
									if (v83 != (int*)-32i64)
									{
										*((_QWORD*)v83 + 4) = v145;
										v84 = v163;
										*((_QWORD*)v83 + 5) = v147;
										*((_QWORD*)v83 + 6) = v84;
										*((_QWORD*)v83 + 7) = v24;
									}
									*(_QWORD*)(v79 + 16) = v83;
									v85 = a1[203];
									if (v79 == v85)
									{
										*(_QWORD*)(v85 + 8) = v83;
										*(_QWORD*)(a1[203] + 24i64) = v83;
									}
									else if (v79 == *(_QWORD*)(v85 + 16))
									{
										*(_QWORD*)(v85 + 16) = v83;
									}
								LABEL_211:
									*((_QWORD*)v83 + 1) = v79;
									*((_QWORD*)v83 + 2) = 0i64;
									*((_QWORD*)v83 + 3) = 0i64;
									sub_1400081C0((__int64)v83, (_QWORD*)(a1[203] + 8i64));
									++a1[204];
								LABEL_212:
									if ((*(_BYTE*)(v18 + 4) & 4) == 0)
										goto LABEL_289;
									LODWORD(v148) = 2;
									if ((*(_BYTE*)(v18 + 12) & 1) != 0)
									{
									LABEL_251:
										if ((*(_BYTE*)(v18 + 12) & 2) == 0)
										{
											v106 = a1[203];
											HIDWORD(v148) = 4;
											v107 = *(_QWORD*)(v106 + 8);
											LODWORD(v163) = v25;
											v108 = v106;
											while (v107)
											{
												v108 = v107;
												if (v144)
												{
													if (!*(_DWORD*)(v107 + 32))
														goto LABEL_265;
												}
												else if (*(_DWORD*)(v107 + 32))
												{
													goto LABEL_264;
												}
												v109 = *(_DWORD*)(v107 + 36);
												if (a3 >= v109)
												{
													if (a3 > v109
														|| (v110 = *(_DWORD*)(v107 + 40), v110 <= 2)
														&& (v110 < 2
															|| (v111 = *(_DWORD*)(v107 + 44), v111 <= 4)
															&& (v111 < 4 || v25 >= *(_DWORD*)(v107 + 48))))
													{
													LABEL_265:
														v107 = *(_QWORD*)(v107 + 24);
														continue;
													}
												}
											LABEL_264:
												v107 = *(_QWORD*)(v107 + 16);
											}
											if (v108 == v106)
												goto LABEL_270;
											if (v144)
											{
												if (!*(_DWORD*)(v108 + 32))
													goto LABEL_282;
											}
											else if (*(_DWORD*)(v108 + 32))
											{
											LABEL_270:
												v112 = sub_14018B280(64i64, 0);
												if (v112 != (int*)-32i64)
												{
													*((_QWORD*)v112 + 4) = v145;
													v113 = v163;
													*((_QWORD*)v112 + 5) = v148;
													*((_QWORD*)v112 + 6) = v113;
													*((_QWORD*)v112 + 7) = v24;
												}
												*(_QWORD*)(v108 + 16) = v112;
												v114 = a1[203];
												if (v108 == v114)
												{
													*(_QWORD*)(v114 + 8) = v112;
													*(_QWORD*)(a1[203] + 24i64) = v112;
												}
												else if (v108 == *(_QWORD*)(v114 + 16))
												{
													*(_QWORD*)(v114 + 16) = v112;
												}
											LABEL_288:
												*((_QWORD*)v112 + 1) = v108;
												*((_QWORD*)v112 + 2) = 0i64;
												*((_QWORD*)v112 + 3) = 0i64;
												sub_1400081C0((__int64)v112, (_QWORD*)(a1[203] + 8i64));
												++a1[204];
												goto LABEL_289;
											}
											v115 = *(_DWORD*)(v108 + 36);
											if (a3 < v115)
												goto LABEL_270;
											if (a3 <= v115)
											{
												v116 = *(_DWORD*)(v108 + 40);
												if (v116 > 2)
													goto LABEL_270;
												if (v116 >= 2)
												{
													v117 = *(_DWORD*)(v108 + 44);
													if (v117 > 4 || v117 >= 4 && v25 < *(_DWORD*)(v108 + 48))
														goto LABEL_270;
												}
											}
										LABEL_282:
											v112 = sub_14018B280(64i64, 0);
											if (v112 != (int*)-32i64)
											{
												*((_QWORD*)v112 + 4) = v145;
												v118 = v163;
												*((_QWORD*)v112 + 5) = v148;
												*((_QWORD*)v112 + 6) = v118;
												*((_QWORD*)v112 + 7) = v24;
											}
											*(_QWORD*)(v108 + 24) = v112;
											v119 = a1[203];
											if (v108 == *(_QWORD*)(v119 + 24))
												*(_QWORD*)(v119 + 24) = v112;
											goto LABEL_288;
										}
									LABEL_289:
										if ((*(_BYTE*)(v18 + 4) & 8) != 0)
										{
											LODWORD(v149) = 3;
											if ((*(_BYTE*)(v18 + 12) & 1) == 0)
											{
												v120 = a1[203];
												v121 = *(_DWORD*)(v18 + 8);
												v161 = v145;
												v122 = *(_QWORD*)(v120 + 8);
												HIDWORD(v149) = v121;
												v162 = v149;
												LODWORD(v163) = v25;
												v164 = v24;
												if (v122)
												{
													v123 = v144;
													do
													{
														v120 = v122;
														if (v123)
														{
															if (!*(_DWORD*)(v122 + 32))
																goto LABEL_306;
														}
														else if (*(_DWORD*)(v122 + 32))
														{
															goto LABEL_304;
														}
														v124 = *(_DWORD*)(v122 + 36);
														if (a3 < v124)
															goto LABEL_303;
														if (a3 > v124)
															goto LABEL_305;
														v125 = *(_DWORD*)(v122 + 40);
														if (v125 > 3)
														{
														LABEL_303:
															v123 = v144;
														}
														else
														{
															if (v125 < 3)
															{
															LABEL_305:
																v123 = v144;
															LABEL_306:
																v122 = *(_QWORD*)(v122 + 24);
																continue;
															}
															v123 = v144;
															if (v121 >= *(_DWORD*)(v122 + 44))
																goto LABEL_306;
														}
													LABEL_304:
														v122 = *(_QWORD*)(v122 + 16);
													} while (v122);
												}
												sub_140566EB0((__int64)(a1 + 202), &v185, v122, v120, (__int64)&v161);
											}
											if ((*(_BYTE*)(v18 + 12) & 2) == 0)
											{
												HIDWORD(v149) = 4;
												v126 = a1[203];
												v161 = v145;
												LODWORD(v163) = v25;
												v127 = *(_QWORD*)(v126 + 8);
												v162 = v149;
												v164 = v24;
												if (v127)
												{
													v128 = v144;
													do
													{
														v126 = v127;
														if (v128)
														{
															if (!*(_DWORD*)(v127 + 32))
																goto LABEL_325;
														}
														else if (*(_DWORD*)(v127 + 32))
														{
															goto LABEL_323;
														}
														v129 = *(_DWORD*)(v127 + 36);
														if (a3 < v129)
															goto LABEL_322;
														if (a3 > v129)
															goto LABEL_324;
														v130 = *(_DWORD*)(v127 + 40);
														if (v130 > 3)
														{
														LABEL_322:
															v128 = v144;
														}
														else
														{
															if (v130 < 3)
															{
															LABEL_324:
																v128 = v144;
															LABEL_325:
																v127 = *(_QWORD*)(v127 + 24);
																continue;
															}
															v128 = v144;
															if (*(int*)(v127 + 44) <= 4)
																goto LABEL_325;
														}
													LABEL_323:
														v127 = *(_QWORD*)(v127 + 16);
													} while (v127);
												}
												sub_140566EB0((__int64)(a1 + 202), &v184, v127, v126, (__int64)&v161);
											}
										}
										if ((*(_BYTE*)(v18 + 4) & 0x10) != 0)
										{
											LODWORD(v150) = 4;
											if ((*(_BYTE*)(v18 + 12) & 1) == 0)
											{
												v131 = a1[203];
												v132 = *(_DWORD*)(v18 + 8);
												v161 = v145;
												v133 = *(_QWORD*)(v131 + 8);
												HIDWORD(v150) = v132;
												v162 = v150;
												LODWORD(v163) = v25;
												v164 = v24;
												if (v133)
												{
													v134 = v144;
													do
													{
														v131 = v133;
														if (v134)
														{
															if (!*(_DWORD*)(v133 + 32))
																goto LABEL_345;
														}
														else if (*(_DWORD*)(v133 + 32))
														{
															goto LABEL_343;
														}
														v135 = *(_DWORD*)(v133 + 36);
														if (a3 < v135)
															goto LABEL_342;
														if (a3 > v135)
															goto LABEL_344;
														v136 = *(_DWORD*)(v133 + 40);
														if (v136 > 4)
														{
														LABEL_342:
															v134 = v144;
														}
														else
														{
															if (v136 < 4)
															{
															LABEL_344:
																v134 = v144;
															LABEL_345:
																v133 = *(_QWORD*)(v133 + 24);
																continue;
															}
															v134 = v144;
															if (v132 >= *(_DWORD*)(v133 + 44))
																goto LABEL_345;
														}
													LABEL_343:
														v133 = *(_QWORD*)(v133 + 16);
													} while (v133);
												}
												sub_140566EB0((__int64)(a1 + 202), &v186, v133, v131, (__int64)&v161);
											}
											if ((*(_BYTE*)(v18 + 12) & 2) == 0)
											{
												HIDWORD(v150) = 4;
												v137 = a1[203];
												v161 = v145;
												LODWORD(v163) = v25;
												v138 = *(_QWORD*)(v137 + 8);
												v162 = v150;
												v164 = v24;
												if (v138)
												{
													v139 = v144;
													do
													{
														v137 = v138;
														if (v139)
														{
															if (!*(_DWORD*)(v138 + 32))
																goto LABEL_364;
														}
														else if (*(_DWORD*)(v138 + 32))
														{
															goto LABEL_362;
														}
														v140 = *(_DWORD*)(v138 + 36);
														if (a3 < v140)
															goto LABEL_361;
														if (a3 > v140)
															goto LABEL_363;
														v141 = *(_DWORD*)(v138 + 40);
														if (v141 > 4)
														{
														LABEL_361:
															v139 = v144;
														}
														else
														{
															if (v141 < 4)
															{
															LABEL_363:
																v139 = v144;
															LABEL_364:
																v138 = *(_QWORD*)(v138 + 24);
																continue;
															}
															v139 = v144;
															if (*(int*)(v138 + 44) <= 4)
																goto LABEL_364;
														}
													LABEL_362:
														v138 = *(_QWORD*)(v138 + 16);
													} while (v138);
												}
												sub_140566EB0((__int64)(a1 + 202), &v188, v138, v137, (__int64)&v161);
											}
										}
										if ((*(_BYTE*)(v18 + 4) & 0x20) != 0)
										{
											LODWORD(v151) = 5;
											if ((*(_BYTE*)(v18 + 12) & 1) == 0)
											{
												HIDWORD(v151) = *(_DWORD*)(v18 + 8);
												v161 = v145;
												LODWORD(v163) = v25;
												v164 = v24;
												v162 = v151;
												sub_140566350((__int64)(a1 + 202), &v175, &v161);
											}
											if ((*(_BYTE*)(v18 + 12) & 2) == 0)
											{
												HIDWORD(v151) = 4;
												v161 = v145;
												v162 = v151;
												LODWORD(v163) = v25;
												v164 = v24;
												sub_140566350((__int64)(a1 + 202), &v173, &v161);
											}
										}
										if ((*(_BYTE*)(v18 + 4) & 0x40) != 0)
										{
											LODWORD(v152) = 6;
											if ((*(_BYTE*)(v18 + 12) & 1) == 0)
											{
												HIDWORD(v152) = *(_DWORD*)(v18 + 8);
												v161 = v145;
												LODWORD(v163) = v25;
												v164 = v24;
												v162 = v152;
												sub_140566350((__int64)(a1 + 202), &v177, &v161);
											}
											if ((*(_BYTE*)(v18 + 12) & 2) == 0)
											{
												HIDWORD(v152) = 4;
												v161 = v145;
												v162 = v152;
												LODWORD(v163) = v25;
												v164 = v24;
												sub_140566350((__int64)(a1 + 202), &v183, &v161);
											}
										}
										if (*(char*)(v18 + 4) < 0)
										{
											LODWORD(v153) = 7;
											if ((*(_BYTE*)(v18 + 12) & 1) == 0)
											{
												HIDWORD(v153) = *(_DWORD*)(v18 + 8);
												v161 = v145;
												LODWORD(v163) = v25;
												v164 = v24;
												v162 = v153;
												sub_140566350((__int64)(a1 + 202), &v179, &v161);
											}
											if ((*(_BYTE*)(v18 + 12) & 2) == 0)
											{
												HIDWORD(v153) = 4;
												v161 = v145;
												v162 = v153;
												LODWORD(v163) = v25;
												v164 = v24;
												sub_140566350((__int64)(a1 + 202), &v187, &v161);
											}
										}
										v33 = v167;
										goto LABEL_383;
									}
									v91 = a1[203];
									v92 = *(_DWORD*)(v18 + 8);
									v93 = *(_QWORD*)(v91 + 8);
									HIDWORD(v148) = v92;
									LODWORD(v163) = v25;
									v94 = v91;
									while (v93)
									{
										v94 = v93;
										if (v144)
										{
											if (!*(_DWORD*)(v93 + 32))
												goto LABEL_227;
										}
										else if (*(_DWORD*)(v93 + 32))
										{
											goto LABEL_226;
										}
										v95 = *(_DWORD*)(v93 + 36);
										if (a3 >= v95)
										{
											if (a3 > v95
												|| (v96 = *(_DWORD*)(v93 + 40), v96 <= 2)
												&& (v96 < 2
													|| (v97 = *(_DWORD*)(v93 + 44), v92 >= v97) && (v92 > v97 || v25 >= *(_DWORD*)(v93 + 48))))
											{
											LABEL_227:
												v93 = *(_QWORD*)(v93 + 24);
												continue;
											}
										}
									LABEL_226:
										v93 = *(_QWORD*)(v93 + 16);
									}
									if (v94 == v91)
										goto LABEL_232;
									if (v144)
									{
										if (!*(_DWORD*)(v94 + 32))
											goto LABEL_244;
									}
									else if (*(_DWORD*)(v94 + 32))
									{
									LABEL_232:
										v98 = sub_14018B280(64i64, 0);
										if (v98 != (int*)-32i64)
										{
											*((_QWORD*)v98 + 4) = v145;
											v99 = v163;
											*((_QWORD*)v98 + 5) = v148;
											*((_QWORD*)v98 + 6) = v99;
											*((_QWORD*)v98 + 7) = v24;
										}
										*(_QWORD*)(v94 + 16) = v98;
										v100 = a1[203];
										if (v94 == v100)
										{
											*(_QWORD*)(v100 + 8) = v98;
											*(_QWORD*)(a1[203] + 24i64) = v98;
										}
										else if (v94 == *(_QWORD*)(v100 + 16))
										{
											*(_QWORD*)(v100 + 16) = v98;
										}
									LABEL_250:
										*((_QWORD*)v98 + 1) = v94;
										*((_QWORD*)v98 + 2) = 0i64;
										*((_QWORD*)v98 + 3) = 0i64;
										sub_1400081C0((__int64)v98, (_QWORD*)(a1[203] + 8i64));
										++a1[204];
										goto LABEL_251;
									}
									v101 = *(_DWORD*)(v94 + 36);
									if (a3 < v101)
										goto LABEL_232;
									if (a3 <= v101)
									{
										v102 = *(_DWORD*)(v94 + 40);
										if (v102 > 2)
											goto LABEL_232;
										if (v102 >= 2)
										{
											v103 = *(_DWORD*)(v94 + 44);
											if (v92 < v103 || v92 <= v103 && v25 < *(_DWORD*)(v94 + 48))
												goto LABEL_232;
										}
									}
								LABEL_244:
									v98 = sub_14018B280(64i64, 0);
									if (v98 != (int*)-32i64)
									{
										*((_QWORD*)v98 + 4) = v145;
										v104 = v163;
										*((_QWORD*)v98 + 5) = v148;
										*((_QWORD*)v98 + 6) = v104;
										*((_QWORD*)v98 + 7) = v24;
									}
									*(_QWORD*)(v94 + 24) = v98;
									v105 = a1[203];
									if (v94 == *(_QWORD*)(v105 + 24))
										*(_QWORD*)(v105 + 24) = v98;
									goto LABEL_250;
								}
								v86 = *(_DWORD*)(v79 + 36);
								if (a3 < v86)
									goto LABEL_193;
								if (a3 <= v86)
								{
									v87 = *(_DWORD*)(v79 + 40);
									if (v87 > 1)
										goto LABEL_193;
									if (v87 >= 1)
									{
										v88 = *(_DWORD*)(v79 + 44);
										if (v88 > 4 || v88 >= 4 && v25 < *(_DWORD*)(v79 + 48))
											goto LABEL_193;
									}
								}
							LABEL_205:
								v83 = sub_14018B280(64i64, 0);
								if (v83 != (int*)-32i64)
								{
									*((_QWORD*)v83 + 4) = v145;
									v89 = v163;
									*((_QWORD*)v83 + 5) = v147;
									*((_QWORD*)v83 + 6) = v89;
									*((_QWORD*)v83 + 7) = v24;
								}
								*(_QWORD*)(v79 + 24) = v83;
								v90 = a1[203];
								if (v79 == *(_QWORD*)(v90 + 24))
									*(_QWORD*)(v90 + 24) = v83;
								goto LABEL_211;
							}
							v62 = a1[203];
							v63 = *(_DWORD*)(v18 + 8);
							v64 = *(_QWORD*)(v62 + 8);
							HIDWORD(v147) = v63;
							LODWORD(v163) = v25;
							v65 = v62;
							while (v64)
							{
								v65 = v64;
								if (v144)
								{
									if (!*(_DWORD*)(v64 + 32))
										goto LABEL_150;
								}
								else if (*(_DWORD*)(v64 + 32))
								{
									goto LABEL_149;
								}
								v66 = *(_DWORD*)(v64 + 36);
								if (a3 >= v66)
								{
									if (a3 > v66
										|| (v67 = *(_DWORD*)(v64 + 40), v67 <= 1)
										&& (v67 < 1
											|| (v68 = *(_DWORD*)(v64 + 44), v63 >= v68) && (v63 > v68 || v25 >= *(_DWORD*)(v64 + 48))))
									{
									LABEL_150:
										v64 = *(_QWORD*)(v64 + 24);
										continue;
									}
								}
							LABEL_149:
								v64 = *(_QWORD*)(v64 + 16);
							}
							if (v65 == v62)
								goto LABEL_155;
							if (v144)
							{
								if (!*(_DWORD*)(v65 + 32))
									goto LABEL_167;
							}
							else if (*(_DWORD*)(v65 + 32))
							{
							LABEL_155:
								v69 = sub_14018B280(64i64, 0);
								if (v69 != (int*)-32i64)
								{
									*((_QWORD*)v69 + 4) = v145;
									v70 = v163;
									*((_QWORD*)v69 + 5) = v147;
									*((_QWORD*)v69 + 6) = v70;
									*((_QWORD*)v69 + 7) = v24;
								}
								*(_QWORD*)(v65 + 16) = v69;
								v71 = a1[203];
								if (v65 == v71)
								{
									*(_QWORD*)(v71 + 8) = v69;
									*(_QWORD*)(a1[203] + 24i64) = v69;
								}
								else if (v65 == *(_QWORD*)(v71 + 16))
								{
									*(_QWORD*)(v71 + 16) = v69;
								}
							LABEL_173:
								*((_QWORD*)v69 + 1) = v65;
								*((_QWORD*)v69 + 2) = 0i64;
								*((_QWORD*)v69 + 3) = 0i64;
								sub_1400081C0((__int64)v69, (_QWORD*)(a1[203] + 8i64));
								++a1[204];
								goto LABEL_174;
							}
							v72 = *(_DWORD*)(v65 + 36);
							if (a3 < v72)
								goto LABEL_155;
							if (a3 <= v72)
							{
								v73 = *(_DWORD*)(v65 + 40);
								if (v73 > 1)
									goto LABEL_155;
								if (v73 >= 1)
								{
									v74 = *(_DWORD*)(v65 + 44);
									if (v63 < v74 || v63 <= v74 && v25 < *(_DWORD*)(v65 + 48))
										goto LABEL_155;
								}
							}
						LABEL_167:
							v69 = sub_14018B280(64i64, 0);
							if (v69 != (int*)-32i64)
							{
								*((_QWORD*)v69 + 4) = v145;
								v75 = v163;
								*((_QWORD*)v69 + 5) = v147;
								*((_QWORD*)v69 + 6) = v75;
								*((_QWORD*)v69 + 7) = v24;
							}
							*(_QWORD*)(v65 + 24) = v69;
							v76 = a1[203];
							if (v65 == *(_QWORD*)(v76 + 24))
								*(_QWORD*)(v76 + 24) = v69;
							goto LABEL_173;
						}
						LODWORD(v146) = 0;
						if ((*(_BYTE*)(v18 + 12) & 1) != 0)
						{
						LABEL_97:
							if ((*(_BYTE*)(v18 + 12) & 2) != 0)
								goto LABEL_135;
							v48 = a1[203];
							HIDWORD(v146) = 4;
							v49 = *(_QWORD*)(v48 + 8);
							LODWORD(v163) = v25;
							v50 = v48;
							while (v49)
							{
								v50 = v49;
								if (v144)
								{
									if (!*(_DWORD*)(v49 + 32))
										goto LABEL_111;
								}
								else if (*(_DWORD*)(v49 + 32))
								{
									goto LABEL_110;
								}
								v51 = *(_DWORD*)(v49 + 36);
								if (a3 >= v51)
								{
									if (a3 > v51
										|| (v52 = *(_DWORD*)(v49 + 40), v52 <= 0)
										&& (v52 < 0 || (v53 = *(_DWORD*)(v49 + 44), v53 <= 4) && (v53 < 4 || v25 >= *(_DWORD*)(v49 + 48))))
									{
									LABEL_111:
										v49 = *(_QWORD*)(v49 + 24);
										continue;
									}
								}
							LABEL_110:
								v49 = *(_QWORD*)(v49 + 16);
							}
							if (v50 == v48)
								goto LABEL_116;
							if (v144)
							{
								if (!*(_DWORD*)(v50 + 32))
									goto LABEL_128;
							}
							else if (*(_DWORD*)(v50 + 32))
							{
							LABEL_116:
								v54 = sub_14018B280(64i64, 0);
								if (v54 != (int*)-32i64)
								{
									*((_QWORD*)v54 + 4) = v145;
									v55 = v163;
									*((_QWORD*)v54 + 5) = v146;
									*((_QWORD*)v54 + 6) = v55;
									*((_QWORD*)v54 + 7) = v24;
								}
								*(_QWORD*)(v50 + 16) = v54;
								v56 = a1[203];
								if (v50 == v56)
								{
									*(_QWORD*)(v56 + 8) = v54;
									*(_QWORD*)(a1[203] + 24i64) = v54;
								}
								else if (v50 == *(_QWORD*)(v56 + 16))
								{
									*(_QWORD*)(v56 + 16) = v54;
								}
							LABEL_134:
								*((_QWORD*)v54 + 1) = v50;
								*((_QWORD*)v54 + 2) = 0i64;
								*((_QWORD*)v54 + 3) = 0i64;
								sub_1400081C0((__int64)v54, (_QWORD*)(a1[203] + 8i64));
								++a1[204];
								goto LABEL_135;
							}
							v57 = *(_DWORD*)(v50 + 36);
							if (a3 < v57)
								goto LABEL_116;
							if (a3 <= v57)
							{
								v58 = *(_DWORD*)(v50 + 40);
								if (v58 > 0)
									goto LABEL_116;
								if (v58 >= 0)
								{
									v59 = *(_DWORD*)(v50 + 44);
									if (v59 > 4 || v59 >= 4 && v25 < *(_DWORD*)(v50 + 48))
										goto LABEL_116;
								}
							}
						LABEL_128:
							v54 = sub_14018B280(64i64, 0);
							if (v54 != (int*)-32i64)
							{
								*((_QWORD*)v54 + 4) = v145;
								v60 = v163;
								*((_QWORD*)v54 + 5) = v146;
								*((_QWORD*)v54 + 6) = v60;
								*((_QWORD*)v54 + 7) = v24;
							}
							*(_QWORD*)(v50 + 24) = v54;
							v61 = a1[203];
							if (v50 == *(_QWORD*)(v61 + 24))
								*(_QWORD*)(v61 + 24) = v54;
							goto LABEL_134;
						}
						v34 = a1[203];
						HIDWORD(v146) = 2;
						v35 = *(_QWORD*)(v34 + 8);
						LODWORD(v163) = v25;
						v36 = v34;
						while (v35)
						{
							v36 = v35;
							if (v144)
							{
								if (!*(_DWORD*)(v35 + 32))
									goto LABEL_73;
							}
							else if (*(_DWORD*)(v35 + 32))
							{
								goto LABEL_72;
							}
							v37 = *(_DWORD*)(v35 + 36);
							if (a3 >= v37)
							{
								if (a3 > v37
									|| (v38 = *(_DWORD*)(v35 + 40), v38 <= 0)
									&& (v38 < 0 || (v39 = *(_DWORD*)(v35 + 44), v39 <= 2) && (v39 < 2 || v25 >= *(_DWORD*)(v35 + 48))))
								{
								LABEL_73:
									v35 = *(_QWORD*)(v35 + 24);
									continue;
								}
							}
						LABEL_72:
							v35 = *(_QWORD*)(v35 + 16);
						}
						if (v36 == v34)
							goto LABEL_78;
						if (v144)
						{
							if (!*(_DWORD*)(v36 + 32))
								goto LABEL_90;
						}
						else if (*(_DWORD*)(v36 + 32))
						{
						LABEL_78:
							v40 = sub_14018B280(64i64, 0);
							if (v40 != (int*)-32i64)
							{
								*((_QWORD*)v40 + 4) = v145;
								v41 = v163;
								*((_QWORD*)v40 + 5) = v146;
								*((_QWORD*)v40 + 6) = v41;
								*((_QWORD*)v40 + 7) = v24;
							}
							*(_QWORD*)(v36 + 16) = v40;
							v42 = a1[203];
							if (v36 == v42)
							{
								*(_QWORD*)(v42 + 8) = v40;
								*(_QWORD*)(a1[203] + 24i64) = v40;
							}
							else if (v36 == *(_QWORD*)(v42 + 16))
							{
								*(_QWORD*)(v42 + 16) = v40;
							}
						LABEL_96:
							*((_QWORD*)v40 + 1) = v36;
							*((_QWORD*)v40 + 2) = 0i64;
							*((_QWORD*)v40 + 3) = 0i64;
							sub_1400081C0((__int64)v40, (_QWORD*)(a1[203] + 8i64));
							++a1[204];
							goto LABEL_97;
						}
						v43 = *(_DWORD*)(v36 + 36);
						if (a3 < v43)
							goto LABEL_78;
						if (a3 <= v43)
						{
							v44 = *(_DWORD*)(v36 + 40);
							if (v44 > 0)
								goto LABEL_78;
							if (v44 >= 0)
							{
								v45 = *(_DWORD*)(v36 + 44);
								if (v45 > 2 || v45 >= 2 && v25 < *(_DWORD*)(v36 + 48))
									goto LABEL_78;
							}
						}
					LABEL_90:
						v40 = sub_14018B280(64i64, 0);
						if (v40 != (int*)-32i64)
						{
							*((_QWORD*)v40 + 4) = v145;
							v46 = v163;
							*((_QWORD*)v40 + 5) = v146;
							*((_QWORD*)v40 + 6) = v46;
							*((_QWORD*)v40 + 7) = v24;
						}
						*(_QWORD*)(v36 + 24) = v40;
						v47 = a1[203];
						if (v36 == *(_QWORD*)(v47 + 24))
							*(_QWORD*)(v47 + 24) = v40;
						goto LABEL_96;
					}
					goto LABEL_385;
				}
			}
		LABEL_29:
			v7 = 78;
			v168 = 78;
		}
	LABEL_386:
		v8 = v169;
	LABEL_387:
		v15 = v166 + 1;
		v166 = v15;
	}
	while (v15 < 0x24);
	v142 = *(_DWORD*)(v8 + 148);
	if (!v142 || sub_140248F00(v142))
	{
		if (v7)
			goto LABEL_406;
	}
	else
	{
		v7 = 78;
	LABEL_406:
		sub_14018D540(&v170, (__int64)L"%d", v7);
		if (v170)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v170 - 16) + 8i64))(v170 - 16);
	}
	v143 = (__int64)(a1 + 210);
	if (!v144)
		v143 = (__int64)(a1 + 206);
	sub_1400293C0(v143, (__int64)v172, (int*)&v189);
	return v7;
}
// 14056289F: conditional instruction was optimized away because rax.8==0
// 140562A2F: conditional instruction was optimized away because rax.8==0
// 140562BCF: conditional instruction was optimized away because rax.8==0
// 140562D57: conditional instruction was optimized away because rax.8==0
// 140562EF2: conditional instruction was optimized away because rax.8==0
// 140563080: conditional instruction was optimized away because rax.8==0
// 140B4F534: using guessed type wchar_t aD_27[3];

