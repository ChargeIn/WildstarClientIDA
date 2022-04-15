#include "../winhttp.h"

//----- (0000000140046790) ----------------------------------------------------
__int64 __fastcall sub_140046790(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	unsigned __int64 v5; // rsi
	int v6; // r9d
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // eax
	unsigned int v10; // r12d
	__int64 v11; // rbx
	__int64 v12; // r9
	int v13; // r15d
	int v14; // r13d
	_DWORD* v15; // rdx
	__int64 v16; // rcx
	unsigned __int64* v17; // r14
	unsigned __int64 v18; // rsi
	__int64 v19; // rbx
	__int64 v20; // rax
	__int64 v21; // rcx
	__int64 v22; // rax
	__int64* v23; // rax
	__int64 v24; // r10
	__int64 v25; // r9
	int v26; // r15d
	_DWORD* v27; // rcx
	unsigned __int64* v28; // r14
	unsigned __int64 v29; // rsi
	__int64 v30; // rbx
	__int64 v31; // rax
	__int64 v32; // rcx
	__int64 v33; // rax
	__int64* v34; // rax
	__int64 v35; // rdx
	__int64 v36; // r10
	__int64 v37; // r9
	unsigned __int16* v38; // r11
	_DWORD* v39; // rcx
	__int16* v40; // rax
	__int64 v41; // r9
	_DWORD* v42; // rdx
	__int64 v43; // rcx
	__int64 v44; // r10
	__int64 v45; // r9
	int v46; // r15d
	_DWORD* v47; // rcx
	unsigned __int64* v48; // r14
	unsigned __int64 v49; // rsi
	__int64 v50; // rbx
	__int64 v51; // rax
	__int64 v52; // rcx
	__int64 v53; // rax
	__int64* v54; // rax
	__int64 v55; // r10
	__int64 v56; // r9
	int v57; // r15d
	_DWORD* v58; // rcx
	unsigned __int64* v59; // r14
	unsigned __int64 v60; // rsi
	__int64 v61; // rbx
	__int64 v62; // rax
	__int64 v63; // rcx
	__int64 v64; // rax
	__int64* v65; // rax
	__int64 v66; // r10
	__int64 v67; // r9
	int v68; // r15d
	_DWORD* v69; // rcx
	unsigned __int64* v70; // r14
	unsigned __int64 v71; // rsi
	__int64 v72; // rbx
	__int64 v73; // rax
	__int64 v74; // rcx
	__int64 v75; // rax
	__int64* v76; // rax
	__int64 v77; // r10
	__int64 v78; // r9
	int v79; // r15d
	_DWORD* v80; // rcx
	unsigned __int64* v81; // r14
	unsigned __int64 v82; // rsi
	__int64 v83; // rbx
	__int64 v84; // rax
	__int64 v85; // rcx
	_DWORD* v86; // rcx
	__int64* v87; // rax
	_QWORD* v88; // rax
	__int64 v89; // r10
	__int64 v90; // rdx
	unsigned __int16* v91; // r11
	__int64 v92; // rdx
	__int64 v93; // r10
	_DWORD* v94; // rcx
	__int64 v95; // r8
	__int64 v96; // rdx
	__int64(__fastcall * *v98)(); // [rsp+28h] [rbp-39h] BYREF
	int v99; // [rsp+30h] [rbp-31h]
	__int64 v100; // [rsp+38h] [rbp-29h]
	int v101; // [rsp+40h] [rbp-21h]
	__int64 v102; // [rsp+48h] [rbp-19h] BYREF
	__int64 v103; // [rsp+50h] [rbp-11h]
	__int64 v104; // [rsp+C8h] [rbp+67h]
	double v105; // [rsp+C8h] [rbp+67h]
	double v106; // [rsp+D0h] [rbp+6Fh]
	double v107; // [rsp+D0h] [rbp+6Fh]
	double v108; // [rsp+D0h] [rbp+6Fh]
	double v109; // [rsp+D0h] [rbp+6Fh]
	double v110; // [rsp+D0h] [rbp+6Fh]
	double v111; // [rsp+D0h] [rbp+6Fh]
	double v112; // [rsp+D0h] [rbp+6Fh]
	double v113; // [rsp+D0h] [rbp+6Fh]
	unsigned __int64 v114; // [rsp+D8h] [rbp+77h]
	unsigned __int64 v115; // [rsp+E0h] [rbp+7Fh]

	v1 = a1;
	v100 = a1;
	v2 = *(_QWORD*)(a1 + 32);
	v98 = off_140B569F0;
	v101 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0(v1);
	v3 = *(_QWORD*)(v1 + 16);
	v4 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	*(_QWORD*)(v1 + 16) += 16i64;
	v5 = 0i64;
	v6 = sub_1400578C0(v1);
	v99 = v6;
	v114 = 0i64;
	v115 = *(_QWORD*)(qword_140C66E40 + 208);
	if (v115)
	{
		do
		{
			if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
				sub_14005E2C0(v1);
			v7 = *(_QWORD*)(v1 + 16);
			v8 = sub_14005C1B0(v1, 0, 0);
			*(_DWORD*)(v7 + 8) = 5;
			*(_QWORD*)v7 = v8;
			*(_QWORD*)(v1 + 16) += 16i64;
			v9 = sub_1400578C0(v1);
			v10 = v9 - 1;
			v11 = 104 * v5;
			v12 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
			v13 = *(_DWORD*)(104 * v5 + *(_QWORD*)(qword_140C66E40 + 200));
			v14 = v9;
			v104 = 104 * v5;
			if ((unsigned int)(v9 - 1) >= *(_DWORD*)(v12 + 56))
			{
				if ((double)v9 == 0.0)
				{
					v15 = *(_DWORD**)(v12 + 32);
				}
				else
				{
					v106 = (double)v9;
					v15 = (_DWORD*)(*(_QWORD*)(v12 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v106) + HIDWORD(v106)) % (((1i64 << *(_BYTE*)(v12 + 11)) - 1) | 1)));
				}
				while (v15[6] != 3 || (double)v9 != *((double*)v15 + 2))
				{
					v15 = (_DWORD*)*((_QWORD*)v15 + 4);
					if (!v15)
					{
						v15 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v15 = (_DWORD*)(*(_QWORD*)(v12 + 24) + 16i64 * (v9 - 1));
			}
			v16 = *(_QWORD*)(v1 + 16);
			*(_QWORD*)v16 = *(_QWORD*)v15;
			*(_DWORD*)(v16 + 8) = v15[2];
			*(_QWORD*)(v1 + 16) += 16i64;
			v17 = (unsigned __int64*)sub_14018F0E0(&v102, L"nRealmId")[1];
			if (v17)
			{
				v18 = -1i64;
				do
					++v18;
				while (*((_BYTE*)v17 + v18));
				if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
					sub_14005E2C0(v1);
				v19 = *(_QWORD*)(v1 + 16);
				v20 = sub_140062650(v1, v17, v18);
				*(_DWORD*)(v19 + 8) = 4;
				*(_QWORD*)v19 = v20;
				v11 = v104;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
			}
			v21 = v103;
			*(_QWORD*)(v1 + 16) += 16i64;
			if (v21)
				sub_14018B900(v21, 0);
			v22 = *(_QWORD*)(v1 + 16);
			*(_DWORD*)(v22 + 8) = 3;
			*(double*)v22 = (double)v13;
			*(_QWORD*)(v1 + 16) += 16i64;
			v23 = (__int64*)sub_1400580E0(v1, -3);
			sub_14005EA50(v1, v23, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
			v24 = *(_QWORD*)(v1 + 16) - 48i64;
			*(_QWORD*)(v1 + 16) = v24;
			v25 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
			v26 = *(_DWORD*)(*(_QWORD*)(qword_140C66E40 + 200) + v11 + 32);
			if (v10 >= *(_DWORD*)(v25 + 56))
			{
				if ((double)v14 == 0.0)
				{
					v27 = *(_DWORD**)(v25 + 32);
				}
				else
				{
					v107 = (double)v14;
					v27 = (_DWORD*)(*(_QWORD*)(v25 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v107) + HIDWORD(v107)) % (((1i64 << *(_BYTE*)(v25 + 11)) - 1) | 1)));
				}
				while (v27[6] != 3 || (double)v14 != *((double*)v27 + 2))
				{
					v27 = (_DWORD*)*((_QWORD*)v27 + 4);
					if (!v27)
					{
						v27 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v27 = (_DWORD*)(*(_QWORD*)(v25 + 24) + 16i64 * (v14 - 1));
			}
			*(_QWORD*)v24 = *(_QWORD*)v27;
			*(_DWORD*)(v24 + 8) = v27[2];
			*(_QWORD*)(v1 + 16) += 16i64;
			v28 = (unsigned __int64*)sub_14018F0E0(&v102, L"nPopulation")[1];
			if (v28)
			{
				v29 = -1i64;
				do
					++v29;
				while (*((_BYTE*)v28 + v29));
				if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
					sub_14005E2C0(v1);
				v30 = *(_QWORD*)(v1 + 16);
				v31 = sub_140062650(v1, v28, v29);
				*(_DWORD*)(v30 + 8) = 4;
				*(_QWORD*)v30 = v31;
				v11 = v104;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
			}
			v32 = v103;
			*(_QWORD*)(v1 + 16) += 16i64;
			if (v32)
				sub_14018B900(v32, 0);
			v33 = *(_QWORD*)(v1 + 16);
			*(_DWORD*)(v33 + 8) = 3;
			*(double*)v33 = (double)v26;
			*(_QWORD*)(v1 + 16) += 16i64;
			v34 = (__int64*)sub_1400580E0(v1, -3);
			sub_14005EA50(v1, v34, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
			v36 = *(_QWORD*)(v1 + 16) - 48i64;
			*(_QWORD*)(v1 + 16) = v36;
			v37 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
			v38 = *(unsigned __int16**)(*(_QWORD*)(qword_140C66E40 + 200) + v11 + 8);
			if (v10 >= *(_DWORD*)(v37 + 56))
			{
				if ((double)v14 == 0.0)
				{
					v39 = *(_DWORD**)(v37 + 32);
				}
				else
				{
					v108 = (double)v14;
					v35 = (unsigned int)(LODWORD(v108) + HIDWORD(v108)) % (((1i64 << *(_BYTE*)(v37 + 11)) - 1) | 1);
					v39 = (_DWORD*)(*(_QWORD*)(v37 + 32) + 40 * v35);
				}
				while (v39[6] != 3 || (double)v14 != *((double*)v39 + 2))
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
				v39 = (_DWORD*)(*(_QWORD*)(v37 + 24) + 16i64 * (v14 - 1));
			}
			*(_QWORD*)v36 = *(_QWORD*)v39;
			*(_DWORD*)(v36 + 8) = v39[2];
			*(_QWORD*)(v1 + 16) += 16i64;
			sub_1400F0870(v1, v35, L"strName", v38);
			*(_QWORD*)(v1 + 16) -= 16i64;
			v40 = sub_14034BDD0(
				*(_QWORD*)(qword_140C66E40 + 200),
				*(_DWORD*)(*(_QWORD*)(qword_140C66E40 + 200) + v11 + 16));
			v41 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
			if (v10 >= *(_DWORD*)(v41 + 56))
			{
				if ((double)v14 == 0.0)
				{
					v42 = *(_DWORD**)(v41 + 32);
				}
				else
				{
					v109 = (double)v14;
					v42 = (_DWORD*)(*(_QWORD*)(v41 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v109) + HIDWORD(v109)) % (((1i64 << *(_BYTE*)(v41 + 11)) - 1) | 1)));
				}
				while (v42[6] != 3 || (double)v14 != *((double*)v42 + 2))
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
				v42 = (_DWORD*)(*(_QWORD*)(v41 + 24) + 16i64 * (v14 - 1));
			}
			v43 = *(_QWORD*)(v1 + 16);
			*(_QWORD*)v43 = *(_QWORD*)v42;
			*(_DWORD*)(v43 + 8) = v42[2];
			*(_QWORD*)(v1 + 16) += 16i64;
			sub_1400F0870(v1, (__int64)v42, L"strNote", (unsigned __int16*)v40);
			v44 = *(_QWORD*)(v1 + 16) - 16i64;
			*(_QWORD*)(v1 + 16) = v44;
			v45 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
			v46 = *(_DWORD*)(*(_QWORD*)(qword_140C66E40 + 200) + v11 + 28);
			if (v10 >= *(_DWORD*)(v45 + 56))
			{
				if ((double)v14 == 0.0)
				{
					v47 = *(_DWORD**)(v45 + 32);
				}
				else
				{
					v110 = (double)v14;
					v47 = (_DWORD*)(*(_QWORD*)(v45 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v110) + HIDWORD(v110)) % (((1i64 << *(_BYTE*)(v45 + 11)) - 1) | 1)));
				}
				while (v47[6] != 3 || (double)v14 != *((double*)v47 + 2))
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
				v47 = (_DWORD*)(*(_QWORD*)(v45 + 24) + 16i64 * (v14 - 1));
			}
			*(_QWORD*)v44 = *(_QWORD*)v47;
			*(_DWORD*)(v44 + 8) = v47[2];
			*(_QWORD*)(v1 + 16) += 16i64;
			v48 = (unsigned __int64*)sub_14018F0E0(&v102, L"nRealmStatus")[1];
			if (v48)
			{
				v49 = -1i64;
				do
					++v49;
				while (*((_BYTE*)v48 + v49));
				if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
					sub_14005E2C0(v1);
				v50 = *(_QWORD*)(v1 + 16);
				v51 = sub_140062650(v1, v48, v49);
				*(_DWORD*)(v50 + 8) = 4;
				*(_QWORD*)v50 = v51;
				v11 = v104;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
			}
			v52 = v103;
			*(_QWORD*)(v1 + 16) += 16i64;
			if (v52)
				sub_14018B900(v52, 0);
			v53 = *(_QWORD*)(v1 + 16);
			*(_DWORD*)(v53 + 8) = 3;
			*(double*)v53 = (double)v46;
			*(_QWORD*)(v1 + 16) += 16i64;
			v54 = (__int64*)sub_1400580E0(v1, -3);
			sub_14005EA50(v1, v54, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
			v55 = *(_QWORD*)(v1 + 16) - 48i64;
			*(_QWORD*)(v1 + 16) = v55;
			v56 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
			v57 = *(_DWORD*)(*(_QWORD*)(qword_140C66E40 + 200) + v11 + 60);
			if (v10 >= *(_DWORD*)(v56 + 56))
			{
				if ((double)v14 == 0.0)
				{
					v58 = *(_DWORD**)(v56 + 32);
				}
				else
				{
					v111 = (double)v14;
					v58 = (_DWORD*)(*(_QWORD*)(v56 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v111) + HIDWORD(v111)) % (((1i64 << *(_BYTE*)(v56 + 11)) - 1) | 1)));
				}
				while (v58[6] != 3 || (double)v14 != *((double*)v58 + 2))
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
				v58 = (_DWORD*)(*(_QWORD*)(v56 + 24) + 16i64 * (v14 - 1));
			}
			*(_QWORD*)v55 = *(_QWORD*)v58;
			*(_DWORD*)(v55 + 8) = v58[2];
			*(_QWORD*)(v1 + 16) += 16i64;
			v59 = (unsigned __int64*)sub_14018F0E0(&v102, L"nCount")[1];
			if (v59)
			{
				v60 = -1i64;
				do
					++v60;
				while (*((_BYTE*)v59 + v60));
				if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
					sub_14005E2C0(v1);
				v61 = *(_QWORD*)(v1 + 16);
				v62 = sub_140062650(v1, v59, v60);
				*(_DWORD*)(v61 + 8) = 4;
				*(_QWORD*)v61 = v62;
				v11 = v104;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
			}
			v63 = v103;
			*(_QWORD*)(v1 + 16) += 16i64;
			if (v63)
				sub_14018B900(v63, 0);
			v64 = *(_QWORD*)(v1 + 16);
			*(_DWORD*)(v64 + 8) = 3;
			*(double*)v64 = (double)v57;
			*(_QWORD*)(v1 + 16) += 16i64;
			v65 = (__int64*)sub_1400580E0(v1, -3);
			sub_14005EA50(v1, v65, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
			v66 = *(_QWORD*)(v1 + 16) - 48i64;
			*(_QWORD*)(v1 + 16) = v66;
			v67 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
			v68 = *(_DWORD*)(*(_QWORD*)(qword_140C66E40 + 200) + v11 + 24);
			if (v10 >= *(_DWORD*)(v67 + 56))
			{
				if ((double)v14 == 0.0)
				{
					v69 = *(_DWORD**)(v67 + 32);
				}
				else
				{
					v112 = (double)v14;
					v69 = (_DWORD*)(*(_QWORD*)(v67 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v112) + HIDWORD(v112)) % (((1i64 << *(_BYTE*)(v67 + 11)) - 1) | 1)));
				}
				while (v69[6] != 3 || (double)v14 != *((double*)v69 + 2))
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
				v69 = (_DWORD*)(*(_QWORD*)(v67 + 24) + 16i64 * (v14 - 1));
			}
			*(_QWORD*)v66 = *(_QWORD*)v69;
			*(_DWORD*)(v66 + 8) = v69[2];
			*(_QWORD*)(v1 + 16) += 16i64;
			v70 = (unsigned __int64*)sub_14018F0E0(&v102, L"nRealmPVPType")[1];
			if (v70)
			{
				v71 = -1i64;
				do
					++v71;
				while (*((_BYTE*)v70 + v71));
				if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
					sub_14005E2C0(v1);
				v72 = *(_QWORD*)(v1 + 16);
				v73 = sub_140062650(v1, v70, v71);
				*(_DWORD*)(v72 + 8) = 4;
				*(_QWORD*)v72 = v73;
				v11 = v104;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
			}
			v74 = v103;
			*(_QWORD*)(v1 + 16) += 16i64;
			if (v74)
				sub_14018B900(v74, 0);
			v75 = *(_QWORD*)(v1 + 16);
			*(_DWORD*)(v75 + 8) = 3;
			*(double*)v75 = (double)v68;
			*(_QWORD*)(v1 + 16) += 16i64;
			v76 = (__int64*)sub_1400580E0(v1, -3);
			sub_14005EA50(v1, v76, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
			v77 = *(_QWORD*)(v1 + 16) - 48i64;
			*(_QWORD*)(v1 + 16) = v77;
			v78 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
			v79 = (*(_DWORD*)(*(_QWORD*)(qword_140C66E40 + 200) + v11 + 20) >> 4) & 1;
			if (v10 >= *(_DWORD*)(v78 + 56))
			{
				if ((double)v14 == 0.0)
				{
					v80 = *(_DWORD**)(v78 + 32);
				}
				else
				{
					v113 = (double)v14;
					v80 = (_DWORD*)(*(_QWORD*)(v78 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v113) + HIDWORD(v113)) % (((1i64 << *(_BYTE*)(v78 + 11)) - 1) | 1)));
				}
				while (v80[6] != 3 || (double)v14 != *((double*)v80 + 2))
				{
					v80 = (_DWORD*)*((_QWORD*)v80 + 4);
					if (!v80)
					{
						v80 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v80 = (_DWORD*)(*(_QWORD*)(v78 + 24) + 16i64 * (v14 - 1));
			}
			*(_QWORD*)v77 = *(_QWORD*)v80;
			*(_DWORD*)(v77 + 8) = v80[2];
			*(_QWORD*)(v1 + 16) += 16i64;
			v81 = (unsigned __int64*)sub_14018F0E0(&v102, L"bFactionRestricted")[1];
			if (v81)
			{
				v82 = -1i64;
				do
					++v82;
				while (*((_BYTE*)v81 + v82));
				if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
					sub_14005E2C0(v1);
				v83 = *(_QWORD*)(v1 + 16);
				v84 = sub_140062650(v1, v81, v82);
				*(_DWORD*)(v83 + 8) = 4;
				*(_QWORD*)v83 = v84;
				v11 = v104;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
			}
			v85 = v103;
			*(_QWORD*)(v1 + 16) += 16i64;
			if (v85)
				sub_14018B900(v85, 0);
			v86 = *(_DWORD**)(v1 + 16);
			v86[2] = 1;
			*v86 = v79 != 0;
			*(_QWORD*)(v1 + 16) += 16i64;
			v87 = (__int64*)sub_1400580E0(v1, -3);
			sub_14005EA50(v1, v87, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
			*(_QWORD*)(v1 + 16) -= 48i64;
			if (*(_QWORD*)(*(_QWORD*)(qword_140C66E40 + 200) + v11 + 64))
			{
				v88 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v14);
				*(_QWORD*)v89 = *v88;
				*(_DWORD*)(v89 + 8) = *((_DWORD*)v88 + 2);
				*(_QWORD*)(v1 + 16) += 16i64;
				sub_1400F0870(v1, v90, L"strLastPlayed", v91);
				*(_QWORD*)(v1 + 16) -= 16i64;
			}
			sub_1400FB1D0((__int64)&v98);
			sub_1400579E0(v1, v92, v14);
			v5 = v114 + 1;
			v114 = v5;
		} while (v5 < v115);
		v1 = v100;
		v6 = v99;
	}
	v93 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
	if ((unsigned int)(v6 - 1) >= *(_DWORD*)(v93 + 56))
	{
		if ((double)v6 == 0.0)
		{
			v94 = *(_DWORD**)(v93 + 32);
		}
		else
		{
			v105 = (double)v6;
			v94 = (_DWORD*)(*(_QWORD*)(v93 + 32)
				+ 40 * ((unsigned int)(LODWORD(v105) + HIDWORD(v105)) % (((1i64 << *(_BYTE*)(v93 + 11)) - 1) | 1)));
		}
		while (v94[6] != 3 || (double)v6 != *((double*)v94 + 2))
		{
			v94 = (_DWORD*)*((_QWORD*)v94 + 4);
			if (!v94)
			{
				v94 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v94 = (_DWORD*)(*(_QWORD*)(v93 + 24) + 16i64 * (v6 - 1));
	}
	v95 = *(_QWORD*)(v1 + 16);
	*(_QWORD*)v95 = *(_QWORD*)v94;
	v96 = (unsigned int)v94[2];
	*(_DWORD*)(v95 + 8) = v96;
	*(_QWORD*)(v1 + 16) += 16i64;
	sub_1400579E0(v1, v96, v6);
	return 1i64;
}
// 140046C3F: variable 'v35' is possibly undefined
// 14004733D: variable 'v89' is possibly undefined
// 14004734F: variable 'v90' is possibly undefined
// 14004734F: variable 'v91' is possibly undefined
// 14004736B: variable 'v92' is possibly undefined
// 1409FECF8: using guessed type wchar_t aNpopulation_0[12];
// 1409FED10: using guessed type wchar_t aNrealmid_0[9];
// 1409FED28: using guessed type wchar_t aStrnote[8];
// 1409FED38: using guessed type wchar_t aStrname_2[8];
// 1409FED48: using guessed type wchar_t aNcount_3[7];
// 1409FED58: using guessed type wchar_t aNrealmstatus_0[13];
// 1409FED78: using guessed type wchar_t aBfactionrestri_0[19];
// 1409FEDA0: using guessed type wchar_t aNrealmpvptype_1[14];
// 1409FEDC0: using guessed type wchar_t aStrlastplayed_0[14];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C66E40: using guessed type __int64 qword_140C66E40;

