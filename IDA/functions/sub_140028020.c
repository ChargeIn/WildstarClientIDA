//----- (0000000140028020) ----------------------------------------------------
__int64 __fastcall sub_140028020(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	int v4; // r14d
	__int64 v5; // rsi
	unsigned int v6; // r15d
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // r13d
	__int64 v10; // rsi
	__int64 v11; // r9
	unsigned __int16* v12; // r10
	_DWORD* v13; // rdx
	__int64 v14; // rcx
	__int64 v15; // r9
	int v16; // r15d
	unsigned int v17; // r12d
	_DWORD* v18; // rdx
	__int64 v19; // rcx
	unsigned __int64* v20; // r14
	unsigned __int64 v21; // rsi
	__int64 v22; // rbx
	__int64 v23; // rax
	__int64 v24; // rcx
	__int64 v25; // rax
	__int64* v26; // rax
	__int64 v27; // rax
	__int64 v28; // r10
	__int64 v29; // r9
	int v30; // r15d
	_DWORD* v31; // rcx
	unsigned __int64* v32; // r14
	unsigned __int64 v33; // rsi
	__int64 v34; // rbx
	__int64 v35; // rax
	__int64 v36; // rcx
	__int64 v37; // rax
	__int64* v38; // rax
	__int64 v39; // rax
	__int64 v40; // r10
	__int64 v41; // r9
	int v42; // r15d
	_DWORD* v43; // rcx
	unsigned __int64* v44; // r14
	unsigned __int64 v45; // rsi
	__int64 v46; // rbx
	__int64 v47; // rax
	__int64 v48; // rcx
	__int64 v49; // rax
	__int64* v50; // rax
	__int64 v51; // rax
	__int64 v52; // r10
	__int64 v53; // r9
	int v54; // r15d
	_DWORD* v55; // rcx
	unsigned __int64* v56; // r14
	unsigned __int64 v57; // rsi
	__int64 v58; // rbx
	__int64 v59; // rax
	__int64 v60; // rcx
	__int64 v61; // rax
	__int64* v62; // rax
	__int64 v63; // rax
	__int64 v64; // r10
	__int64 v65; // r9
	int v66; // r15d
	_DWORD* v67; // rcx
	unsigned __int64* v68; // r14
	unsigned __int64 v69; // rsi
	__int64 v70; // rbx
	__int64 v71; // rax
	__int64 v72; // rcx
	__int64 v73; // rax
	__int64* v74; // rax
	__int64 v75; // rax
	__int64 v76; // r10
	__int64 v77; // r9
	int v78; // r15d
	_DWORD* v79; // rcx
	unsigned __int64* v80; // r14
	unsigned __int64 v81; // rsi
	__int64 v82; // rbx
	__int64 v83; // rax
	__int64 v84; // rcx
	__int64 v85; // rax
	__int64* v86; // rax
	__int64 v87; // rax
	__int64 v88; // r10
	__int64 v89; // r9
	int v90; // r15d
	_DWORD* v91; // rcx
	unsigned __int64* v92; // r14
	unsigned __int64 v93; // rsi
	__int64 v94; // rbx
	__int64 v95; // rax
	__int64 v96; // rcx
	__int64 v97; // rax
	__int64* v98; // rax
	__int64 v99; // rax
	__int64 v100; // r10
	__int64 v101; // r9
	int v102; // r15d
	_DWORD* v103; // rcx
	unsigned __int64* v104; // r14
	unsigned __int64 v105; // rsi
	__int64 v106; // rbx
	__int64 v107; // rax
	__int64 v108; // rcx
	__int64 v109; // rax
	__int64* v110; // rax
	__int64 v111; // rdx
	__int64 v112; // rax
	__int64 v113; // r10
	__int64 v114; // r9
	float v115; // xmm3_4
	_DWORD* v116; // rcx
	__int64 v117; // rdx
	_QWORD* v118; // rax
	__int64 v119; // rdx
	unsigned __int64 v121; // [rsp+20h] [rbp-29h]
	__int64 v122; // [rsp+28h] [rbp-21h] BYREF
	__int64 v123; // [rsp+30h] [rbp-19h]
	unsigned int v124; // [rsp+B0h] [rbp+67h]
	int v125; // [rsp+B8h] [rbp+6Fh]
	__int64 v126; // [rsp+C0h] [rbp+77h]
	double v127; // [rsp+C0h] [rbp+77h]
	double v128; // [rsp+C8h] [rbp+7Fh]
	double v129; // [rsp+C8h] [rbp+7Fh]
	double v130; // [rsp+C8h] [rbp+7Fh]
	double v131; // [rsp+C8h] [rbp+7Fh]
	double v132; // [rsp+C8h] [rbp+7Fh]
	double v133; // [rsp+C8h] [rbp+7Fh]
	double v134; // [rsp+C8h] [rbp+7Fh]
	double v135; // [rsp+C8h] [rbp+7Fh]
	double v136; // [rsp+C8h] [rbp+7Fh]

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v4 = sub_1400578C0(a1);
	v125 = v4;
	v124 = 0;
	v121 = *(_QWORD*)(qword_140C66DA8 + 288);
	if (v121)
	{
		v5 = 0i64;
		v6 = v4 - 1;
		do
		{
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v7 = *(_QWORD*)(a1 + 16);
			v8 = sub_14005C1B0(a1, 0, 0);
			*(_DWORD*)(v7 + 8) = 5;
			*(_QWORD*)v7 = v8;
			*(_QWORD*)(a1 + 16) += 16i64;
			v9 = sub_1400578C0(a1);
			v10 = *(_QWORD*)(qword_140C66DA8 + 280) + (v5 << 6);
			v11 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
			v12 = *(unsigned __int16**)(v10 + 16);
			v126 = v10;
			if (v6 >= *(_DWORD*)(v11 + 56))
			{
				if ((double)v4 == 0.0)
				{
					v13 = *(_DWORD**)(v11 + 32);
				}
				else
				{
					v128 = (double)v4;
					v13 = (_DWORD*)(*(_QWORD*)(v11 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v128) + HIDWORD(v128)) % (((1i64 << *(_BYTE*)(v11 + 11)) - 1) | 1)));
				}
				while (v13[6] != 3 || (double)v4 != *((double*)v13 + 2))
				{
					v13 = (_DWORD*)*((_QWORD*)v13 + 4);
					if (!v13)
					{
						v13 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v13 = (_DWORD*)(*(_QWORD*)(v11 + 24) + 16i64 * (v4 - 1));
			}
			v14 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v14 = *(_QWORD*)v13;
			*(_DWORD*)(v14 + 8) = v13[2];
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_1400F0870(a1, (__int64)v13, L"name", v12);
			*(_QWORD*)(a1 + 16) -= 16i64;
			v15 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
			v16 = *(_DWORD*)(v10 + 24);
			v17 = v9 - 1;
			if ((unsigned int)(v9 - 1) >= *(_DWORD*)(v15 + 56))
			{
				if ((double)v9 == 0.0)
				{
					v18 = *(_DWORD**)(v15 + 32);
				}
				else
				{
					v129 = (double)v9;
					v18 = (_DWORD*)(*(_QWORD*)(v15 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v129) + HIDWORD(v129)) % (((1i64 << *(_BYTE*)(v15 + 11)) - 1) | 1)));
				}
				while (v18[6] != 3 || (double)v9 != *((double*)v18 + 2))
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
				v18 = (_DWORD*)(*(_QWORD*)(v15 + 24) + 16i64 * (v9 - 1));
			}
			v19 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v19 = *(_QWORD*)v18;
			*(_DWORD*)(v19 + 8) = v18[2];
			*(_QWORD*)(a1 + 16) += 16i64;
			v20 = (unsigned __int64*)sub_14018F0E0(&v122, L"level")[1];
			if (v20)
			{
				v21 = -1i64;
				do
					++v21;
				while (*((_BYTE*)v20 + v21));
				if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
					sub_14005E2C0(a1);
				v22 = *(_QWORD*)(a1 + 16);
				v23 = sub_140062650(a1, v20, v21);
				v10 = v126;
				*(_DWORD*)(v22 + 8) = 4;
				*(_QWORD*)v22 = v23;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			}
			v24 = v123;
			*(_QWORD*)(a1 + 16) += 16i64;
			if (v24)
				sub_14018B900(v24, 0);
			v25 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v25 + 8) = 3;
			*(double*)v25 = (double)v16;
			*(_QWORD*)(a1 + 16) += 16i64;
			v26 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v26, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			v27 = *(_QWORD*)(a1 + 32);
			v28 = *(_QWORD*)(a1 + 16) - 48i64;
			*(_QWORD*)(a1 + 16) = v28;
			v29 = *(_QWORD*)(v27 + 160);
			v30 = *(_DWORD*)(v10 + 40);
			if (v17 >= *(_DWORD*)(v29 + 56))
			{
				if ((double)v9 == 0.0)
				{
					v31 = *(_DWORD**)(v29 + 32);
				}
				else
				{
					v130 = (double)v9;
					v31 = (_DWORD*)(*(_QWORD*)(v29 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v130) + HIDWORD(v130)) % (((1i64 << *(_BYTE*)(v29 + 11)) - 1) | 1)));
				}
				while (v31[6] != 3 || (double)v9 != *((double*)v31 + 2))
				{
					v31 = (_DWORD*)*((_QWORD*)v31 + 4);
					if (!v31)
					{
						v31 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v31 = (_DWORD*)(*(_QWORD*)(v29 + 24) + 16i64 * (v9 - 1));
			}
			*(_QWORD*)v28 = *(_QWORD*)v31;
			*(_DWORD*)(v28 + 8) = v31[2];
			*(_QWORD*)(a1 + 16) += 16i64;
			v32 = (unsigned __int64*)sub_14018F0E0(&v122, L"factionId")[1];
			if (v32)
			{
				v33 = -1i64;
				do
					++v33;
				while (*((_BYTE*)v32 + v33));
				if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
					sub_14005E2C0(a1);
				v34 = *(_QWORD*)(a1 + 16);
				v35 = sub_140062650(a1, v32, v33);
				v10 = v126;
				*(_DWORD*)(v34 + 8) = 4;
				*(_QWORD*)v34 = v35;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			}
			v36 = v123;
			*(_QWORD*)(a1 + 16) += 16i64;
			if (v36)
				sub_14018B900(v36, 0);
			v37 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v37 + 8) = 3;
			*(double*)v37 = (double)v30;
			*(_QWORD*)(a1 + 16) += 16i64;
			v38 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v38, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			v39 = *(_QWORD*)(a1 + 32);
			v40 = *(_QWORD*)(a1 + 16) - 48i64;
			*(_QWORD*)(a1 + 16) = v40;
			v41 = *(_QWORD*)(v39 + 160);
			v42 = *(_DWORD*)(v10 + 28);
			if (v17 >= *(_DWORD*)(v41 + 56))
			{
				if ((double)v9 == 0.0)
				{
					v43 = *(_DWORD**)(v41 + 32);
				}
				else
				{
					v131 = (double)v9;
					v43 = (_DWORD*)(*(_QWORD*)(v41 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v131) + HIDWORD(v131)) % (((1i64 << *(_BYTE*)(v41 + 11)) - 1) | 1)));
				}
				while (v43[6] != 3 || (double)v9 != *((double*)v43 + 2))
				{
					v43 = (_DWORD*)*((_QWORD*)v43 + 4);
					if (!v43)
					{
						v43 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v43 = (_DWORD*)(*(_QWORD*)(v41 + 24) + 16i64 * (v9 - 1));
			}
			*(_QWORD*)v40 = *(_QWORD*)v43;
			*(_DWORD*)(v40 + 8) = v43[2];
			*(_QWORD*)(a1 + 16) += 16i64;
			v44 = (unsigned __int64*)sub_14018F0E0(&v122, L"classId")[1];
			if (v44)
			{
				v45 = -1i64;
				do
					++v45;
				while (*((_BYTE*)v44 + v45));
				if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
					sub_14005E2C0(a1);
				v46 = *(_QWORD*)(a1 + 16);
				v47 = sub_140062650(a1, v44, v45);
				v10 = v126;
				*(_DWORD*)(v46 + 8) = 4;
				*(_QWORD*)v46 = v47;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			}
			v48 = v123;
			*(_QWORD*)(a1 + 16) += 16i64;
			if (v48)
				sub_14018B900(v48, 0);
			v49 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v49 + 8) = 3;
			*(double*)v49 = (double)v42;
			*(_QWORD*)(a1 + 16) += 16i64;
			v50 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v50, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			v51 = *(_QWORD*)(a1 + 32);
			v52 = *(_QWORD*)(a1 + 16) - 48i64;
			*(_QWORD*)(a1 + 16) = v52;
			v53 = *(_QWORD*)(v51 + 160);
			v54 = *(_DWORD*)(v10 + 32);
			if (v17 >= *(_DWORD*)(v53 + 56))
			{
				if ((double)v9 == 0.0)
				{
					v55 = *(_DWORD**)(v53 + 32);
				}
				else
				{
					v132 = (double)v9;
					v55 = (_DWORD*)(*(_QWORD*)(v53 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v132) + HIDWORD(v132)) % (((1i64 << *(_BYTE*)(v53 + 11)) - 1) | 1)));
				}
				while (v55[6] != 3 || (double)v9 != *((double*)v55 + 2))
				{
					v55 = (_DWORD*)*((_QWORD*)v55 + 4);
					if (!v55)
					{
						v55 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v55 = (_DWORD*)(*(_QWORD*)(v53 + 24) + 16i64 * (v9 - 1));
			}
			*(_QWORD*)v52 = *(_QWORD*)v55;
			*(_DWORD*)(v52 + 8) = v55[2];
			*(_QWORD*)(a1 + 16) += 16i64;
			v56 = (unsigned __int64*)sub_14018F0E0(&v122, L"raceId")[1];
			if (v56)
			{
				v57 = -1i64;
				do
					++v57;
				while (*((_BYTE*)v56 + v57));
				if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
					sub_14005E2C0(a1);
				v58 = *(_QWORD*)(a1 + 16);
				v59 = sub_140062650(a1, v56, v57);
				v10 = v126;
				*(_DWORD*)(v58 + 8) = 4;
				*(_QWORD*)v58 = v59;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			}
			v60 = v123;
			*(_QWORD*)(a1 + 16) += 16i64;
			if (v60)
				sub_14018B900(v60, 0);
			v61 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v61 + 8) = 3;
			*(double*)v61 = (double)v54;
			*(_QWORD*)(a1 + 16) += 16i64;
			v62 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v62, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			v63 = *(_QWORD*)(a1 + 32);
			v64 = *(_QWORD*)(a1 + 16) - 48i64;
			*(_QWORD*)(a1 + 16) = v64;
			v65 = *(_QWORD*)(v63 + 160);
			v66 = *(_DWORD*)(v10 + 36);
			if (v17 >= *(_DWORD*)(v65 + 56))
			{
				if ((double)v9 == 0.0)
				{
					v67 = *(_DWORD**)(v65 + 32);
				}
				else
				{
					v133 = (double)v9;
					v67 = (_DWORD*)(*(_QWORD*)(v65 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v133) + HIDWORD(v133)) % (((1i64 << *(_BYTE*)(v65 + 11)) - 1) | 1)));
				}
				while (v67[6] != 3 || (double)v9 != *((double*)v67 + 2))
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
				v67 = (_DWORD*)(*(_QWORD*)(v65 + 24) + 16i64 * (v9 - 1));
			}
			*(_QWORD*)v64 = *(_QWORD*)v67;
			*(_DWORD*)(v64 + 8) = v67[2];
			*(_QWORD*)(a1 + 16) += 16i64;
			v68 = (unsigned __int64*)sub_14018F0E0(&v122, L"genderId")[1];
			if (v68)
			{
				v69 = -1i64;
				do
					++v69;
				while (*((_BYTE*)v68 + v69));
				if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
					sub_14005E2C0(a1);
				v70 = *(_QWORD*)(a1 + 16);
				v71 = sub_140062650(a1, v68, v69);
				v10 = v126;
				*(_DWORD*)(v70 + 8) = 4;
				*(_QWORD*)v70 = v71;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			}
			v72 = v123;
			*(_QWORD*)(a1 + 16) += 16i64;
			if (v72)
				sub_14018B900(v72, 0);
			v73 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v73 + 8) = 3;
			*(double*)v73 = (double)v66;
			*(_QWORD*)(a1 + 16) += 16i64;
			v74 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v74, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			v75 = *(_QWORD*)(a1 + 32);
			v76 = *(_QWORD*)(a1 + 16) - 48i64;
			*(_QWORD*)(a1 + 16) = v76;
			v77 = *(_QWORD*)(v75 + 160);
			v78 = *(_DWORD*)(v10 + 44);
			if (v17 >= *(_DWORD*)(v77 + 56))
			{
				if ((double)v9 == 0.0)
				{
					v79 = *(_DWORD**)(v77 + 32);
				}
				else
				{
					v134 = (double)v9;
					v79 = (_DWORD*)(*(_QWORD*)(v77 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v134) + HIDWORD(v134)) % (((1i64 << *(_BYTE*)(v77 + 11)) - 1) | 1)));
				}
				while (v79[6] != 3 || (double)v9 != *((double*)v79 + 2))
				{
					v79 = (_DWORD*)*((_QWORD*)v79 + 4);
					if (!v79)
					{
						v79 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v79 = (_DWORD*)(*(_QWORD*)(v77 + 24) + 16i64 * (v9 - 1));
			}
			*(_QWORD*)v76 = *(_QWORD*)v79;
			*(_DWORD*)(v76 + 8) = v79[2];
			*(_QWORD*)(a1 + 16) += 16i64;
			v80 = (unsigned __int64*)sub_14018F0E0(&v122, L"path")[1];
			if (v80)
			{
				v81 = -1i64;
				do
					++v81;
				while (*((_BYTE*)v80 + v81));
				if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
					sub_14005E2C0(a1);
				v82 = *(_QWORD*)(a1 + 16);
				v83 = sub_140062650(a1, v80, v81);
				v10 = v126;
				*(_DWORD*)(v82 + 8) = 4;
				*(_QWORD*)v82 = v83;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			}
			v84 = v123;
			*(_QWORD*)(a1 + 16) += 16i64;
			if (v84)
				sub_14018B900(v84, 0);
			v85 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v85 + 8) = 3;
			*(double*)v85 = (double)v78;
			*(_QWORD*)(a1 + 16) += 16i64;
			v86 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v86, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			v87 = *(_QWORD*)(a1 + 32);
			v88 = *(_QWORD*)(a1 + 16) - 48i64;
			*(_QWORD*)(a1 + 16) = v88;
			v89 = *(_QWORD*)(v87 + 160);
			v90 = *(_DWORD*)(v10 + 48);
			if (v17 >= *(_DWORD*)(v89 + 56))
			{
				if ((double)v9 == 0.0)
				{
					v91 = *(_DWORD**)(v89 + 32);
				}
				else
				{
					v135 = (double)v9;
					v91 = (_DWORD*)(*(_QWORD*)(v89 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v135) + HIDWORD(v135)) % (((1i64 << *(_BYTE*)(v89 + 11)) - 1) | 1)));
				}
				while (v91[6] != 3 || (double)v9 != *((double*)v91 + 2))
				{
					v91 = (_DWORD*)*((_QWORD*)v91 + 4);
					if (!v91)
					{
						v91 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v91 = (_DWORD*)(*(_QWORD*)(v89 + 24) + 16i64 * (v9 - 1));
			}
			*(_QWORD*)v88 = *(_QWORD*)v91;
			*(_DWORD*)(v88 + 8) = v91[2];
			*(_QWORD*)(a1 + 16) += 16i64;
			v92 = (unsigned __int64*)sub_14018F0E0(&v122, L"worldId")[1];
			if (v92)
			{
				v93 = -1i64;
				do
					++v93;
				while (*((_BYTE*)v92 + v93));
				if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
					sub_14005E2C0(a1);
				v94 = *(_QWORD*)(a1 + 16);
				v95 = sub_140062650(a1, v92, v93);
				v10 = v126;
				*(_DWORD*)(v94 + 8) = 4;
				*(_QWORD*)v94 = v95;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			}
			v96 = v123;
			*(_QWORD*)(a1 + 16) += 16i64;
			if (v96)
				sub_14018B900(v96, 0);
			v97 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v97 + 8) = 3;
			*(double*)v97 = (double)v90;
			*(_QWORD*)(a1 + 16) += 16i64;
			v98 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v98, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			v99 = *(_QWORD*)(a1 + 32);
			v100 = *(_QWORD*)(a1 + 16) - 48i64;
			*(_QWORD*)(a1 + 16) = v100;
			v101 = *(_QWORD*)(v99 + 160);
			v102 = *(_DWORD*)(v10 + 52);
			if (v17 >= *(_DWORD*)(v101 + 56))
			{
				if ((double)v9 == 0.0)
				{
					v103 = *(_DWORD**)(v101 + 32);
				}
				else
				{
					v136 = (double)v9;
					v103 = (_DWORD*)(*(_QWORD*)(v101 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v136) + HIDWORD(v136)) % (((1i64 << *(_BYTE*)(v101 + 11)) - 1) | 1)));
				}
				while (v103[6] != 3 || (double)v9 != *((double*)v103 + 2))
				{
					v103 = (_DWORD*)*((_QWORD*)v103 + 4);
					if (!v103)
					{
						v103 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v103 = (_DWORD*)(*(_QWORD*)(v101 + 24) + 16i64 * (v9 - 1));
			}
			*(_QWORD*)v100 = *(_QWORD*)v103;
			*(_DWORD*)(v100 + 8) = v103[2];
			*(_QWORD*)(a1 + 16) += 16i64;
			v104 = (unsigned __int64*)sub_14018F0E0(&v122, L"worldZoneId")[1];
			if (v104)
			{
				v105 = -1i64;
				do
					++v105;
				while (*((_BYTE*)v104 + v105));
				if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
					sub_14005E2C0(a1);
				v106 = *(_QWORD*)(a1 + 16);
				v107 = sub_140062650(a1, v104, v105);
				v10 = v126;
				*(_DWORD*)(v106 + 8) = 4;
				*(_QWORD*)v106 = v107;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			}
			v108 = v123;
			*(_QWORD*)(a1 + 16) += 16i64;
			if (v108)
				sub_14018B900(v108, 0);
			v109 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v109 + 8) = 3;
			*(double*)v109 = (double)v102;
			*(_QWORD*)(a1 + 16) += 16i64;
			v110 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v110, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			v112 = *(_QWORD*)(a1 + 32);
			v113 = *(_QWORD*)(a1 + 16) - 48i64;
			*(_QWORD*)(a1 + 16) = v113;
			v114 = *(_QWORD*)(v112 + 160);
			v115 = *(float*)(v10 + 56);
			if (v17 >= *(_DWORD*)(v114 + 56))
			{
				if ((double)v9 == 0.0)
				{
					v116 = *(_DWORD**)(v114 + 32);
				}
				else
				{
					v127 = (double)v9;
					v111 = (unsigned int)(LODWORD(v127) + HIDWORD(v127)) % (((1i64 << *(_BYTE*)(v114 + 11)) - 1) | 1);
					v116 = (_DWORD*)(*(_QWORD*)(v114 + 32) + 40 * v111);
				}
				while (v116[6] != 3 || (double)v9 != *((double*)v116 + 2))
				{
					v116 = (_DWORD*)*((_QWORD*)v116 + 4);
					if (!v116)
					{
						v116 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v116 = (_DWORD*)(*(_QWORD*)(v114 + 24) + 16i64 * (v9 - 1));
			}
			*(_QWORD*)v113 = *(_QWORD*)v116;
			*(_DWORD*)(v113 + 8) = v116[2];
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_1400F07B0(a1, v111, L"purgeDate", v115);
			*(_QWORD*)(a1 + 16) -= 16i64;
			sub_1400579E0(a1, v117, v9);
			v4 = v125;
			v6 = v125 - 1;
			v5 = ++v124;
		} while (v124 < v121);
	}
	v118 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v4);
	v119 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v119 = *v118;
	*(_DWORD*)(v119 + 8) = *((_DWORD*)v118 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v119, v4);
	return 1i64;
}
// 140028DF9: variable 'v111' is possibly undefined
// 140028E09: variable 'v117' is possibly undefined
// 1409EE140: using guessed type wchar_t aName_0[5];
// 1409EE150: using guessed type wchar_t aLevel[6];
// 1409EE160: using guessed type wchar_t aFactionid_0[10];
// 1409EE178: using guessed type wchar_t aClassid_0[8];
// 1409EE188: using guessed type wchar_t aRaceid_0[7];
// 1409EE198: using guessed type wchar_t aGenderid_0[9];
// 1409EE1B0: using guessed type wchar_t aPath_0[5];
// 1409EE1C0: using guessed type wchar_t aWorldid[8];
// 1409EE1D0: using guessed type wchar_t aWorldzoneid[12];
// 1409EE1E8: using guessed type wchar_t aPurgedate[10];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

