//----- (00000001406F9FE0) ----------------------------------------------------
__int64 __fastcall sub_1406F9FE0(_QWORD* a1)
{
	char* v2; // rdx
	_DWORD* v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // eax
	unsigned __int16* v7; // r12
	unsigned __int64 v8; // r13
	_QWORD* v9; // r15
	int v10; // r14d
	unsigned __int64 v11; // r14
	unsigned __int64 v12; // rbx
	__int64 v13; // rsi
	__int64 v14; // rcx
	unsigned __int64 v15; // rax
	__int64 v16; // rbx
	__int64 v17; // rax
	int v18; // r13d
	__int64 v19; // r9
	_DWORD* v20; // rdx
	__int64 v21; // rcx
	unsigned __int64* v22; // r14
	unsigned __int64 v23; // rsi
	__int64 v24; // rbx
	__int64 v25; // rax
	__int64 v26; // rcx
	__int64 v27; // r9
	_DWORD* v28; // rdx
	__int64 v29; // rcx
	__int64 v30; // r8
	__int64 v31; // rdx
	__int64 v32; // rsi
	__int64 v33; // rcx
	unsigned __int64 v34; // rax
	__int64 v35; // rbx
	__int64 v36; // rax
	int v37; // r15d
	__int64 v38; // r9
	_DWORD* v39; // rdx
	__int64 v40; // rcx
	unsigned __int64* v41; // r14
	unsigned __int64 v42; // rsi
	__int64 v43; // rbx
	__int64 v44; // rax
	__int64 v45; // rcx
	__int64 v46; // r9
	_DWORD* v47; // rdx
	__int64 v48; // rcx
	__int64 v49; // r8
	__int64 v50; // rdx
	__int64 v51; // rsi
	__int64 v52; // rcx
	unsigned __int64 v53; // rax
	__int64 v54; // rbx
	__int64 v55; // rax
	int v56; // r15d
	__int64 v57; // r9
	_DWORD* v58; // rdx
	__int64 v59; // rcx
	unsigned __int64* v60; // r14
	unsigned __int64 v61; // rsi
	__int64 v62; // rbx
	__int64 v63; // rax
	__int64 v64; // rcx
	__int64 v65; // r9
	_DWORD* v66; // rdx
	__int64 v67; // rcx
	__int64 v68; // r8
	_DWORD* v69; // rdx
	__int64 v70; // rcx
	__int64 v71; // rax
	__int64 v72; // rsi
	int v73; // r15d
	__int64 v74; // rbx
	unsigned __int64 v75; // rax
	__int64 v76; // rcx
	__int64 v77; // r9
	_DWORD* v78; // rdx
	__int64 v79; // rcx
	unsigned __int64 v80; // rax
	__int64 v81; // rbx
	__int64 v82; // rax
	int v83; // r14d
	__int64 v84; // r9
	_DWORD* v85; // rdx
	double v86; // xmm0_8
	__int64 v87; // rcx
	unsigned __int64* v88; // rsi
	__int64 v89; // rbx
	__int64 v90; // rax
	__int64 v91; // rcx
	__int64 v92; // r9
	_DWORD* v93; // rdx
	__int64 v94; // rcx
	__int64 v95; // r8
	_DWORD* v96; // rdx
	__int64 v97; // rcx
	__int64 v98; // rax
	__int64 v99; // rcx
	_QWORD* v100; // rax
	__int64 v101; // r8
	__int64 v102; // rdx
	__int64(__fastcall * *v104)(); // [rsp+20h] [rbp-50h] BYREF
	unsigned __int16* v105; // [rsp+28h] [rbp-48h]
	_QWORD* v106; // [rsp+30h] [rbp-40h]
	int v107; // [rsp+38h] [rbp-38h]
	__int64 v108; // [rsp+40h] [rbp-30h] BYREF
	__int64 v109; // [rsp+48h] [rbp-28h]
	int v110; // [rsp+B0h] [rbp+40h]
	double v111; // [rsp+B0h] [rbp+40h]
	double v112; // [rsp+B0h] [rbp+40h]
	double v113; // [rsp+B0h] [rbp+40h]
	double v114; // [rsp+B8h] [rbp+48h]
	double v115; // [rsp+B8h] [rbp+48h]
	double v116; // [rsp+B8h] [rbp+48h]
	double v117; // [rsp+B8h] [rbp+48h]
	double v118; // [rsp+B8h] [rbp+48h]
	double v119; // [rsp+B8h] [rbp+48h]

	v2 = (char*)sub_14018F0E0(&v108, word_1409F7FCC)[1];
	v3 = (_DWORD*)a1[3];
	if ((unsigned __int64)v3 < a1[2] && v3 != dword_140A12138 && (int)v3[2] > 0)
		v2 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v104, v2);
	if (v109)
		sub_14018B900(v109, 0);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v4 = a1[2];
	v5 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	a1[2] += 16i64;
	v6 = sub_1400578C0((__int64)a1);
	v7 = v105;
	v8 = -1i64;
	v9 = *(_QWORD**)(qword_140C65898 + 27312);
	v10 = v6;
	v110 = v6;
	if (v9)
	{
		do
		{
			v11 = v9[14];
			v12 = 0i64;
			if (v11)
			{
				v13 = v9[13];
				while ((unsigned int)sub_14018E2C0((__int64)v7, *(unsigned __int16**)(*(_QWORD*)v13 + 48i64)))
				{
					++v12;
					v13 += 8i64;
					if (v12 >= v11)
						goto LABEL_45;
				}
				v14 = a1[4];
				v106 = a1;
				v104 = off_140B569F0;
				v15 = *(_QWORD*)(v14 + 112);
				v107 = 1;
				if (*(_QWORD*)(v14 + 120) >= v15)
					sub_14005E2C0((__int64)a1);
				v16 = a1[2];
				v17 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v16 + 8) = 5;
				*(_QWORD*)v16 = v17;
				a1[2] += 16i64;
				v18 = sub_1400578C0((__int64)a1);
				LODWORD(v105) = v18;
				sub_1405DC440((__int64)v9, (__int64)&v104);
				v19 = *(_QWORD*)(a1[4] + 160i64);
				if ((unsigned int)(v110 - 1) >= *(_DWORD*)(v19 + 56))
				{
					if ((double)v110 == 0.0)
					{
						v20 = *(_DWORD**)(v19 + 32);
					}
					else
					{
						v114 = (double)v110;
						v20 = (_DWORD*)(*(_QWORD*)(v19 + 32)
							+ 40
							* ((unsigned int)(LODWORD(v114) + HIDWORD(v114)) % (((1i64 << *(_BYTE*)(v19 + 11)) - 1) | 1)));
					}
					while (v20[6] != 3 || (double)v110 != *((double*)v20 + 2))
					{
						v20 = (_DWORD*)*((_QWORD*)v20 + 4);
						if (!v20)
						{
							v20 = dword_140A12138;
							break;
						}
					}
				}
				else
				{
					v20 = (_DWORD*)(*(_QWORD*)(v19 + 24) + 16i64 * (v110 - 1));
				}
				v21 = a1[2];
				*(_QWORD*)v21 = *(_QWORD*)v20;
				*(_DWORD*)(v21 + 8) = v20[2];
				a1[2] += 16i64;
				v22 = (unsigned __int64*)sub_14018F0E0(&v104, L"tAccountFriend")[1];
				if (v22)
				{
					v23 = -1i64;
					do
						++v23;
					while (*((_BYTE*)v22 + v23));
					if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
						sub_14005E2C0((__int64)a1);
					v24 = a1[2];
					v25 = sub_140062650((__int64)a1, v22, v23);
					*(_DWORD*)(v24 + 8) = 4;
					*(_QWORD*)v24 = v25;
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
				}
				v26 = (__int64)v105;
				a1[2] += 16i64;
				if (v26)
					sub_14018B900(v26, 0);
				v27 = *(_QWORD*)(a1[4] + 160i64);
				if ((unsigned int)(v18 - 1) >= *(_DWORD*)(v27 + 56))
				{
					if ((double)v18 == 0.0)
					{
						v28 = *(_DWORD**)(v27 + 32);
					}
					else
					{
						v115 = (double)v18;
						v28 = (_DWORD*)(*(_QWORD*)(v27 + 32)
							+ 40
							* ((unsigned int)(LODWORD(v115) + HIDWORD(v115)) % (((1i64 << *(_BYTE*)(v27 + 11)) - 1) | 1)));
					}
					while (v28[6] != 3 || (double)v18 != *((double*)v28 + 2))
					{
						v28 = (_DWORD*)*((_QWORD*)v28 + 4);
						if (!v28)
						{
							v28 = dword_140A12138;
							break;
						}
					}
				}
				else
				{
					v28 = (_DWORD*)(*(_QWORD*)(v27 + 24) + 16i64 * (v18 - 1));
				}
				v29 = a1[2];
				*(_QWORD*)v29 = *(_QWORD*)v28;
				*(_DWORD*)(v29 + 8) = v28[2];
				v30 = a1[2] + 16i64;
				a1[2] = v30;
				sub_14005EA50((__int64)a1, (__int64*)(v30 - 48), (int*)(v30 - 32), (unsigned int*)(v30 - 16));
				a1[2] -= 48i64;
				sub_1400579E0((__int64)a1, v31, v18);
			}
		LABEL_45:
			v9 = (_QWORD*)v9[16];
		} while (v9);
		v10 = v110;
		v8 = -1i64;
	}
	v32 = *(_QWORD*)(qword_140C65898 + 27280);
	if (v32)
	{
		while ((unsigned int)sub_14018E2C0((__int64)v7, (unsigned __int16*)(v32 + 12)))
		{
			v32 = *(_QWORD*)(v32 + 272);
			if (!v32)
				goto LABEL_81;
		}
		v33 = a1[4];
		v104 = off_140B569F0;
		v106 = a1;
		v34 = *(_QWORD*)(v33 + 112);
		v107 = 1;
		if (*(_QWORD*)(v33 + 120) >= v34)
			sub_14005E2C0((__int64)a1);
		v35 = a1[2];
		v36 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v35 + 8) = 5;
		*(_QWORD*)v35 = v36;
		a1[2] += 16i64;
		v37 = sub_1400578C0((__int64)a1);
		LODWORD(v105) = v37;
		sub_1405DAB80(v32, (__int64)&v104);
		v38 = *(_QWORD*)(a1[4] + 160i64);
		if ((unsigned int)(v10 - 1) >= *(_DWORD*)(v38 + 56))
		{
			if ((double)v10 == 0.0)
			{
				v39 = *(_DWORD**)(v38 + 32);
			}
			else
			{
				v116 = (double)v10;
				v39 = (_DWORD*)(*(_QWORD*)(v38 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v116) + HIDWORD(v116)) % (((1i64 << *(_BYTE*)(v38 + 11)) - 1) | 1)));
			}
			while (v39[6] != 3 || (double)v10 != *((double*)v39 + 2))
			{
				v39 = (_DWORD*)*((_QWORD*)v39 + 4);
				if (!v39)
				{
					v39 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v39 = (_DWORD*)(*(_QWORD*)(v38 + 24) + 16i64 * (v10 - 1));
		}
		v40 = a1[2];
		*(_QWORD*)v40 = *(_QWORD*)v39;
		*(_DWORD*)(v40 + 8) = v39[2];
		a1[2] += 16i64;
		v41 = (unsigned __int64*)sub_14018F0E0(&v104, L"tFriend")[1];
		if (v41)
		{
			v42 = -1i64;
			do
				++v42;
			while (*((_BYTE*)v41 + v42));
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v43 = a1[2];
			v44 = sub_140062650((__int64)a1, v41, v42);
			*(_DWORD*)(v43 + 8) = 4;
			*(_QWORD*)v43 = v44;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
		}
		v45 = (__int64)v105;
		a1[2] += 16i64;
		if (v45)
			sub_14018B900(v45, 0);
		v46 = *(_QWORD*)(a1[4] + 160i64);
		if ((unsigned int)(v37 - 1) >= *(_DWORD*)(v46 + 56))
		{
			if ((double)v37 == 0.0)
			{
				v47 = *(_DWORD**)(v46 + 32);
			}
			else
			{
				v117 = (double)v37;
				v47 = (_DWORD*)(*(_QWORD*)(v46 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v117) + HIDWORD(v117)) % (((1i64 << *(_BYTE*)(v46 + 11)) - 1) | 1)));
			}
			while (v47[6] != 3 || (double)v37 != *((double*)v47 + 2))
			{
				v47 = (_DWORD*)*((_QWORD*)v47 + 4);
				if (!v47)
				{
					v47 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v47 = (_DWORD*)(*(_QWORD*)(v46 + 24) + 16i64 * (v37 - 1));
		}
		v48 = a1[2];
		*(_QWORD*)v48 = *(_QWORD*)v47;
		*(_DWORD*)(v48 + 8) = v47[2];
		v49 = a1[2] + 16i64;
		a1[2] = v49;
		sub_14005EA50((__int64)a1, (__int64*)(v49 - 48), (int*)(v49 - 32), (unsigned int*)(v49 - 16));
		a1[2] -= 48i64;
		sub_1400579E0((__int64)a1, v50, v37);
	}
LABEL_81:
	v51 = *(_QWORD*)(qword_140C65898 + 27304);
	if (v51)
	{
		while ((unsigned int)sub_14018E2C0((__int64)v7, (unsigned __int16*)(v51 + 4)))
		{
			v51 = *(_QWORD*)(v51 + 216);
			if (!v51)
				goto LABEL_121;
		}
		v52 = a1[4];
		v106 = a1;
		v104 = off_140B569F0;
		v53 = *(_QWORD*)(v52 + 112);
		v107 = 1;
		if (*(_QWORD*)(v52 + 120) >= v53)
			sub_14005E2C0((__int64)a1);
		v54 = a1[2];
		v55 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v54 + 8) = 5;
		*(_QWORD*)v54 = v55;
		a1[2] += 16i64;
		v56 = sub_1400578C0((__int64)a1);
		LODWORD(v105) = v56;
		sub_1405DBAA0(v51, (__int64)&v104);
		v57 = *(_QWORD*)(a1[4] + 160i64);
		if ((unsigned int)(v110 - 1) >= *(_DWORD*)(v57 + 56))
		{
			if ((double)v110 == 0.0)
			{
				v58 = *(_DWORD**)(v57 + 32);
			}
			else
			{
				v118 = (double)v110;
				v58 = (_DWORD*)(*(_QWORD*)(v57 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v118) + HIDWORD(v118)) % (((1i64 << *(_BYTE*)(v57 + 11)) - 1) | 1)));
			}
			while (v58[6] != 3 || (double)v110 != *((double*)v58 + 2))
			{
				v58 = (_DWORD*)*((_QWORD*)v58 + 4);
				if (!v58)
				{
					v58 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v58 = (_DWORD*)(*(_QWORD*)(v57 + 24) + 16i64 * (v110 - 1));
		}
		v59 = a1[2];
		*(_QWORD*)v59 = *(_QWORD*)v58;
		*(_DWORD*)(v59 + 8) = v58[2];
		a1[2] += 16i64;
		v60 = (unsigned __int64*)sub_14018F0E0(&v104, L"tSuggested")[1];
		if (v60)
		{
			v61 = -1i64;
			do
				++v61;
			while (*((_BYTE*)v60 + v61));
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v62 = a1[2];
			v63 = sub_140062650((__int64)a1, v60, v61);
			*(_DWORD*)(v62 + 8) = 4;
			*(_QWORD*)v62 = v63;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
		}
		v64 = (__int64)v105;
		a1[2] += 16i64;
		if (v64)
			sub_14018B900(v64, 0);
		v65 = *(_QWORD*)(a1[4] + 160i64);
		if ((unsigned int)(v56 - 1) >= *(_DWORD*)(v65 + 56))
		{
			if ((double)v56 == 0.0)
			{
				v66 = *(_DWORD**)(v65 + 32);
			}
			else
			{
				v119 = (double)v56;
				v66 = (_DWORD*)(*(_QWORD*)(v65 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v119) + HIDWORD(v119)) % (((1i64 << *(_BYTE*)(v65 + 11)) - 1) | 1)));
			}
			while (v66[6] != 3 || (double)v56 != *((double*)v66 + 2))
			{
				v66 = (_DWORD*)*((_QWORD*)v66 + 4);
				if (!v66)
				{
					v66 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v66 = (_DWORD*)(*(_QWORD*)(v65 + 24) + 16i64 * (v56 - 1));
		}
		v67 = a1[2];
		*(_QWORD*)v67 = *(_QWORD*)v66;
		*(_DWORD*)(v67 + 8) = v66[2];
		v68 = a1[2] + 16i64;
		a1[2] = v68;
		sub_14005EA50((__int64)a1, (__int64*)(v68 - 48), (int*)(v68 - 32), (unsigned int*)(v68 - 16));
		a1[2] -= 48i64;
		if (v56 >= 0)
		{
			v69 = *(_DWORD**)(*(_QWORD*)sub_1400580E0((__int64)a1, -10000) + 32i64);
			while (v69[6] != 3 || *((double*)v69 + 2) != 0.0)
			{
				v69 = (_DWORD*)*((_QWORD*)v69 + 4);
				if (!v69)
				{
					v69 = dword_140A12138;
					break;
				}
			}
			v70 = a1[2];
			*(_QWORD*)v70 = *(_QWORD*)v69;
			*(_DWORD*)(v70 + 8) = v69[2];
			a1[2] += 16i64;
			sub_140058B30((__int64)a1, -10000);
			v71 = a1[2];
			*(_DWORD*)(v71 + 8) = 3;
			*(double*)v71 = (double)v56;
			a1[2] += 16i64;
			sub_140058B30((__int64)a1, -10000);
		}
	}
LABEL_121:
	v72 = *(_QWORD*)(qword_140C659F0 + 496);
	if (v72)
	{
		while ((unsigned int)sub_14018E2C0((__int64)v7, (unsigned __int16*)(v72 + 12)))
		{
			v72 = *(_QWORD*)(v72 + 256);
			if (!v72)
				goto LABEL_124;
		}
		v79 = a1[4];
		v106 = a1;
		v104 = off_140B569F0;
		v80 = *(_QWORD*)(v79 + 112);
		v107 = 1;
		if (*(_QWORD*)(v79 + 120) >= v80)
			sub_14005E2C0((__int64)a1);
		v81 = a1[2];
		v82 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v81 + 8) = 5;
		*(_QWORD*)v81 = v82;
		a1[2] += 16i64;
		v83 = sub_1400578C0((__int64)a1);
		LODWORD(v105) = v83;
		sub_1404B4E40(v72, (__int64)&v104);
		v84 = *(_QWORD*)(a1[4] + 160i64);
		v73 = v110;
		if ((unsigned int)(v110 - 1) >= *(_DWORD*)(v84 + 56))
		{
			v86 = (double)v110;
			v111 = (double)v110;
			if (v86 == 0.0)
				v85 = *(_DWORD**)(v84 + 32);
			else
				v85 = (_DWORD*)(*(_QWORD*)(v84 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v111) + HIDWORD(v111)) % (((1i64 << *(_BYTE*)(v84 + 11)) - 1) | 1)));
			while (v85[6] != 3 || v86 != *((double*)v85 + 2))
			{
				v85 = (_DWORD*)*((_QWORD*)v85 + 4);
				if (!v85)
				{
					v85 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v85 = (_DWORD*)(*(_QWORD*)(v84 + 24) + 16i64 * (v110 - 1));
		}
		v87 = a1[2];
		*(_QWORD*)v87 = *(_QWORD*)v85;
		*(_DWORD*)(v87 + 8) = v85[2];
		a1[2] += 16i64;
		v88 = (unsigned __int64*)sub_14018F0E0(&v104, L"tNeighbor")[1];
		if (v88)
		{
			do
				++v8;
			while (*((_BYTE*)v88 + v8));
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v89 = a1[2];
			v90 = sub_140062650((__int64)a1, v88, v8);
			*(_DWORD*)(v89 + 8) = 4;
			*(_QWORD*)v89 = v90;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
		}
		v91 = (__int64)v105;
		a1[2] += 16i64;
		if (v91)
			sub_14018B900(v91, 0);
		v92 = *(_QWORD*)(a1[4] + 160i64);
		if ((unsigned int)(v83 - 1) >= *(_DWORD*)(v92 + 56))
		{
			if ((double)v83 == 0.0)
			{
				v93 = *(_DWORD**)(v92 + 32);
			}
			else
			{
				v112 = (double)v83;
				v93 = (_DWORD*)(*(_QWORD*)(v92 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v112) + HIDWORD(v112)) % (((1i64 << *(_BYTE*)(v92 + 11)) - 1) | 1)));
			}
			while (v93[6] != 3 || (double)v83 != *((double*)v93 + 2))
			{
				v93 = (_DWORD*)*((_QWORD*)v93 + 4);
				if (!v93)
				{
					v93 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v93 = (_DWORD*)(*(_QWORD*)(v92 + 24) + 16i64 * (v83 - 1));
		}
		v94 = a1[2];
		*(_QWORD*)v94 = *(_QWORD*)v93;
		*(_DWORD*)(v94 + 8) = v93[2];
		v95 = a1[2] + 16i64;
		a1[2] = v95;
		sub_14005EA50((__int64)a1, (__int64*)(v95 - 48), (int*)(v95 - 32), (unsigned int*)(v95 - 16));
		a1[2] -= 48i64;
		if (v83 >= 0)
		{
			v96 = *(_DWORD**)(*(_QWORD*)sub_1400580E0((__int64)a1, -10000) + 32i64);
			while (v96[6] != 3 || *((double*)v96 + 2) != 0.0)
			{
				v96 = (_DWORD*)*((_QWORD*)v96 + 4);
				if (!v96)
				{
					v96 = dword_140A12138;
					break;
				}
			}
			v97 = a1[2];
			*(_QWORD*)v97 = *(_QWORD*)v96;
			*(_DWORD*)(v97 + 8) = v96[2];
			a1[2] += 16i64;
			sub_140058B30((__int64)a1, -10000);
			v98 = a1[2];
			*(_DWORD*)(v98 + 8) = 3;
			*(double*)v98 = (double)v83;
			a1[2] += 16i64;
			sub_140058B30((__int64)a1, -10000);
		}
	}
	else
	{
	LABEL_124:
		v73 = v110;
	}
	v74 = qword_140C65898;
	if (*(_QWORD*)(qword_140C65898 + 27728))
	{
		v75 = sub_140605380(qword_140C65898 + 27664, v7);
		v76 = *(_QWORD*)(v74 + 27728);
		if (v76)
		{
			if (v75 < *(_QWORD*)(v76 + 96))
			{
				v77 = *(_QWORD*)(a1[4] + 160i64);
				if ((unsigned int)(v73 - 1) >= *(_DWORD*)(v77 + 56))
				{
					if ((double)v73 == 0.0)
					{
						v78 = *(_DWORD**)(v77 + 32);
					}
					else
					{
						v113 = (double)v73;
						v78 = (_DWORD*)(*(_QWORD*)(v77 + 32)
							+ 40
							* ((unsigned int)(LODWORD(v113) + HIDWORD(v113)) % (((1i64 << *(_BYTE*)(v77 + 11)) - 1) | 1)));
					}
					while (v78[6] != 3 || (double)v73 != *((double*)v78 + 2))
					{
						v78 = (_DWORD*)*((_QWORD*)v78 + 4);
						if (!v78)
						{
							v78 = dword_140A12138;
							break;
						}
					}
				}
				else
				{
					v78 = (_DWORD*)(*(_QWORD*)(v77 + 24) + 16i64 * (v73 - 1));
				}
				v99 = a1[2];
				*(_QWORD*)v99 = *(_QWORD*)v78;
				*(_DWORD*)(v99 + 8) = v78[2];
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, (__int64)v78, L"nPartyIndex", v75 + 1);
				a1[2] -= 16i64;
			}
		}
	}
	v100 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v73);
	v101 = a1[2];
	*(_QWORD*)v101 = *v100;
	v102 = *((unsigned int*)v100 + 2);
	*(_DWORD*)(v101 + 8) = v102;
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v102, v73);
	if (v7)
		sub_14018B900((__int64)v7, 0);
	return 1i64;
}
// 1406FA358: variable 'v31' is possibly undefined
// 1406FA5F8: variable 'v50' is possibly undefined
// 1409F7FCC: using guessed type unsigned __int16 word_1409F7FCC[2];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B41480: using guessed type wchar_t aTneighbor[10];
// 140B41498: using guessed type wchar_t aTsuggested[11];
// 140B414B0: using guessed type wchar_t aTfriend[8];
// 140B414C0: using guessed type wchar_t aTaccountfriend[15];
// 140B416C0: using guessed type wchar_t aNpartyindex[12];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;

