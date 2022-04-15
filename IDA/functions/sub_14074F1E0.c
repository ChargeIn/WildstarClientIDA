//----- (000000014074F1E0) ----------------------------------------------------
__int64 __fastcall sub_14074F1E0(__int64 a1)
{
	__int64 v2; // rcx
	unsigned __int64 v3; // rdx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rcx
	unsigned int v7; // eax
	__int64 result; // rax
	__int64 v9; // r15
	__int64 v10; // rbx
	unsigned __int64 v11; // rsi
	__int64(__fastcall * v12)(wchar_t**, _QWORD, __int64); // rax
	__int64 i; // r12
	__int64 v14; // rbp
	unsigned int v15; // ebx
	__int64 v16; // rax
	unsigned __int64 v17; // rsi
	__int64 v18; // r14
	__int64 v19; // r13
	unsigned int v20; // ebx
	__int64 v21; // rax
	__int64 v22; // r15
	__int64 v23; // rbx
	__int64 v24; // rax
	_QWORD* v25; // rax
	__int64 v26; // rdx
	int v27; // r10d
	__int64 v28; // rcx
	_QWORD* v29; // rax
	__int64 v30; // rdx
	unsigned __int16* v31; // r10
	__int64 v32; // rcx
	__int64 v33; // rbx
	__int64 v34; // rax
	unsigned __int64 v35; // rbp
	unsigned __int64 v36; // r15
	int v37; // r12d
	__int64 v38; // rsi
	unsigned int v39; // ebx
	__int64 v40; // rax
	int* v41; // r12
	__int64 v42; // rbx
	__int64 v43; // rax
	int v44; // ebx
	_QWORD* v45; // rax
	__int64 v46; // rdx
	unsigned __int64* v47; // rbp
	unsigned __int64 v48; // rsi
	__int64 v49; // rbx
	__int64 v50; // rax
	__int64 v51; // rcx
	__int64 v52; // rax
	__int64* v53; // rax
	__int64 v54; // rcx
	_QWORD* v55; // rax
	__int64 v56; // rdx
	unsigned __int16* v57; // r10
	__int64 v58; // rdx
	int v59; // ebx
	__int64 v60; // r9
	unsigned int v61; // ebp
	_DWORD* v62; // rdx
	__int64 v63; // rcx
	unsigned __int64* v64; // rsi
	__int64 v65; // rbx
	__int64 v66; // rax
	__int64 v67; // rcx
	__int64 v68; // r9
	_DWORD* v69; // rdx
	__int64 v70; // rcx
	__int64 v71; // r8
	__int64 v72; // rax
	__int64 v73; // r10
	__int64 v74; // r9
	_DWORD* v75; // rcx
	__int64 v76; // rdx
	__int64 v77; // rcx
	unsigned __int64 v78; // [rsp+20h] [rbp-98h]
	__int64 v79; // [rsp+28h] [rbp-90h]
	__int64(__fastcall * *v80)(); // [rsp+30h] [rbp-88h] BYREF
	int v81; // [rsp+38h] [rbp-80h]
	__int64 v82; // [rsp+40h] [rbp-78h]
	int v83; // [rsp+48h] [rbp-70h]
	__int64 v84; // [rsp+50h] [rbp-68h] BYREF
	__int64 v85; // [rsp+58h] [rbp-60h]
	__int64 v86; // [rsp+C8h] [rbp+10h]
	int v87; // [rsp+C8h] [rbp+10h]
	double v88; // [rsp+C8h] [rbp+10h]
	double v89; // [rsp+C8h] [rbp+10h]
	__int64 v90; // [rsp+D0h] [rbp+18h]
	int v91; // [rsp+D0h] [rbp+18h]
	double v92; // [rsp+D0h] [rbp+18h]
	__int64 v93; // [rsp+D8h] [rbp+20h]
	int v94; // [rsp+D8h] [rbp+20h]

	v2 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v2 = (unsigned int)(v2 + 1);
			v5 = (unsigned int)v2;
			if ((unsigned int)v2 >= v3)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8 * v2);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = sub_1400F26A0(v6 + 384, 1);
	result = sub_140242D40(v7);
	v9 = result;
	v90 = result;
	if (result)
	{
		v10 = qword_140C65C28;
		v11 = 0i64;
		v93 = qword_140C65C28;
		v86 = 0i64;
		if (!*(_QWORD*)(qword_140C65C28 + 152))
			return 0i64;
		v12 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		for (i = 0i64; ; i += 24i64)
		{
			v14 = *(_QWORD*)(v10 + 144);
			v15 = *(_DWORD*)(i + v14);
			if (v15 != 5 && v15 != 46)
				goto LABEL_34;
			if (v12)
				break;
			if (dword_140C638BC)
				goto LABEL_34;
			if ((int)sub_1401E9680() >= 0)
			{
				v16 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64768 + 24i64))(qword_140C64768, v15);
			LABEL_18:
				if (v16)
				{
					v17 = 0i64;
					if (*(_QWORD*)(i + v14 + 16))
					{
						v12 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
						v18 = 0i64;
						while (1)
						{
							v19 = *(_QWORD*)(i + v14 + 8);
							v20 = *(_DWORD*)(v18 + v19);
							if (v20 == *(_DWORD*)(v9 + 20))
							{
								if (v12)
								{
									v21 = v12(off_140A69170, v20, qword_140C63858);
									goto LABEL_27;
								}
								if (!dword_140C638BC)
								{
									if ((int)sub_1401E9680() >= 0)
									{
										v21 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64768 + 24i64))(
											qword_140C64768,
											v20);
									LABEL_27:
										v22 = v21;
										if (v21)
										{
											if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
												sub_14005E2C0(a1);
											v23 = *(_QWORD*)(a1 + 16);
											v24 = sub_14005C1B0(a1, 0, 0);
											*(_DWORD*)(v23 + 8) = 5;
											*(_QWORD*)v23 = v24;
											*(_QWORD*)(a1 + 16) += 16i64;
											v87 = sub_1400578C0(a1);
											v25 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v87);
											v26 = *(_QWORD*)(a1 + 16);
											*(_QWORD*)v26 = *v25;
											*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
											*(_QWORD*)(a1 + 16) += 16i64;
											sub_1400F06F0(a1, v26, L"nGroupId", v27);
											*(_QWORD*)(a1 + 16) -= 16i64;
											sub_14034BDD0(v28, *(_DWORD*)(v22 + 4));
											v29 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v87);
											v30 = *(_QWORD*)(a1 + 16);
											*(_QWORD*)v30 = *v29;
											*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
											*(_QWORD*)(a1 + 16) += 16i64;
											sub_1400F0870(a1, v30, L"strGroupName", v31);
											*(_QWORD*)(a1 + 16) -= 16i64;
											v32 = *(_QWORD*)(a1 + 32);
											v82 = a1;
											v83 = 1;
											v80 = off_140B569F0;
											if (*(_QWORD*)(v32 + 120) >= *(_QWORD*)(v32 + 112))
												sub_14005E2C0(a1);
											v33 = *(_QWORD*)(a1 + 16);
											v34 = sub_14005C1B0(a1, 0, 0);
											*(_DWORD*)(v33 + 8) = 5;
											*(_QWORD*)v33 = v34;
											*(_QWORD*)(a1 + 16) += 16i64;
											v35 = 0i64;
											v36 = -1i64;
											v37 = sub_1400578C0(a1);
											v81 = v37;
											v78 = 0i64;
											if (!*(_QWORD*)(v18 + v19 + 16))
											{
											LABEL_62:
												v59 = v87;
												v60 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
												v61 = v87 - 1;
												if ((unsigned int)(v87 - 1) >= *(_DWORD*)(v60 + 56))
												{
													if ((double)v87 == 0.0)
													{
														v62 = *(_DWORD**)(v60 + 32);
													}
													else
													{
														v92 = (double)v87;
														v62 = (_DWORD*)(*(_QWORD*)(v60 + 32)
															+ 40
															* ((unsigned int)(LODWORD(v92) + HIDWORD(v92))
																% (((1i64 << *(_BYTE*)(v60 + 11)) - 1) | 1)));
													}
													while (v62[6] != 3 || (double)v87 != *((double*)v62 + 2))
													{
														v62 = (_DWORD*)*((_QWORD*)v62 + 4);
														if (!v62)
														{
															v62 = dword_140A12138;
															break;
														}
													}
												}
												else
												{
													v62 = (_DWORD*)(*(_QWORD*)(v60 + 24) + 16i64 * (v87 - 1));
												}
												v63 = *(_QWORD*)(a1 + 16);
												*(_QWORD*)v63 = *(_QWORD*)v62;
												*(_DWORD*)(v63 + 8) = v62[2];
												*(_QWORD*)(a1 + 16) += 16i64;
												v64 = (unsigned __int64*)sub_14018F0E0(&v84, L"tSubGroups")[1];
												if (v64)
												{
													do
														++v36;
													while (*((_BYTE*)v64 + v36));
													if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
														sub_14005E2C0(a1);
													v65 = *(_QWORD*)(a1 + 16);
													v66 = sub_140062650(a1, v64, v36);
													*(_DWORD*)(v65 + 8) = 4;
													*(_QWORD*)v65 = v66;
													v59 = v87;
												}
												else
												{
													*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
												}
												v67 = v85;
												*(_QWORD*)(a1 + 16) += 16i64;
												if (v67)
													sub_14018B900(v67, 0);
												v68 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
												if ((unsigned int)(v37 - 1) >= *(_DWORD*)(v68 + 56))
												{
													if ((double)v37 == 0.0)
													{
														v69 = *(_DWORD**)(v68 + 32);
													}
													else
													{
														v88 = (double)v37;
														v69 = (_DWORD*)(*(_QWORD*)(v68 + 32)
															+ 40
															* ((unsigned int)(LODWORD(v88) + HIDWORD(v88))
																% (((1i64 << *(_BYTE*)(v68 + 11)) - 1) | 1)));
													}
													while (v69[6] != 3 || (double)v37 != *((double*)v69 + 2))
													{
														v69 = (_DWORD*)*((_QWORD*)v69 + 4);
														if (!v69)
														{
															v69 = dword_140A12138;
															break;
														}
													}
												}
												else
												{
													v69 = (_DWORD*)(*(_QWORD*)(v68 + 24) + 16i64 * (v37 - 1));
												}
												v70 = *(_QWORD*)(a1 + 16);
												*(_QWORD*)v70 = *(_QWORD*)v69;
												*(_DWORD*)(v70 + 8) = v69[2];
												v71 = *(_QWORD*)(a1 + 16) + 16i64;
												*(_QWORD*)(a1 + 16) = v71;
												sub_14005EA50(a1, (__int64*)(v71 - 48), (int*)(v71 - 32), (unsigned int*)(v71 - 16));
												v72 = *(_QWORD*)(a1 + 32);
												v73 = *(_QWORD*)(a1 + 16) - 48i64;
												*(_QWORD*)(a1 + 16) = v73;
												v74 = *(_QWORD*)(v72 + 160);
												if (v61 >= *(_DWORD*)(v74 + 56))
												{
													if ((double)v59 == 0.0)
													{
														v75 = *(_DWORD**)(v74 + 32);
													}
													else
													{
														v89 = (double)v59;
														v75 = (_DWORD*)(*(_QWORD*)(v74 + 32)
															+ 40
															* ((unsigned int)(LODWORD(v89) + HIDWORD(v89))
																% (((1i64 << *(_BYTE*)(v74 + 11)) - 1) | 1)));
													}
													while (v75[6] != 3 || (double)v59 != *((double*)v75 + 2))
													{
														v75 = (_DWORD*)*((_QWORD*)v75 + 4);
														if (!v75)
														{
															v75 = dword_140A12138;
															break;
														}
													}
												}
												else
												{
													v75 = (_DWORD*)(*(_QWORD*)(v74 + 24) + 16i64 * (v59 - 1));
												}
												*(_QWORD*)v73 = *(_QWORD*)v75;
												v76 = (unsigned int)v75[2];
												v77 = v82;
												*(_DWORD*)(v73 + 8) = v76;
												*(_QWORD*)(a1 + 16) += 16i64;
												if (v77)
													sub_1400579E0(v77, v76, v37);
												sub_1400579E0(a1, v76, v59);
												return 1i64;
											}
											v38 = 0i64;
											v79 = 0i64;
											while (2)
											{
												v39 = *(_DWORD*)(v38 + *(_QWORD*)(v18 + v19 + 8));
												if (qword_140C63840)
												{
													v40 = qword_140C63840(off_140A69170, v39, qword_140C63858);
												LABEL_47:
													v41 = (int*)v40;
													if (v40)
													{
														if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
															sub_14005E2C0(a1);
														v42 = *(_QWORD*)(a1 + 16);
														v43 = sub_14005C1B0(a1, 0, 0);
														*(_DWORD*)(v42 + 8) = 5;
														*(_QWORD*)v42 = v43;
														*(_QWORD*)(a1 + 16) += 16i64;
														v44 = sub_1400578C0(a1);
														v91 = v44;
														v94 = *v41;
														v45 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v44);
														v46 = *(_QWORD*)(a1 + 16);
														*(_QWORD*)v46 = *v45;
														*(_DWORD*)(v46 + 8) = *((_DWORD*)v45 + 2);
														*(_QWORD*)(a1 + 16) += 16i64;
														v47 = (unsigned __int64*)sub_14018F0E0(&v84, L"nSubGroupId")[1];
														if (v47)
														{
															v48 = -1i64;
															do
																++v48;
															while (*((_BYTE*)v47 + v48));
															if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32)
																+ 112i64))
																sub_14005E2C0(a1);
															v49 = *(_QWORD*)(a1 + 16);
															v50 = sub_140062650(a1, v47, v48);
															v38 = v79;
															*(_DWORD*)(v49 + 8) = 4;
															*(_QWORD*)v49 = v50;
															v44 = v91;
														}
														else
														{
															*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
														}
														v51 = v85;
														*(_QWORD*)(a1 + 16) += 16i64;
														if (v51)
															sub_14018B900(v51, 0);
														v52 = *(_QWORD*)(a1 + 16);
														*(_DWORD*)(v52 + 8) = 3;
														*(double*)v52 = (double)v94;
														*(_QWORD*)(a1 + 16) += 16i64;
														v53 = (__int64*)sub_1400580E0(a1, -3);
														sub_14005EA50(
															a1,
															v53,
															(int*)(*(_QWORD*)(a1 + 16) - 32i64),
															(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
														*(_QWORD*)(a1 + 16) -= 48i64;
														sub_14034BDD0(v54, v41[1]);
														v55 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v44);
														v56 = *(_QWORD*)(a1 + 16);
														*(_QWORD*)v56 = *v55;
														*(_DWORD*)(v56 + 8) = *((_DWORD*)v55 + 2);
														*(_QWORD*)(a1 + 16) += 16i64;
														sub_1400F0870(a1, v56, L"strSubGroupName", v57);
														*(_QWORD*)(a1 + 16) -= 16i64;
														sub_1400FB1D0((__int64)&v80);
														sub_1400579E0(a1, v58, v44);
														v35 = v78;
													}
												}
												else if (!dword_140C638BC && (int)sub_1401E9680() >= 0)
												{
													v40 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64768 + 24i64))(
														qword_140C64768,
														v39);
													goto LABEL_47;
												}
												++v35;
												v38 += 24i64;
												v78 = v35;
												v79 = v38;
												if (v35 >= *(_QWORD*)(v18 + v19 + 16))
												{
													v37 = v81;
													goto LABEL_62;
												}
												continue;
											}
										}
										v9 = v90;
									}
									v12 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
								}
							}
							++v17;
							v18 += 24i64;
							if (v17 >= *(_QWORD*)(i + v14 + 16))
							{
								v11 = v86;
								goto LABEL_34;
							}
						}
					}
					v11 = v86;
				}
			}
			v12 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		LABEL_34:
			v10 = v93;
			v86 = ++v11;
			if (v11 >= *(_QWORD*)(v93 + 152))
				return 0i64;
		}
		v16 = v12(off_140A69170, v15, qword_140C63858);
		goto LABEL_18;
	}
	return result;
}
// 14074F4BF: variable 'v27' is possibly undefined
// 14074F4CD: variable 'v28' is possibly undefined
// 14074F509: variable 'v31' is possibly undefined
// 14074F73C: variable 'v54' is possibly undefined
// 14074F778: variable 'v57' is possibly undefined
// 14074F794: variable 'v58' is possibly undefined
// 14074FA7F: variable 'v76' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A69170: using guessed type wchar_t *off_140A69170[2];
// 140B4AB00: using guessed type wchar_t aNgroupid_0[9];
// 140B4AE10: using guessed type wchar_t aTsubgroups_0[11];
// 140B4AE28: using guessed type wchar_t aStrsubgroupnam_0[16];
// 140B4AE48: using guessed type wchar_t aNsubgroupid_0[12];
// 140B4AE60: using guessed type wchar_t aStrgroupname_1[13];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638BC: using guessed type int dword_140C638BC;
// 140C64768: using guessed type __int64 qword_140C64768;
// 140C65C28: using guessed type __int64 qword_140C65C28;

