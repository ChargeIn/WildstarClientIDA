//----- (000000014063FC60) ----------------------------------------------------
__int64 __fastcall sub_14063FC60(__int64 a1, __int64 a2)
{
	__int64 v2; // r15
	__int64 v3; // rdx
	__int64 v4; // rcx
	__int64 v5; // r14
	__int64 v6; // rdi
	const wchar_t* v7; // rbx
	wchar_t* v8; // rax
	bool v9; // zf
	unsigned __int16* v10; // rax
	__int64 v11; // rsi
	__int64 v12; // r12
	__int64 v13; // rdi
	const wchar_t* v14; // rbx
	wchar_t* v15; // rax
	int v16; // ecx
	bool v17; // zf
	unsigned __int16* v18; // r9
	int v19; // r8d
	__int64 v20; // rdx
	__int64 v21; // r13
	__int64 v22; // rax
	__int64 v23; // r14
	__int64 v24; // rax
	__int64 v25; // rsi
	__int64 v26; // rdi
	const wchar_t* v27; // rbx
	wchar_t* v28; // rax
	int v29; // ecx
	bool v30; // zf
	_WORD* v31; // rax
	__int64 v32; // rcx
	__int64 v33; // rbx
	__int64 v34; // r8
	__int64 v35; // rdx
	_WORD* v36; // rcx
	__int64 v37; // r8
	__int16 v38; // ax
	__int64 v39; // rax
	__int64 v40; // rsi
	__int64 v41; // rdi
	const wchar_t* v42; // rbx
	wchar_t* v43; // rax
	int v44; // ecx
	bool v45; // zf
	_WORD* v46; // rax
	__int64 v47; // rcx
	__int64 v48; // rbx
	WCHAR* v49; // rax
	int v50; // eax
	__int64 v51; // rax
	__int64 v52; // rsi
	__int64 v53; // rdi
	const wchar_t* v54; // rbx
	wchar_t* v55; // rax
	int v56; // ecx
	bool v57; // zf
	_WORD* v58; // rax
	__int64 v59; // rcx
	__int64 v60; // rbx
	WCHAR* v61; // rax
	__m128 v62; // xmm0
	__m128i v63; // xmm1
	__m128i v64; // xmm1
	__int64 v65; // rax
	__int64 v66; // rsi
	__int64 v67; // rdi
	const wchar_t* v68; // rbx
	wchar_t* v69; // rax
	int v70; // ecx
	bool v71; // zf
	_WORD* v72; // rax
	__int64 v73; // rbx
	__int64* v74; // rdi
	__int64 v75; // rax
	__int64 v76; // rdx
	__int64 v77; // rcx
	unsigned __int16* v78; // rax
	char v79; // cl
	__int64 v80; // rbx
	__int64 v81; // rax
	unsigned int v82; // esi
	__int64 v83; // r15
	__int64 v84; // rdi
	const wchar_t* v85; // rbx
	wchar_t* v86; // rax
	int v87; // ecx
	bool v88; // zf
	_WORD* v89; // rax
	__int64 v90; // rdi
	const wchar_t* v91; // rbx
	wchar_t* v92; // rax
	int v93; // ecx
	bool v94; // zf
	__int64 v95; // rax
	__int64 v96; // r14
	__int64 v97; // rdi
	const wchar_t* v98; // rbx
	wchar_t* v99; // rax
	int v100; // ecx
	bool v101; // zf
	unsigned __int16* v102; // rax
	__int64 v103; // rdx
	__int64 v104; // rcx
	__int64 v105; // rdi
	const wchar_t* v106; // rbx
	wchar_t* v107; // rax
	int v108; // ecx
	bool v109; // zf
	__int64 v110; // r14
	unsigned int v111; // eax
	unsigned __int16* v112; // rdx
	unsigned int v113; // edi
	__int64 v114; // rax
	__int64 v115; // rbx
	unsigned __int64 v116; // rcx
	__int64 v117; // rax
	__int64 v118; // rbx
	__int64 v119; // rcx
	__int64 v120; // rbx
	WCHAR* v121; // rax
	float v122; // xmm1_4
	__int64 v123; // rax
	__int64 v124; // rbx
	__int64 v125; // rcx
	__int64 v126; // rbx
	WCHAR* v127; // rax
	float v128; // xmm1_4
	_WORD* v129; // rax
	__int64 v130; // rbx
	_DWORD* v131; // rsi
	_QWORD* v132; // rdi
	__int64 v133; // rdx
	__int64 v134; // rcx
	unsigned __int16* v135; // rax
	__int64 v136; // rbx
	int v138; // [rsp+20h] [rbp-60h] BYREF
	int v139; // [rsp+24h] [rbp-5Ch] BYREF
	int v140; // [rsp+28h] [rbp-58h] BYREF
	int v141; // [rsp+2Ch] [rbp-54h] BYREF
	int v142; // [rsp+30h] [rbp-50h] BYREF
	int v143; // [rsp+34h] [rbp-4Ch] BYREF
	__int64 v144; // [rsp+38h] [rbp-48h]
	__int64 i; // [rsp+40h] [rbp-40h]
	__m128 v146; // [rsp+50h] [rbp-30h] BYREF
	int v148; // [rsp+B0h] [rbp+30h] BYREF
	int v149; // [rsp+B8h] [rbp+38h] BYREF

	v2 = a2;
	v5 = sub_1401A5AE0(a1, L"Floater");
	for (i = v5; v5; i = v5)
	{
		v6 = *(_QWORD*)(v5 + 96);
		if (v6)
		{
			while (1)
			{
				v7 = L"type";
				v8 = (wchar_t*)sub_1401A4F40(v6 + 8);
				if (v8 == L"type")
					break;
				v4 = 0i64;
				if (!*v8)
					goto LABEL_12;
				do
				{
					v3 = *v7;
					if (!(_WORD)v3 || *v8 != (_WORD)v3)
						break;
					v9 = (_DWORD)v4 == 0x7FFFFFFF;
					if ((_DWORD)v4 == 0x7FFFFFFF)
						goto LABEL_10;
					++v8;
					++v7;
					v4 = (unsigned int)(v4 + 1);
				} while (*v8);
				v9 = (_DWORD)v4 == 0x7FFFFFFF;
			LABEL_10:
				if (v9)
					break;
				if (!*v8)
				{
				LABEL_12:
					if (!*v7)
						break;
				}
				v6 = *(_QWORD*)(v6 + 56);
				if (!v6)
					goto LABEL_14;
			}
			v10 = (unsigned __int16*)sub_1401A4F40(v6 + 32);
		}
		else
		{
		LABEL_14:
			v10 = 0i64;
		}
		if ((unsigned int)sub_140640960(v4, v3, v10, &v143))
		{
			v11 = v2 + 288i64 * v143;
			v144 = v11;
			v12 = sub_1401A5AE0(v5, L"Options");
			if (v12)
			{
				do
				{
					v13 = *(_QWORD*)(v12 + 96);
					if (v13)
					{
						while (1)
						{
							v14 = L"type";
							v15 = (wchar_t*)sub_1401A4F40(v13 + 8);
							if (v15 == L"type")
								break;
							v16 = 0;
							if (*v15)
							{
								do
								{
									if (!*v14 || *v15 != *v14)
										break;
									v17 = v16 == 0x7FFFFFFF;
									if (v16 == 0x7FFFFFFF)
										goto LABEL_25;
									++v15;
									++v14;
									++v16;
								} while (*v15);
								v17 = v16 == 0x7FFFFFFF;
							LABEL_25:
								if (v17)
									break;
							}
							if (!*v15 && !*v14)
								break;
							v13 = *(_QWORD*)(v13 + 56);
							if (!v13)
								goto LABEL_29;
						}
						v18 = (unsigned __int16*)sub_1401A4F40(v13 + 32);
					}
					else
					{
					LABEL_29:
						v18 = 0i64;
					}
					v19 = *v18;
					v20 = 0i64;
					if (v19 == 78)
					{
						while ((_WORD)v19)
						{
							v19 = v18[++v20];
							if (v19 != aNormal_4[v20])
								goto LABEL_256;
						}
						v21 = v11 + 16;
						v22 = sub_1401A5AE0(v12, L"Font");
						v23 = v22;
						if (v22)
						{
							v24 = sub_1401A5AE0(v22, L"Face");
							v148 = 0;
							v25 = v24;
							if (v24)
							{
								v26 = *(_QWORD*)(v24 + 96);
								if (!v26)
									goto LABEL_53;
								while (1)
								{
									v27 = L"derived";
									v28 = (wchar_t*)sub_1401A4F40(v26 + 8);
									if (v28 == L"derived")
										break;
									v29 = 0;
									if (!*v28)
										goto LABEL_48;
									do
									{
										if (!*v27 || *v28 != *v27)
											break;
										v30 = v29 == 0x7FFFFFFF;
										if (v29 == 0x7FFFFFFF)
											goto LABEL_46;
										++v28;
										++v27;
										++v29;
									} while (*v28);
									v30 = v29 == 0x7FFFFFFF;
								LABEL_46:
									if (v30)
										break;
									if (!*v28)
									{
									LABEL_48:
										if (!*v27)
											break;
									}
									v26 = *(_QWORD*)(v26 + 56);
									if (!v26)
										goto LABEL_53;
								}
								v31 = (_WORD*)sub_1401A4F40(v26 + 32);
								if ((unsigned int)sub_1407DF428(v31, (__int64)L"%d", &v148) != 1 || !v148)
								{
								LABEL_53:
									v32 = *(_QWORD*)(v25 + 48);
									if (v32
										&& (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v32 + 16i64))(v32)
										&& (v33 = *(_QWORD*)(v25 + 48), !(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v33 + 48i64))(v33)))
									{
										v34 = sub_1401A4F40(v33 + 24);
									}
									else
									{
										v34 = 0i64;
									}
									v35 = 32i64;
									v36 = (_WORD*)v21;
									v37 = v34 - v21;
									while (v35 != -2147483614)
									{
										v38 = *(_WORD*)((char*)v36 + v37);
										if (!v38)
											break;
										*v36++ = v38;
										if (!--v35)
										{
											--v36;
											break;
										}
									}
									*v36 = 0;
									*(_DWORD*)(v21 + 232) = 1;
								}
							}
							v39 = sub_1401A5AE0(v23, L"Size");
							v149 = 0;
							v40 = v39;
							if (v39)
							{
								v41 = *(_QWORD*)(v39 + 96);
								if (!v41)
									goto LABEL_80;
								while (1)
								{
									v42 = L"derived";
									v43 = (wchar_t*)sub_1401A4F40(v41 + 8);
									if (v43 == L"derived")
										break;
									v44 = 0;
									if (!*v43)
										goto LABEL_75;
									do
									{
										if (!*v42 || *v43 != *v42)
											break;
										v45 = v44 == 0x7FFFFFFF;
										if (v44 == 0x7FFFFFFF)
											goto LABEL_73;
										++v43;
										++v42;
										++v44;
									} while (*v43);
									v45 = v44 == 0x7FFFFFFF;
								LABEL_73:
									if (v45)
										break;
									if (!*v43)
									{
									LABEL_75:
										if (!*v42)
											break;
									}
									v41 = *(_QWORD*)(v41 + 56);
									if (!v41)
										goto LABEL_80;
								}
								v46 = (_WORD*)sub_1401A4F40(v41 + 32);
								if ((unsigned int)sub_1407DF428(v46, (__int64)L"%d", &v149) != 1 || !v149)
								{
								LABEL_80:
									v47 = *(_QWORD*)(v40 + 48);
									if (v47
										&& (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v47 + 16i64))(v47)
										&& (v48 = *(_QWORD*)(v40 + 48), !(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v48 + 48i64))(v48)))
									{
										v49 = (WCHAR*)sub_1401A4F40(v48 + 24);
									}
									else
									{
										v49 = 0i64;
									}
									v50 = sub_1407E1970(v49, 0i64, 0xAu);
									*(_DWORD*)(v21 + 64) = v50;
									if (v50)
										*(_DWORD*)(v21 + 236) = 1;
								}
							}
							v51 = sub_1401A5AE0(v23, L"Color");
							v142 = 0;
							v52 = v51;
							if (v51)
							{
								v53 = *(_QWORD*)(v51 + 96);
								if (!v53)
									goto LABEL_103;
								while (1)
								{
									v54 = L"derived";
									v55 = (wchar_t*)sub_1401A4F40(v53 + 8);
									if (v55 == L"derived")
										break;
									v56 = 0;
									if (!*v55)
										goto LABEL_98;
									do
									{
										if (!*v54 || *v55 != *v54)
											break;
										v57 = v56 == 0x7FFFFFFF;
										if (v56 == 0x7FFFFFFF)
											goto LABEL_96;
										++v55;
										++v54;
										++v56;
									} while (*v55);
									v57 = v56 == 0x7FFFFFFF;
								LABEL_96:
									if (v57)
										break;
									if (!*v55)
									{
									LABEL_98:
										if (!*v54)
											break;
									}
									v53 = *(_QWORD*)(v53 + 56);
									if (!v53)
										goto LABEL_103;
								}
								v58 = (_WORD*)sub_1401A4F40(v53 + 32);
								if ((unsigned int)sub_1407DF428(v58, (__int64)L"%d", &v142) != 1 || !v142)
								{
								LABEL_103:
									v59 = *(_QWORD*)(v52 + 48);
									if (v59
										&& (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v59 + 16i64))(v59)
										&& (v60 = *(_QWORD*)(v52 + 48), !(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v60 + 48i64))(v60)))
									{
										v61 = (WCHAR*)sub_1401A4F40(v60 + 24);
									}
									else
									{
										v61 = 0i64;
									}
									v62 = _mm_max_ps((__m128)0i64, *sub_14018ECC0(&v146, v61));
									*(_DWORD*)(v21 + 240) = 1;
									v63 = _mm_shuffle_epi32(
										_mm_cvttps_epi32(
											_mm_add_ps(
												_mm_mul_ps(_mm_min_ps(v62, (__m128)xmmword_140B7B240), (__m128)xmmword_140B7B470),
												(__m128)xmmword_140B7AC50)),
										198);
									v64 = _mm_packus_epi16(v63, v63);
									*(_DWORD*)(v21 + 68) = _mm_cvtsi128_si32(_mm_packus_epi16(v64, v64));
								}
							}
							v65 = sub_1401A5AE0(v23, L"Flag");
							v141 = 0;
							v66 = v65;
							if (v65)
							{
								v67 = *(_QWORD*)(v65 + 96);
								if (!v67)
									goto LABEL_125;
								while (1)
								{
									v68 = L"derived";
									v69 = (wchar_t*)sub_1401A4F40(v67 + 8);
									if (v69 == L"derived")
										break;
									v70 = 0;
									if (!*v69)
										goto LABEL_120;
									do
									{
										if (!*v68 || *v69 != *v68)
											break;
										v71 = v70 == 0x7FFFFFFF;
										if (v70 == 0x7FFFFFFF)
											goto LABEL_118;
										++v69;
										++v68;
										++v70;
									} while (*v69);
									v71 = v70 == 0x7FFFFFFF;
								LABEL_118:
									if (v71)
										break;
									if (!*v69)
									{
									LABEL_120:
										if (!*v68)
											break;
									}
									v67 = *(_QWORD*)(v67 + 56);
									if (!v67)
										goto LABEL_125;
								}
								v72 = (_WORD*)sub_1401A4F40(v67 + 32);
								if ((unsigned int)sub_1407DF428(v72, (__int64)L"%d", &v141) != 1 || !v141)
								{
								LABEL_125:
									v73 = *(_QWORD*)(v66 + 48);
									if (v73)
									{
										while (1)
										{
											v74 = (__int64*)(**(__int64(__fastcall***)(__int64))v73)(v73);
											if (v74)
												break;
											v73 = *(_QWORD*)(v73 + 72);
											if (!v73)
												goto LABEL_128;
										}
									}
									else
									{
									LABEL_128:
										v74 = 0i64;
									}
									while (v74)
									{
										v75 = *v74;
										v138 = 0;
										if ((*(__int64(__fastcall**)(__int64*))(v75 + 48))(v74))
											v78 = 0i64;
										else
											v78 = (unsigned __int16*)sub_1401A4F40((__int64)(v74 + 3));
										if ((unsigned int)sub_140640AC0(v77, v76, v78, &v138))
										{
											v79 = v138;
											*(_DWORD*)(v21 + 244) = 1;
											*(_DWORD*)(v21 + 72) |= 1 << v79;
										}
										v80 = v74[9];
										if (v80)
										{
											while (1)
											{
												v74 = (__int64*)(**(__int64(__fastcall***)(__int64))v80)(v80);
												if (v74)
													break;
												v80 = *(_QWORD*)(v80 + 72);
												if (!v80)
													goto LABEL_138;
											}
										}
										else
										{
										LABEL_138:
											v74 = 0i64;
										}
									}
								}
							}
						}
						v81 = sub_1401A5AE0(v12, L"Location");
						v82 = 0;
						v83 = v81;
						v140 = 0;
						if (v81)
						{
							v84 = *(_QWORD*)(v81 + 96);
							if (!v84)
								goto LABEL_156;
							while (1)
							{
								v85 = L"derived";
								v86 = (wchar_t*)sub_1401A4F40(v84 + 8);
								if (v86 == L"derived")
									break;
								v87 = 0;
								if (*v86)
								{
									do
									{
										if (!*v85 || *v86 != *v85)
											break;
										v88 = v87 == 0x7FFFFFFF;
										if (v87 == 0x7FFFFFFF)
											goto LABEL_149;
										++v86;
										++v85;
										++v87;
									} while (*v86);
									v88 = v87 == 0x7FFFFFFF;
								LABEL_149:
									if (v88)
										break;
								}
								if (!*v86 && !*v85)
									break;
								v84 = *(_QWORD*)(v84 + 56);
								if (!v84)
									goto LABEL_156;
							}
							v89 = (_WORD*)sub_1401A4F40(v84 + 32);
							if ((unsigned int)sub_1407DF428(v89, (__int64)L"%d", &v140) != 1 || !v140)
							{
							LABEL_156:
								v90 = *(_QWORD*)(v83 + 96);
								if (v90)
								{
									while (1)
									{
										v91 = L"type";
										v92 = (wchar_t*)sub_1401A4F40(v90 + 8);
										if (v92 == L"type")
											break;
										v93 = 0;
										if (*v92)
										{
											do
											{
												if (!*v91 || *v92 != *v91)
													break;
												v94 = v93 == 0x7FFFFFFF;
												if (v93 == 0x7FFFFFFF)
													goto LABEL_164;
												++v92;
												++v91;
												++v93;
											} while (*v92);
											v94 = v93 == 0x7FFFFFFF;
										LABEL_164:
											if (v94)
												break;
										}
										if (!*v92 && !*v91)
											break;
										v90 = *(_QWORD*)(v90 + 56);
										if (!v90)
											goto LABEL_168;
									}
									v102 = (unsigned __int16*)sub_1401A4F40(v90 + 32);
									if (v102)
									{
										if ((unsigned int)sub_140640C20(v104, v103, v102, (_DWORD*)(v21 + 76)))
										{
											*(_DWORD*)(v21 + 248) = 1;
											v105 = *(_QWORD*)(v83 + 96);
											if (!v105)
												goto LABEL_220;
											while (1)
											{
												v106 = L"attachment";
												v107 = (wchar_t*)sub_1401A4F40(v105 + 8);
												if (v107 == L"attachment")
													break;
												v108 = 0;
												if (*v107)
												{
													do
													{
														if (!*v106 || *v107 != *v106)
															break;
														v109 = v108 == 0x7FFFFFFF;
														if (v108 == 0x7FFFFFFF)
															goto LABEL_192;
														++v107;
														++v106;
														++v108;
													} while (*v107);
													v109 = v108 == 0x7FFFFFFF;
												LABEL_192:
													if (v109)
														break;
												}
												if (!*v107 && !*v106)
													break;
												v105 = *(_QWORD*)(v105 + 56);
												if (!v105)
												{
												LABEL_220:
													v117 = sub_1401A5AE0(v83, L"Angle");
													v118 = v117;
													if (v117)
													{
														v119 = *(_QWORD*)(v117 + 48);
														if (v119
															&& (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v119 + 16i64))(v119)
															&& (v120 = *(_QWORD*)(v118 + 48),
																!(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v120 + 48i64))(v120)))
														{
															v121 = (WCHAR*)sub_1401A4F40(v120 + 24);
														}
														else
														{
															v121 = 0i64;
														}
														v122 = *(double*)sub_1407DFE80(v121, 0i64).m128_u64;
														*(float*)(v21 + 84) = v122;
													}
													v123 = sub_1401A5AE0(v83, L"Distance");
													v124 = v123;
													if (v123)
													{
														v125 = *(_QWORD*)(v123 + 48);
														if (v125
															&& (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v125 + 16i64))(v125)
															&& (v126 = *(_QWORD*)(v124 + 48),
																!(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v126 + 48i64))(v126)))
														{
															v127 = (WCHAR*)sub_1401A4F40(v126 + 24);
														}
														else
														{
															v127 = 0i64;
														}
														v128 = *(double*)sub_1407DFE80(v127, 0i64).m128_u64;
														*(float*)(v21 + 88) = v128;
													}
													goto LABEL_168;
												}
											}
											v110 = sub_1401A4F40(v105 + 32);
											if (!v110)
												goto LABEL_220;
											if (qword_140C63838)
											{
												v111 = qword_140C63838(off_140A6B780, qword_140C63858);
												goto LABEL_203;
											}
											if (!dword_140C64C4C && (int)sub_140217A60() >= 0)
											{
												v111 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65358 + 40i64))(qword_140C65358);
											LABEL_203:
												v82 = v111;
											}
											v112 = 0i64;
											v113 = 0;
											if (!v82)
												goto LABEL_220;
											while (2)
											{
												if (qword_140C63848)
												{
													v114 = qword_140C63848(off_140A6B780, v113, qword_140C63858);
													goto LABEL_212;
												}
												if (dword_140C64C4C)
												{
													v115 = 0i64;
												}
												else if ((int)sub_140217A60() >= 0)
												{
													v114 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65358 + 32i64))(
														qword_140C65358,
														v113);
												LABEL_212:
													v112 = 0i64;
													v115 = v114;
												}
												else
												{
													v112 = 0i64;
													v115 = 0i64;
												}
												v116 = *(_QWORD*)(v115 + 8);
												if (v116 && v116 <= qword_140C3FE70)
													v112 = (unsigned __int16*)(v116 + qword_140C3FE68);
												if (!(unsigned int)sub_14018E2C0(v110, v112))
												{
													*(_DWORD*)(v21 + 80) = *(_DWORD*)v115;
													goto LABEL_220;
												}
												++v113;
												v112 = 0i64;
												if (v113 >= v82)
													goto LABEL_220;
												continue;
											}
										}
									}
								}
							}
						}
					LABEL_168:
						v95 = sub_1401A5AE0(v12, L"MessageFormat");
						v139 = 0;
						v96 = v95;
						if (v95)
						{
							v97 = *(_QWORD*)(v95 + 96);
							if (!v97)
								goto LABEL_236;
							while (1)
							{
								v98 = L"derived";
								v99 = (wchar_t*)sub_1401A4F40(v97 + 8);
								if (v99 == L"derived")
									break;
								v100 = 0;
								if (!*v99)
									goto LABEL_179;
								do
								{
									if (!*v98 || *v99 != *v98)
										break;
									v101 = v100 == 0x7FFFFFFF;
									if (v100 == 0x7FFFFFFF)
										goto LABEL_177;
									++v99;
									++v98;
									++v100;
								} while (*v99);
								v101 = v100 == 0x7FFFFFFF;
							LABEL_177:
								if (v101)
									break;
								if (!*v99)
								{
								LABEL_179:
									if (!*v98)
										break;
								}
								v97 = *(_QWORD*)(v97 + 56);
								if (!v97)
									goto LABEL_236;
							}
							v129 = (_WORD*)sub_1401A4F40(v97 + 32);
							if ((unsigned int)sub_1407DF428(v129, (__int64)L"%d", &v139) != 1 || !v139)
							{
							LABEL_236:
								v130 = *(_QWORD*)(v96 + 48);
								v131 = (_DWORD*)(v21 + 92);
								if (v130)
								{
									while (1)
									{
										v132 = (_QWORD*)(**(__int64(__fastcall***)(__int64))v130)(v130);
										if (v132)
											break;
										v130 = *(_QWORD*)(v130 + 72);
										if (!v130)
											goto LABEL_239;
									}
								}
								else
								{
								LABEL_239:
									v132 = 0i64;
								}
								while (v132)
								{
									if ((*(__int64(__fastcall**)(_QWORD*))(*v132 + 48i64))(v132))
										v135 = 0i64;
									else
										v135 = (unsigned __int16*)sub_1401A4F40((__int64)(v132 + 3));
									if ((unsigned int)sub_140640D80(v134, v133, v135, v131) && *v131)
										++v131;
									if ((unsigned __int64)v131 >= v21 + 136)
										break;
									v136 = v132[9];
									if (v136)
									{
										while (1)
										{
											v132 = (_QWORD*)(**(__int64(__fastcall***)(__int64))v136)(v136);
											if (v132)
												break;
											v136 = *(_QWORD*)(v136 + 72);
											if (!v136)
												goto LABEL_252;
										}
									}
									else
									{
									LABEL_252:
										v132 = 0i64;
									}
								}
								*(_DWORD*)(v21 + 252) = v131 != (_DWORD*)(v21 + 92);
							}
						}
						v11 = v144;
					}
				LABEL_256:
					v12 = sub_1401A5BC0(v12, L"Options");
				} while (v12);
				v5 = i;
				v2 = a2;
			}
		}
		v5 = sub_1401A5BC0(v5, L"Floater");
	}
	return 0i64;
}
// 14063FE2E: conditional instruction was optimized away because rdi.8!=0
// 14063FE45: conditional instruction was optimized away because rdi.8!=0
// 14063FF0C: conditional instruction was optimized away because rdi.8!=0
// 14063FFA7: conditional instruction was optimized away because rdx.8!=0
// 14064005C: conditional instruction was optimized away because rdi.8!=0
// 14064017C: conditional instruction was optimized away because rdi.8!=0
// 1406402C7: conditional instruction was optimized away because rdi.8!=0
// 14064042C: conditional instruction was optimized away because rdi.8!=0
// 140640572: conditional instruction was optimized away because rdi.8!=0
// 14064061F: conditional instruction was optimized away because rdi.8!=0
// 1406407F8: conditional instruction was optimized away because rdi.8!=0
// 14063FD44: variable 'v4' is possibly undefined
// 14063FD44: variable 'v3' is possibly undefined
// 140640348: variable 'v77' is possibly undefined
// 140640348: variable 'v76' is possibly undefined
// 140640591: variable 'v104' is possibly undefined
// 140640591: variable 'v103' is possibly undefined
// 140640886: variable 'v134' is possibly undefined
// 140640886: variable 'v133' is possibly undefined
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140A6B780: using guessed type wchar_t *off_140A6B780[2];
// 140B28D58: using guessed type wchar_t aType_2[5];
// 140B28D68: using guessed type wchar_t aOptions_0[8];
// 140B28D78: using guessed type wchar_t aFloater[8];
// 140B28D88: using guessed type wchar_t aFloater_0[8];
// 140B28D98: using guessed type wchar_t aDerived[8];
// 140B28E40: using guessed type wchar_t aDistance[9];
// 140B28E58: using guessed type wchar_t aMessageformat[14];
// 140B28E78: using guessed type wchar_t aAttachment_1[11];
// 140B28E90: using guessed type wchar_t aAngle[6];
// 140B28EA0: using guessed type wchar_t aLocation_4[9];
// 140B28EB8: using guessed type wchar_t aType_4[5];
// 140B28EC8: using guessed type wchar_t aColor_3[6];
// 140B28ED8: using guessed type wchar_t aFlag[5];
// 140B28EE8: using guessed type wchar_t aFace_1[5];
// 140B28EF8: using guessed type wchar_t aSize_2[5];
// 140B28F08: using guessed type wchar_t aNormal_4[7];
// 140B28F18: using guessed type wchar_t aFont_0[5];
// 140B28F28: using guessed type wchar_t aOptions_1[8];
// 140B28F38: using guessed type wchar_t aType_3[5];
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64C4C: using guessed type int dword_140C64C4C;
// 140C65358: using guessed type __int64 qword_140C65358;

