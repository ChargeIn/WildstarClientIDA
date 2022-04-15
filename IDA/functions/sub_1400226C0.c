//----- (00000001400226C0) ----------------------------------------------------
__int64 __fastcall sub_1400226C0(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 v3; // rsi
	__int64 v4; // r8
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	__int64 v8; // r14
	unsigned int v9; // ebx
	__int64 v10; // rbx
	__int64 v11; // rax
	int v12; // eax
	unsigned int v13; // ebx
	__int64 v14; // r12
	int v15; // r13d
	int v16; // r15d
	__int64 v17; // r9
	_DWORD* v18; // rdx
	__int64 v19; // rcx
	unsigned __int64* v20; // r14
	unsigned __int64 v21; // rsi
	__int64 v22; // rbx
	__int64 v23; // rax
	__int64 v24; // rcx
	__int64 v25; // rax
	__int64* v26; // rax
	__int64 v27; // r10
	int v28; // r15d
	__int64 v29; // r9
	_DWORD* v30; // rcx
	unsigned __int64* v31; // r14
	unsigned __int64 v32; // rsi
	__int64 v33; // rbx
	__int64 v34; // rax
	__int64 v35; // rcx
	__int64 v36; // rax
	__int64* v37; // rax
	__int64 v38; // rdx
	__int64 v39; // r10
	unsigned __int16* v40; // r11
	__int64 v41; // r9
	_DWORD* v42; // rcx
	__int64 v43; // r10
	int v44; // r15d
	__int64 v45; // r9
	_DWORD* v46; // rcx
	unsigned __int64* v47; // r14
	unsigned __int64 v48; // rsi
	__int64 v49; // rbx
	__int64 v50; // rax
	__int64 v51; // rcx
	__int64 v52; // rax
	__int64* v53; // rax
	__int64 v54; // r10
	int v55; // r15d
	__int64 v56; // r9
	_DWORD* v57; // rcx
	unsigned __int64* v58; // r14
	unsigned __int64 v59; // rsi
	__int64 v60; // rbx
	__int64 v61; // rax
	__int64 v62; // rcx
	__int64 v63; // rax
	__int64* v64; // rax
	__int64 v65; // r10
	int v66; // r15d
	__int64 v67; // r9
	_DWORD* v68; // rcx
	unsigned __int64* v69; // r14
	unsigned __int64 v70; // rsi
	__int64 v71; // rbx
	__int64 v72; // rax
	__int64 v73; // rcx
	__int64 v74; // rax
	__int64* v75; // rax
	_QWORD* v76; // rax
	__int64 v77; // r10
	__int64 v78; // rdx
	unsigned __int16* v79; // r11
	int v80; // r15d
	__int64 v81; // r9
	_DWORD* v82; // rdx
	__int64 v83; // rcx
	unsigned __int64* v84; // r14
	unsigned __int64 v85; // rsi
	__int64 v86; // rbx
	__int64 v87; // rax
	__int64 v88; // rcx
	_DWORD* v89; // rcx
	__int64* v90; // rax
	__int64 v91; // rdx
	__int64 v92; // rdx
	__int64(__fastcall * *v94)(); // [rsp+28h] [rbp-39h] BYREF
	unsigned int v95; // [rsp+30h] [rbp-31h]
	__int64 v96; // [rsp+38h] [rbp-29h]
	int v97; // [rsp+40h] [rbp-21h]
	__int64 v98; // [rsp+48h] [rbp-19h] BYREF
	__int64 v99; // [rsp+50h] [rbp-11h]
	int v102; // [rsp+D8h] [rbp+77h]
	double v103; // [rsp+E0h] [rbp+7Fh]
	double v104; // [rsp+E0h] [rbp+7Fh]
	double v105; // [rsp+E0h] [rbp+7Fh]
	double v106; // [rsp+E0h] [rbp+7Fh]
	double v107; // [rsp+E0h] [rbp+7Fh]
	double v108; // [rsp+E0h] [rbp+7Fh]
	double v109; // [rsp+E0h] [rbp+7Fh]

	v2 = *(_QWORD*)(*(_QWORD*)(a1 + 72) + 400i64);
	v3 = a2;
	v4 = *(_QWORD*)(v2 + 32);
	v94 = off_140B569F0;
	v96 = v2;
	v5 = *(_QWORD*)(v4 + 112);
	v97 = 1;
	if (*(_QWORD*)(v4 + 120) >= v5)
		sub_14005E2C0(v2);
	v6 = *(_QWORD*)(v2 + 16);
	v7 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	*(_QWORD*)(v2 + 16) += 16i64;
	v8 = 0i64;
	v9 = sub_1400578C0(v2);
	v95 = v9;
	v102 = 0;
	if (*(_DWORD*)v3)
	{
		do
		{
			if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
				sub_14005E2C0(v2);
			v10 = *(_QWORD*)(v2 + 16);
			v11 = sub_14005C1B0(v2, 0, 0);
			*(_DWORD*)(v10 + 8) = 5;
			*(_QWORD*)v10 = v11;
			*(_QWORD*)(v2 + 16) += 16i64;
			v12 = sub_1400578C0(v2);
			v13 = v12 - 1;
			v14 = 96 * v8;
			v15 = v12;
			v16 = *(_DWORD*)(96 * v8 + *(_QWORD*)(v3 + 8));
			v17 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64);
			if ((unsigned int)(v12 - 1) >= *(_DWORD*)(v17 + 56))
			{
				if ((double)v12 == 0.0)
				{
					v18 = *(_DWORD**)(v17 + 32);
				}
				else
				{
					v103 = (double)v12;
					v18 = (_DWORD*)(*(_QWORD*)(v17 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v103) + HIDWORD(v103)) % (((1i64 << *(_BYTE*)(v17 + 11)) - 1) | 1)));
				}
				while (v18[6] != 3 || (double)v12 != *((double*)v18 + 2))
				{
					v18 = (_DWORD*)*((_QWORD*)v18 + 4);
					if (!v18)
					{
						v18 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v18 = (_DWORD*)(*(_QWORD*)(v17 + 24) + 16i64 * (v12 - 1));
			}
			v19 = *(_QWORD*)(v2 + 16);
			*(_QWORD*)v19 = *(_QWORD*)v18;
			*(_DWORD*)(v19 + 8) = v18[2];
			*(_QWORD*)(v2 + 16) += 16i64;
			v20 = (unsigned __int64*)sub_14018F0E0(&v98, L"nRealmId")[1];
			if (v20)
			{
				v21 = -1i64;
				do
					++v21;
				while (*((_BYTE*)v20 + v21));
				if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
					sub_14005E2C0(v2);
				v22 = *(_QWORD*)(v2 + 16);
				v23 = sub_140062650(v2, v20, v21);
				v3 = a2;
				*(_DWORD*)(v22 + 8) = 4;
				*(_QWORD*)v22 = v23;
				v13 = v15 - 1;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
			}
			v24 = v99;
			*(_QWORD*)(v2 + 16) += 16i64;
			if (v24)
				sub_14018B900(v24, 0);
			v25 = *(_QWORD*)(v2 + 16);
			*(_DWORD*)(v25 + 8) = 3;
			*(double*)v25 = (double)v16;
			*(_QWORD*)(v2 + 16) += 16i64;
			v26 = (__int64*)sub_1400580E0(v2, -3);
			sub_14005EA50(v2, v26, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
			v27 = *(_QWORD*)(v2 + 16) - 48i64;
			*(_QWORD*)(v2 + 16) = v27;
			v28 = *(_DWORD*)(v14 + *(_QWORD*)(v3 + 8) + 32);
			v29 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64);
			if (v13 >= *(_DWORD*)(v29 + 56))
			{
				if ((double)v15 == 0.0)
				{
					v30 = *(_DWORD**)(v29 + 32);
				}
				else
				{
					v104 = (double)v15;
					v30 = (_DWORD*)(*(_QWORD*)(v29 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v104) + HIDWORD(v104)) % (((1i64 << *(_BYTE*)(v29 + 11)) - 1) | 1)));
				}
				while (v30[6] != 3 || (double)v15 != *((double*)v30 + 2))
				{
					v30 = (_DWORD*)*((_QWORD*)v30 + 4);
					if (!v30)
					{
						v30 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v30 = (_DWORD*)(*(_QWORD*)(v29 + 24) + 16i64 * (v15 - 1));
			}
			*(_QWORD*)v27 = *(_QWORD*)v30;
			*(_DWORD*)(v27 + 8) = v30[2];
			*(_QWORD*)(v2 + 16) += 16i64;
			v31 = (unsigned __int64*)sub_14018F0E0(&v98, L"nPopulation")[1];
			if (v31)
			{
				v32 = -1i64;
				do
					++v32;
				while (*((_BYTE*)v31 + v32));
				if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
					sub_14005E2C0(v2);
				v33 = *(_QWORD*)(v2 + 16);
				v34 = sub_140062650(v2, v31, v32);
				v3 = a2;
				*(_DWORD*)(v33 + 8) = 4;
				*(_QWORD*)v33 = v34;
				v13 = v15 - 1;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
			}
			v35 = v99;
			*(_QWORD*)(v2 + 16) += 16i64;
			if (v35)
				sub_14018B900(v35, 0);
			v36 = *(_QWORD*)(v2 + 16);
			*(_DWORD*)(v36 + 8) = 3;
			*(double*)v36 = (double)v28;
			*(_QWORD*)(v2 + 16) += 16i64;
			v37 = (__int64*)sub_1400580E0(v2, -3);
			sub_14005EA50(v2, v37, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
			v39 = *(_QWORD*)(v2 + 16) - 48i64;
			*(_QWORD*)(v2 + 16) = v39;
			v40 = *(unsigned __int16**)(v14 + *(_QWORD*)(v3 + 8) + 8);
			v41 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64);
			if (v13 >= *(_DWORD*)(v41 + 56))
			{
				if ((double)v15 == 0.0)
				{
					v42 = *(_DWORD**)(v41 + 32);
				}
				else
				{
					v105 = (double)v15;
					v38 = (unsigned int)(LODWORD(v105) + HIDWORD(v105)) % (((1i64 << *(_BYTE*)(v41 + 11)) - 1) | 1);
					v42 = (_DWORD*)(*(_QWORD*)(v41 + 32) + 40 * v38);
				}
				while (v42[6] != 3 || (double)v15 != *((double*)v42 + 2))
				{
					v42 = (_DWORD*)*((_QWORD*)v42 + 4);
					if (!v42)
					{
						v42 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v42 = (_DWORD*)(*(_QWORD*)(v41 + 24) + 16i64 * (v15 - 1));
			}
			*(_QWORD*)v39 = *(_QWORD*)v42;
			*(_DWORD*)(v39 + 8) = v42[2];
			*(_QWORD*)(v2 + 16) += 16i64;
			sub_1400F0870(v2, v38, L"strName", v40);
			v43 = *(_QWORD*)(v2 + 16) - 16i64;
			*(_QWORD*)(v2 + 16) = v43;
			v44 = *(_DWORD*)(v14 + *(_QWORD*)(v3 + 8) + 28);
			v45 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64);
			if (v13 >= *(_DWORD*)(v45 + 56))
			{
				if ((double)v15 == 0.0)
				{
					v46 = *(_DWORD**)(v45 + 32);
				}
				else
				{
					v106 = (double)v15;
					v46 = (_DWORD*)(*(_QWORD*)(v45 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v106) + HIDWORD(v106)) % (((1i64 << *(_BYTE*)(v45 + 11)) - 1) | 1)));
				}
				while (v46[6] != 3 || (double)v15 != *((double*)v46 + 2))
				{
					v46 = (_DWORD*)*((_QWORD*)v46 + 4);
					if (!v46)
					{
						v46 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v46 = (_DWORD*)(*(_QWORD*)(v45 + 24) + 16i64 * (v15 - 1));
			}
			*(_QWORD*)v43 = *(_QWORD*)v46;
			*(_DWORD*)(v43 + 8) = v46[2];
			*(_QWORD*)(v2 + 16) += 16i64;
			v47 = (unsigned __int64*)sub_14018F0E0(&v98, L"nRealmStatus")[1];
			if (v47)
			{
				v48 = -1i64;
				do
					++v48;
				while (*((_BYTE*)v47 + v48));
				if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
					sub_14005E2C0(v2);
				v49 = *(_QWORD*)(v2 + 16);
				v50 = sub_140062650(v2, v47, v48);
				v3 = a2;
				*(_DWORD*)(v49 + 8) = 4;
				*(_QWORD*)v49 = v50;
				v13 = v15 - 1;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
			}
			v51 = v99;
			*(_QWORD*)(v2 + 16) += 16i64;
			if (v51)
				sub_14018B900(v51, 0);
			v52 = *(_QWORD*)(v2 + 16);
			*(_DWORD*)(v52 + 8) = 3;
			*(double*)v52 = (double)v44;
			*(_QWORD*)(v2 + 16) += 16i64;
			v53 = (__int64*)sub_1400580E0(v2, -3);
			sub_14005EA50(v2, v53, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
			v54 = *(_QWORD*)(v2 + 16) - 48i64;
			*(_QWORD*)(v2 + 16) = v54;
			v55 = *(_DWORD*)(v14 + *(_QWORD*)(v3 + 8) + 60);
			v56 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64);
			if (v13 >= *(_DWORD*)(v56 + 56))
			{
				if ((double)v15 == 0.0)
				{
					v57 = *(_DWORD**)(v56 + 32);
				}
				else
				{
					v107 = (double)v15;
					v57 = (_DWORD*)(*(_QWORD*)(v56 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v107) + HIDWORD(v107)) % (((1i64 << *(_BYTE*)(v56 + 11)) - 1) | 1)));
				}
				while (v57[6] != 3 || (double)v15 != *((double*)v57 + 2))
				{
					v57 = (_DWORD*)*((_QWORD*)v57 + 4);
					if (!v57)
					{
						v57 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v57 = (_DWORD*)(*(_QWORD*)(v56 + 24) + 16i64 * (v15 - 1));
			}
			*(_QWORD*)v54 = *(_QWORD*)v57;
			*(_DWORD*)(v54 + 8) = v57[2];
			*(_QWORD*)(v2 + 16) += 16i64;
			v58 = (unsigned __int64*)sub_14018F0E0(&v98, L"nCount")[1];
			if (v58)
			{
				v59 = -1i64;
				do
					++v59;
				while (*((_BYTE*)v58 + v59));
				if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
					sub_14005E2C0(v2);
				v60 = *(_QWORD*)(v2 + 16);
				v61 = sub_140062650(v2, v58, v59);
				v3 = a2;
				*(_DWORD*)(v60 + 8) = 4;
				*(_QWORD*)v60 = v61;
				v13 = v15 - 1;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
			}
			v62 = v99;
			*(_QWORD*)(v2 + 16) += 16i64;
			if (v62)
				sub_14018B900(v62, 0);
			v63 = *(_QWORD*)(v2 + 16);
			*(_DWORD*)(v63 + 8) = 3;
			*(double*)v63 = (double)v55;
			*(_QWORD*)(v2 + 16) += 16i64;
			v64 = (__int64*)sub_1400580E0(v2, -3);
			sub_14005EA50(v2, v64, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
			v65 = *(_QWORD*)(v2 + 16) - 48i64;
			*(_QWORD*)(v2 + 16) = v65;
			v66 = *(_DWORD*)(v14 + *(_QWORD*)(v3 + 8) + 24);
			v67 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64);
			if (v13 >= *(_DWORD*)(v67 + 56))
			{
				if ((double)v15 == 0.0)
				{
					v68 = *(_DWORD**)(v67 + 32);
				}
				else
				{
					v108 = (double)v15;
					v68 = (_DWORD*)(*(_QWORD*)(v67 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v108) + HIDWORD(v108)) % (((1i64 << *(_BYTE*)(v67 + 11)) - 1) | 1)));
				}
				while (v68[6] != 3 || (double)v15 != *((double*)v68 + 2))
				{
					v68 = (_DWORD*)*((_QWORD*)v68 + 4);
					if (!v68)
					{
						v68 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v68 = (_DWORD*)(*(_QWORD*)(v67 + 24) + 16i64 * (v15 - 1));
			}
			*(_QWORD*)v65 = *(_QWORD*)v68;
			*(_DWORD*)(v65 + 8) = v68[2];
			*(_QWORD*)(v2 + 16) += 16i64;
			v69 = (unsigned __int64*)sub_14018F0E0(&v98, L"nRealmPVPType")[1];
			if (v69)
			{
				v70 = -1i64;
				do
					++v70;
				while (*((_BYTE*)v69 + v70));
				if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
					sub_14005E2C0(v2);
				v71 = *(_QWORD*)(v2 + 16);
				v72 = sub_140062650(v2, v69, v70);
				v3 = a2;
				*(_DWORD*)(v71 + 8) = 4;
				*(_QWORD*)v71 = v72;
				v13 = v15 - 1;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
			}
			v73 = v99;
			*(_QWORD*)(v2 + 16) += 16i64;
			if (v73)
				sub_14018B900(v73, 0);
			v74 = *(_QWORD*)(v2 + 16);
			*(_DWORD*)(v74 + 8) = 3;
			*(double*)v74 = (double)v66;
			*(_QWORD*)(v2 + 16) += 16i64;
			v75 = (__int64*)sub_1400580E0(v2, -3);
			sub_14005EA50(v2, v75, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
			*(_QWORD*)(v2 + 16) -= 48i64;
			if (*(_QWORD*)(v14 + *(_QWORD*)(v3 + 8) + 64))
			{
				v76 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v15);
				*(_QWORD*)v77 = *v76;
				*(_DWORD*)(v77 + 8) = *((_DWORD*)v76 + 2);
				*(_QWORD*)(v2 + 16) += 16i64;
				sub_1400F0870(v2, v78, L"strLastPlayed", v79);
				*(_QWORD*)(v2 + 16) -= 16i64;
			}
			v80 = *(_DWORD*)(v14 + *(_QWORD*)(v3 + 8) + 88);
			v81 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64);
			if (v13 >= *(_DWORD*)(v81 + 56))
			{
				if ((double)v15 == 0.0)
				{
					v82 = *(_DWORD**)(v81 + 32);
				}
				else
				{
					v109 = (double)v15;
					v82 = (_DWORD*)(*(_QWORD*)(v81 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v109) + HIDWORD(v109)) % (((1i64 << *(_BYTE*)(v81 + 11)) - 1) | 1)));
				}
				while (v82[6] != 3 || (double)v15 != *((double*)v82 + 2))
				{
					v82 = (_DWORD*)*((_QWORD*)v82 + 4);
					if (!v82)
					{
						v82 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v82 = (_DWORD*)(*(_QWORD*)(v81 + 24) + 16i64 * (v15 - 1));
			}
			v83 = *(_QWORD*)(v2 + 16);
			*(_QWORD*)v83 = *(_QWORD*)v82;
			*(_DWORD*)(v83 + 8) = v82[2];
			*(_QWORD*)(v2 + 16) += 16i64;
			v84 = (unsigned __int64*)sub_14018F0E0(&v98, L"bIsFree")[1];
			if (v84)
			{
				v85 = -1i64;
				do
					++v85;
				while (*((_BYTE*)v84 + v85));
				if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
					sub_14005E2C0(v2);
				v86 = *(_QWORD*)(v2 + 16);
				v87 = sub_140062650(v2, v84, v85);
				v3 = a2;
				*(_DWORD*)(v86 + 8) = 4;
				*(_QWORD*)v86 = v87;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
			}
			v88 = v99;
			*(_QWORD*)(v2 + 16) += 16i64;
			if (v88)
				sub_14018B900(v88, 0);
			v89 = *(_DWORD**)(v2 + 16);
			v89[2] = 1;
			*v89 = v80 != 0;
			*(_QWORD*)(v2 + 16) += 16i64;
			v90 = (__int64*)sub_1400580E0(v2, -3);
			sub_14005EA50(v2, v90, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
			*(_QWORD*)(v2 + 16) -= 48i64;
			sub_1400FB1D0((__int64)&v94);
			sub_1400579E0(v2, v91, v15);
			v8 = (unsigned int)(v102 + 1);
			v102 = v8;
		} while ((unsigned int)v8 < *(_DWORD*)v3);
		v2 = v96;
		v9 = v95;
	}
	sub_1400EA3E0(*(_QWORD*)(a1 + 72), "TransferDestinationRealmList", byte_1409D0B5C, v9, v94);
	if (v2)
		sub_1400579E0(v2, v92, v9);
	return 0i64;
}
// 140022B6C: variable 'v38' is possibly undefined
// 14002300A: variable 'v77' is possibly undefined
// 14002301C: variable 'v78' is possibly undefined
// 14002301C: variable 'v79' is possibly undefined
// 1400231AA: variable 'v91' is possibly undefined
// 14002321D: variable 'v92' is possibly undefined
// 1409D0B5C: using guessed type _BYTE byte_1409D0B5C[2];
// 1409ED7A8: using guessed type wchar_t aNrealmid[9];
// 1409ED7C0: using guessed type wchar_t aNpopulation[12];
// 1409ED7D8: using guessed type wchar_t aStrname[8];
// 1409ED7E8: using guessed type wchar_t aNrealmstatus[13];
// 1409ED808: using guessed type wchar_t aNcount_1[7];
// 1409ED818: using guessed type wchar_t aNrealmpvptype[14];
// 1409ED838: using guessed type wchar_t aStrlastplayed[14];
// 1409ED858: using guessed type wchar_t aBisfree[8];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

