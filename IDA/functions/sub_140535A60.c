//----- (0000000140535A60) ----------------------------------------------------
__int64 __fastcall sub_140535A60(_QWORD* a1)
{
	__int64 v2; // rdx
	__int64 v3; // rsi
	_DWORD* v4; // rax
	_QWORD* v5; // r8
	_DWORD* v6; // rcx
	unsigned __int64 v7; // rdx
	_DWORD* v8; // rax
	_QWORD* v9; // r8
	_DWORD* v10; // rcx
	unsigned __int64 v11; // rdx
	_DWORD* v12; // rax
	_QWORD* v13; // r8
	_DWORD* v14; // rcx
	unsigned __int64 v15; // rdx
	_QWORD* v16; // rax
	__int64 v17; // r10
	__int64 v18; // rdx
	_DWORD* v19; // rcx
	int v20; // eax
	_QWORD* v21; // rax
	_QWORD* v22; // rbx
	_QWORD* v23; // rcx
	_QWORD* v24; // rax
	unsigned __int64 i; // r8
	unsigned __int64 j; // rdx
	_QWORD* v27; // rcx
	int v28; // eax
	_QWORD* v29; // rdx
	_QWORD* v30; // rcx
	unsigned __int64 k; // rdx
	__int64 v32; // r8
	unsigned __int64 m; // rcx
	__int64 v34; // rdx
	__int64 v35; // rax
	_QWORD* n; // rax
	__int64 ii; // rax
	_QWORD* v38; // rax
	__int64 v39; // r10
	__int64 v40; // rdx
	_DWORD* v41; // rcx
	int v42; // eax
	_QWORD* v43; // rcx
	__int64 v44; // rdx
	__int64 v45; // rax
	__int64 v46; // rbx
	_QWORD* v47; // r10
	__int64 v48; // r9
	_DWORD* v49; // rdx
	__int64 v50; // rcx
	__int64 v51; // rax
	__int64 jj; // rax
	__int64 kk; // rax
	_QWORD* v54; // rax
	__int64 v55; // r10
	__int64 v56; // rdx
	_DWORD* v57; // rcx
	int v58; // eax
	_QWORD* v59; // rcx
	__int64 v60; // rax
	__int64 v61; // rbx
	_QWORD* v62; // r10
	__int64 v63; // r9
	_DWORD* v64; // rdx
	__int64 v65; // rcx
	__int64 v66; // rax
	__int64 mm; // rax
	__int64 nn; // rax
	_QWORD* v69; // rbx
	int v70; // edi
	_DWORD* v71; // rcx
	__int64 v72; // rdx
	__int64 v73; // rax
	__int64(__fastcall * *v75)(); // [rsp+20h] [rbp-99h] BYREF
	int v76; // [rsp+28h] [rbp-91h]
	_QWORD* v77; // [rsp+30h] [rbp-89h]
	__int64(__fastcall * *v78)(); // [rsp+38h] [rbp-81h] BYREF
	int v79; // [rsp+40h] [rbp-79h]
	_QWORD* v80; // [rsp+48h] [rbp-71h]
	__int64(__fastcall * **v81)(); // [rsp+50h] [rbp-69h]
	__int64(__fastcall * *v82)(); // [rsp+58h] [rbp-61h] BYREF
	int v83; // [rsp+60h] [rbp-59h]
	_QWORD* v84; // [rsp+68h] [rbp-51h]
	__int64(__fastcall * **v85)(); // [rsp+70h] [rbp-49h]
	__int64(__fastcall * *v86)(); // [rsp+78h] [rbp-41h] BYREF
	unsigned int v87; // [rsp+80h] [rbp-39h]
	_QWORD* v88; // [rsp+88h] [rbp-31h]
	int v89; // [rsp+90h] [rbp-29h]
	__int64(__fastcall * *v90)(); // [rsp+98h] [rbp-21h] BYREF
	unsigned int v91; // [rsp+A0h] [rbp-19h]
	_QWORD* v92; // [rsp+A8h] [rbp-11h]
	int v93; // [rsp+B0h] [rbp-9h]
	__int64(__fastcall * *v94)(); // [rsp+B8h] [rbp-1h] BYREF
	unsigned int v95; // [rsp+C0h] [rbp+7h]
	_QWORD* v96; // [rsp+C8h] [rbp+Fh]
	int v97; // [rsp+D0h] [rbp+17h]
	double v98; // [rsp+128h] [rbp+6Fh]
	double v99; // [rsp+128h] [rbp+6Fh]

	v3 = sub_14052E9B0(a1);
	if (v3)
	{
		v92 = a1;
		v93 = 1;
		v91 = -2;
		v90 = off_140B569F0;
		v4 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v4 < a1[2] && v4 != dword_140A12138 && *(_DWORD*)(a1[3] + 24i64) == 5)
		{
			sub_1400579E0((__int64)a1, v2, -2);
			v5 = v92;
			v6 = dword_140A12138;
			v7 = v92[2];
			if (v92[3] + 16i64 < v7)
				v6 = (_DWORD*)(v92[3] + 16i64);
			*(_QWORD*)v7 = *(_QWORD*)v6;
			*(_DWORD*)(v7 + 8) = v6[2];
			v5[2] += 16i64;
			v91 = sub_1400578C0((__int64)v92);
		}
		v94 = off_140B569F0;
		v96 = a1;
		v97 = 1;
		v95 = -2;
		v8 = (_DWORD*)(a1[3] + 32i64);
		if ((unsigned __int64)v8 < a1[2] && v8 != dword_140A12138 && *(_DWORD*)(a1[3] + 40i64) == 5)
		{
			sub_1400579E0((__int64)a1, v2, -2);
			v9 = v96;
			v10 = dword_140A12138;
			v11 = v96[2];
			if (v96[3] + 32i64 < v11)
				v10 = (_DWORD*)(v96[3] + 32i64);
			*(_QWORD*)v11 = *(_QWORD*)v10;
			*(_DWORD*)(v11 + 8) = v10[2];
			v9[2] += 16i64;
			v95 = sub_1400578C0((__int64)v96);
		}
		v86 = off_140B569F0;
		v88 = a1;
		v89 = 1;
		v87 = -2;
		v12 = (_DWORD*)(a1[3] + 48i64);
		if ((unsigned __int64)v12 < a1[2] && v12 != dword_140A12138 && *(_DWORD*)(a1[3] + 56i64) == 5)
		{
			sub_1400579E0((__int64)a1, v2, -2);
			v13 = v88;
			v14 = dword_140A12138;
			v15 = v88[2];
			if (v88[3] + 48i64 < v15)
				v14 = (_DWORD*)(v88[3] + 48i64);
			*(_QWORD*)v15 = *(_QWORD*)v14;
			*(_DWORD*)(v15 + 8) = v14[2];
			v13[2] += 16i64;
			v87 = sub_1400578C0((__int64)v88);
		}
		if (v92)
		{
			v2 = v91;
			if (v91 != -2)
			{
				v16 = sub_14005C3C0(*(_QWORD*)(v92[4] + 160i64), v91);
				v18 = *(_QWORD*)(v17 + 16);
				*(_QWORD*)v18 = *v16;
				*(_DWORD*)(v18 + 8) = *((_DWORD*)v16 + 2);
				*(_QWORD*)(v17 + 16) += 16i64;
				v2 = (__int64)v92;
				v19 = (_DWORD*)(v92[2] - 16i64);
				v20 = v19 == dword_140A12138 ? -1 : v19[2];
				v92[2] = v19;
				if (v20 == 5)
				{
					v21 = *(_QWORD**)(v3 + 1384);
					v22 = (_QWORD*)v21[2];
					if (v22 != v21)
					{
						do
						{
							v23 = (_QWORD*)v22[13];
							v24 = (_QWORD*)*v23;
							if ((_QWORD*)*v23 != v23)
							{
								do
								{
									for (i = 0i64; i < v24[4]; *(_DWORD*)(*(_QWORD*)(v24[3] + 8 * i - 8) + 376i64) = 1)
										++i;
									v24 = (_QWORD*)*v24;
								} while (v24 != (_QWORD*)v22[13]);
							}
							for (j = 0i64; j < v22[107]; *(_DWORD*)(*(_QWORD*)(v22[106] + 8 * j - 8) + 216i64) = 0)
								++j;
							v27 = v92;
							v78 = off_140B56A08;
							v79 = -2;
							v80 = v92;
							v81 = &v90;
							*(_DWORD*)(v92[2] + 8i64) = 0;
							v27[2] += 16i64;
							((void(__fastcall*)(__int64(__fastcall***)(), __int64))v78[2])(&v78, 0xFFFFFFFFi64);
							v92[2] -= 16i64;
							while (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v81)[1])(v81)
								&& (unsigned int)sub_1400FCBA0((__int64)&v78))
							{
								v28 = sub_1400FC140((__int64)&v78);
								v29 = (_QWORD*)v22[13];
								v30 = (_QWORD*)*v29;
								if ((_QWORD*)*v29 != v29)
								{
									do
									{
										for (k = 0i64; k < v30[4]; ++k)
										{
											v32 = *(_QWORD*)(v30[3] + 8 * k);
											if (*(_DWORD*)(v32 + 12) == v28)
												*(_DWORD*)(v32 + 376) = 0;
										}
										v30 = (_QWORD*)*v30;
									} while (v30 != (_QWORD*)v22[13]);
								}
								for (m = 0i64; m < v22[107]; ++m)
								{
									v34 = *(_QWORD*)(v22[106] + 8 * m);
									if (*(_DWORD*)(v34 + 4) == v28)
										*(_DWORD*)(v34 + 216) = 1;
								}
							}
							v78 = off_140B56A08;
							if (v80)
								sub_1400579E0((__int64)v80, v2, v79);
							v35 = v22[3];
							if (v35)
							{
								v22 = (_QWORD*)v22[3];
								for (n = *(_QWORD**)(v35 + 16); n; n = (_QWORD*)n[2])
									v22 = n;
							}
							else
							{
								for (ii = v22[1]; v22 == *(_QWORD**)(ii + 24); ii = *(_QWORD*)(ii + 8))
									v22 = (_QWORD*)ii;
								if (v22[3] != ii)
									v22 = (_QWORD*)ii;
							}
						} while (v22 != *(_QWORD**)(v3 + 1384));
					}
				}
			}
		}
		if (v96)
		{
			v2 = v95;
			if (v95 != -2)
			{
				v38 = sub_14005C3C0(*(_QWORD*)(v96[4] + 160i64), v95);
				v40 = *(_QWORD*)(v39 + 16);
				*(_QWORD*)v40 = *v38;
				*(_DWORD*)(v40 + 8) = *((_DWORD*)v38 + 2);
				*(_QWORD*)(v39 + 16) += 16i64;
				v2 = (__int64)v96;
				v41 = (_DWORD*)(v96[2] - 16i64);
				v42 = v41 == dword_140A12138 ? -1 : v41[2];
				v96[2] = v41;
				if (v42 == 5)
				{
					v43 = v96;
					v82 = off_140B56A08;
					v83 = -2;
					v84 = v96;
					v85 = &v94;
					*(_DWORD*)(v96[2] + 8i64) = 0;
					v43[2] += 16i64;
					((void(__fastcall*)(__int64(__fastcall***)(), __int64))v82[2])(&v82, 0xFFFFFFFFi64);
					v96[2] -= 16i64;
					while (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v85)[1])(v85)
						&& (unsigned int)sub_1400FCBA0((__int64)&v82))
					{
						sub_1400FB8D0((__int64)&v82, (__int64)&v75);
						v45 = *(_QWORD*)(v3 + 1384);
						v46 = *(_QWORD*)(v45 + 16);
						if (v46 != v45)
						{
							do
							{
								v78 = off_140B56A08;
								v80 = v77;
								v79 = -2;
								if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v75[1])(&v75))
								{
									v47 = v77;
									v48 = *(_QWORD*)(v77[4] + 160i64);
									if ((unsigned int)(v76 - 1) >= *(_DWORD*)(v48 + 56))
									{
										if ((double)v76 == 0.0)
										{
											v49 = *(_DWORD**)(v48 + 32);
										}
										else
										{
											v98 = (double)v76;
											v49 = (_DWORD*)(*(_QWORD*)(v48 + 32)
												+ 40
												* ((unsigned int)(LODWORD(v98) + HIDWORD(v98))
													% (((1i64 << *(_BYTE*)(v48 + 11)) - 1) | 1)));
										}
										while (v49[6] != 3 || (double)v76 != *((double*)v49 + 2))
										{
											v49 = (_DWORD*)*((_QWORD*)v49 + 4);
											if (!v49)
											{
												v49 = dword_140A12138;
												break;
											}
										}
									}
									else
									{
										v49 = (_DWORD*)(*(_QWORD*)(v48 + 24) + 16i64 * (v76 - 1));
									}
									v50 = v77[2];
									*(_QWORD*)v50 = *(_QWORD*)v49;
									*(_DWORD*)(v50 + 8) = v49[2];
									v47[2] += 16i64;
									v79 = sub_1400578C0((__int64)v80);
								}
								sub_140774020(v46 + 48, (__int64)&v78);
								sub_140772670(v46 + 48, (__int64)&v75, 1);
								v51 = *(_QWORD*)(v46 + 24);
								if (v51)
								{
									v46 = *(_QWORD*)(v46 + 24);
									for (jj = *(_QWORD*)(v51 + 16); jj; jj = *(_QWORD*)(jj + 16))
										v46 = jj;
								}
								else
								{
									for (kk = *(_QWORD*)(v46 + 8); v46 == *(_QWORD*)(kk + 24); kk = *(_QWORD*)(kk + 8))
										v46 = kk;
									if (*(_QWORD*)(v46 + 24) != kk)
										v46 = kk;
								}
							} while (v46 != *(_QWORD*)(v3 + 1384));
						}
						v75 = off_140B56A08;
						if (v77)
							sub_1400579E0((__int64)v77, v44, v76);
					}
					v82 = off_140B56A08;
					if (v84)
						sub_1400579E0((__int64)v84, v2, v83);
				}
			}
		}
		if (v88)
		{
			v2 = v87;
			if (v87 != -2)
			{
				v54 = sub_14005C3C0(*(_QWORD*)(v88[4] + 160i64), v87);
				v56 = *(_QWORD*)(v55 + 16);
				*(_QWORD*)v56 = *v54;
				*(_DWORD*)(v56 + 8) = *((_DWORD*)v54 + 2);
				*(_QWORD*)(v55 + 16) += 16i64;
				v2 = (__int64)v88;
				v57 = (_DWORD*)(v88[2] - 16i64);
				v58 = v57 == dword_140A12138 ? -1 : v57[2];
				v88[2] = v57;
				if (v58 == 5)
				{
					v59 = v88;
					v82 = off_140B56A08;
					v83 = -2;
					v84 = v88;
					v85 = &v86;
					*(_DWORD*)(v88[2] + 8i64) = 0;
					v59[2] += 16i64;
					((void(__fastcall*)(__int64(__fastcall***)(), __int64))v82[2])(&v82, 0xFFFFFFFFi64);
					v88[2] -= 16i64;
					while (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v85)[1])(v85)
						&& (unsigned int)sub_1400FCBA0((__int64)&v82))
					{
						sub_1400FB8D0((__int64)&v82, (__int64)&v75);
						v60 = *(_QWORD*)(v3 + 1384);
						v61 = *(_QWORD*)(v60 + 16);
						if (v61 != v60)
						{
							do
							{
								v78 = off_140B56A08;
								v80 = v77;
								v79 = -2;
								if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v75[1])(&v75))
								{
									v62 = v77;
									v63 = *(_QWORD*)(v77[4] + 160i64);
									if ((unsigned int)(v76 - 1) >= *(_DWORD*)(v63 + 56))
									{
										if ((double)v76 == 0.0)
										{
											v64 = *(_DWORD**)(v63 + 32);
										}
										else
										{
											v99 = (double)v76;
											v64 = (_DWORD*)(*(_QWORD*)(v63 + 32)
												+ 40
												* ((unsigned int)(LODWORD(v99) + HIDWORD(v99))
													% (((1i64 << *(_BYTE*)(v63 + 11)) - 1) | 1)));
										}
										while (v64[6] != 3 || (double)v76 != *((double*)v64 + 2))
										{
											v64 = (_DWORD*)*((_QWORD*)v64 + 4);
											if (!v64)
											{
												v64 = dword_140A12138;
												break;
											}
										}
									}
									else
									{
										v64 = (_DWORD*)(*(_QWORD*)(v63 + 24) + 16i64 * (v76 - 1));
									}
									v65 = v77[2];
									*(_QWORD*)v65 = *(_QWORD*)v64;
									*(_DWORD*)(v65 + 8) = v64[2];
									v62[2] += 16i64;
									v79 = sub_1400578C0((__int64)v80);
								}
								sub_140773F70(v61 + 48, (__int64)&v78);
								sub_140772670(v61 + 48, (__int64)&v75, 0);
								v66 = *(_QWORD*)(v61 + 24);
								if (v66)
								{
									v61 = *(_QWORD*)(v61 + 24);
									for (mm = *(_QWORD*)(v66 + 16); mm; mm = *(_QWORD*)(mm + 16))
										v61 = mm;
								}
								else
								{
									for (nn = *(_QWORD*)(v61 + 8); v61 == *(_QWORD*)(nn + 24); nn = *(_QWORD*)(nn + 8))
										v61 = nn;
									if (*(_QWORD*)(v61 + 24) != nn)
										v61 = nn;
								}
							} while (v61 != *(_QWORD*)(v3 + 1384));
						}
						v69 = v77;
						v75 = off_140B56A08;
						if (v77)
						{
							v70 = v76;
							if (v76 >= 0)
							{
								v71 = *(_DWORD**)(*(_QWORD*)sub_1400580E0((__int64)v77, -10000) + 32i64);
								while (v71[6] != 3 || *((double*)v71 + 2) != 0.0)
								{
									v71 = (_DWORD*)*((_QWORD*)v71 + 4);
									if (!v71)
									{
										v71 = dword_140A12138;
										break;
									}
								}
								v72 = v69[2];
								*(_QWORD*)v72 = *(_QWORD*)v71;
								*(_DWORD*)(v72 + 8) = v71[2];
								v69[2] += 16i64;
								sub_140058B30((__int64)v69, -10000);
								v73 = v69[2];
								*(_DWORD*)(v73 + 8) = 3;
								*(double*)v73 = (double)v70;
								v69[2] += 16i64;
								sub_140058B30((__int64)v69, -10000);
							}
						}
					}
					v82 = off_140B56A08;
					if (v84)
						sub_1400579E0((__int64)v84, v2, v83);
				}
			}
		}
		v86 = off_140B56A08;
		if (v88)
			sub_1400579E0((__int64)v88, v2, v87);
		v94 = off_140B56A08;
		if (v96)
			sub_1400579E0((__int64)v96, v2, v95);
		v90 = off_140B56A08;
		if (v92)
			sub_1400579E0((__int64)v92, v2, v91);
	}
	return 0i64;
}
// 140535AF2: variable 'v2' is possibly undefined
// 140535C49: variable 'v17' is possibly undefined
// 140535EAE: variable 'v39' is possibly undefined
// 1405360EA: variable 'v44' is possibly undefined
// 140536133: variable 'v55' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

