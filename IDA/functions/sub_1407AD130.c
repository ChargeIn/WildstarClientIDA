#include "../winhttp.h"

//----- (00000001407AD130) ----------------------------------------------------
void __fastcall sub_1407AD130(_QWORD* a1, const __m128i* a2, int a3, unsigned int a4)
{
	unsigned int v5; // r12d
	__int64 v8; // rcx
	__int64 v9; // rcx
	int v10; // eax
	int v11; // edi
	__int64 v12; // rbx
	__int64 v13; // rcx
	__int64 v14; // rcx
	int v15; // eax
	__int64* v16; // rax
	__int64 v17; // rdx
	int v18; // edi
	__int64 v19; // rbx
	__int64 v20; // rax
	__int64 v21; // rbx
	__int64 v22; // r13
	const wchar_t* v23; // rbx
	__int64 v24; // rdi
	wchar_t* v25; // rax
	int v26; // edx
	bool v27; // zf
	__int64 v28; // r9
	__int64 v29; // r8
	char* v30; // rdx
	__int64 v31; // r9
	__int16 v32; // ax
	__int64 v33; // rdi
	const wchar_t* v34; // rbx
	wchar_t* v35; // rax
	int v36; // ecx
	bool v37; // zf
	_WORD* v38; // rax
	__int64 v39; // r14
	int v40; // edx
	__int64 v41; // rdi
	const wchar_t* v42; // rbx
	wchar_t* v43; // rax
	int v44; // edx
	bool v45; // zf
	__int64 v46; // rdi
	const wchar_t* v47; // rbx
	wchar_t* v48; // rax
	int v49; // edx
	bool v50; // zf
	_WORD* v51; // rax
	__int64 v52; // rdi
	const wchar_t* v53; // rbx
	wchar_t* v54; // rax
	int v55; // edx
	bool v56; // zf
	__int64 v57; // rsi
	int v58; // ebx
	unsigned __int16** v59; // rdi
	unsigned __int16* v60; // rdx
	unsigned __int64 v61; // r8
	__int64 v62; // rdi
	char* v63; // rsi
	const wchar_t* v64; // rbx
	wchar_t* v65; // rax
	int v66; // edx
	bool v67; // zf
	_WORD* v68; // rax
	__int64 v69; // rdi
	const wchar_t* v70; // rbx
	wchar_t* v71; // rax
	int v72; // edx
	bool v73; // zf
	__int64 v74; // rsi
	int v75; // ebx
	unsigned __int16** v76; // rdi
	unsigned __int16* v77; // rdx
	unsigned __int64 v78; // r8
	__int64 v79; // rdi
	const wchar_t* v80; // rbx
	wchar_t* v81; // rax
	int v82; // edx
	bool v83; // zf
	__int64 v84; // rax
	__int64 v85; // rsi
	__int64 v86; // rcx
	int v87; // ebx
	unsigned __int16** v88; // rdi
	unsigned __int16* v89; // rdx
	unsigned __int64 v90; // r8
	int v91; // ecx
	void(__fastcall * v92)(__int64, char*, char*); // r9
	__int64 v93; // rax
	__int64 v94; // rdi
	char* v95; // rsi
	const wchar_t* v96; // rbx
	wchar_t* v97; // rax
	int v98; // edx
	bool v99; // zf
	_WORD* v100; // rax
	__int64 v101; // rdi
	char* v102; // rsi
	const wchar_t* v103; // rbx
	wchar_t* v104; // rax
	int v105; // edx
	bool v106; // zf
	_WORD* v107; // rax
	__int64 v108; // rcx
	int i; // eax
	int v110; // eax
	int k; // eax
	int m; // eax
	__int64 v113; // rcx
	__int64* v114; // rax
	__int64* v115; // rax
	__int64 v116; // rcx
	__int64 v117; // [rsp+28h] [rbp-E0h] BYREF
	__int64 v118; // [rsp+30h] [rbp-D8h]
	__int64 v119; // [rsp+38h] [rbp-D0h] BYREF
	__int64(__fastcall * *v120)(); // [rsp+48h] [rbp-C0h] BYREF
	__int64 v121; // [rsp+58h] [rbp-B0h]
	__int64 v122; // [rsp+60h] [rbp-A8h]
	__int64 v123; // [rsp+68h] [rbp-A0h]
	__int64 v124; // [rsp+88h] [rbp-80h]
	__int64 v125; // [rsp+90h] [rbp-78h]
	int v126; // [rsp+A4h] [rbp-64h]
	__int64 v127; // [rsp+B0h] [rbp-58h]
	__int64 v128; // [rsp+B8h] [rbp-50h]
	__int64(__fastcall * *v129)(); // [rsp+C8h] [rbp-40h]
	char* v130; // [rsp+D0h] [rbp-38h]
	char v131; // [rsp+D8h] [rbp-30h] BYREF
	int v132; // [rsp+12Ch] [rbp+24h]
	__int64 v133; // [rsp+130h] [rbp+28h]
	__int128 v134; // [rsp+138h] [rbp+30h]
	__int64(__fastcall * *v135)(); // [rsp+148h] [rbp+40h]
	char* v136; // [rsp+150h] [rbp+48h]
	char v137; // [rsp+158h] [rbp+50h] BYREF
	int v138; // [rsp+1ACh] [rbp+A4h]
	__int64 v139; // [rsp+1B0h] [rbp+A8h]
	__int128 v140; // [rsp+1B8h] [rbp+B0h]
	__int64(__fastcall * *v141)(); // [rsp+1C8h] [rbp+C0h]
	char* v142; // [rsp+1D0h] [rbp+C8h]
	char v143; // [rsp+1D8h] [rbp+D0h] BYREF
	int v144; // [rsp+22Ch] [rbp+124h]
	__int64 v145; // [rsp+230h] [rbp+128h]
	__int128 v146; // [rsp+238h] [rbp+130h]
	__int64(__fastcall * *j)(); // [rsp+248h] [rbp+140h]
	char* v148; // [rsp+250h] [rbp+148h]
	char v149; // [rsp+258h] [rbp+150h] BYREF
	int v150; // [rsp+2ACh] [rbp+1A4h]
	__int64 v151; // [rsp+2B0h] [rbp+1A8h]
	__int128 v152; // [rsp+2B8h] [rbp+1B0h]
	int v153[17]; // [rsp+2C8h] [rbp+1C0h] BYREF
	char v154[316]; // [rsp+30Ch] [rbp+204h] BYREF

	v5 = a4;
	LODWORD(v118) = a4;
	sub_1401A72E0((__int64)&v120);
	sub_1401A59A0((__int64)&v120);
	v8 = v127;
	v126 = 0;
	v127 = 0i64;
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
	sub_14018B900(v128, 0);
	v128 = 0i64;
	v117 = 0i64;
	v10 = sub_1401B6D00(v9, a2, &v117);
	if (v10 >= 0)
	{
		v12 = v117;
		v11 = sub_1401A7C70((__int64)&v120, v117);
		if (v12)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
	}
	else
	{
		v11 = sub_1401A81B0((__int64)&v120, v10, (__int64)a2);
		if (v117)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v117 + 8i64))(v117);
	}
	if (v11 >= 0)
		goto LABEL_242;
	sub_1401A59A0((__int64)&v120);
	v13 = v127;
	v126 = 0;
	v127 = 0i64;
	if (v13)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
	sub_14018B900(v128, 0);
	v128 = 0i64;
	v117 = 0i64;
	v15 = sub_1401B6D00(v14, (const __m128i*)L"UI\\InputMap_Base.xml", &v117);
	if (v15 >= 0)
	{
		v19 = v117;
		v18 = sub_1401A7C70((__int64)&v120, v117);
		if (v19)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
	}
	else
	{
		if (v126 >= 0)
		{
			v126 = v15;
			v16 = sub_14018D540(&v119, (__int64)L"%0.8x %s", (unsigned int)v15, L"UI\\InputMap_Base.xml");
			v17 = v127;
			v127 = *v16;
			*v16 = v17;
			if (v119)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v119 - 16) + 8i64))(v119 - 16);
		}
		v18 = v126;
		if (v117)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v117 + 8i64))(v117);
	}
	if (v18 >= 0)
	{
	LABEL_242:
		v20 = sub_1401A5AE0((__int64)&v120, L"InputBindings");
		if (v20)
		{
			v21 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
			if (v21)
			{
				if (!a3 && !v5)
					(*(void(__fastcall**)(_QWORD*))(*a1 + 16i64))(a1);
				v22 = sub_1401A5AE0(v21, L"Input");
				if (v22)
				{
					v23 = L"Name";
					do
					{
						sub_1407E4830(v153, 0i64, 0x17Cui64);
						v24 = *(_QWORD*)(v22 + 96);
						if (v24)
						{
							while (1)
							{
								v25 = (wchar_t*)sub_1401A4F40(v24 + 8);
								if (v25 == L"Name")
									break;
								v26 = 0;
								if (!*v25)
									goto LABEL_37;
								do
								{
									if (!*v23 || *v25 != *v23)
										break;
									v27 = v26 == 0x7FFFFFFF;
									if (v26 == 0x7FFFFFFF)
										goto LABEL_35;
									++v25;
									++v23;
									++v26;
								} while (*v25);
								v27 = v26 == 0x7FFFFFFF;
							LABEL_35:
								if (v27)
									break;
								if (!*v25)
								{
								LABEL_37:
									if (!*v23)
										break;
								}
								v24 = *(_QWORD*)(v24 + 56);
								if (!v24)
									goto LABEL_47;
								v23 = L"Name";
							}
							v28 = sub_1401A4F40(v24 + 32);
							if (v28)
							{
								v29 = 32i64;
								v30 = v154;
								v31 = v28 - (_QWORD)v154;
								while (v29 != -2147483614)
								{
									v32 = *(_WORD*)&v30[v31];
									if (!v32)
										break;
									*(_WORD*)v30 = v32;
									v30 += 2;
									if (!--v29)
									{
										v30 -= 2;
										break;
									}
								}
								*(_WORD*)v30 = 0;
							}
						}
					LABEL_47:
						v33 = *(_QWORD*)(v22 + 96);
						if (v33)
						{
							while (1)
							{
								v34 = L"ActionId";
								v35 = (wchar_t*)sub_1401A4F40(v33 + 8);
								if (v35 == L"ActionId")
									break;
								v36 = 0;
								if (!*v35)
									goto LABEL_57;
								do
								{
									if (!*v34 || *v35 != *v34)
										break;
									v37 = v36 == 0x7FFFFFFF;
									if (v36 == 0x7FFFFFFF)
										goto LABEL_55;
									++v35;
									++v34;
									++v36;
								} while (*v35);
								v37 = v36 == 0x7FFFFFFF;
							LABEL_55:
								if (v37)
									break;
								if (!*v35)
								{
								LABEL_57:
									if (!*v34)
										break;
								}
								v33 = *(_QWORD*)(v33 + 56);
								if (!v33)
									goto LABEL_61;
							}
							v38 = (_WORD*)sub_1401A4F40(v33 + 32);
							sub_1407DF428(v38, (__int64)L"%d", v153);
						}
					LABEL_61:
						LODWORD(v117) = 0;
						v39 = sub_1401A5AE0(v22, L"Key");
						if (v39)
						{
							do
							{
								v40 = v117;
								if ((unsigned __int64)(int)v117 >= 8)
									break;
								v41 = *(_QWORD*)(v39 + 96);
								if (v41)
								{
									while (1)
									{
										v42 = L"Order";
										v43 = (wchar_t*)sub_1401A4F40(v41 + 8);
										if (v43 == L"Order")
											break;
										v44 = 0;
										if (!*v43)
											goto LABEL_73;
										do
										{
											if (!*v42 || *v43 != *v42)
												break;
											v45 = v44 == 0x7FFFFFFF;
											if (v44 == 0x7FFFFFFF)
												goto LABEL_71;
											++v43;
											++v42;
											++v44;
										} while (*v43);
										v45 = v44 == 0x7FFFFFFF;
									LABEL_71:
										if (v45)
											break;
										if (!*v43)
										{
										LABEL_73:
											if (!*v42)
												break;
										}
										v41 = *(_QWORD*)(v41 + 56);
										if (!v41)
											goto LABEL_91;
									}
									if (sub_1401A4F40(v41 + 32))
									{
										v46 = *(_QWORD*)(v39 + 96);
										if (v46)
										{
											while (1)
											{
												v47 = L"Order";
												v48 = (wchar_t*)sub_1401A4F40(v46 + 8);
												if (v48 == L"Order")
													break;
												v49 = 0;
												if (!*v48)
													goto LABEL_87;
												do
												{
													if (!*v47 || *v48 != *v47)
														break;
													v50 = v49 == 0x7FFFFFFF;
													if (v49 == 0x7FFFFFFF)
														goto LABEL_85;
													++v48;
													++v47;
													++v49;
												} while (*v48);
												v50 = v49 == 0x7FFFFFFF;
											LABEL_85:
												if (v50)
													break;
												if (!*v48)
												{
												LABEL_87:
													if (!*v47)
														break;
												}
												v46 = *(_QWORD*)(v46 + 56);
												if (!v46)
													goto LABEL_91;
											}
											v51 = (_WORD*)sub_1401A4F40(v46 + 32);
											sub_1407DF428(v51, (__int64)L"%d", &v117);
										}
									}
								LABEL_91:
									v40 = v117;
								}
								if ((unsigned __int64)v40 >= 8)
									v40 = 7;
								LODWORD(v117) = v40;
								v52 = *(_QWORD*)(v39 + 96);
								if (v52)
								{
									while (1)
									{
										v53 = L"Device";
										v54 = (wchar_t*)sub_1401A4F40(v52 + 8);
										if (v54 == L"Device")
											break;
										v55 = 0;
										if (!*v54)
											goto LABEL_104;
										do
										{
											if (!*v53 || *v54 != *v53)
												break;
											v56 = v55 == 0x7FFFFFFF;
											if (v55 == 0x7FFFFFFF)
												goto LABEL_102;
											++v54;
											++v53;
											++v55;
										} while (*v54);
										v56 = v55 == 0x7FFFFFFF;
									LABEL_102:
										if (v56)
											break;
										if (!*v54)
										{
										LABEL_104:
											if (!*v53)
												break;
										}
										v52 = *(_QWORD*)(v52 + 56);
										if (!v52)
											goto LABEL_114;
									}
									v57 = sub_1401A4F40(v52 + 32);
									if (v57)
									{
										v58 = 0;
										v59 = off_140B52DA8;
										do
										{
											v60 = *v59;
											v61 = -1i64;
											do
												++v61;
											while (v60[v61]);
											if (!(unsigned int)sub_14018E3E0(v57, v60, v61))
												*(_DWORD*)&v154[28 * (int)v117 + 88] = v58;
											++v58;
											++v59;
										} while ((unsigned __int64)v58 < 3);
									}
								}
							LABEL_114:
								v62 = *(_QWORD*)(v39 + 96);
								v63 = &v154[28 * (int)v117 + 96];
								if (v62)
								{
									while (1)
									{
										v64 = L"Code";
										v65 = (wchar_t*)sub_1401A4F40(v62 + 8);
										if (v65 == L"Code")
											break;
										v66 = 0;
										if (*v65)
										{
											do
											{
												if (!*v64 || *v65 != *v64)
													break;
												v67 = v66 == 0x7FFFFFFF;
												if (v66 == 0x7FFFFFFF)
													goto LABEL_122;
												++v65;
												++v64;
												++v66;
											} while (*v65);
											v67 = v66 == 0x7FFFFFFF;
										LABEL_122:
											if (v67)
												break;
										}
										if (!*v65 && !*v64)
											break;
										v62 = *(_QWORD*)(v62 + 56);
										if (!v62)
											goto LABEL_128;
									}
									v68 = (_WORD*)sub_1401A4F40(v62 + 32);
									sub_1407DF428(v68, (__int64)L"%d", v63);
								}
							LABEL_128:
								v69 = *(_QWORD*)(v39 + 96);
								if (v69)
								{
									while (1)
									{
										v70 = L"EventType";
										v71 = (wchar_t*)sub_1401A4F40(v69 + 8);
										if (v71 == L"EventType")
											break;
										v72 = 0;
										if (*v71)
										{
											do
											{
												if (!*v70 || *v71 != *v70)
													break;
												v73 = v72 == 0x7FFFFFFF;
												if (v72 == 0x7FFFFFFF)
													goto LABEL_136;
												++v71;
												++v70;
												++v72;
											} while (*v71);
											v73 = v72 == 0x7FFFFFFF;
										LABEL_136:
											if (v73)
												break;
										}
										if (!*v71 && !*v70)
											break;
										v69 = *(_QWORD*)(v69 + 56);
										if (!v69)
											goto LABEL_149;
									}
									v74 = sub_1401A4F40(v69 + 32);
									if (v74)
									{
										v75 = 0;
										v76 = off_140B52E00;
										while (1)
										{
											v77 = *v76;
											v78 = -1i64;
											do
												++v78;
											while (v77[v78]);
											if (!(unsigned int)sub_14018E3E0(v74, v77, v78))
												break;
											++v75;
											++v76;
											if ((unsigned __int64)v75 >= 6)
												goto LABEL_149;
										}
										*(_DWORD*)&v154[28 * (int)v117 + 100] = v75;
									}
								}
							LABEL_149:
								v79 = *(_QWORD*)(v39 + 96);
								if (v79)
								{
									while (1)
									{
										v80 = L"MetaKeys";
										v81 = (wchar_t*)sub_1401A4F40(v79 + 8);
										if (v81 == L"MetaKeys")
											break;
										v82 = 0;
										if (*v81)
										{
											do
											{
												if (!*v80 || *v81 != *v80)
													break;
												v83 = v82 == 0x7FFFFFFF;
												if (v82 == 0x7FFFFFFF)
													goto LABEL_157;
												++v81;
												++v80;
												++v82;
											} while (*v81);
											v83 = v82 == 0x7FFFFFFF;
										LABEL_157:
											if (v83)
												break;
										}
										if (!*v81 && !*v80)
											break;
										v79 = *(_QWORD*)(v79 + 56);
										if (!v79)
											goto LABEL_175;
									}
									v84 = sub_1401A4F40(v79 + 32);
									v85 = v84;
									if (v84)
									{
										v86 = -1i64;
										do
											++v86;
										while (*(_WORD*)(v84 + 2 * v86));
										if (v86)
										{
											v87 = 1;
											v88 = off_140B52DC8;
											do
											{
												v89 = *v88;
												v90 = -1i64;
												do
													++v90;
												while (v89[v90]);
												if (!(unsigned int)sub_14018E3E0(v85, v89, v90))
												{
													if (v87 > 0)
														v91 = v87;
													else
														v91 = 0;
													*(_DWORD*)&v154[28 * (int)v117 + 92] = v91;
												}
												++v87;
												++v88;
											} while ((unsigned __int64)v87 < 8);
										}
									}
								}
							LABEL_175:
								v92 = (void(__fastcall*)(__int64, char*, char*))a1[8];
								v93 = 28i64 * (int)v117;
								if (v92)
								{
									v92(v39, &v154[v93 + 104], &v154[v93 + 108]);
								}
								else
								{
									v94 = *(_QWORD*)(v39 + 96);
									v95 = &v154[v93 + 104];
									if (v94)
									{
										while (1)
										{
											v96 = L"State";
											v97 = (wchar_t*)sub_1401A4F40(v94 + 8);
											if (v97 == L"State")
												break;
											v98 = 0;
											if (*v97)
											{
												do
												{
													if (!*v96 || *v97 != *v96)
														break;
													v99 = v98 == 0x7FFFFFFF;
													if (v98 == 0x7FFFFFFF)
														goto LABEL_185;
													++v97;
													++v96;
													++v98;
												} while (*v97);
												v99 = v98 == 0x7FFFFFFF;
											LABEL_185:
												if (v99)
													break;
											}
											if (!*v97 && !*v96)
												break;
											v94 = *(_QWORD*)(v94 + 56);
											if (!v94)
												goto LABEL_191;
										}
										v100 = (_WORD*)sub_1401A4F40(v94 + 32);
										sub_1407DF428(v100, (__int64)L"%d", v95);
									}
								LABEL_191:
									v101 = *(_QWORD*)(v39 + 96);
									v102 = &v154[28 * (int)v117 + 108];
									if (v101)
									{
										while (1)
										{
											v103 = L"StateMask";
											v104 = (wchar_t*)sub_1401A4F40(v101 + 8);
											if (v104 == L"StateMask")
												break;
											v105 = 0;
											if (*v104)
											{
												do
												{
													if (!*v103 || *v104 != *v103)
														break;
													v106 = v105 == 0x7FFFFFFF;
													if (v105 == 0x7FFFFFFF)
														goto LABEL_199;
													++v104;
													++v103;
													++v105;
												} while (*v104);
												v106 = v105 == 0x7FFFFFFF;
											LABEL_199:
												if (v106)
													break;
											}
											if (!*v104 && !*v103)
												break;
											v101 = *(_QWORD*)(v101 + 56);
											if (!v101)
												goto LABEL_205;
										}
										v107 = (_WORD*)sub_1401A4F40(v101 + 32);
										sub_1407DF428(v107, (__int64)L"%d", v102);
									}
								}
							LABEL_205:
								LODWORD(v117) = v117 + 1;
								v39 = sub_1401A5BC0(v39, L"Key");
							} while (v39);
							v5 = v118;
						}
						(*(void(__fastcall**)(_QWORD*, __int64, int*, _QWORD))(*a1 + 80i64))(a1, 1i64, v153, v5);
						v22 = sub_1401A5BC0(v22, L"Input");
						v23 = L"Name";
					} while (v22);
				}
			}
		}
	}
	v120 = off_140B5EB10;
	sub_1401A59A0((__int64)&v120);
	v108 = v127;
	v126 = 0;
	v127 = 0i64;
	if (v108)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v108 - 16) + 8i64))(v108 - 16);
	sub_14018B900(v128, 0);
	v128 = 0i64;
	j = off_140B5EA18;
	for (i = v150; v150; i = v150)
	{
		v150 = i - 1;
		sub_14018B900(*(_QWORD*)&v148[8 * i - 8], 0);
	}
	v151 = 0i64;
	v152 = 0i64;
	if (v148 != &v149)
		sub_14018B900((__int64)v148, 0);
	v141 = off_140B5EA48;
	v110 = v144;
	for (j = &off_140B5EAD8; v144; v110 = v144)
	{
		v144 = v110 - 1;
		sub_14018B900(*(_QWORD*)&v142[8 * v110 - 8], 0);
	}
	v145 = 0i64;
	v146 = 0i64;
	if (v142 != &v143)
		sub_14018B900((__int64)v142, 0);
	v141 = &off_140B5EAD8;
	v135 = off_140B5EA78;
	for (k = v138; v138; k = v138)
	{
		v138 = k - 1;
		sub_14018B900(*(_QWORD*)&v136[8 * k - 8], 0);
	}
	v139 = 0i64;
	v140 = 0i64;
	if (v136 != &v137)
		sub_14018B900((__int64)v136, 0);
	v135 = &off_140B5EAD8;
	v129 = off_140B5EAA8;
	for (m = v132; v132; m = v132)
	{
		v132 = m - 1;
		sub_14018B900(*(_QWORD*)&v130[8 * m - 8], 0);
	}
	v133 = 0i64;
	v134 = 0i64;
	if (v130 != &v131)
		sub_14018B900((__int64)v130, 0);
	v129 = &off_140B5EAD8;
	if (v127)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v127 - 16) + 8i64))(v127 - 16);
	v120 = off_140B5EDE0;
	sub_1401A59A0((__int64)&v120);
	v113 = v121;
	if (v121)
	{
		v114 = *(__int64**)(v121 + 48);
		if (&v120 == (__int64(__fastcall***)())v114)
			*(_QWORD*)(v121 + 48) = v114[9];
		v115 = *(__int64**)(v113 + 56);
		if (&v120 == (__int64(__fastcall***)())v115)
			*(_QWORD*)(v113 + 56) = v115[8];
		v116 = v124;
		if (v124)
		{
			*(_QWORD*)(v124 + 72) = v125;
			v116 = v124;
		}
		if (v125)
			*(_QWORD*)(v125 + 64) = v116;
		v121 = 0i64;
	}
	if ((v122 & 0x200) != 0)
		sub_14018B900(v123, 0);
}
// 1407AD3FE: conditional instruction was optimized away because rdi.8!=0
// 1407AD457: conditional instruction was optimized away because r8.8!=0
// 1407AD4D7: conditional instruction was optimized away because rdi.8!=0
// 1407AD5AE: conditional instruction was optimized away because rdi.8!=0
// 1407AD64B: conditional instruction was optimized away because rdi.8!=0
// 1407AD6FB: conditional instruction was optimized away because rdi.8!=0
// 1407AD7FA: conditional instruction was optimized away because rdi.8!=0
// 1407AD88F: conditional instruction was optimized away because rdi.8!=0
// 1407AD972: conditional instruction was optimized away because rdi.8!=0
// 1407AD9E4: conditional instruction was optimized away because ebx.4>=1
// 1407AD9EB: conditional instruction was optimized away because eax.4>=1
// 1407ADACA: conditional instruction was optimized away because rdi.8!=0
// 1407ADB7A: conditional instruction was optimized away because rdi.8!=0
// 1407AD1CB: variable 'v9' is possibly undefined
// 1407AD262: variable 'v14' is possibly undefined
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140A31790: using guessed type wchar_t aName_6[5];
// 140A45328: using guessed type wchar_t a08xS[9];
// 140B52B90: using guessed type wchar_t aInputbindings[14];
// 140B52BB0: using guessed type wchar_t aInput_2[6];
// 140B52C48: using guessed type wchar_t aKey_3[4];
// 140B52C50: using guessed type wchar_t aActionid[9];
// 140B52C80: using guessed type wchar_t aOrder_0[6];
// 140B52C90: using guessed type wchar_t aDevice[7];
// 140B52CA0: using guessed type wchar_t aCode[5];
// 140B52CB0: using guessed type wchar_t aEventtype[10];
// 140B52CC8: using guessed type wchar_t aMetakeys[9];
// 140B52CE0: using guessed type wchar_t aState[6];
// 140B52CF0: using guessed type wchar_t aStatemask[10];
// 140B52D18: using guessed type wchar_t aUiInputmapBase_1[21];
// 140B52DA8: using guessed type wchar_t *off_140B52DA8[3];
// 140B52DC8: using guessed type wchar_t *off_140B52DC8[13];
// 140B52E00: using guessed type wchar_t *off_140B52E00[6];
// 140B5EA18: using guessed type __int64 (__fastcall *off_140B5EA18[25])();
// 140B5EA48: using guessed type __int64 (__fastcall *off_140B5EA48[19])();
// 140B5EA78: using guessed type __int64 (__fastcall *off_140B5EA78[13])();
// 140B5EAA8: using guessed type __int64 (__fastcall *off_140B5EAA8[7])();
// 140B5EAD8: using guessed type __int64 (__fastcall *off_140B5EAD8)();
// 140B5EB10: using guessed type __int64 (__fastcall *off_140B5EB10[35])();
// 140B5EDE0: using guessed type __int64 (__fastcall *off_140B5EDE0[12])();
// 1407AD130: using guessed type int var_1C0[17];

