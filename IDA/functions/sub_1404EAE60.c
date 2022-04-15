//----- (00000001404EAE60) ----------------------------------------------------
__int64 __fastcall sub_1404EAE60(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rcx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // eax
	__int64 v7; // r13
	int v8; // r12d
	__int64 v9; // rax
	unsigned __int64 v10; // rsi
	int v11; // edx
	unsigned __int64 v12; // r12
	int* v13; // rdi
	__int64 v14; // r14
	__int64 v15; // rcx
	int v16; // eax
	unsigned __int64 v17; // r15
	int* v18; // rax
	int* v19; // rbx
	bool v20; // cc
	unsigned __int64 v21; // rcx
	__int64 v22; // rsi
	__int64 v23; // rcx
	unsigned __int64 v24; // rax
	__int64 v25; // rbx
	__int64 v26; // rax
	int* v27; // r12
	unsigned __int64 v28; // r13
	__int64 v29; // r15
	unsigned __int64 v30; // rdx
	unsigned __int64 v31; // r8
	unsigned int v32; // r10d
	__int64 v33; // r11
	unsigned __int64 v34; // rcx
	unsigned int* v35; // rax
	__int64 v36; // rsi
	int* v37; // rax
	int* v38; // rbx
	__int64 v39; // rcx
	__int64 v40; // rbx
	__int64 v41; // rax
	int v42; // eax
	unsigned __int64 v43; // rcx
	__int64 v44; // r12
	__int64 v45; // rbx
	__int64 v46; // rax
	int v47; // eax
	int v48; // r15d
	unsigned int v49; // ebx
	__int64 v50; // r9
	int v51; // r13d
	_DWORD* v52; // rdx
	__int64 v53; // rcx
	unsigned __int64* v54; // r14
	unsigned __int64 v55; // rsi
	__int64 v56; // rbx
	__int64 v57; // rax
	__int64 v58; // rcx
	__int64 v59; // rax
	__int64* v60; // rax
	__int64 v61; // rdx
	__int64 v62; // rax
	__int64 v63; // r10
	__int64 v64; // r9
	unsigned __int16* v65; // r11
	_DWORD* v66; // rcx
	__int64 v67; // rdx
	__int64 v68; // rax
	__int64 v69; // r10
	__int64 v70; // r9
	unsigned __int16* v71; // r11
	_DWORD* v72; // rcx
	__int64 v73; // rax
	__int64 v74; // r10
	__int64 v75; // r9
	int v76; // r15d
	_DWORD* v77; // rcx
	unsigned __int64* v78; // r14
	unsigned __int64 v79; // rsi
	__int64 v80; // rbx
	__int64 v81; // rax
	__int64 v82; // rcx
	_DWORD* v83; // rcx
	__int64* v84; // rax
	__int64 v85; // rax
	__int64 v86; // r10
	int v87; // ecx
	__int64 v88; // r9
	int v89; // r15d
	_DWORD* v90; // rcx
	unsigned __int64* v91; // r14
	unsigned __int64 v92; // rsi
	__int64 v93; // rbx
	__int64 v94; // rax
	__int64 v95; // rcx
	__int64 v96; // rax
	__int64* v97; // rax
	__int64 v98; // r9
	__int64 v99; // r10
	_DWORD* v100; // rcx
	int v101; // esi
	__int64 v102; // rcx
	__int64 v103; // rax
	__int64 v104; // r10
	__int64 v105; // r9
	_DWORD* v106; // rcx
	__int64 v107; // r8
	_DWORD* v108; // rdx
	__int64 v109; // rcx
	__int64 v110; // rax
	int v111; // r13d
	int v112; // r12d
	__int64 v113; // r9
	unsigned int v114; // r15d
	_DWORD* v115; // rdx
	__int64 v116; // rcx
	unsigned __int64* v117; // r14
	unsigned __int64 v118; // rsi
	__int64 v119; // rbx
	__int64 v120; // rax
	__int64 v121; // rcx
	__int64 v122; // rax
	__int64* v123; // rax
	__int64 v124; // rdx
	__int64 v125; // r9
	__int64 v126; // r10
	unsigned __int16* v127; // r11
	_DWORD* v128; // rcx
	_QWORD* v129; // rax
	__int64 v130; // r10
	__int64 v131; // rdx
	unsigned __int16* v132; // r11
	_QWORD* v133; // rax
	__int64 v134; // r10
	__int64 v135; // rdx
	int v136; // r11d
	_QWORD* v137; // rax
	__int64 v138; // r11
	__int64 v139; // rdx
	int v140; // r10d
	__int64 v141; // rdx
	__int64 v142; // rdx
	_QWORD* v143; // rax
	__int64 v144; // r8
	__int64 v145; // rcx
	__int64 v146; // rdx
	double v148; // [rsp+28h] [rbp-99h]
	double v149; // [rsp+28h] [rbp-99h]
	double v150; // [rsp+28h] [rbp-99h]
	double v151; // [rsp+28h] [rbp-99h]
	double v152; // [rsp+28h] [rbp-99h]
	double v153; // [rsp+28h] [rbp-99h]
	double v154; // [rsp+28h] [rbp-99h]
	unsigned __int64 v155; // [rsp+30h] [rbp-91h]
	double v156; // [rsp+30h] [rbp-91h]
	double v157; // [rsp+30h] [rbp-91h]
	int v158; // [rsp+38h] [rbp-89h]
	int* v159; // [rsp+40h] [rbp-81h] BYREF
	unsigned __int64 v160; // [rsp+48h] [rbp-79h]
	int v161; // [rsp+50h] [rbp-71h]
	__int64 v162; // [rsp+58h] [rbp-69h]
	__int64 v163; // [rsp+60h] [rbp-61h]
	int* v164; // [rsp+68h] [rbp-59h] BYREF
	unsigned __int64 v165; // [rsp+70h] [rbp-51h]
	unsigned int v166; // [rsp+78h] [rbp-49h]
	__int64(__fastcall * *v167)(); // [rsp+80h] [rbp-41h] BYREF
	int v168; // [rsp+88h] [rbp-39h]
	__int64 v169; // [rsp+90h] [rbp-31h]
	int v170; // [rsp+98h] [rbp-29h]
	__int64 v171; // [rsp+A0h] [rbp-21h] BYREF
	__int64 v172; // [rsp+A8h] [rbp-19h]
	__int64(__fastcall * *v173)(); // [rsp+C0h] [rbp-1h] BYREF
	int v174; // [rsp+C8h] [rbp+7h]
	__int64 v175; // [rsp+D0h] [rbp+Fh]
	int v176; // [rsp+D8h] [rbp+17h]

	v1 = a1;
	v162 = a1;
	v169 = a1;
	v2 = *(_QWORD*)(a1 + 32);
	v3 = *(_QWORD*)(v2 + 112);
	v167 = off_140B569F0;
	v170 = 1;
	if (*(_QWORD*)(v2 + 120) >= v3)
		sub_14005E2C0(v1);
	v4 = *(_QWORD*)(v1 + 16);
	v5 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(v1 + 16) += 16i64;
	v6 = sub_1400578C0(v1);
	v7 = qword_140C65908;
	v8 = v6;
	v168 = v6;
	v9 = 0i64;
	v10 = 0i64;
	v160 = 0i64;
	v159 = 0i64;
	if (*(_QWORD*)(qword_140C65908 + 80))
	{
		v11 = dword_140DC31F8;
		v12 = v160;
		v13 = 0i64;
		do
		{
			v14 = *(_QWORD*)(*(_QWORD*)(v7 + 72) + 8 * v10);
			if ((v11 & 1) == 0)
			{
				v11 |= 1u;
				v15 = *(_QWORD*)(qword_140C635F0 + 5864);
				v16 = 26;
				dword_140DC31F8 = v11;
				if ((*(_BYTE*)(v15 + 4) & 1) != 0)
					v16 = 51;
				dword_140DC31FC = v16;
			}
			if (*(_DWORD*)(v14 + 4) == dword_140DC31FC)
			{
				v17 = v12 + 1;
				v18 = sub_14018DB00((__int64)v13, v12 + 1, 8i64);
				*(_QWORD*)&v18[2 * v12] = v14;
				v19 = v18;
				if (v13 != v18)
				{
					sub_1407DB590(v18, v13, 8 * v12);
					if (v13)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v13 - 2) + 8i64))(v13 - 4);
					v13 = v19;
				}
				v11 = dword_140DC31F8;
				++v12;
				v160 = v17;
			}
			++v10;
		} while (v10 < *(_QWORD*)(v7 + 80));
		v159 = v13;
		v1 = v162;
		v20 = v12 <= 1;
		v8 = v168;
		if (!v20)
			sub_1404F44E0((__int64*)&v159);
		v9 = (__int64)v159;
	}
	v21 = 0i64;
	v162 = 0i64;
	if (v160)
	{
		do
		{
			v22 = *(_QWORD*)(v9 + 8 * v21);
			v23 = *(_QWORD*)(v1 + 32);
			v173 = off_140B569F0;
			v24 = *(_QWORD*)(v23 + 112);
			v163 = v22;
			v175 = v1;
			v176 = 1;
			if (*(_QWORD*)(v23 + 120) >= v24)
				sub_14005E2C0(v1);
			v25 = *(_QWORD*)(v1 + 16);
			v26 = sub_14005C1B0(v1, 0, 0);
			*(_DWORD*)(v25 + 8) = 5;
			*(_QWORD*)v25 = v26;
			*(_QWORD*)(v1 + 16) += 16i64;
			v27 = 0i64;
			v28 = 0i64;
			v29 = 0i64;
			v174 = sub_1400578C0(v1);
			v165 = 0i64;
			v164 = 0i64;
			if (*(_QWORD*)(v22 + 56))
			{
				while (1)
				{
					v30 = 0i64;
					v31 = *(_QWORD*)(qword_140C65908 + 80);
					v32 = *(_DWORD*)(*(_QWORD*)(v22 + 48) + 4 * v29);
					if (!v31)
						goto LABEL_38;
					v33 = *(_QWORD*)(qword_140C65908 + 72);
					while (1)
					{
						v34 = v30 + ((v31 - v30) >> 1);
						v35 = *(unsigned int**)(v33 + 8 * v34);
						if (v32 < *v35)
						{
							v31 = v30 + ((v31 - v30) >> 1);
							goto LABEL_29;
						}
						if (v32 <= *v35)
							break;
						v30 = v34 + 1;
					LABEL_29:
						if (v30 >= v31)
							goto LABEL_38;
					}
					v36 = *(_QWORD*)(v33 + 8 * v34);
					if (v35)
					{
						v37 = sub_14018DB00((__int64)v27, v28 + 1, 8i64);
						*(_QWORD*)&v37[2 * v28] = v36;
						v38 = v37;
						if (v27 != v37)
						{
							sub_1407DB590(v37, v27, 8 * v28);
							if (v27)
								(*(void(__fastcall**)(int*))(*((_QWORD*)v27 - 2) + 8i64))(v27 - 4);
							v27 = v38;
						}
						++v28;
					}
					v22 = v163;
				LABEL_38:
					if ((unsigned __int64)++v29 >= *(_QWORD*)(v22 + 56))
					{
						v164 = v27;
						v165 = v28;
						if (v28 > 1)
						{
							sub_1404F44E0((__int64*)&v164);
							v28 = v165;
						}
						break;
					}
				}
			}
			v39 = *(_QWORD*)(v1 + 32);
			v161 = 1;
			if (*(_QWORD*)(v39 + 120) >= *(_QWORD*)(v39 + 112))
				sub_14005E2C0(v1);
			v40 = *(_QWORD*)(v1 + 16);
			v41 = sub_14005C1B0(v1, 0, 0);
			*(_DWORD*)(v40 + 8) = 5;
			*(_QWORD*)v40 = v41;
			*(_QWORD*)(v1 + 16) += 16i64;
			v42 = sub_1400578C0(v1);
			v43 = 0i64;
			v158 = v42;
			v155 = 0i64;
			if (v28)
			{
				v166 = v42 - 1;
				do
				{
					v44 = *(_QWORD*)&v164[2 * v43];
					if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
						sub_14005E2C0(v1);
					v45 = *(_QWORD*)(v1 + 16);
					v46 = sub_14005C1B0(v1, 0, 0);
					*(_DWORD*)(v45 + 8) = 5;
					*(_QWORD*)v45 = v46;
					*(_QWORD*)(v1 + 16) += 16i64;
					v47 = sub_1400578C0(v1);
					v48 = *(_DWORD*)v44;
					v49 = v47 - 1;
					v50 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
					v51 = v47;
					if ((unsigned int)(v47 - 1) >= *(_DWORD*)(v50 + 56))
					{
						if ((double)v47 == 0.0)
						{
							v52 = *(_DWORD**)(v50 + 32);
						}
						else
						{
							v148 = (double)v47;
							v52 = (_DWORD*)(*(_QWORD*)(v50 + 32)
								+ 40
								* ((unsigned int)(LODWORD(v148) + HIDWORD(v148))
									% (((1i64 << *(_BYTE*)(v50 + 11)) - 1) | 1)));
						}
						while (v52[6] != 3 || (double)v47 != *((double*)v52 + 2))
						{
							v52 = (_DWORD*)*((_QWORD*)v52 + 4);
							if (!v52)
							{
								v52 = dword_140A12138;
								break;
							}
						}
					}
					else
					{
						v52 = (_DWORD*)(*(_QWORD*)(v50 + 24) + 16i64 * (v47 - 1));
					}
					v53 = *(_QWORD*)(v1 + 16);
					*(_QWORD*)v53 = *(_QWORD*)v52;
					*(_DWORD*)(v53 + 8) = v52[2];
					*(_QWORD*)(v1 + 16) += 16i64;
					v54 = (unsigned __int64*)sub_14018F0E0(&v171, L"nId")[1];
					if (v54)
					{
						v55 = -1i64;
						do
							++v55;
						while (*((_BYTE*)v54 + v55));
						if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
							sub_14005E2C0(v1);
						v56 = *(_QWORD*)(v1 + 16);
						v57 = sub_140062650(v1, v54, v55);
						*(_DWORD*)(v56 + 8) = 4;
						*(_QWORD*)v56 = v57;
						v49 = v51 - 1;
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
					}
					v58 = v172;
					*(_QWORD*)(v1 + 16) += 16i64;
					if (v58)
						sub_14018B900(v58, 0);
					v59 = *(_QWORD*)(v1 + 16);
					*(_DWORD*)(v59 + 8) = 3;
					*(double*)v59 = (double)v48;
					*(_QWORD*)(v1 + 16) += 16i64;
					v60 = (__int64*)sub_1400580E0(v1, -3);
					sub_14005EA50(v1, v60, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
					v62 = *(_QWORD*)(v1 + 32);
					v63 = *(_QWORD*)(v1 + 16) - 48i64;
					*(_QWORD*)(v1 + 16) = v63;
					v64 = *(_QWORD*)(v62 + 160);
					v65 = *(unsigned __int16**)(v44 + 16);
					if (v49 >= *(_DWORD*)(v64 + 56))
					{
						if ((double)v51 == 0.0)
						{
							v66 = *(_DWORD**)(v64 + 32);
						}
						else
						{
							v149 = (double)v51;
							v61 = (unsigned int)(LODWORD(v149) + HIDWORD(v149)) % (((1i64 << *(_BYTE*)(v64 + 11)) - 1) | 1);
							v66 = (_DWORD*)(*(_QWORD*)(v64 + 32) + 40 * v61);
						}
						while (v66[6] != 3 || (double)v51 != *((double*)v66 + 2))
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
						v66 = (_DWORD*)(*(_QWORD*)(v64 + 24) + 16i64 * (v51 - 1));
					}
					*(_QWORD*)v63 = *(_QWORD*)v66;
					*(_DWORD*)(v63 + 8) = v66[2];
					*(_QWORD*)(v1 + 16) += 16i64;
					sub_1400F0870(v1, v61, L"strName", v65);
					v68 = *(_QWORD*)(v1 + 32);
					v69 = *(_QWORD*)(v1 + 16) - 16i64;
					*(_QWORD*)(v1 + 16) = v69;
					v70 = *(_QWORD*)(v68 + 160);
					v71 = *(unsigned __int16**)(v44 + 24);
					if (v49 >= *(_DWORD*)(v70 + 56))
					{
						if ((double)v51 == 0.0)
						{
							v72 = *(_DWORD**)(v70 + 32);
						}
						else
						{
							v150 = (double)v51;
							v67 = (unsigned int)(LODWORD(v150) + HIDWORD(v150)) % (((1i64 << *(_BYTE*)(v70 + 11)) - 1) | 1);
							v72 = (_DWORD*)(*(_QWORD*)(v70 + 32) + 40 * v67);
						}
						while (v72[6] != 3 || (double)v51 != *((double*)v72 + 2))
						{
							v72 = (_DWORD*)*((_QWORD*)v72 + 4);
							if (!v72)
							{
								v72 = dword_140A12138;
								break;
							}
						}
					}
					else
					{
						v72 = (_DWORD*)(*(_QWORD*)(v70 + 24) + 16i64 * (v51 - 1));
					}
					*(_QWORD*)v69 = *(_QWORD*)v72;
					*(_DWORD*)(v69 + 8) = v72[2];
					*(_QWORD*)(v1 + 16) += 16i64;
					sub_1400F0870(v1, v67, L"strDescription", v71);
					v73 = *(_QWORD*)(v1 + 32);
					v74 = *(_QWORD*)(v1 + 16) - 16i64;
					*(_QWORD*)(v1 + 16) = v74;
					v75 = *(_QWORD*)(v73 + 160);
					v76 = *(_DWORD*)(v44 + 12);
					if (v49 >= *(_DWORD*)(v75 + 56))
					{
						if ((double)v51 == 0.0)
						{
							v77 = *(_DWORD**)(v75 + 32);
						}
						else
						{
							v151 = (double)v51;
							v77 = (_DWORD*)(*(_QWORD*)(v75 + 32)
								+ 40
								* ((unsigned int)(LODWORD(v151) + HIDWORD(v151))
									% (((1i64 << *(_BYTE*)(v75 + 11)) - 1) | 1)));
						}
						while (v77[6] != 3 || (double)v51 != *((double*)v77 + 2))
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
						v77 = (_DWORD*)(*(_QWORD*)(v75 + 24) + 16i64 * (v51 - 1));
					}
					*(_QWORD*)v74 = *(_QWORD*)v77;
					*(_DWORD*)(v74 + 8) = v77[2];
					*(_QWORD*)(v1 + 16) += 16i64;
					v78 = (unsigned __int64*)sub_14018F0E0(&v171, L"bDisplayable")[1];
					if (v78)
					{
						v79 = -1i64;
						do
							++v79;
						while (*((_BYTE*)v78 + v79));
						if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
							sub_14005E2C0(v1);
						v80 = *(_QWORD*)(v1 + 16);
						v81 = sub_140062650(v1, v78, v79);
						*(_DWORD*)(v80 + 8) = 4;
						*(_QWORD*)v80 = v81;
						v49 = v51 - 1;
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
					}
					v82 = v172;
					*(_QWORD*)(v1 + 16) += 16i64;
					if (v82)
						sub_14018B900(v82, 0);
					v83 = *(_DWORD**)(v1 + 16);
					v83[2] = 1;
					*v83 = v76 != 0;
					*(_QWORD*)(v1 + 16) += 16i64;
					v84 = (__int64*)sub_1400580E0(v1, -3);
					sub_14005EA50(v1, v84, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
					v85 = *(_QWORD*)(v1 + 32);
					v86 = *(_QWORD*)(v1 + 16) - 48i64;
					v87 = -1;
					*(_QWORD*)(v1 + 16) = v86;
					v88 = *(_QWORD*)(v85 + 160);
					if (*(_DWORD*)(v44 + 40) != -1)
						v87 = *(_DWORD*)(v44 + 40);
					v89 = 0;
					if (v87)
						v89 = v87;
					if (v49 >= *(_DWORD*)(v88 + 56))
					{
						if ((double)v51 == 0.0)
						{
							v90 = *(_DWORD**)(v88 + 32);
						}
						else
						{
							v152 = (double)v51;
							v90 = (_DWORD*)(*(_QWORD*)(v88 + 32)
								+ 40
								* ((unsigned int)(LODWORD(v152) + HIDWORD(v152))
									% (((1i64 << *(_BYTE*)(v88 + 11)) - 1) | 1)));
						}
						while (v90[6] != 3 || (double)v51 != *((double*)v90 + 2))
						{
							v90 = (_DWORD*)*((_QWORD*)v90 + 4);
							if (!v90)
							{
								v90 = dword_140A12138;
								break;
							}
						}
					}
					else
					{
						v90 = (_DWORD*)(*(_QWORD*)(v88 + 24) + 16i64 * (v51 - 1));
					}
					*(_QWORD*)v86 = *(_QWORD*)v90;
					*(_DWORD*)(v86 + 8) = v90[2];
					*(_QWORD*)(v1 + 16) += 16i64;
					v91 = (unsigned __int64*)sub_14018F0E0(&v171, L"nOfferCount")[1];
					if (v91)
					{
						v92 = -1i64;
						do
							++v92;
						while (*((_BYTE*)v91 + v92));
						if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
							sub_14005E2C0(v1);
						v93 = *(_QWORD*)(v1 + 16);
						v94 = sub_140062650(v1, v91, v92);
						*(_DWORD*)(v93 + 8) = 4;
						*(_QWORD*)v93 = v94;
						v49 = v51 - 1;
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
					}
					v95 = v172;
					*(_QWORD*)(v1 + 16) += 16i64;
					if (v95)
						sub_14018B900(v95, 0);
					v96 = *(_QWORD*)(v1 + 16);
					*(_DWORD*)(v96 + 8) = 3;
					*(double*)v96 = (double)v89;
					*(_QWORD*)(v1 + 16) += 16i64;
					v97 = (__int64*)sub_1400580E0(v1, -3);
					sub_14005EA50(v1, v97, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
					*(_QWORD*)(v1 + 16) -= 48i64;
					v98 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
					v99 = *(_QWORD*)(v1 + 16);
					if (v166 >= *(_DWORD*)(v98 + 56))
					{
						if ((double)v158 == 0.0)
						{
							v100 = *(_DWORD**)(v98 + 32);
						}
						else
						{
							v153 = (double)v158;
							v100 = (_DWORD*)(*(_QWORD*)(v98 + 32)
								+ 40
								* ((unsigned int)(LODWORD(v153) + HIDWORD(v153))
									% (((1i64 << *(_BYTE*)(v98 + 11)) - 1) | 1)));
						}
						while (v100[6] != 3 || (double)v158 != *((double*)v100 + 2))
						{
							v100 = (_DWORD*)*((_QWORD*)v100 + 4);
							if (!v100)
							{
								v100 = dword_140A12138;
								break;
							}
						}
					}
					else
					{
						v100 = (_DWORD*)(*(_QWORD*)(v98 + 24) + 16i64 * (v158 - 1));
					}
					v101 = v161;
					*(_QWORD*)v99 = *(_QWORD*)v100;
					*(_DWORD*)(v99 + 8) = v100[2];
					*(_QWORD*)(v1 + 16) += 16i64;
					v102 = *(_QWORD*)(v1 + 16);
					*(_DWORD*)(v102 + 8) = 3;
					v161 = v101 + 1;
					*(double*)v102 = (double)v101;
					v103 = *(_QWORD*)(v1 + 32);
					v104 = *(_QWORD*)(v1 + 16) + 16i64;
					*(_QWORD*)(v1 + 16) = v104;
					v105 = *(_QWORD*)(v103 + 160);
					if (v49 >= *(_DWORD*)(v105 + 56))
					{
						if ((double)v51 == 0.0)
						{
							v106 = *(_DWORD**)(v105 + 32);
						}
						else
						{
							v154 = (double)v51;
							v106 = (_DWORD*)(*(_QWORD*)(v105 + 32)
								+ 40
								* ((unsigned int)(LODWORD(v154) + HIDWORD(v154))
									% (((1i64 << *(_BYTE*)(v105 + 11)) - 1) | 1)));
						}
						while (v106[6] != 3 || (double)v51 != *((double*)v106 + 2))
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
						v106 = (_DWORD*)(*(_QWORD*)(v105 + 24) + 16i64 * (v51 - 1));
					}
					*(_QWORD*)v104 = *(_QWORD*)v106;
					*(_DWORD*)(v104 + 8) = v106[2];
					v107 = *(_QWORD*)(v1 + 16) + 16i64;
					*(_QWORD*)(v1 + 16) = v107;
					sub_14005EA50(v1, (__int64*)(v107 - 48), (int*)(v107 - 32), (unsigned int*)(v107 - 16));
					*(_QWORD*)(v1 + 16) -= 48i64;
					if (v51 >= 0)
					{
						v108 = *(_DWORD**)(*(_QWORD*)sub_1400580E0(v1, -10000) + 32i64);
						while (v108[6] != 3 || *((double*)v108 + 2) != 0.0)
						{
							v108 = (_DWORD*)*((_QWORD*)v108 + 4);
							if (!v108)
							{
								v108 = dword_140A12138;
								break;
							}
						}
						v109 = *(_QWORD*)(v1 + 16);
						*(_QWORD*)v109 = *(_QWORD*)v108;
						*(_DWORD*)(v109 + 8) = v108[2];
						*(_QWORD*)(v1 + 16) += 16i64;
						sub_140058B30(v1, -10000);
						v110 = *(_QWORD*)(v1 + 16);
						*(_DWORD*)(v110 + 8) = 3;
						*(double*)v110 = (double)v51;
						*(_QWORD*)(v1 + 16) += 16i64;
						sub_140058B30(v1, -10000);
					}
					v43 = v155 + 1;
					v155 = v43;
				} while (v43 < v165);
				v22 = v163;
			}
			v111 = v174;
			v112 = *(_DWORD*)v22;
			v113 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
			v114 = v174 - 1;
			if ((unsigned int)(v174 - 1) >= *(_DWORD*)(v113 + 56))
			{
				if ((double)v174 == 0.0)
				{
					v115 = *(_DWORD**)(v113 + 32);
				}
				else
				{
					v156 = (double)v174;
					v115 = (_DWORD*)(*(_QWORD*)(v113 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v156) + HIDWORD(v156)) % (((1i64 << *(_BYTE*)(v113 + 11)) - 1) | 1)));
				}
				while (v115[6] != 3 || (double)v174 != *((double*)v115 + 2))
				{
					v115 = (_DWORD*)*((_QWORD*)v115 + 4);
					if (!v115)
					{
						v115 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v115 = (_DWORD*)(*(_QWORD*)(v113 + 24) + 16i64 * (v174 - 1));
			}
			v116 = *(_QWORD*)(v1 + 16);
			*(_QWORD*)v116 = *(_QWORD*)v115;
			*(_DWORD*)(v116 + 8) = v115[2];
			*(_QWORD*)(v1 + 16) += 16i64;
			v117 = (unsigned __int64*)sub_14018F0E0(&v171, L"nId")[1];
			if (v117)
			{
				v118 = -1i64;
				do
					++v118;
				while (*((_BYTE*)v117 + v118));
				if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
					sub_14005E2C0(v1);
				v119 = *(_QWORD*)(v1 + 16);
				v120 = sub_140062650(v1, v117, v118);
				v22 = v163;
				*(_DWORD*)(v119 + 8) = 4;
				*(_QWORD*)v119 = v120;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
			}
			v121 = v172;
			*(_QWORD*)(v1 + 16) += 16i64;
			if (v121)
				sub_14018B900(v121, 0);
			v122 = *(_QWORD*)(v1 + 16);
			*(_DWORD*)(v122 + 8) = 3;
			*(double*)v122 = (double)v112;
			*(_QWORD*)(v1 + 16) += 16i64;
			v123 = (__int64*)sub_1400580E0(v1, -3);
			sub_14005EA50(v1, v123, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
			*(_QWORD*)(v1 + 16) -= 48i64;
			v125 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
			v126 = *(_QWORD*)(v1 + 16);
			v127 = *(unsigned __int16**)(v22 + 16);
			if (v114 >= *(_DWORD*)(v125 + 56))
			{
				if ((double)v111 == 0.0)
				{
					v128 = *(_DWORD**)(v125 + 32);
				}
				else
				{
					v157 = (double)v111;
					v124 = (unsigned int)(LODWORD(v157) + HIDWORD(v157)) % (((1i64 << *(_BYTE*)(v125 + 11)) - 1) | 1);
					v128 = (_DWORD*)(*(_QWORD*)(v125 + 32) + 40 * v124);
				}
				while (v128[6] != 3 || (double)v111 != *((double*)v128 + 2))
				{
					v128 = (_DWORD*)*((_QWORD*)v128 + 4);
					if (!v128)
					{
						v128 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v128 = (_DWORD*)(*(_QWORD*)(v125 + 24) + 16i64 * (v111 - 1));
			}
			*(_QWORD*)v126 = *(_QWORD*)v128;
			*(_DWORD*)(v126 + 8) = v128[2];
			*(_QWORD*)(v1 + 16) += 16i64;
			sub_1400F0870(v1, v124, L"strName", v127);
			*(_QWORD*)(v1 + 16) -= 16i64;
			v129 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v111);
			*(_QWORD*)v130 = *v129;
			*(_DWORD*)(v130 + 8) = *((_DWORD*)v129 + 2);
			*(_QWORD*)(v1 + 16) += 16i64;
			sub_1400F0870(v1, v131, L"strDescription", v132);
			*(_QWORD*)(v1 + 16) -= 16i64;
			v133 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v111);
			*(_QWORD*)v134 = *v133;
			*(_DWORD*)(v134 + 8) = *((_DWORD*)v133 + 2);
			*(_QWORD*)(v1 + 16) += 16i64;
			sub_1400F0630(v1, v135, L"bDisplayable", v136);
			*(_QWORD*)(v1 + 16) -= 16i64;
			v137 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v111);
			*(_QWORD*)v138 = *v137;
			*(_DWORD*)(v138 + 8) = *((_DWORD*)v137 + 2);
			*(_QWORD*)(v1 + 16) += 16i64;
			sub_1400F06F0(v1, v139, L"nOfferCount", v140);
			*(_QWORD*)(v1 + 16) -= 16i64;
			sub_1400FB2A0((__int64)&v173, (__int64)L"tGroups", v158);
			sub_1400FB1D0((__int64)&v167);
			sub_1400579E0(v1, v141, v158);
			if (v164)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v164 - 2) + 8i64))(v164 - 4);
			sub_1400579E0(v1, v142, v111);
			v9 = (__int64)v159;
			v21 = v162 + 1;
			v162 = v21;
		} while (v21 < v160);
		v1 = v169;
		v8 = v168;
	}
	v143 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v8);
	v144 = *(_QWORD*)(v1 + 16);
	v145 = (__int64)v159;
	*(_QWORD*)v144 = *v143;
	v146 = *((unsigned int*)v143 + 2);
	*(_DWORD*)(v144 + 8) = v146;
	*(_QWORD*)(v1 + 16) += 16i64;
	if (v145)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v145 - 16) + 8i64))(v145 - 16);
	sub_1400579E0(v1, v146, v8);
	return 1i64;
}
// 1404EB433: variable 'v61' is possibly undefined
// 1404EB4F0: variable 'v67' is possibly undefined
// 1404EBC5F: variable 'v124' is possibly undefined
// 1404EBC91: variable 'v130' is possibly undefined
// 1404EBCA3: variable 'v131' is possibly undefined
// 1404EBCA3: variable 'v132' is possibly undefined
// 1404EBCD5: variable 'v134' is possibly undefined
// 1404EBCE7: variable 'v135' is possibly undefined
// 1404EBCE7: variable 'v136' is possibly undefined
// 1404EBD28: variable 'v138' is possibly undefined
// 1404EBD3A: variable 'v139' is possibly undefined
// 1404EBD3A: variable 'v140' is possibly undefined
// 1404EBD6D: variable 'v141' is possibly undefined
// 1404EBD8C: variable 'v142' is possibly undefined
// 1404EBE2E: variable 'v146' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B0D370: using guessed type wchar_t aNoffercount_0[12];
// 140B0D388: using guessed type wchar_t aTgroups[8];
// 140B0D3D8: using guessed type wchar_t aNid_11[4];
// 140B0D3E0: using guessed type wchar_t aStrname_21[8];
// 140B0D3F0: using guessed type wchar_t aStrdescription_6[15];
// 140B0D410: using guessed type wchar_t aBdisplayable_0[13];
// 140B0D430: using guessed type wchar_t aStrname_20[8];
// 140B0D440: using guessed type wchar_t aStrdescription_5[15];
// 140B0D460: using guessed type wchar_t aBdisplayable[13];
// 140B0D480: using guessed type wchar_t aNoffercount[12];
// 140B0D4D0: using guessed type wchar_t aNid_10[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65908: using guessed type __int64 qword_140C65908;
// 140DC31F8: using guessed type int dword_140DC31F8;
// 140DC31FC: using guessed type int dword_140DC31FC;

