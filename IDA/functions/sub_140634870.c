//----- (0000000140634870) ----------------------------------------------------
__int64 __fastcall sub_140634870(_QWORD* a1, __int64 a2, int a3)
{
	unsigned int v3; // esi
	int v4; // r14d
	__int64 v5; // rbx
	_QWORD* v6; // r12
	__int64 v7; // r15
	__int64 v8; // rdi
	__int64 v9; // rcx
	__int64 v10; // rbx
	__int64 v11; // rax
	__int64 v12; // rdx
	int v13; // r12d
	__int64 v14; // rcx
	unsigned int v15; // ebx
	__int64 v16; // rax
	__int64 v17; // rbx
	float v18; // xmm6_4
	__int64 v19; // rbx
	_QWORD* v20; // rax
	__int64 v21; // rdx
	unsigned __int64* v22; // r14
	unsigned __int64 v23; // rsi
	__int64 v24; // rbx
	__int64 v25; // rax
	__int64 v26; // rcx
	__int64 v27; // rax
	__int64* v28; // rax
	int v29; // r13d
	_QWORD* v30; // rax
	__int64 v31; // r10
	unsigned __int64* v32; // r14
	unsigned __int64 v33; // rsi
	__int64 v34; // rbx
	__int64 v35; // rax
	__int64 v36; // rcx
	_DWORD* v37; // rcx
	__int64* v38; // rax
	struct _FILETIME v39; // r14
	__int64 v40; // rdi
	__int64 v41; // rcx
	__int64 v42; // rbx
	__int64 v43; // rax
	int v44; // eax
	__int64 v45; // r15
	unsigned int v46; // ebx
	int v47; // r13d
	__int64 v48; // rax
	unsigned __int64 v49; // r14
	float v50; // xmm7_4
	__int64 v51; // rsi
	unsigned int v52; // ebx
	__int64 v53; // rax
	__int64 v54; // rbx
	float v55; // xmm6_4
	__int64 v56; // rbx
	unsigned int v57; // r12d
	__int64 v58; // r9
	_DWORD* v59; // rdx
	__int64 v60; // rcx
	unsigned __int64* v61; // r14
	unsigned __int64 v62; // rsi
	__int64 v63; // rbx
	__int64 v64; // rax
	__int64 v65; // rcx
	__int64 v66; // rax
	__int64* v67; // rax
	__int64 v68; // r9
	__int64 v69; // r10
	_DWORD* v70; // rcx
	unsigned __int64* v71; // r14
	unsigned __int64 v72; // rsi
	__int64 v73; // rbx
	__int64 v74; // rax
	__int64 v75; // rcx
	__int64 v76; // rax
	__int64* v77; // rax
	__int64 v78; // r10
	int v79; // r15d
	__int64 v80; // r9
	_DWORD* v81; // rcx
	unsigned __int64* v82; // r14
	unsigned __int64 v83; // rsi
	__int64 v84; // rbx
	__int64 v85; // rax
	__int64 v86; // rcx
	_DWORD* v87; // rcx
	__int64* v88; // rax
	_DWORD* v89; // rcx
	__int64 v90; // rdx
	__int64 v91; // rax
	struct _FILETIME v92; // r14
	_QWORD* v93; // r15
	struct _FILETIME v94; // r12
	__int64 v95; // rdi
	__int64 v96; // rcx
	__int64 v97; // rbx
	__int64 v98; // rax
	int v99; // r13d
	unsigned int v100; // ebx
	__int64 v101; // rax
	__int64 v102; // rbx
	float v103; // xmm6_4
	__int64 v104; // rbx
	__int64 v105; // r9
	_DWORD* v106; // rdx
	__int64 v107; // rcx
	unsigned __int64* v108; // r14
	unsigned __int64 v109; // rsi
	__int64 v110; // rbx
	__int64 v111; // rax
	__int64 v112; // rcx
	__int64 v113; // rax
	__int64* v114; // rax
	__int64 v115; // r10
	int v116; // r12d
	__int64 v117; // r9
	_DWORD* v118; // rcx
	unsigned __int64* v119; // r14
	unsigned __int64 v120; // rsi
	__int64 v121; // rbx
	__int64 v122; // rax
	__int64 v123; // rcx
	_DWORD* v124; // rcx
	__int64* v125; // rax
	_DWORD* v126; // rcx
	__int64 v127; // rdx
	__int64 v128; // rdx
	struct _FILETIME v130; // [rsp+28h] [rbp-79h] BYREF
	struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp-71h] BYREF
	struct _FILETIME v132; // [rsp+38h] [rbp-69h] BYREF
	struct _FILETIME v133; // [rsp+40h] [rbp-61h] BYREF
	__int64(__fastcall * *v134)(); // [rsp+48h] [rbp-59h] BYREF
	__int64 v135; // [rsp+50h] [rbp-51h]
	__int64 v136; // [rsp+58h] [rbp-49h]
	__int128 v137; // [rsp+60h] [rbp-41h]
	unsigned __int64 v141; // [rsp+120h] [rbp+7Fh]
	double v142; // [rsp+120h] [rbp+7Fh]
	double v143; // [rsp+120h] [rbp+7Fh]
	double v144; // [rsp+120h] [rbp+7Fh]
	double v145; // [rsp+120h] [rbp+7Fh]
	double v146; // [rsp+120h] [rbp+7Fh]

	v3 = 0;
	v4 = a3;
	v5 = a2;
	v6 = a1;
	v141 = 0i64;
	if (a1[1])
	{
		v7 = 0i64;
		do
		{
			v8 = *(_QWORD*)(v5 + 16);
			v134 = off_140B569F0;
			LODWORD(v137) = 1;
			v9 = *(_QWORD*)(v8 + 32);
			v136 = v8;
			if (*(_QWORD*)(v9 + 120) >= *(_QWORD*)(v9 + 112))
				sub_14005E2C0(v8);
			v10 = *(_QWORD*)(v8 + 16);
			v11 = sub_14005C1B0(v8, 0, 0);
			*(_DWORD*)(v10 + 8) = 5;
			*(_QWORD*)v10 = v11;
			*(_QWORD*)(v8 + 16) += 16i64;
			v13 = sub_1400578C0(v8);
			v14 = *a1;
			LODWORD(v135) = v13;
			v15 = *(_DWORD*)(v7 + v14);
			if (qword_140C63840)
			{
				v16 = qword_140C63840(off_140A6CB68, v15, qword_140C63858);
			}
			else
			{
				if (dword_140C63898 || (int)sub_14022FD20() < 0)
					goto LABEL_33;
				v16 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64480 + 24i64))(qword_140C64480, v15);
			}
			if (v16 && (unsigned int)sub_140639710(v16, (__int64)&v134, v4))
			{
				v17 = *a1;
				v18 = 0.0;
				GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
				if (*(_QWORD*)(v7 + v17 + 8) > *(unsigned __int64*)&SystemTimeAsFileTime)
				{
					v19 = *a1;
					GetSystemTimeAsFileTime(&v130);
					v18 = (float)(int)((*(_QWORD*)(v7 + v19 + 8) - *(_QWORD*)&v130) / 0x989680ui64);
				}
				v20 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v8 + 32) + 160i64), v13);
				v21 = *(_QWORD*)(v8 + 16);
				*(_QWORD*)v21 = *v20;
				*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
				*(_QWORD*)(v8 + 16) += 16i64;
				v22 = (unsigned __int64*)sub_14018F0E0(&v134, L"nSecondsRemaining")[1];
				if (v22)
				{
					v23 = -1i64;
					do
						++v23;
					while (*((_BYTE*)v22 + v23));
					if (*(_QWORD*)(*(_QWORD*)(v8 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v8 + 32) + 112i64))
						sub_14005E2C0(v8);
					v24 = *(_QWORD*)(v8 + 16);
					v25 = sub_140062650(v8, v22, v23);
					*(_DWORD*)(v24 + 8) = 4;
					*(_QWORD*)v24 = v25;
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v8 + 16) + 8i64) = 0;
				}
				v26 = v135;
				*(_QWORD*)(v8 + 16) += 16i64;
				if (v26)
					sub_14018B900(v26, 0);
				v27 = *(_QWORD*)(v8 + 16);
				*(_DWORD*)(v27 + 8) = 3;
				*(double*)v27 = v18;
				*(_QWORD*)(v8 + 16) += 16i64;
				v28 = (__int64*)sub_1400580E0(v8, -3);
				sub_14005EA50(v8, v28, (int*)(*(_QWORD*)(v8 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v8 + 16) - 16i64));
				*(_QWORD*)(v8 + 16) -= 48i64;
				v29 = *(_DWORD*)(v7 + *a1 + 16);
				v30 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v8 + 32) + 160i64), v13);
				*(_QWORD*)v31 = *v30;
				*(_DWORD*)(v31 + 8) = *((_DWORD*)v30 + 2);
				*(_QWORD*)(v8 + 16) += 16i64;
				v32 = (unsigned __int64*)sub_14018F0E0(&v134, L"bGranted")[1];
				if (v32)
				{
					v33 = -1i64;
					do
						++v33;
					while (*((_BYTE*)v32 + v33));
					if (*(_QWORD*)(*(_QWORD*)(v8 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v8 + 32) + 112i64))
						sub_14005E2C0(v8);
					v34 = *(_QWORD*)(v8 + 16);
					v35 = sub_140062650(v8, v32, v33);
					*(_DWORD*)(v34 + 8) = 4;
					*(_QWORD*)v34 = v35;
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v8 + 16) + 8i64) = 0;
				}
				v36 = v135;
				*(_QWORD*)(v8 + 16) += 16i64;
				if (v36)
					sub_14018B900(v36, 0);
				v37 = *(_DWORD**)(v8 + 16);
				v37[2] = 1;
				*v37 = v29 != 0;
				*(_QWORD*)(v8 + 16) += 16i64;
				v38 = (__int64*)sub_1400580E0(v8, -3);
				sub_14005EA50(v8, v38, (int*)(*(_QWORD*)(v8 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v8 + 16) - 16i64));
				v5 = a2;
				*(_QWORD*)(v8 + 16) -= 48i64;
				sub_1400FB1D0(a2);
				v4 = a3;
				v3 = 1;
				goto LABEL_34;
			}
		LABEL_33:
			v5 = a2;
		LABEL_34:
			sub_1400579E0(v8, v12, v13);
			v6 = a1;
			v7 += 24i64;
			++v141;
		} while (v141 < a1[1]);
	}
	v39 = 0i64;
	v130 = 0i64;
	while (*(unsigned __int64*)&v39 < v6[3])
	{
		v40 = *(_QWORD*)(v5 + 16);
		v134 = off_140B569F0;
		LODWORD(v137) = 1;
		v41 = *(_QWORD*)(v40 + 32);
		v136 = v40;
		if (*(_QWORD*)(v41 + 120) >= *(_QWORD*)(v41 + 112))
			sub_14005E2C0(v40);
		v42 = *(_QWORD*)(v40 + 16);
		v43 = sub_14005C1B0(v40, 0, 0);
		*(_DWORD*)(v42 + 8) = 5;
		*(_QWORD*)v42 = v43;
		*(_QWORD*)(v40 + 16) += 16i64;
		v44 = sub_1400578C0(v40);
		v45 = 3i64 * *(_QWORD*)&v39;
		v46 = *(_DWORD*)(v6[2] + 24i64 * *(_QWORD*)&v39);
		v47 = v44;
		LODWORD(v135) = v44;
		if (qword_140C63840)
		{
			v48 = qword_140C63840(off_140A6CBA0, v46, qword_140C63858);
		}
		else
		{
			if (dword_140C641BC || (int)sub_140230160() < 0)
			{
			LABEL_113:
				v5 = a2;
				goto LABEL_114;
			}
			v48 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64FF8 + 24i64))(qword_140C64FF8, v46);
		}
		if (!v48 || !(unsigned int)sub_140639C80(v48, (__int64)&v134, a3))
			goto LABEL_113;
		v49 = 0i64;
		v50 = 1.0;
		if (v6[5])
		{
			v51 = 0i64;
			while (1)
			{
				v52 = *(_DWORD*)(v51 + v6[4]);
				if (qword_140C63840)
					break;
				if (!dword_140C641B8 && (int)sub_1402305A0() >= 0)
				{
					v53 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64E90 + 24i64))(qword_140C64E90, v52);
					goto LABEL_52;
				}
			LABEL_55:
				++v49;
				v51 += 24i64;
				if (v49 >= v6[5])
					goto LABEL_56;
			}
			v53 = qword_140C63840(off_140A6CBD8, v52, qword_140C63858);
		LABEL_52:
			if (v53 && *(_DWORD*)(v53 + 4) == 38)
				v50 = v50 * *(float*)(v53 + 12);
			goto LABEL_55;
		}
	LABEL_56:
		v54 = v6[2];
		v55 = 0.0;
		GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
		if (*(_QWORD*)(v54 + 8 * v45 + 8) > *(unsigned __int64*)&SystemTimeAsFileTime)
		{
			v56 = v6[2];
			GetSystemTimeAsFileTime(&v132);
			v55 = (float)(int)((*(_QWORD*)(v56 + 8 * v45 + 8) - *(_QWORD*)&v132) / 0x989680ui64);
		}
		v57 = v47 - 1;
		v58 = *(_QWORD*)(*(_QWORD*)(v40 + 32) + 160i64);
		if ((unsigned int)(v47 - 1) >= *(_DWORD*)(v58 + 56))
		{
			if ((double)v47 == 0.0)
			{
				v59 = *(_DWORD**)(v58 + 32);
			}
			else
			{
				v142 = (double)v47;
				v59 = (_DWORD*)(*(_QWORD*)(v58 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v142) + HIDWORD(v142)) % (((1i64 << *(_BYTE*)(v58 + 11)) - 1) | 1)));
			}
			while (v59[6] != 3 || (double)v47 != *((double*)v59 + 2))
			{
				v59 = (_DWORD*)*((_QWORD*)v59 + 4);
				if (!v59)
				{
					v59 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v59 = (_DWORD*)(*(_QWORD*)(v58 + 24) + 16i64 * (v47 - 1));
		}
		v60 = *(_QWORD*)(v40 + 16);
		*(_QWORD*)v60 = *(_QWORD*)v59;
		*(_DWORD*)(v60 + 8) = v59[2];
		*(_QWORD*)(v40 + 16) += 16i64;
		v61 = (unsigned __int64*)sub_14018F0E0(&v134, L"nSecondsRemaining")[1];
		if (v61)
		{
			v62 = -1i64;
			do
				++v62;
			while (*((_BYTE*)v61 + v62));
			if (*(_QWORD*)(*(_QWORD*)(v40 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v40 + 32) + 112i64))
				sub_14005E2C0(v40);
			v63 = *(_QWORD*)(v40 + 16);
			v64 = sub_140062650(v40, v61, v62);
			*(_DWORD*)(v63 + 8) = 4;
			*(_QWORD*)v63 = v64;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v40 + 16) + 8i64) = 0;
		}
		v65 = v135;
		*(_QWORD*)(v40 + 16) += 16i64;
		if (v65)
			sub_14018B900(v65, 0);
		v66 = *(_QWORD*)(v40 + 16);
		*(_DWORD*)(v66 + 8) = 3;
		*(double*)v66 = v55;
		*(_QWORD*)(v40 + 16) += 16i64;
		v67 = (__int64*)sub_1400580E0(v40, -3);
		sub_14005EA50(v40, v67, (int*)(*(_QWORD*)(v40 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v40 + 16) - 16i64));
		*(_QWORD*)(v40 + 16) -= 48i64;
		v68 = *(_QWORD*)(*(_QWORD*)(v40 + 32) + 160i64);
		v69 = *(_QWORD*)(v40 + 16);
		if (v57 >= *(_DWORD*)(v68 + 56))
		{
			if ((double)v47 == 0.0)
			{
				v70 = *(_DWORD**)(v68 + 32);
			}
			else
			{
				v143 = (double)v47;
				v70 = (_DWORD*)(*(_QWORD*)(v68 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v143) + HIDWORD(v143)) % (((1i64 << *(_BYTE*)(v68 + 11)) - 1) | 1)));
			}
			while (v70[6] != 3 || (double)v47 != *((double*)v70 + 2))
			{
				v70 = (_DWORD*)*((_QWORD*)v70 + 4);
				if (!v70)
				{
					v70 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v70 = (_DWORD*)(*(_QWORD*)(v68 + 24) + 16i64 * (v47 - 1));
		}
		*(_QWORD*)v69 = *(_QWORD*)v70;
		*(_DWORD*)(v69 + 8) = v70[2];
		*(_QWORD*)(v40 + 16) += 16i64;
		v71 = (unsigned __int64*)sub_14018F0E0(&v134, L"nMultiplier")[1];
		if (v71)
		{
			v72 = -1i64;
			do
				++v72;
			while (*((_BYTE*)v71 + v72));
			if (*(_QWORD*)(*(_QWORD*)(v40 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v40 + 32) + 112i64))
				sub_14005E2C0(v40);
			v73 = *(_QWORD*)(v40 + 16);
			v74 = sub_140062650(v40, v71, v72);
			*(_DWORD*)(v73 + 8) = 4;
			*(_QWORD*)v73 = v74;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v40 + 16) + 8i64) = 0;
		}
		v75 = v135;
		*(_QWORD*)(v40 + 16) += 16i64;
		if (v75)
			sub_14018B900(v75, 0);
		v76 = *(_QWORD*)(v40 + 16);
		*(_DWORD*)(v76 + 8) = 3;
		*(double*)v76 = v50;
		*(_QWORD*)(v40 + 16) += 16i64;
		v77 = (__int64*)sub_1400580E0(v40, -3);
		sub_14005EA50(v40, v77, (int*)(*(_QWORD*)(v40 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v40 + 16) - 16i64));
		*(_QWORD*)(v40 + 16) -= 48i64;
		v78 = *(_QWORD*)(v40 + 16);
		v79 = *(_DWORD*)(a1[2] + 8 * v45 + 16);
		v80 = *(_QWORD*)(*(_QWORD*)(v40 + 32) + 160i64);
		if (v57 >= *(_DWORD*)(v80 + 56))
		{
			if ((double)v47 == 0.0)
			{
				v81 = *(_DWORD**)(v80 + 32);
			}
			else
			{
				v144 = (double)v47;
				v81 = (_DWORD*)(*(_QWORD*)(v80 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v144) + HIDWORD(v144)) % (((1i64 << *(_BYTE*)(v80 + 11)) - 1) | 1)));
			}
			while (v81[6] != 3 || (double)v47 != *((double*)v81 + 2))
			{
				v81 = (_DWORD*)*((_QWORD*)v81 + 4);
				if (!v81)
				{
					v81 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v81 = (_DWORD*)(*(_QWORD*)(v80 + 24) + 16i64 * (v47 - 1));
		}
		*(_QWORD*)v78 = *(_QWORD*)v81;
		*(_DWORD*)(v78 + 8) = v81[2];
		*(_QWORD*)(v40 + 16) += 16i64;
		v82 = (unsigned __int64*)sub_14018F0E0(&v134, L"bGranted")[1];
		if (v82)
		{
			v83 = -1i64;
			do
				++v83;
			while (*((_BYTE*)v82 + v83));
			if (*(_QWORD*)(*(_QWORD*)(v40 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v40 + 32) + 112i64))
				sub_14005E2C0(v40);
			v84 = *(_QWORD*)(v40 + 16);
			v85 = sub_140062650(v40, v82, v83);
			*(_DWORD*)(v84 + 8) = 4;
			*(_QWORD*)v84 = v85;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v40 + 16) + 8i64) = 0;
		}
		v86 = v135;
		*(_QWORD*)(v40 + 16) += 16i64;
		if (v86)
			sub_14018B900(v86, 0);
		v87 = *(_DWORD**)(v40 + 16);
		v87[2] = 1;
		*v87 = v79 != 0;
		*(_QWORD*)(v40 + 16) += 16i64;
		v88 = (__int64*)sub_1400580E0(v40, -3);
		sub_14005EA50(v40, v88, (int*)(*(_QWORD*)(v40 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v40 + 16) - 16i64));
		v5 = a2;
		*(_QWORD*)(v40 + 16) -= 48i64;
		sub_1400FB1D0(a2);
		v39 = v130;
		v6 = a1;
		v3 = 1;
	LABEL_114:
		if (v47 >= 0)
		{
			v89 = *(_DWORD**)(*(_QWORD*)sub_1400580E0(v40, -10000) + 32i64);
			while (v89[6] != 3 || *((double*)v89 + 2) != 0.0)
			{
				v89 = (_DWORD*)*((_QWORD*)v89 + 4);
				if (!v89)
				{
					v89 = dword_140A12138;
					break;
				}
			}
			v90 = *(_QWORD*)(v40 + 16);
			*(_QWORD*)v90 = *(_QWORD*)v89;
			*(_DWORD*)(v90 + 8) = v89[2];
			*(_QWORD*)(v40 + 16) += 16i64;
			sub_140058B30(v40, -10000);
			v91 = *(_QWORD*)(v40 + 16);
			*(_DWORD*)(v91 + 8) = 3;
			*(double*)v91 = (double)v47;
			*(_QWORD*)(v40 + 16) += 16i64;
			sub_140058B30(v40, -10000);
		}
		v130 = (struct _FILETIME)++ * (_QWORD*)&v39;
	}
	v92 = 0i64;
	v130 = 0i64;
	if (v6[5])
	{
		v93 = a1;
		v94 = 0i64;
		SystemTimeAsFileTime = 0i64;
		do
		{
			v95 = *(_QWORD*)(v5 + 16);
			LODWORD(v137) = 1;
			v96 = *(_QWORD*)(v95 + 32);
			v134 = off_140B569F0;
			v136 = v95;
			if (*(_QWORD*)(v96 + 120) >= *(_QWORD*)(v96 + 112))
				sub_14005E2C0(v95);
			v97 = *(_QWORD*)(v95 + 16);
			v98 = sub_14005C1B0(v95, 0, 0);
			*(_DWORD*)(v97 + 8) = 5;
			*(_QWORD*)v97 = v98;
			*(_QWORD*)(v95 + 16) += 16i64;
			v99 = sub_1400578C0(v95);
			v100 = *(_DWORD*)(*(_QWORD*)&v94 + v93[4]);
			LODWORD(v135) = v99;
			if (qword_140C63840)
			{
				v101 = qword_140C63840(off_140A6CBD8, v100, qword_140C63858);
			}
			else
			{
				if (dword_140C641B8 || (int)sub_1402305A0() < 0)
					goto LABEL_172;
				v101 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64E90 + 24i64))(qword_140C64E90, v100);
			}
			if (v101 && (unsigned int)sub_140639E60(v101, (__int64)&v134, a3))
			{
				v102 = v93[4];
				v103 = 0.0;
				GetSystemTimeAsFileTime(&v132);
				if (*(_QWORD*)(*(_QWORD*)&v94 + v102 + 8) > *(unsigned __int64*)&v132)
				{
					v104 = v93[4];
					GetSystemTimeAsFileTime(&v133);
					v103 = (float)(int)((*(_QWORD*)(*(_QWORD*)&v94 + v104 + 8) - *(_QWORD*)&v133) / 0x989680ui64);
				}
				v105 = *(_QWORD*)(*(_QWORD*)(v95 + 32) + 160i64);
				if ((unsigned int)(v99 - 1) >= *(_DWORD*)(v105 + 56))
				{
					if ((double)v99 == 0.0)
					{
						v106 = *(_DWORD**)(v105 + 32);
					}
					else
					{
						v145 = (double)v99;
						v106 = (_DWORD*)(*(_QWORD*)(v105 + 32)
							+ 40
							* ((unsigned int)(LODWORD(v145) + HIDWORD(v145))
								% (((1i64 << *(_BYTE*)(v105 + 11)) - 1) | 1)));
					}
					while (v106[6] != 3 || (double)v99 != *((double*)v106 + 2))
					{
						v106 = (_DWORD*)*((_QWORD*)v106 + 4);
						if (!v106)
						{
							v106 = dword_140A12138;
							break;
						}
					}
				}
				else
				{
					v106 = (_DWORD*)(*(_QWORD*)(v105 + 24) + 16i64 * (v99 - 1));
				}
				v107 = *(_QWORD*)(v95 + 16);
				*(_QWORD*)v107 = *(_QWORD*)v106;
				*(_DWORD*)(v107 + 8) = v106[2];
				*(_QWORD*)(v95 + 16) += 16i64;
				v108 = (unsigned __int64*)sub_14018F0E0(&v134, L"nSecondsRemaining")[1];
				if (v108)
				{
					v109 = -1i64;
					do
						++v109;
					while (*((_BYTE*)v108 + v109));
					if (*(_QWORD*)(*(_QWORD*)(v95 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v95 + 32) + 112i64))
						sub_14005E2C0(v95);
					v110 = *(_QWORD*)(v95 + 16);
					v111 = sub_140062650(v95, v108, v109);
					*(_DWORD*)(v110 + 8) = 4;
					*(_QWORD*)v110 = v111;
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v95 + 16) + 8i64) = 0;
				}
				v112 = v135;
				*(_QWORD*)(v95 + 16) += 16i64;
				if (v112)
					sub_14018B900(v112, 0);
				v113 = *(_QWORD*)(v95 + 16);
				*(_DWORD*)(v113 + 8) = 3;
				*(double*)v113 = v103;
				*(_QWORD*)(v95 + 16) += 16i64;
				v114 = (__int64*)sub_1400580E0(v95, -3);
				sub_14005EA50(
					v95,
					v114,
					(int*)(*(_QWORD*)(v95 + 16) - 32i64),
					(unsigned int*)(*(_QWORD*)(v95 + 16) - 16i64));
				*(_QWORD*)(v95 + 16) -= 48i64;
				v115 = *(_QWORD*)(v95 + 16);
				v116 = *(_DWORD*)(a1[4] + *(_QWORD*)&v94 + 16i64);
				v117 = *(_QWORD*)(*(_QWORD*)(v95 + 32) + 160i64);
				if ((unsigned int)(v99 - 1) >= *(_DWORD*)(v117 + 56))
				{
					if ((double)v99 == 0.0)
					{
						v118 = *(_DWORD**)(v117 + 32);
					}
					else
					{
						v146 = (double)v99;
						v118 = (_DWORD*)(*(_QWORD*)(v117 + 32)
							+ 40
							* ((unsigned int)(LODWORD(v146) + HIDWORD(v146))
								% (((1i64 << *(_BYTE*)(v117 + 11)) - 1) | 1)));
					}
					while (v118[6] != 3 || (double)v99 != *((double*)v118 + 2))
					{
						v118 = (_DWORD*)*((_QWORD*)v118 + 4);
						if (!v118)
						{
							v118 = dword_140A12138;
							break;
						}
					}
				}
				else
				{
					v118 = (_DWORD*)(*(_QWORD*)(v117 + 24) + 16i64 * (v99 - 1));
				}
				*(_QWORD*)v115 = *(_QWORD*)v118;
				*(_DWORD*)(v115 + 8) = v118[2];
				*(_QWORD*)(v95 + 16) += 16i64;
				v119 = (unsigned __int64*)sub_14018F0E0(&v134, L"bGranted")[1];
				if (v119)
				{
					v120 = -1i64;
					do
						++v120;
					while (*((_BYTE*)v119 + v120));
					if (*(_QWORD*)(*(_QWORD*)(v95 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v95 + 32) + 112i64))
						sub_14005E2C0(v95);
					v121 = *(_QWORD*)(v95 + 16);
					v122 = sub_140062650(v95, v119, v120);
					*(_DWORD*)(v121 + 8) = 4;
					*(_QWORD*)v121 = v122;
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v95 + 16) + 8i64) = 0;
				}
				v123 = v135;
				*(_QWORD*)(v95 + 16) += 16i64;
				if (v123)
					sub_14018B900(v123, 0);
				v124 = *(_DWORD**)(v95 + 16);
				v124[2] = 1;
				*v124 = v116 != 0;
				*(_QWORD*)(v95 + 16) += 16i64;
				v125 = (__int64*)sub_1400580E0(v95, -3);
				sub_14005EA50(
					v95,
					v125,
					(int*)(*(_QWORD*)(v95 + 16) - 32i64),
					(unsigned int*)(*(_QWORD*)(v95 + 16) - 16i64));
				v5 = a2;
				*(_QWORD*)(v95 + 16) -= 48i64;
				sub_1400FB1D0(a2);
				v94 = SystemTimeAsFileTime;
				v92 = v130;
				v93 = a1;
				v3 = 1;
				goto LABEL_173;
			}
		LABEL_172:
			v5 = a2;
		LABEL_173:
			if (v99 >= 0)
			{
				v126 = *(_DWORD**)(*(_QWORD*)sub_1400580E0(v95, -10000) + 32i64);
				while (v126[6] != 3 || *((double*)v126 + 2) != 0.0)
				{
					v126 = (_DWORD*)*((_QWORD*)v126 + 4);
					if (!v126)
					{
						v126 = dword_140A12138;
						break;
					}
				}
				v127 = *(_QWORD*)(v95 + 16);
				*(_QWORD*)v127 = *(_QWORD*)v126;
				*(_DWORD*)(v127 + 8) = v126[2];
				*(_QWORD*)(v95 + 16) += 16i64;
				sub_140058B30(v95, -10000);
				v128 = *(_QWORD*)(v95 + 16);
				*(_DWORD*)(v128 + 8) = 3;
				*(double*)v128 = (double)v99;
				*(_QWORD*)(v95 + 16) += 16i64;
				sub_140058B30(v95, -10000);
			}
			++* (_QWORD*)&v92;
			*(_QWORD*)&v94 += 24i64;
			v130 = v92;
			SystemTimeAsFileTime = v94;
		} while (*(unsigned __int64*)&v92 < v93[5]);
	}
	return v3;
}
// 140634B11: variable 'v31' is possibly undefined
// 140634BF8: variable 'v12' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6CB68: using guessed type wchar_t *off_140A6CB68[2];
// 140A6CBA0: using guessed type wchar_t *off_140A6CBA0[2];
// 140A6CBD8: using guessed type wchar_t *off_140A6CBD8[2];
// 140B28298: using guessed type wchar_t aNsecondsremain_0[18];
// 140B28338: using guessed type wchar_t aNmultiplier[12];
// 140B283C8: using guessed type wchar_t aNsecondsremain[18];
// 140B28458: using guessed type wchar_t aBgranted[9];
// 140B286E0: using guessed type wchar_t aBgranted_1[9];
// 140B28718: using guessed type wchar_t aBgranted_0[9];
// 140B28730: using guessed type wchar_t aNsecondsremain_1[18];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63898: using guessed type int dword_140C63898;
// 140C641B8: using guessed type int dword_140C641B8;
// 140C641BC: using guessed type int dword_140C641BC;
// 140C64480: using guessed type __int64 qword_140C64480;
// 140C64E90: using guessed type __int64 qword_140C64E90;
// 140C64FF8: using guessed type __int64 qword_140C64FF8;

