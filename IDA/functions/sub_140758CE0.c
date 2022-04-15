#include "../winhttp.h"

//----- (0000000140758CE0) ----------------------------------------------------
__int64 __fastcall sub_140758CE0(_QWORD* a1)
{
	_DWORD* v2; // rax
	unsigned int v3; // esi
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // ebx
	__int64 v9; // rcx
	_QWORD* v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rdx
	_QWORD* v13; // rax
	__int64 v14; // rdx
	__int64 v15; // r11
	__int64 v16; // rax
	_QWORD* v17; // rcx
	__int64 v18; // r13
	_QWORD* v19; // rax
	__int64 v20; // rcx
	__int64 v21; // rdx
	_QWORD* v22; // rax
	__int64 v23; // r11
	__int64 v24; // rbx
	__int64 v25; // rax
	__int64 v26; // rax
	unsigned int v27; // ebx
	__int64(__fastcall * v28)(wchar_t**, _QWORD, __int64); // rax
	int* v29; // r12
	__int64 v30; // r15
	unsigned int v31; // esi
	__int64 v32; // rax
	unsigned int* v33; // r14
	unsigned int i; // ebx
	unsigned int v35; // eax
	int v36; // eax
	unsigned int v37; // ebx
	__int64 v38; // rax
	unsigned int v39; // r14d
	__int64 v40; // rbx
	float v41; // xmm2_4
	int v42; // eax
	int v43; // xmm1_4
	int v44; // xmm0_4
	int v45; // xmm1_4
	int* v46; // r14
	__int64 v47; // rcx
	unsigned __int64 v48; // rax
	__int64 v49; // rbx
	__int64 v50; // rax
	int v51; // eax
	__int64 v52; // rcx
	__int64 v53; // rbx
	__int64 v54; // rax
	int v55; // eax
	int v56; // r13d
	__int64 v57; // rsi
	__int64 v58; // rbx
	__int64 v59; // rax
	int v60; // eax
	unsigned int v61; // xmm1_4
	float v62; // xmm6_4
	int v63; // r13d
	__int64 v64; // rax
	unsigned int v65; // xmm0_4
	__int64 v66; // r9
	unsigned int v67; // ebx
	int v68; // xmm1_4
	_DWORD* v69; // rdx
	__int64 v70; // rcx
	unsigned __int64* v71; // r14
	unsigned __int64 v72; // rsi
	__int64 v73; // rbx
	__int64 v74; // rax
	_DWORD* v75; // rcx
	int v76; // r15d
	__int64* v77; // rax
	__int64 v78; // rax
	__int64 v79; // r10
	__int64 v80; // r9
	_DWORD* v81; // rcx
	unsigned __int64* v82; // r14
	unsigned __int64 v83; // rsi
	__int64 v84; // rbx
	__int64 v85; // rax
	__int64 v86; // rax
	__m128i v87; // xmm0
	__int64* v88; // rax
	__int64 v89; // rax
	__int64 v90; // r10
	__int64 v91; // r9
	_DWORD* v92; // rcx
	unsigned __int64* v93; // r14
	unsigned __int64 v94; // rsi
	__int64 v95; // rbx
	__int64 v96; // rax
	__int64 v97; // rax
	__m128i v98; // xmm0
	__int64* v99; // rax
	__int64 v100; // rax
	__int64 v101; // r10
	__int64 v102; // r9
	_DWORD* v103; // rcx
	unsigned __int64* v104; // r14
	unsigned __int64 v105; // rsi
	__int64 v106; // rbx
	__int64 v107; // rax
	__int64 v108; // rcx
	double v109; // xmm0_8
	_DWORD* v110; // rcx
	unsigned __int64* v111; // r14
	unsigned __int64 v112; // rsi
	__int64 v113; // rbx
	__int64 v114; // rax
	__int64 v115; // rax
	__m128i v116; // xmm0
	__int64* v117; // rax
	__int64 v118; // rax
	__int64 v119; // r10
	__int64 v120; // r9
	_DWORD* v121; // rcx
	unsigned __int64* v122; // r14
	unsigned __int64 v123; // rsi
	__int64 v124; // rbx
	__int64 v125; // rax
	__int64 v126; // rcx
	__int64 v127; // rax
	__int64* v128; // rax
	__int64 v129; // r9
	__int64 v130; // r10
	_DWORD* v131; // rcx
	__int64 v132; // rcx
	int v133; // eax
	__int64 v134; // rax
	__int64 v135; // r10
	__int64 v136; // r9
	_DWORD* v137; // rcx
	__int64 v138; // r8
	__int64 v139; // rdx
	__int64 v140; // rcx
	unsigned __int64 v141; // rax
	__int64 v142; // rbx
	__int64 v143; // rax
	int v144; // eax
	__int64 v145; // rcx
	__int64 v146; // r12
	int* v147; // rbx
	__int64 v148; // r14
	__int64 v149; // rsi
	float v150; // xmm6_4
	int v151; // r15d
	__int64 v152; // rbx
	__int64 v153; // rax
	_QWORD* v154; // rax
	__int64 v155; // rcx
	__int64 v156; // rdx
	_QWORD* v157; // rax
	__int64 v158; // r11
	__int64 v159; // rdx
	__int64 v160; // rdx
	int v161; // ebx
	int v162; // esi
	__int64 v163; // rdx
	__int64 v164; // rdx
	_QWORD* v165; // rax
	__int64 v166; // rcx
	__int64 v167; // rdx
	_QWORD* v168; // rax
	int v169; // r8d
	__int64 v170; // r10
	__int64 v171; // rdx
	double v173; // [rsp+20h] [rbp-E0h]
	double v174; // [rsp+20h] [rbp-E0h]
	double v175; // [rsp+20h] [rbp-E0h]
	double v176; // [rsp+20h] [rbp-E0h]
	double v177; // [rsp+20h] [rbp-E0h]
	double v178; // [rsp+20h] [rbp-E0h]
	double v179; // [rsp+20h] [rbp-E0h]
	double v180; // [rsp+20h] [rbp-E0h]
	__int64 v181; // [rsp+28h] [rbp-D8h] BYREF
	__int64 v182; // [rsp+30h] [rbp-D0h]
	int v183; // [rsp+38h] [rbp-C8h]
	__int64 v184; // [rsp+48h] [rbp-B8h]
	int* v185; // [rsp+50h] [rbp-B0h]
	int v186; // [rsp+58h] [rbp-A8h]
	unsigned int v187; // [rsp+5Ch] [rbp-A4h]
	unsigned int v188; // [rsp+60h] [rbp-A0h]
	int v189; // [rsp+64h] [rbp-9Ch]
	__int64 v190; // [rsp+70h] [rbp-90h] BYREF
	int* v191; // [rsp+78h] [rbp-88h]
	int* v192; // [rsp+80h] [rbp-80h]
	__int64 v193; // [rsp+88h] [rbp-78h]
	__int64 v194; // [rsp+90h] [rbp-70h]
	__int64(__fastcall * *v195)(); // [rsp+98h] [rbp-68h] BYREF
	int v196; // [rsp+A0h] [rbp-60h]
	_QWORD* v197; // [rsp+A8h] [rbp-58h]
	int v198; // [rsp+B0h] [rbp-50h]
	__int64(__fastcall * *v199)(); // [rsp+B8h] [rbp-48h] BYREF
	int v200; // [rsp+C0h] [rbp-40h]
	_QWORD* v201; // [rsp+C8h] [rbp-38h]
	int v202; // [rsp+D0h] [rbp-30h]
	__int64(__fastcall * *v203)(); // [rsp+D8h] [rbp-28h] BYREF
	int v204; // [rsp+E0h] [rbp-20h]
	_QWORD* v205; // [rsp+E8h] [rbp-18h]
	int v206; // [rsp+F0h] [rbp-10h]
	__int64(__fastcall * *v207)(); // [rsp+F8h] [rbp-8h] BYREF
	int v208; // [rsp+100h] [rbp+0h]
	_QWORD* v209; // [rsp+108h] [rbp+8h]
	int v210; // [rsp+110h] [rbp+10h]
	__int64 v211[7]; // [rsp+118h] [rbp+18h]
	int v212; // [rsp+1D0h] [rbp+D0h]
	int v213; // [rsp+1D8h] [rbp+D8h]
	int v214; // [rsp+1E0h] [rbp+E0h]
	unsigned int v215; // [rsp+1E8h] [rbp+E8h]

	sub_140758B00();
	v2 = (_DWORD*)a1[3];
	if ((unsigned __int64)v2 >= a1[2] || v2 == dword_140A12138 || (int)v2[2] <= 0)
		v3 = 23;
	else
		v3 = sub_140056D60(a1, 1u);
	v4 = a1[4];
	v209 = a1;
	v5 = *(_QWORD*)(v4 + 112);
	v207 = off_140B569F0;
	v210 = 1;
	if (*(_QWORD*)(v4 + 120) >= v5)
		sub_14005E2C0((__int64)a1);
	v6 = a1[2];
	v7 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	a1[2] += 16i64;
	v8 = sub_1400578C0((__int64)a1);
	v208 = v8;
	if (v3 != 23)
		goto LABEL_12;
	v9 = *(_QWORD*)(qword_140C65898 + 120);
	if (v9)
	{
		v3 = *(_DWORD*)(v9 + 220);
	LABEL_12:
		v16 = sub_1401F31E0(v3);
		v17 = (_QWORD*)a1[4];
		v18 = v16;
		v185 = (int*)v16;
		if (!v16)
		{
			v19 = sub_14005C3C0(v17[20], v8);
			v20 = a1[2];
			*(_QWORD*)v20 = *v19;
			*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v21, L"eResult", 5);
			a1[2] -= 16i64;
			v22 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
			*(_QWORD*)v23 = *v22;
			*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
			a1[2] += 16i64;
			goto LABEL_204;
		}
		v211[0] = (__int64)L"strength";
		v203 = off_140B569F0;
		v211[1] = (__int64)L"dexterity";
		v205 = a1;
		v211[2] = (__int64)L"technology";
		v206 = 1;
		v211[3] = (__int64)L"magic";
		v211[4] = (__int64)L"wisdom";
		v211[5] = (__int64)L"stamina";
		if (v17[15] >= v17[14])
			sub_14005E2C0((__int64)a1);
		v24 = a1[2];
		v25 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v24 + 8) = 5;
		*(_QWORD*)v24 = v25;
		a1[2] += 16i64;
		v204 = sub_1400578C0((__int64)a1);
		v26 = 0i64;
		v214 = 0;
		v184 = 0i64;
		while (1)
		{
			v27 = *(_DWORD*)(v18 + 4 * v26 + 164);
			v28 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
			v191 = 0i64;
			v29 = 0i64;
			v192 = 0i64;
			v30 = 0i64;
			v193 = 0i64;
			v31 = 0;
			if (qword_140C63840)
				break;
			if (dword_140C650B4)
				goto LABEL_33;
			if ((int)sub_1401EC980() >= 0)
			{
				v32 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64650 + 24i64))(qword_140C64650, v27);
			LABEL_22:
				if (v32)
				{
					v33 = (unsigned int*)(v32 + 4);
					for (i = 0; i < 0xA; ++i)
					{
						v35 = *v33;
						LODWORD(v181) = 0;
						LODWORD(v182) = 0;
						HIDWORD(v181) = v35;
						HIDWORD(v182) = i;
						if (v31 < v35)
							v31 = v35;
						if (v29 == (int*)v30)
						{
							sub_14075A4B0(&v190, v29, (int*)&v181);
							v30 = v193;
							v29 = v192;
						}
						else
						{
							if (v29)
							{
								*v29 = 0;
								v29[1] = v35;
								v36 = v183;
								v29[2] = 0;
								v29[3] = i;
								v29[4] = v36;
							}
							v29 += 5;
							v192 = v29;
						}
						++v33;
					}
				}
			}
			v28 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		LABEL_33:
			v37 = *(_DWORD*)(v18 + 4 * v184 + 212);
			if (v28)
			{
				v38 = v28(off_140A69448, v37, qword_140C63858);
				goto LABEL_38;
			}
			if (!dword_140C65434 && (int)sub_1401ECDC0() >= 0)
			{
				v38 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64830 + 24i64))(qword_140C64830, v37);
			LABEL_38:
				if (v38)
				{
					v39 = 0;
					v40 = v38 + 4;
					do
					{
						if (*(_DWORD*)v40 >= v31)
							break;
						v41 = *(float*)(v40 + 360);
						if (v41 != 0.0)
						{
							HIDWORD(v181) = *(_DWORD*)v40;
							v42 = *(_DWORD*)(v40 + 180);
							v183 = LODWORD(v41);
							LODWORD(v181) = 1;
							LODWORD(v182) = v42;
							if (v29 == (int*)v30)
							{
								sub_14075A4B0(&v190, v29, (int*)&v181);
								v30 = v193;
								v29 = v192;
							}
							else
							{
								if (v29)
								{
									v43 = HIDWORD(v181);
									*v29 = v181;
									v44 = v182;
									v29[1] = v43;
									v45 = HIDWORD(v182);
									v29[2] = v44;
									v29[3] = v45;
									*((float*)v29 + 4) = v41;
								}
								v29 += 5;
								v192 = v29;
							}
						}
						++v39;
						v40 += 4i64;
					} while (v39 < 0x2D);
				}
			}
			v46 = v191;
			sub_14075A6B0(v191, v29);
			v47 = a1[4];
			v199 = off_140B569F0;
			v48 = *(_QWORD*)(v47 + 112);
			v201 = a1;
			v202 = 1;
			if (*(_QWORD*)(v47 + 120) >= v48)
				sub_14005E2C0((__int64)a1);
			v49 = a1[2];
			v50 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v49 + 8) = 5;
			*(_QWORD*)v49 = v50;
			a1[2] += 16i64;
			v51 = sub_1400578C0((__int64)a1);
			v52 = a1[4];
			v200 = v51;
			v213 = 1;
			if (*(_QWORD*)(v52 + 120) >= *(_QWORD*)(v52 + 112))
				sub_14005E2C0((__int64)a1);
			v53 = a1[2];
			v54 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v53 + 8) = 5;
			*(_QWORD*)v53 = v54;
			a1[2] += 16i64;
			v55 = sub_1400578C0((__int64)a1);
			v56 = v55;
			v212 = v55;
			v57 = (__int64)v46;
			v194 = (__int64)v46;
			if (v46 != v29)
			{
				v215 = v55 - 1;
				do
				{
					if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
						sub_14005E2C0((__int64)a1);
					v58 = a1[2];
					v59 = sub_14005C1B0((__int64)a1, 0, 0);
					*(_DWORD*)(v58 + 8) = 5;
					*(_QWORD*)v58 = v59;
					a1[2] += 16i64;
					v60 = sub_1400578C0((__int64)a1);
					v61 = *(_DWORD*)(v57 + 4);
					v62 = *(float*)(v57 + 16);
					v63 = v60;
					v64 = a1[4];
					v186 = *(_DWORD*)v57;
					v65 = *(_DWORD*)(v57 + 8);
					v187 = v61;
					v66 = *(_QWORD*)(v64 + 160);
					v67 = v63 - 1;
					v68 = *(_DWORD*)(v57 + 12);
					v188 = v65;
					v189 = v68;
					if ((unsigned int)(v63 - 1) >= *(_DWORD*)(v66 + 56))
					{
						if ((double)v63 == 0.0)
						{
							v69 = *(_DWORD**)(v66 + 32);
						}
						else
						{
							v173 = (double)v63;
							v69 = (_DWORD*)(*(_QWORD*)(v66 + 32)
								+ 40
								* ((unsigned int)(LODWORD(v173) + HIDWORD(v173))
									% (((1i64 << *(_BYTE*)(v66 + 11)) - 1) | 1)));
						}
						while (v69[6] != 3 || (double)v63 != *((double*)v69 + 2))
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
						v69 = (_DWORD*)(*(_QWORD*)(v66 + 24) + 16i64 * (v63 - 1));
					}
					v70 = a1[2];
					*(_QWORD*)v70 = *(_QWORD*)v69;
					*(_DWORD*)(v70 + 8) = v69[2];
					a1[2] += 16i64;
					v71 = (unsigned __int64*)sub_14018F0E0(&v181, L"bIsMini")[1];
					if (v71)
					{
						v72 = -1i64;
						do
							++v72;
						while (*((_BYTE*)v71 + v72));
						if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
							sub_14005E2C0((__int64)a1);
						v73 = a1[2];
						v74 = sub_140062650((__int64)a1, v71, v72);
						*(_DWORD*)(v73 + 8) = 4;
						*(_QWORD*)v73 = v74;
						a1[2] += 16i64;
						v67 = v63 - 1;
					}
					else
					{
						*(_DWORD*)(a1[2] + 8i64) = 0;
						a1[2] += 16i64;
					}
					if (v182)
						sub_14018B900(v182, 0);
					v75 = (_DWORD*)a1[2];
					v76 = v186;
					v75[2] = 1;
					*v75 = v76 != 0;
					a1[2] += 16i64;
					v77 = (__int64*)sub_1400580E0((__int64)a1, -3);
					sub_14005EA50((__int64)a1, v77, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
					v78 = a1[4];
					v79 = a1[2] - 48i64;
					a1[2] = v79;
					v80 = *(_QWORD*)(v78 + 160);
					if (v67 >= *(_DWORD*)(v80 + 56))
					{
						if ((double)v63 == 0.0)
						{
							v81 = *(_DWORD**)(v80 + 32);
						}
						else
						{
							v174 = (double)v63;
							v81 = (_DWORD*)(*(_QWORD*)(v80 + 32)
								+ 40
								* ((unsigned int)(LODWORD(v174) + HIDWORD(v174))
									% (((1i64 << *(_BYTE*)(v80 + 11)) - 1) | 1)));
						}
						while (v81[6] != 3 || (double)v63 != *((double*)v81 + 2))
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
						v81 = (_DWORD*)(*(_QWORD*)(v80 + 24) + 16i64 * (v63 - 1));
					}
					*(_QWORD*)v79 = *(_QWORD*)v81;
					*(_DWORD*)(v79 + 8) = v81[2];
					a1[2] += 16i64;
					v82 = (unsigned __int64*)sub_14018F0E0(&v181, L"nRequiredAmount")[1];
					if (v82)
					{
						v83 = -1i64;
						do
							++v83;
						while (*((_BYTE*)v82 + v83));
						if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
							sub_14005E2C0((__int64)a1);
						v84 = a1[2];
						v85 = sub_140062650((__int64)a1, v82, v83);
						*(_DWORD*)(v84 + 8) = 4;
						*(_QWORD*)v84 = v85;
						a1[2] += 16i64;
						v67 = v63 - 1;
					}
					else
					{
						*(_DWORD*)(a1[2] + 8i64) = 0;
						a1[2] += 16i64;
					}
					if (v182)
						sub_14018B900(v182, 0);
					v86 = a1[2];
					v87 = _mm_cvtsi32_si128(v187);
					*(_DWORD*)(v86 + 8) = 3;
					*(_QWORD*)v86 = *(_OWORD*)&_mm_cvtepi32_pd(v87);
					a1[2] += 16i64;
					v88 = (__int64*)sub_1400580E0((__int64)a1, -3);
					sub_14005EA50((__int64)a1, v88, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
					v89 = a1[4];
					v90 = a1[2] - 48i64;
					a1[2] = v90;
					v91 = *(_QWORD*)(v89 + 160);
					if (v76)
					{
						if (v67 >= *(_DWORD*)(v91 + 56))
						{
							if ((double)v63 == 0.0)
							{
								v92 = *(_DWORD**)(v91 + 32);
							}
							else
							{
								v175 = (double)v63;
								v92 = (_DWORD*)(*(_QWORD*)(v91 + 32)
									+ 40
									* ((unsigned int)(LODWORD(v175) + HIDWORD(v175))
										% (((1i64 << *(_BYTE*)(v91 + 11)) - 1) | 1)));
							}
							while (v92[6] != 3 || (double)v63 != *((double*)v92 + 2))
							{
								v92 = (_DWORD*)*((_QWORD*)v92 + 4);
								if (!v92)
								{
									v92 = dword_140A12138;
									break;
								}
							}
						}
						else
						{
							v92 = (_DWORD*)(*(_QWORD*)(v91 + 24) + 16i64 * (v63 - 1));
						}
						*(_QWORD*)v90 = *(_QWORD*)v92;
						*(_DWORD*)(v90 + 8) = v92[2];
						a1[2] += 16i64;
						v93 = (unsigned __int64*)sub_14018F0E0(&v181, L"eUnitProperty")[1];
						if (v93)
						{
							v94 = -1i64;
							do
								++v94;
							while (*((_BYTE*)v93 + v94));
							if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
								sub_14005E2C0((__int64)a1);
							v95 = a1[2];
							v96 = sub_140062650((__int64)a1, v93, v94);
							*(_DWORD*)(v95 + 8) = 4;
							*(_QWORD*)v95 = v96;
							a1[2] += 16i64;
							v67 = v63 - 1;
						}
						else
						{
							*(_DWORD*)(a1[2] + 8i64) = 0;
							a1[2] += 16i64;
						}
						if (v182)
							sub_14018B900(v182, 0);
						v97 = a1[2];
						v98 = _mm_cvtsi32_si128(v188);
						*(_DWORD*)(v97 + 8) = 3;
						*(_QWORD*)v97 = *(_OWORD*)&_mm_cvtepi32_pd(v98);
						a1[2] += 16i64;
						v99 = (__int64*)sub_1400580E0((__int64)a1, -3);
						sub_14005EA50((__int64)a1, v99, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
						v100 = a1[4];
						v101 = a1[2] - 48i64;
						a1[2] = v101;
						v102 = *(_QWORD*)(v100 + 160);
						if (v67 >= *(_DWORD*)(v102 + 56))
						{
							if ((double)v63 == 0.0)
							{
								v103 = *(_DWORD**)(v102 + 32);
							}
							else
							{
								v176 = (double)v63;
								v103 = (_DWORD*)(*(_QWORD*)(v102 + 32)
									+ 40
									* ((unsigned int)(LODWORD(v176) + HIDWORD(v176))
										% (((1i64 << *(_BYTE*)(v102 + 11)) - 1) | 1)));
							}
							while (v103[6] != 3 || (double)v63 != *((double*)v103 + 2))
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
							v103 = (_DWORD*)(*(_QWORD*)(v102 + 24) + 16i64 * (v63 - 1));
						}
						*(_QWORD*)v101 = *(_QWORD*)v103;
						*(_DWORD*)(v101 + 8) = v103[2];
						a1[2] += 16i64;
						v104 = (unsigned __int64*)sub_14018F0E0(&v181, L"fModifier")[1];
						if (v104)
						{
							v105 = -1i64;
							do
								++v105;
							while (*((_BYTE*)v104 + v105));
							if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
								sub_14005E2C0((__int64)a1);
							v106 = a1[2];
							v107 = sub_140062650((__int64)a1, v104, v105);
							*(_DWORD*)(v106 + 8) = 4;
							*(_QWORD*)v106 = v107;
							v67 = v63 - 1;
						}
						else
						{
							*(_DWORD*)(a1[2] + 8i64) = 0;
						}
						v108 = v182;
						a1[2] += 16i64;
						if (v108)
							sub_14018B900(v108, 0);
						v109 = v62;
					}
					else
					{
						if (v67 >= *(_DWORD*)(v91 + 56))
						{
							if ((double)v63 == 0.0)
							{
								v110 = *(_DWORD**)(v91 + 32);
							}
							else
							{
								v177 = (double)v63;
								v110 = (_DWORD*)(*(_QWORD*)(v91 + 32)
									+ 40
									* ((unsigned int)(LODWORD(v177) + HIDWORD(v177))
										% (((1i64 << *(_BYTE*)(v91 + 11)) - 1) | 1)));
							}
							while (v110[6] != 3 || (double)v63 != *((double*)v110 + 2))
							{
								v110 = (_DWORD*)*((_QWORD*)v110 + 4);
								if (!v110)
								{
									v110 = dword_140A12138;
									break;
								}
							}
						}
						else
						{
							v110 = (_DWORD*)(*(_QWORD*)(v91 + 24) + 16i64 * (v63 - 1));
						}
						*(_QWORD*)v90 = *(_QWORD*)v110;
						*(_DWORD*)(v90 + 8) = v110[2];
						a1[2] += 16i64;
						v111 = (unsigned __int64*)sub_14018F0E0(&v181, L"nSpellId")[1];
						if (v111)
						{
							v112 = -1i64;
							do
								++v112;
							while (*((_BYTE*)v111 + v112));
							if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
								sub_14005E2C0((__int64)a1);
							v113 = a1[2];
							v114 = sub_140062650((__int64)a1, v111, v112);
							*(_DWORD*)(v113 + 8) = 4;
							*(_QWORD*)v113 = v114;
							a1[2] += 16i64;
							v67 = v63 - 1;
						}
						else
						{
							*(_DWORD*)(a1[2] + 8i64) = 0;
							a1[2] += 16i64;
						}
						if (v182)
							sub_14018B900(v182, 0);
						v115 = a1[2];
						v116 = _mm_cvtsi32_si128(v188);
						*(_DWORD*)(v115 + 8) = 3;
						*(_QWORD*)v115 = *(_OWORD*)&_mm_cvtepi32_pd(v116);
						a1[2] += 16i64;
						v117 = (__int64*)sub_1400580E0((__int64)a1, -3);
						sub_14005EA50((__int64)a1, v117, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
						v118 = a1[4];
						v119 = a1[2] - 48i64;
						a1[2] = v119;
						v120 = *(_QWORD*)(v118 + 160);
						if (v67 >= *(_DWORD*)(v120 + 56))
						{
							if ((double)v63 == 0.0)
							{
								v121 = *(_DWORD**)(v120 + 32);
							}
							else
							{
								v178 = (double)v63;
								v121 = (_DWORD*)(*(_QWORD*)(v120 + 32)
									+ 40
									* ((unsigned int)(LODWORD(v178) + HIDWORD(v178))
										% (((1i64 << *(_BYTE*)(v120 + 11)) - 1) | 1)));
							}
							while (v121[6] != 3 || (double)v63 != *((double*)v121 + 2))
							{
								v121 = (_DWORD*)*((_QWORD*)v121 + 4);
								if (!v121)
								{
									v121 = dword_140A12138;
									break;
								}
							}
						}
						else
						{
							v121 = (_DWORD*)(*(_QWORD*)(v120 + 24) + 16i64 * (v63 - 1));
						}
						*(_QWORD*)v119 = *(_QWORD*)v121;
						*(_DWORD*)(v119 + 8) = v121[2];
						a1[2] += 16i64;
						v122 = (unsigned __int64*)sub_14018F0E0(&v181, L"nTier")[1];
						if (v122)
						{
							v123 = -1i64;
							do
								++v123;
							while (*((_BYTE*)v122 + v123));
							if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
								sub_14005E2C0((__int64)a1);
							v124 = a1[2];
							v125 = sub_140062650((__int64)a1, v122, v123);
							*(_DWORD*)(v124 + 8) = 4;
							*(_QWORD*)v124 = v125;
							v67 = v63 - 1;
						}
						else
						{
							*(_DWORD*)(a1[2] + 8i64) = 0;
						}
						v126 = v182;
						a1[2] += 16i64;
						if (v126)
							sub_14018B900(v126, 0);
						v109 = (double)v189;
					}
					v127 = a1[2];
					*(double*)v127 = v109;
					*(_DWORD*)(v127 + 8) = 3;
					a1[2] += 16i64;
					v128 = (__int64*)sub_1400580E0((__int64)a1, -3);
					sub_14005EA50((__int64)a1, v128, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
					a1[2] -= 48i64;
					v129 = *(_QWORD*)(a1[4] + 160i64);
					v130 = a1[2];
					if (v215 >= *(_DWORD*)(v129 + 56))
					{
						if ((double)v212 == 0.0)
						{
							v131 = *(_DWORD**)(v129 + 32);
						}
						else
						{
							v179 = (double)v212;
							v131 = (_DWORD*)(*(_QWORD*)(v129 + 32)
								+ 40
								* ((unsigned int)(LODWORD(v179) + HIDWORD(v179))
									% (((1i64 << *(_BYTE*)(v129 + 11)) - 1) | 1)));
						}
						while (v131[6] != 3 || (double)v212 != *((double*)v131 + 2))
						{
							v131 = (_DWORD*)*((_QWORD*)v131 + 4);
							if (!v131)
							{
								v131 = dword_140A12138;
								break;
							}
						}
					}
					else
					{
						v131 = (_DWORD*)(*(_QWORD*)(v129 + 24) + 16i64 * (v212 - 1));
					}
					*(_QWORD*)v130 = *(_QWORD*)v131;
					*(_DWORD*)(v130 + 8) = v131[2];
					a1[2] += 16i64;
					v132 = a1[2];
					*(_DWORD*)(v132 + 8) = 3;
					v133 = v213++;
					*(double*)v132 = (double)v133;
					v134 = a1[4];
					v135 = a1[2] + 16i64;
					a1[2] = v135;
					v136 = *(_QWORD*)(v134 + 160);
					if (v67 >= *(_DWORD*)(v136 + 56))
					{
						if ((double)v63 == 0.0)
						{
							v137 = *(_DWORD**)(v136 + 32);
						}
						else
						{
							v180 = (double)v63;
							v137 = (_DWORD*)(*(_QWORD*)(v136 + 32)
								+ 40
								* ((unsigned int)(LODWORD(v180) + HIDWORD(v180))
									% (((1i64 << *(_BYTE*)(v136 + 11)) - 1) | 1)));
						}
						while (v137[6] != 3 || (double)v63 != *((double*)v137 + 2))
						{
							v137 = (_DWORD*)*((_QWORD*)v137 + 4);
							if (!v137)
							{
								v137 = dword_140A12138;
								break;
							}
						}
					}
					else
					{
						v137 = (_DWORD*)(*(_QWORD*)(v136 + 24) + 16i64 * (v63 - 1));
					}
					*(_QWORD*)v135 = *(_QWORD*)v137;
					*(_DWORD*)(v135 + 8) = v137[2];
					v138 = a1[2] + 16i64;
					a1[2] = v138;
					sub_14005EA50((__int64)a1, (__int64*)(v138 - 48), (int*)(v138 - 32), (unsigned int*)(v138 - 16));
					a1[2] -= 48i64;
					sub_1400579E0((__int64)a1, v139, v63);
					v57 = v194 + 20;
					v194 = v57;
				} while ((int*)v57 != v29);
				v56 = v212;
			}
			sub_1400FB2A0((__int64)&v199, (__int64)L"tAttributeMilestones", v56);
			v140 = a1[4];
			v195 = off_140B569F0;
			v141 = *(_QWORD*)(v140 + 112);
			v197 = a1;
			v198 = 1;
			if (*(_QWORD*)(v140 + 120) >= v141)
				sub_14005E2C0((__int64)a1);
			v142 = a1[2];
			v143 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v142 + 8) = 5;
			*(_QWORD*)v142 = v143;
			a1[2] += 16i64;
			v144 = sub_1400578C0((__int64)a1);
			v146 = v184;
			v147 = v185;
			v196 = v144;
			v148 = 3i64;
			v149 = 6 * v184;
			do
			{
				v150 = *(float*)&sub_14075A190(v145, v147)[v149 + 1];
				if (v150 != 0.0)
				{
					v151 = sub_14075A190(v145, v147)[v149];
					if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
						sub_14005E2C0((__int64)a1);
					v152 = a1[2];
					v153 = sub_14005C1B0((__int64)a1, 0, 0);
					*(_DWORD*)(v152 + 8) = 5;
					*(_QWORD*)v152 = v153;
					a1[2] += 16i64;
					LODWORD(v152) = sub_1400578C0((__int64)a1);
					v154 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v152);
					v155 = a1[2];
					*(_QWORD*)v155 = *v154;
					*(_DWORD*)(v155 + 8) = *((_DWORD*)v154 + 2);
					a1[2] += 16i64;
					sub_1400F06F0((__int64)a1, v156, L"eUnitProperty", v151);
					a1[2] -= 16i64;
					v157 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v152);
					*(_QWORD*)v158 = *v157;
					*(_DWORD*)(v158 + 8) = *((_DWORD*)v157 + 2);
					a1[2] += 16i64;
					sub_1400F07B0((__int64)a1, v159, L"fBonus", v150);
					a1[2] -= 16i64;
					sub_1400FB1D0((__int64)&v195);
					sub_1400579E0((__int64)a1, v160, v152);
					v147 = v185;
				}
				v149 += 2i64;
				--v148;
			} while (v148);
			v161 = v196;
			sub_1400FB2A0((__int64)&v199, (__int64)L"tSecondaryStats", v196);
			v162 = v200;
			sub_1400FB2A0((__int64)&v203, v211[v146], v200);
			if (v197)
				sub_1400579E0((__int64)v197, v163, v161);
			sub_1400579E0((__int64)a1, v163, v56);
			sub_1400579E0((__int64)a1, v164, v162);
			if (v191)
				sub_14018B900((__int64)v191, 0);
			v18 = (__int64)v185;
			v184 = v146 + 1;
			v26 = v146 + 1;
			if ((unsigned int)++v214 >= 6)
			{
				sub_1400FB2A0((__int64)&v207, (__int64)L"tMilestones", v204);
				v8 = v208;
				v165 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v208);
				v166 = a1[2];
				*(_QWORD*)v166 = *v165;
				*(_DWORD*)(v166 + 8) = *((_DWORD*)v165 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v167, L"eResult", 1);
				a1[2] -= 16i64;
				v168 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
				v169 = v204;
				*(_QWORD*)v170 = *v168;
				*(_DWORD*)(v170 + 8) = *((_DWORD*)v168 + 2);
				a1[2] += 16i64;
				sub_1400579E0((__int64)a1, v171, v169);
				goto LABEL_204;
			}
		}
		v32 = qword_140C63840(off_140A69410, v27, qword_140C63858);
		goto LABEL_22;
	}
	v10 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
	v11 = a1[2];
	*(_QWORD*)v11 = *v10;
	*(_DWORD*)(v11 + 8) = *((_DWORD*)v10 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v12, L"eResult", 3);
	a1[2] -= 16i64;
	v13 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
	*(_QWORD*)v15 = *v13;
	*(_DWORD*)(v15 + 8) = *((_DWORD*)v13 + 2);
	a1[2] += 16i64;
LABEL_204:
	sub_1400579E0((__int64)a1, v14, v8);
	return 1i64;
}
// 140758DDB: variable 'v12' is possibly undefined
// 140758E01: variable 'v15' is possibly undefined
// 140758E71: variable 'v21' is possibly undefined
// 140758E97: variable 'v23' is possibly undefined
// 140759CB8: variable 'v139' is possibly undefined
// 140759D63: variable 'v145' is possibly undefined
// 140759DFC: variable 'v156' is possibly undefined
// 140759E2F: variable 'v158' is possibly undefined
// 140759E3F: variable 'v159' is possibly undefined
// 140759E5A: variable 'v160' is possibly undefined
// 140759EA7: variable 'v163' is possibly undefined
// 140759EBD: variable 'v164' is possibly undefined
// 140759F51: variable 'v167' is possibly undefined
// 140759F78: variable 'v170' is possibly undefined
// 140759F8A: variable 'v171' is possibly undefined
// 140759FC6: variable 'v14' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A69410: using guessed type wchar_t *off_140A69410[2];
// 140A69448: using guessed type wchar_t *off_140A69448[2];
// 140B4C8A0: using guessed type wchar_t aBismini[8];
// 140B4C8B0: using guessed type wchar_t aStamina[8];
// 140B4C8C0: using guessed type wchar_t aWisdom[7];
// 140B4C8D0: using guessed type wchar_t aMagic_0[6];
// 140B4C8E0: using guessed type wchar_t aTechnology[11];
// 140B4C8F8: using guessed type wchar_t aDexterity[10];
// 140B4C910: using guessed type wchar_t aStrength[9];
// 140B4C928: using guessed type wchar_t aEresult_4[8];
// 140B4C938: using guessed type wchar_t aEresult_3[8];
// 140B4C9B8: using guessed type wchar_t aEresult_5[8];
// 140B4C9C8: using guessed type wchar_t aTmilestones[12];
// 140B4C9E0: using guessed type wchar_t aTsecondarystat[16];
// 140B4CA00: using guessed type wchar_t aFbonus_0[7];
// 140B4CA10: using guessed type wchar_t aEunitproperty_0[14];
// 140B4CA30: using guessed type wchar_t aTattributemile[21];
// 140B4CA60: using guessed type wchar_t aNtier_6[6];
// 140B4CA70: using guessed type wchar_t aNspellid[9];
// 140B4CA88: using guessed type wchar_t aFmodifier[10];
// 140B4CAA0: using guessed type wchar_t aEunitproperty[14];
// 140B4CAC0: using guessed type wchar_t aNrequiredamoun[16];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64650: using guessed type __int64 qword_140C64650;
// 140C64830: using guessed type __int64 qword_140C64830;
// 140C650B4: using guessed type int dword_140C650B4;
// 140C65434: using guessed type int dword_140C65434;
// 140C65898: using guessed type __int64 qword_140C65898;

