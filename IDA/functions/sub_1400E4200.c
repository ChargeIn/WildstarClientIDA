//----- (00000001400E4200) ----------------------------------------------------
void __fastcall sub_1400E4200(__int64 a1, __m128i* a2)
{
	int* v4; // rax
	__int64 v5; // r14
	__int64 v6; // rbx
	__int64 v7; // rcx
	int* v8; // rax
	int* v9; // rdi
	int* v10; // rdx
	__int64 v11; // rcx
	int* v12; // rdi
	__int64 v13; // rax
	__int64 v14; // rsi
	_WORD* v15; // rax
	__int64 v16; // r13
	int* v17; // rax
	__int64 v18; // rbx
	char v19; // al
	__int64 v20; // rdi
	__int64 v21; // rax
	__int64 v22; // rax
	__int64 v23; // rbx
	__int64* v24; // rdi
	int* v25; // rax
	__int64 v26; // rcx
	__int64 v27; // r12
	__int64 v28; // rax
	int* v29; // rsi
	int* v30; // r14
	__int64 v31; // rbx
	unsigned __int64 v32; // rbx
	_WORD* v33; // r15
	__int64 v34; // r13
	__int64 v35; // rsi
	_QWORD* v36; // rbx
	__int64* v37; // rbx
	__int64 v38; // rbx
	int* v39; // rsi
	__int64 v40; // rax
	int* v41; // r12
	__int64 v42; // rbx
	unsigned __int64 v43; // rbx
	_WORD* v44; // r14
	__int64 v45; // r13
	__int64 v46; // r15
	_QWORD* v47; // rsi
	_QWORD* v48; // rbx
	__int64 v49; // rax
	__int64 v50; // rcx
	__int64 i; // rcx
	__int64 j; // rcx
	__int64 v53; // r13
	int* v54; // rsi
	__int64 v55; // rax
	int* v56; // r14
	__int64 v57; // r15
	_WORD* v58; // rax
	__int64 v59; // rdx
	__int64 v60; // rdi
	__int64 v61; // rsi
	const wchar_t* v62; // rbx
	wchar_t* v63; // rax
	int v64; // ecx
	bool v65; // zf
	int* v66; // r12
	__int64 v67; // rax
	int* v68; // rsi
	int* v69; // r14
	__int64 v70; // rcx
	__int64 v71; // rbx
	unsigned __int64 v72; // rbx
	_WORD* v73; // r15
	__int64 v74; // r13
	__int64 v75; // rsi
	_QWORD* v76; // rbx
	__int64* v77; // rbx
	__int64 v78; // rbx
	__int64 v79; // rdi
	__int64 v80; // rax
	int* v81; // r14
	__int64 v82; // rbx
	unsigned __int64 v83; // rbx
	_WORD* v84; // r15
	__int64 v85; // r13
	__int64 v86; // rsi
	_QWORD* v87; // rbx
	__int64* v88; // rbx
	__int64 v89; // rbx
	__int64 v90; // rax
	int* v91; // rdi
	__int64 v92; // rbx
	unsigned __int64 v93; // rbx
	_WORD* v94; // r14
	__int64 v95; // r13
	__int64 v96; // r15
	_QWORD* v97; // rsi
	_QWORD* v98; // rbx
	__int64 v99; // rax
	__int64 v100; // rcx
	__int64 k; // rcx
	__int64 m; // rcx
	__int64 v103; // rax
	int* v104; // rsi
	__int64 v105; // r14
	_WORD* v106; // rax
	__int64 v107; // [rsp+38h] [rbp-59h]
	__int64 v108; // [rsp+38h] [rbp-59h]
	__int64 v109; // [rsp+40h] [rbp-51h] BYREF
	char v110[8]; // [rsp+48h] [rbp-49h] BYREF
	int* v111; // [rsp+50h] [rbp-41h]
	_WORD* v112; // [rsp+58h] [rbp-39h]
	__int64 v113; // [rsp+60h] [rbp-31h]
	__int64 v114; // [rsp+68h] [rbp-29h] BYREF
	__int64 v115; // [rsp+70h] [rbp-21h] BYREF
	__int64 v116; // [rsp+78h] [rbp-19h] BYREF
	__int64 v117; // [rsp+80h] [rbp-11h] BYREF
	__int64 v118; // [rsp+88h] [rbp-9h] BYREF
	int* v119; // [rsp+90h] [rbp-1h]
	__int64 v120; // [rsp+98h] [rbp+7h] BYREF
	__int64 v122; // [rsp+108h] [rbp+77h]
	__int64 v123; // [rsp+110h] [rbp+7Fh] BYREF

	if (!*(_BYTE*)(a1 + 2824))
	{
		v4 = sub_14018B280(104i64, 0);
		if (v4)
			v5 = sub_140156660((__int64)v4);
		else
			v5 = 0i64;
		v6 = *(_QWORD*)(a1 + 2784);
		v7 = *(_QWORD*)(a1 + 2776);
		v123 = a1 + 2776;
		v8 = sub_14018DB00(v7, v6 + 1, 8i64);
		v9 = v8;
		*(_QWORD*)&v8[2 * v6] = v5;
		v10 = *(int**)(a1 + 2776);
		if (v10 != v8)
		{
			sub_1407DB590(v8, v10, 8i64 * *(_QWORD*)(a1 + 2784));
			v11 = *(_QWORD*)(a1 + 2776);
			if (v11)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
			*(_QWORD*)(a1 + 2776) = v9;
		}
		v12 = 0i64;
		v111 = 0i64;
		v113 = 0i64;
		v13 = 0i64;
		*(_QWORD*)(a1 + 2784) = v6 + 1;
		do
			v65 = aDefault_2[++v13] == 0;
		while (!v65);
		v14 = (2 * v13) >> 1;
		if ((unsigned __int64)(v14 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v12 = sub_14018B280(2 * (v14 + 1), 0);
			v111 = v12;
			v113 = (__int64)v12 + 2 * v14 + 2;
		}
		sub_1407DB590(v12, (int*)L"Default", 2 * v14);
		v15 = (_WORD*)v12 + v14;
		v112 = v15;
		if (v15)
			*v15 = 0;
		v16 = a1 + 2792;
		v122 = v16;
		*(_QWORD*)sub_1400EDA60(v16, (__int64)v110) = v5;
		if (v12)
			sub_14018B900((__int64)v12, 0);
		v17 = sub_14018B280(16i64, 0);
		v18 = (__int64)v17;
		v119 = v17;
		if (v17)
			*(_WORD*)v17 = 0;
		v109 = 0i64;
		v19 = sub_1400E27B0(qword_140C63650, a2, &v109);
		v20 = v109;
		if (v19)
		{
			if (v109)
			{
				v21 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v109 + 16i64))(v109);
				v22 = sub_1401A5AE0(v21, L"Fonts");
				v116 = v22;
				if (v22)
				{
					v23 = sub_1401A5AE0(v22, L"Font");
					v107 = v23;
					if (v23)
					{
						v24 = (__int64*)v123;
						do
						{
							v25 = sub_14018B280(104i64, 0);
							if (v25)
							{
								v26 = sub_140156770((__int64)v25, v23);
								v123 = v26;
							}
							else
							{
								v26 = 0i64;
								v123 = 0i64;
							}
							if (*(float*)(v26 + 92) > 0.0 && **(_WORD**)(v26 + 56))
							{
								sub_140033260(v24, &v123);
								v27 = v123;
								v28 = 0i64;
								v29 = *(int**)(v123 + 56);
								v30 = 0i64;
								if (*(_WORD*)v29)
								{
									do
										++v28;
									while (*((_WORD*)v29 + v28));
								}
								v31 = (2 * v28) >> 1;
								if ((unsigned __int64)(v31 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
									v30 = sub_14018B280(2 * (v31 + 1), 0);
								v32 = 2 * v31;
								sub_1407DB590(v30, v29, v32);
								v33 = (_WORD*)((char*)v30 + v32);
								if ((int*)((char*)v30 + v32))
									*v33 = 0;
								v34 = *(_QWORD*)(v16 + 8);
								v35 = v34;
								v36 = *(_QWORD**)(v34 + 8);
								while (v36)
								{
									if ((int)sub_1400454D0(v36[5], v36[6], (unsigned __int16*)v30, (__int64)v33) < 0)
									{
										v36 = (_QWORD*)v36[3];
									}
									else
									{
										v35 = (__int64)v36;
										v36 = (_QWORD*)v36[2];
									}
								}
								if (v35 == v34
									|| (int)sub_1400454D0(
										(__int64)v30,
										(__int64)v33,
										*(unsigned __int16**)(v35 + 40),
										*(_QWORD*)(v35 + 48)) < 0)
								{
									v114 = v34;
									v37 = &v114;
								}
								else
								{
									v118 = v35;
									v37 = &v118;
								}
								v38 = *v37;
								if (v30)
									sub_14018B900((__int64)v30, 0);
								if (v38 != *(_QWORD*)(a1 + 2800))
								{
									v39 = *(int**)(v27 + 56);
									v40 = 0i64;
									v41 = 0i64;
									if (*(_WORD*)v39)
									{
										do
											++v40;
										while (*((_WORD*)v39 + v40));
									}
									v42 = (2 * v40) >> 1;
									if ((unsigned __int64)(v42 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
										v41 = sub_14018B280(2 * (v42 + 1), 0);
									v43 = 2 * v42;
									sub_1407DB590(v41, v39, v43);
									v44 = (_WORD*)((char*)v41 + v43);
									if ((int*)((char*)v41 + v43))
										*v44 = 0;
									v45 = *(_QWORD*)(a1 + 2800);
									v46 = v45;
									v47 = *(_QWORD**)(v45 + 8);
									v48 = v47;
									if (v47)
									{
										do
										{
											if ((int)sub_1400454D0((__int64)v41, (__int64)v44, (unsigned __int16*)v48[5], v48[6]) >= 0)
											{
												v48 = (_QWORD*)v48[3];
											}
											else
											{
												v46 = (__int64)v48;
												v48 = (_QWORD*)v48[2];
											}
										} while (v48);
										do
										{
											if ((int)sub_1400454D0(v47[5], v47[6], (unsigned __int16*)v41, (__int64)v44) < 0)
											{
												v47 = (_QWORD*)v47[3];
											}
											else
											{
												v45 = (__int64)v47;
												v47 = (_QWORD*)v47[2];
											}
										} while (v47);
									}
									v49 = v45;
									while (v49 != v46)
									{
										v50 = *(_QWORD*)(v49 + 24);
										if (v50)
										{
											v49 = *(_QWORD*)(v49 + 24);
											for (i = *(_QWORD*)(v50 + 16); i; i = *(_QWORD*)(i + 16))
												v49 = i;
										}
										else
										{
											for (j = *(_QWORD*)(v49 + 8); v49 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
												v49 = j;
											if (*(_QWORD*)(v49 + 24) != j)
												v49 = j;
										}
									}
									v117 = v46;
									v115 = v45;
									sub_1400EF600(v122, &v115, &v117);
									if (v41)
										sub_14018B900((__int64)v41, 0);
								}
								v53 = v123;
								v54 = *(int**)(v123 + 56);
								v55 = 0i64;
								v56 = 0i64;
								v111 = 0i64;
								v113 = 0i64;
								if (*(_WORD*)v54)
								{
									do
										++v55;
									while (*((_WORD*)v54 + v55));
								}
								v57 = (2 * v55) >> 1;
								if ((unsigned __int64)(v57 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
								{
									v56 = sub_14018B280(2 * (v57 + 1), 0);
									v111 = v56;
									v113 = (__int64)v56 + 2 * v57 + 2;
								}
								sub_1407DB590(v56, v54, 2 * v57);
								v58 = (_WORD*)v56 + v57;
								v112 = v58;
								if (v58)
									*v58 = 0;
								*(_QWORD*)sub_1400EDA60(v122, (__int64)v110) = v53;
								if (v56)
									sub_14018B900((__int64)v56, 0);
								v16 = v122;
								v23 = v107;
							}
							else
							{
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 8i64))(v26);
							}
							v23 = sub_1401A5BC0(v23, L"Font");
							v107 = v23;
						} while (v23);
						v20 = v109;
					}
					v59 = sub_1401A5AE0(v116, L"Alias");
					v123 = v59;
					if (v59)
					{
						v60 = a1;
						do
						{
							v61 = *(_QWORD*)(v59 + 96);
							if (v61)
							{
								while (1)
								{
									v62 = L"Name";
									v63 = (wchar_t*)sub_1401A4F40(v61 + 8);
									if (v63 == L"Name")
										break;
									v64 = 0;
									if (!*v63)
										goto LABEL_97;
									do
									{
										if (!*v62 || *v63 != *v62)
											break;
										v65 = v64 == 0x7FFFFFFF;
										if (v64 == 0x7FFFFFFF)
											goto LABEL_95;
										++v63;
										++v62;
										++v64;
									} while (*v63);
									v65 = v64 == 0x7FFFFFFF;
								LABEL_95:
									if (v65)
										break;
									if (!*v63)
									{
									LABEL_97:
										if (!*v62)
											break;
									}
									v61 = *(_QWORD*)(v61 + 56);
									if (!v61)
										goto LABEL_178;
								}
								v66 = (int*)sub_1401A4F40(v61 + 32);
								if (v66)
								{
									v67 = sub_1401A6B80(v123, L"Font");
									if (v67)
									{
										v68 = (int*)sub_1401A4F40(v67 + 32);
										if (v68)
										{
											v69 = 0i64;
											v70 = 0i64;
											if (*(_WORD*)v68)
											{
												do
													++v70;
												while (*((_WORD*)v68 + v70));
											}
											v71 = (2 * v70) >> 1;
											if ((unsigned __int64)(v71 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
												v69 = sub_14018B280(2 * (v71 + 1), 0);
											v72 = 2 * v71;
											sub_1407DB590(v69, v68, v72);
											v73 = (_WORD*)((char*)v69 + v72);
											if ((int*)((char*)v69 + v72))
												*v73 = 0;
											v74 = *(_QWORD*)(v16 + 8);
											v75 = v74;
											v76 = *(_QWORD**)(v74 + 8);
											while (v76)
											{
												if ((int)sub_1400454D0(v76[5], v76[6], (unsigned __int16*)v69, (__int64)v73) < 0)
												{
													v76 = (_QWORD*)v76[3];
												}
												else
												{
													v75 = (__int64)v76;
													v76 = (_QWORD*)v76[2];
												}
											}
											if (v75 == v74
												|| (int)sub_1400454D0(
													(__int64)v69,
													(__int64)v73,
													*(unsigned __int16**)(v75 + 40),
													*(_QWORD*)(v75 + 48)) < 0)
											{
												v115 = v74;
												v77 = &v115;
											}
											else
											{
												v116 = v75;
												v77 = &v116;
											}
											v78 = *v77;
											if (v69)
												sub_14018B900((__int64)v69, 0);
											if (v78 == *(_QWORD*)(v60 + 2800))
											{
												v16 = v122;
											}
											else
											{
												v79 = *(_QWORD*)(v78 + 64);
												v80 = 0i64;
												v108 = v79;
												v81 = 0i64;
												if (*(_WORD*)v66)
												{
													do
														++v80;
													while (*((_WORD*)v66 + v80));
												}
												v82 = (2 * v80) >> 1;
												if ((unsigned __int64)(v82 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
													v81 = sub_14018B280(2 * (v82 + 1), 0);
												v83 = 2 * v82;
												sub_1407DB590(v81, v66, v83);
												v84 = (_WORD*)((char*)v81 + v83);
												if ((int*)((char*)v81 + v83))
													*v84 = 0;
												v85 = *(_QWORD*)(v122 + 8);
												v86 = v85;
												v87 = *(_QWORD**)(v85 + 8);
												while (v87)
												{
													if ((int)sub_1400454D0(v87[5], v87[6], (unsigned __int16*)v81, (__int64)v84) < 0)
													{
														v87 = (_QWORD*)v87[3];
													}
													else
													{
														v86 = (__int64)v87;
														v87 = (_QWORD*)v87[2];
													}
												}
												if (v86 == v85
													|| (int)sub_1400454D0(
														(__int64)v81,
														(__int64)v84,
														*(unsigned __int16**)(v86 + 40),
														*(_QWORD*)(v86 + 48)) < 0)
												{
													v114 = v85;
													v88 = &v114;
												}
												else
												{
													v117 = v86;
													v88 = &v117;
												}
												v89 = *v88;
												if (v81)
													sub_14018B900((__int64)v81, 0);
												if (v89 == *(_QWORD*)(a1 + 2800))
												{
													v16 = v122;
												}
												else
												{
													v90 = 0i64;
													v91 = 0i64;
													if (*(_WORD*)v66)
													{
														do
															++v90;
														while (*((_WORD*)v66 + v90));
													}
													v92 = (2 * v90) >> 1;
													if ((unsigned __int64)(v92 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
														v91 = sub_14018B280(2 * (v92 + 1), 0);
													v93 = 2 * v92;
													sub_1407DB590(v91, v66, v93);
													v94 = (_WORD*)((char*)v91 + v93);
													if ((int*)((char*)v91 + v93))
														*v94 = 0;
													v95 = *(_QWORD*)(v122 + 8);
													v96 = v95;
													v97 = *(_QWORD**)(v95 + 8);
													v98 = v97;
													if (v97)
													{
														do
														{
															if ((int)sub_1400454D0((__int64)v91, (__int64)v94, (unsigned __int16*)v98[5], v98[6]) >= 0)
															{
																v98 = (_QWORD*)v98[3];
															}
															else
															{
																v96 = (__int64)v98;
																v98 = (_QWORD*)v98[2];
															}
														} while (v98);
														do
														{
															if ((int)sub_1400454D0(v97[5], v97[6], (unsigned __int16*)v91, (__int64)v94) < 0)
															{
																v97 = (_QWORD*)v97[3];
															}
															else
															{
																v95 = (__int64)v97;
																v97 = (_QWORD*)v97[2];
															}
														} while (v97);
													}
													v99 = v95;
													while (v99 != v96)
													{
														v100 = *(_QWORD*)(v99 + 24);
														if (v100)
														{
															v99 = *(_QWORD*)(v99 + 24);
															for (k = *(_QWORD*)(v100 + 16); k; k = *(_QWORD*)(k + 16))
																v99 = k;
														}
														else
														{
															for (m = *(_QWORD*)(v99 + 8); v99 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
																v99 = m;
															if (*(_QWORD*)(v99 + 24) != m)
																v99 = m;
														}
													}
													v120 = v95;
													v16 = v122;
													v118 = v96;
													sub_1400EF600(v122, &v120, &v118);
													if (v91)
														sub_14018B900((__int64)v91, 0);
													v79 = v108;
												}
												v103 = 0i64;
												v104 = 0i64;
												v111 = 0i64;
												v113 = 0i64;
												if (*(_WORD*)v66)
												{
													do
														++v103;
													while (*((_WORD*)v66 + v103));
												}
												v105 = (2 * v103) >> 1;
												if ((unsigned __int64)(v105 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
												{
													v104 = sub_14018B280(2 * (v105 + 1), 0);
													v111 = v104;
													v113 = (__int64)v104 + 2 * v105 + 2;
												}
												sub_1407DB590(v104, v66, 2 * v105);
												v106 = (_WORD*)v104 + v105;
												v112 = v106;
												if (v106)
													*v106 = 0;
												*(_QWORD*)sub_1400EDA60(v16, (__int64)v110) = v79;
												if (v104)
													sub_14018B900((__int64)v104, 0);
												v60 = a1;
											}
										}
									}
								}
							}
						LABEL_178:
							v59 = sub_1401A5BC0(v123, L"Alias");
							v123 = v59;
						} while (v59);
						v20 = v109;
					}
					v18 = (__int64)v119;
				}
			}
			*(_BYTE*)(a1 + 2824) = 1;
		}
		if (v20)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
		if (v18)
			sub_14018B900(v18, 0);
	}
}
// 1400E461C: conditional instruction was optimized away because rsi.8!=0
// 1400E4855: conditional instruction was optimized away because rsi.8!=0
// 1400E4B4C: conditional instruction was optimized away because rsi.8!=0
// 140A16908: using guessed type wchar_t aFonts[6];
// 140A16918: using guessed type wchar_t aAlias[6];
// 140A173B0: using guessed type wchar_t aDefault_2[8];
// 140A31790: using guessed type wchar_t aName_6[5];
// 140A31AA8: using guessed type wchar_t aFont[5];
// 140C63650: using guessed type __int64 qword_140C63650;
// 1400E4200: using guessed type char var_A0[8];

