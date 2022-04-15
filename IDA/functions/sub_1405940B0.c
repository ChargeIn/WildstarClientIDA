//----- (00000001405940B0) ----------------------------------------------------
__int64 __fastcall sub_1405940B0(__int64 a1)
{
	unsigned __int64 v1; // r12
	__int64 v2; // r13
	unsigned __int64 v3; // r8
	unsigned int v4; // edx
	__int64 v5; // r9
	__int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rbx
	int v9; // esi
	int v10; // eax
	__int64 v11; // rdi
	int v12; // eax
	_DWORD* v13; // rdx
	__int64 v14; // rax
	int v15; // eax
	BOOL v16; // eax
	__int64 v17; // rbx
	__int64 v18; // rax
	int v19; // eax
	__int64 v20; // r9
	int v21; // r10d
	unsigned __int64 v22; // r8
	unsigned int v23; // ecx
	__int64 v24; // rdx
	__int64 v25; // rax
	_QWORD* v26; // rax
	int v27; // r10d
	__int64 v28; // rdx
	__int64 v30; // r15
	char* v31; // rbx
	__int64* v32; // r14
	unsigned int v33; // esi
	int v34; // r15d
	unsigned int v35; // eax
	__int64 v36; // rax
	_DWORD* v37; // rdi
	int v38; // eax
	int* v39; // rax
	unsigned int v40; // edi
	__int64 v41; // rcx
	unsigned int v42; // ebx
	_DWORD* v43; // rax
	unsigned int v44; // ecx
	__int64 v45; // r9
	__int64 v46; // r13
	__int64 v47; // rax
	unsigned int v48; // edx
	__int64 v49; // rcx
	__int64* v50; // rax
	__int64 v51; // rax
	_QWORD* v52; // r14
	unsigned __int64 v53; // rsi
	_DWORD* v54; // rdi
	unsigned int v55; // ecx
	unsigned int v56; // eax
	int* v57; // rax
	unsigned __int64 v58; // rsi
	__int64 v59; // rdi
	__int64 v60; // rcx
	unsigned __int64 v61; // rax
	__int64 v62; // rbx
	__int64 v63; // rax
	int v64; // ebx
	__int64 v65; // rdx
	__int64 v66; // r9
	_DWORD* v67; // rdx
	__int64 v68; // rcx
	__int64 v69; // rcx
	int v70; // eax
	__int64 v71; // rax
	__int64 v72; // r10
	__int64 v73; // r9
	_DWORD* v74; // rcx
	__int64 v75; // r8
	__int64 v76; // r9
	_DWORD* v77; // rcx
	int v78; // [rsp+20h] [rbp-69h]
	int v79; // [rsp+24h] [rbp-65h]
	int v80; // [rsp+28h] [rbp-61h]
	_DWORD* v81; // [rsp+30h] [rbp-59h] BYREF
	unsigned __int64 v82; // [rsp+38h] [rbp-51h]
	__int64(__fastcall * *v83)(); // [rsp+40h] [rbp-49h] BYREF
	__int64* v84; // [rsp+48h] [rbp-41h]
	char* v85; // [rsp+50h] [rbp-39h]
	char* v86; // [rsp+58h] [rbp-31h]
	unsigned __int64 v87; // [rsp+60h] [rbp-29h]
	__int64 v88; // [rsp+68h] [rbp-21h] BYREF
	__int64 v89; // [rsp+70h] [rbp-19h]
	__int64 v90; // [rsp+78h] [rbp-11h] BYREF
	__int64 v91[2]; // [rsp+80h] [rbp-9h] BYREF
	double v93; // [rsp+F0h] [rbp+67h]
	double v94; // [rsp+F0h] [rbp+67h]
	double v95; // [rsp+F0h] [rbp+67h]
	bool v96; // [rsp+F8h] [rbp+6Fh]
	int v97; // [rsp+100h] [rbp+77h]
	int v98; // [rsp+108h] [rbp+7Fh]

	v1 = 0i64;
	v2 = a1;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = v7 + 384;
	v9 = sub_1400F26A0(v8, 1);
	v80 = v9;
	v10 = sub_1400F26A0(v8, 2);
	v11 = v10;
	v98 = v10;
	v12 = sub_1400F26A0(v8, 3);
	v13 = dword_140A12138;
	v97 = v12;
	v14 = *(_QWORD*)(v8 + 16);
	if ((unsigned __int64)(*(_QWORD*)(v14 + 24) + 48i64) < *(_QWORD*)(v14 + 16))
		v13 = (_DWORD*)(*(_QWORD*)(v14 + 24) + 48i64);
	v15 = v13[2];
	v16 = v15 && (v15 != 1 || *v13);
	v79 = 1;
	v96 = v16;
	if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
		sub_14005E2C0(v2);
	v17 = *(_QWORD*)(v2 + 16);
	v18 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v17 + 8) = 5;
	*(_QWORD*)v17 = v18;
	*(_QWORD*)(v2 + 16) += 16i64;
	v19 = sub_1400578C0(v2);
	v20 = qword_140C65898;
	v21 = v19;
	v78 = v19;
	v22 = *(_QWORD*)(qword_140C65898 + 5792);
	v23 = 0;
	if (!v22)
		goto LABEL_20;
	v24 = *(_QWORD*)(qword_140C65898 + 5784);
	v25 = 0i64;
	while (*(_DWORD*)(*(_QWORD*)(v24 + 8 * v25) + 8i64) != v9)
	{
		v25 = ++v23;
		if (v23 >= v22)
			goto LABEL_20;
	}
	v30 = *(_QWORD*)(v24 + 8i64 * v23);
	if (v30)
	{
		v31 = 0i64;
		v32 = 0i64;
		v84 = 0i64;
		v86 = 0i64;
		v89 = v11;
		v85 = 0i64;
		if (v96)
		{
			v33 = 0;
			v34 = v11;
			while (1)
			{
				if (qword_140C63838)
				{
					v35 = qword_140C63838(off_140A6DD58, qword_140C63858);
				}
				else
				{
					if (dword_140C654F8 || (int)sub_1402459A0() < 0)
					{
					LABEL_53:
						v32 = v84;
						v2 = a1;
						goto LABEL_110;
					}
					v35 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63868 + 40i64))(qword_140C63868);
				}
				if (v33 >= v35)
					goto LABEL_53;
				if (qword_140C63848)
					break;
				if (dword_140C654F8)
				{
					v37 = 0i64;
				}
				else
				{
					if ((int)sub_1402459A0() >= 0)
					{
						v36 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63868 + 32i64))(
							qword_140C63868,
							v33);
						goto LABEL_38;
					}
					v37 = 0i64;
				}
			LABEL_39:
				if (v37[2] == v80
					&& !v37[19]
					&& (v38 = v37[7]) != 0
					&& (!v97 || v38 == v97)
					&& (v39 = sub_1400B5DF0(qword_140C658F0, v37[3], 0i64)) != 0i64
					&& (!v34 || v39[82] == v34))
				{
					v81 = v37;
					v82 = (unsigned __int64)v39;
					if (v31 == v86)
					{
						sub_1400B4C50(&v83, v31, &v81);
						v31 = v85;
						goto LABEL_52;
					}
					if (v31)
					{
						*(_QWORD*)v31 = v37;
						*((_QWORD*)v31 + 1) = v39;
					}
					v31 += 16;
					++v33;
					v85 = v31;
				}
				else
				{
				LABEL_52:
					++v33;
				}
			}
			v36 = qword_140C63848(off_140A6DD58, v33, qword_140C63858);
		LABEL_38:
			v37 = (_DWORD*)v36;
			goto LABEL_39;
		}
		v40 = 0;
		if (*(_QWORD*)(v30 + 72))
		{
			v41 = 0i64;
			while (1)
			{
				v42 = *(_DWORD*)(*(_QWORD*)(v30 + 64) + 4 * v41);
				if (qword_140C63840)
					break;
				if (!dword_140C654F8 && (int)sub_1402459A0() >= 0)
				{
					v43 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63868 + 24i64))(
						qword_140C63868,
						v42);
				LABEL_61:
					if (v43 && v43[2] == v9)
					{
						v44 = *(_DWORD*)(v30 + 12) ? *(_DWORD*)(v30 + 84) : 0;
						if (v43[7] <= v44 && !v43[19])
							sub_14059E900((__int64)v43, &v83, v98, v97);
					}
				}
				v41 = ++v40;
				if ((unsigned __int64)v40 >= *(_QWORD*)(v30 + 72))
				{
					v31 = v85;
					v32 = v84;
					v20 = qword_140C65898;
					v2 = a1;
					goto LABEL_71;
				}
			}
			v43 = (_DWORD*)qword_140C63840(off_140A6DD58, v42, qword_140C63858);
			goto LABEL_61;
		}
	LABEL_71:
		v82 = 0i64;
		v81 = 0i64;
		sub_1403D6710(v20 + 184, (__int64*)&v81);
		v87 = 0i64;
		if (v82)
		{
			v45 = qword_140C65B90;
			v46 = (__int64)v81;
			do
			{
				v22 = *(_QWORD*)(v45 + 176);
				v47 = *(_QWORD*)(v22 + 8);
				v48 = **(_DWORD**)(*(_QWORD*)(v46 + 8 * v1) + 64i64);
				v49 = v22;
				while (v47)
				{
					if (*(_DWORD*)(v47 + 32) < v48)
					{
						v47 = *(_QWORD*)(v47 + 24);
					}
					else
					{
						v49 = v47;
						v47 = *(_QWORD*)(v47 + 16);
					}
				}
				if (v49 == v22 || v48 < *(_DWORD*)(v49 + 32))
				{
					v90 = *(_QWORD*)(v45 + 176);
					v50 = &v90;
				}
				else
				{
					v88 = v49;
					v50 = &v88;
				}
				v51 = *v50;
				if (v51 != v22)
				{
					v52 = (_QWORD*)(v51 + 40);
					if (v51 != -40)
					{
						v53 = 0i64;
						if (*(_QWORD*)(v51 + 48))
						{
							do
							{
								v54 = *(_DWORD**)(*v52 + 8 * v53);
								if (v54 && v54[2] == v80)
								{
									v55 = *(_DWORD*)(v30 + 12) ? *(_DWORD*)(v30 + 84) : 0;
									v56 = v54[7];
									if (v56 <= v55 && !v54[19] && v56 && (!v97 || v56 == v97))
									{
										v57 = sub_1400B5DF0(qword_140C658F0, v54[3], 0i64);
										if (v57)
										{
											if (!v89 || v57[82] == v98)
											{
												v91[0] = (__int64)v54;
												v91[1] = (__int64)v57;
												if (v31 == v86)
												{
													sub_1400B4C50(&v83, v31, v91);
													v31 = v85;
												}
												else
												{
													if (v31)
													{
														*(_QWORD*)v31 = v54;
														*((_QWORD*)v31 + 1) = v57;
													}
													v31 += 16;
													v85 = v31;
												}
											}
										}
									}
								}
								++v53;
							} while (v53 < v52[1]);
							v45 = qword_140C65B90;
							v1 = v87;
							v46 = (__int64)v81;
						}
					}
				}
				v87 = ++v1;
			} while (v1 < v82);
			v32 = v84;
			v2 = a1;
		}
		if (v81)
			(*(void(__fastcall**)(_DWORD*))(*((_QWORD*)v81 - 2) + 8i64))(v81 - 4);
		LODWORD(v1) = 0;
	LABEL_110:
		v58 = (v31 - (char*)v32) >> 4;
		if (v58)
		{
			sub_1405A3DB0(v32, (__int64*)v31, v22);
			v59 = 0i64;
			do
			{
				v60 = *(_QWORD*)(v2 + 32);
				v83 = off_140B569F0;
				v85 = (char*)v2;
				v61 = *(_QWORD*)(v60 + 112);
				LODWORD(v86) = 1;
				if (*(_QWORD*)(v60 + 120) >= v61)
					sub_14005E2C0(v2);
				v62 = *(_QWORD*)(v2 + 16);
				v63 = sub_14005C1B0(v2, 0, 0);
				*(_DWORD*)(v62 + 8) = 5;
				*(_QWORD*)v62 = v63;
				*(_QWORD*)(v2 + 16) += 16i64;
				v64 = sub_1400578C0(v2);
				LODWORD(v84) = v64;
				if ((int)sub_14059E000((__int64)&v32[2 * v59], (__int64)&v83, v96) >= 0)
				{
					v66 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64);
					if ((unsigned int)(v78 - 1) >= *(_DWORD*)(v66 + 56))
					{
						if ((double)v78 == 0.0)
						{
							v67 = *(_DWORD**)(v66 + 32);
						}
						else
						{
							v93 = (double)v78;
							v67 = (_DWORD*)(*(_QWORD*)(v66 + 32)
								+ 40
								* ((unsigned int)(LODWORD(v93) + HIDWORD(v93)) % (((1i64 << *(_BYTE*)(v66 + 11)) - 1) | 1)));
						}
						while (v67[6] != 3 || (double)v78 != *((double*)v67 + 2))
						{
							v67 = (_DWORD*)*((_QWORD*)v67 + 4);
							if (!v67)
							{
								v67 = dword_140A12138;
								break;
							}
						}
					}
					else
					{
						v67 = (_DWORD*)(*(_QWORD*)(v66 + 24) + 16i64 * (v78 - 1));
					}
					v68 = *(_QWORD*)(v2 + 16);
					*(_QWORD*)v68 = *(_QWORD*)v67;
					*(_DWORD*)(v68 + 8) = v67[2];
					*(_QWORD*)(v2 + 16) += 16i64;
					v69 = *(_QWORD*)(v2 + 16);
					*(_DWORD*)(v69 + 8) = 3;
					v70 = v79++;
					*(double*)v69 = (double)v70;
					v71 = *(_QWORD*)(v2 + 32);
					v72 = *(_QWORD*)(v2 + 16) + 16i64;
					*(_QWORD*)(v2 + 16) = v72;
					v73 = *(_QWORD*)(v71 + 160);
					if ((unsigned int)(v64 - 1) >= *(_DWORD*)(v73 + 56))
					{
						if ((double)v64 == 0.0)
						{
							v74 = *(_DWORD**)(v73 + 32);
						}
						else
						{
							v94 = (double)v64;
							v74 = (_DWORD*)(*(_QWORD*)(v73 + 32)
								+ 40
								* ((unsigned int)(LODWORD(v94) + HIDWORD(v94)) % (((1i64 << *(_BYTE*)(v73 + 11)) - 1) | 1)));
						}
						while (v74[6] != 3 || (double)v64 != *((double*)v74 + 2))
						{
							v74 = (_DWORD*)*((_QWORD*)v74 + 4);
							if (!v74)
							{
								v74 = dword_140A12138;
								break;
							}
						}
					}
					else
					{
						v74 = (_DWORD*)(*(_QWORD*)(v73 + 24) + 16i64 * (v64 - 1));
					}
					*(_QWORD*)v72 = *(_QWORD*)v74;
					*(_DWORD*)(v72 + 8) = v74[2];
					v75 = *(_QWORD*)(v2 + 16) + 16i64;
					*(_QWORD*)(v2 + 16) = v75;
					sub_14005EA50(v2, (__int64*)(v75 - 48), (int*)(v75 - 32), (unsigned int*)(v75 - 16));
					*(_QWORD*)(v2 + 16) -= 48i64;
				}
				sub_1400579E0(v2, v65, v64);
				LODWORD(v1) = v1 + 1;
				v59 = (unsigned int)v1;
			} while ((unsigned int)v1 < v58);
		}
		v27 = v78;
		v76 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64);
		if ((unsigned int)(v78 - 1) >= *(_DWORD*)(v76 + 56))
		{
			if ((double)v78 == 0.0)
			{
				v77 = *(_DWORD**)(v76 + 32);
			}
			else
			{
				v95 = (double)v78;
				v77 = (_DWORD*)(*(_QWORD*)(v76 + 32)
					+ 40 * ((unsigned int)(LODWORD(v95) + HIDWORD(v95)) % (((1i64 << *(_BYTE*)(v76 + 11)) - 1) | 1)));
			}
			while (v77[6] != 3 || (double)v78 != *((double*)v77 + 2))
			{
				v77 = (_DWORD*)*((_QWORD*)v77 + 4);
				if (!v77)
				{
					v77 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v77 = (_DWORD*)(*(_QWORD*)(v76 + 24) + 16i64 * (v78 - 1));
		}
		v28 = *(_QWORD*)(v2 + 16);
		*(_QWORD*)v28 = *(_QWORD*)v77;
		*(_DWORD*)(v28 + 8) = v77[2];
		*(_QWORD*)(v2 + 16) += 16i64;
		if (v32)
		{
			sub_14018B900((__int64)v32, 0);
			v27 = v78;
		}
	}
	else
	{
	LABEL_20:
		v26 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v21);
		v28 = *(_QWORD*)(v2 + 16);
		*(_QWORD*)v28 = *v26;
		*(_DWORD*)(v28 + 8) = *((_DWORD*)v26 + 2);
		*(_QWORD*)(v2 + 16) += 16i64;
	}
	sub_1400579E0(v2, v28, v27);
	return 1i64;
}
// 140594688: conditional instruction was optimized away because rsi.8!=0
// 140594250: variable 'v28' is possibly undefined
// 140594250: variable 'v27' is possibly undefined
// 140594680: variable 'v22' is possibly undefined
// 14059489D: variable 'v65' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6DD58: using guessed type wchar_t *off_140A6DD58[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63868: using guessed type __int64 qword_140C63868;
// 140C654F8: using guessed type int dword_140C654F8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65B90: using guessed type __int64 qword_140C65B90;

