//----- (0000000140750CE0) ----------------------------------------------------
__int64 __fastcall sub_140750CE0(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // r15
	int* v4; // r14
	_DWORD* v5; // rax
	unsigned int v6; // ebx
	unsigned int v7; // eax
	__int64* v8; // rax
	__int64 v9; // rcx
	char* v10; // rax
	unsigned __int64 v11; // r8
	unsigned __int64 v12; // rax
	_DWORD* v13; // rcx
	int v14; // eax
	__int64 v15; // rdx
	__int64 v16; // rbx
	__int64 v17; // rax
	__int64 v18; // r9
	_DWORD* v19; // rax
	__int64 v20; // rbx
	__int64 v21; // rax
	__int64 v22; // r9
	_DWORD* v23; // rax
	int v24; // ebx
	__int64 v25; // rax
	_DWORD* v26; // rax
	__int64 v27; // rax
	_DWORD* v28; // rdx
	int* v29; // rax
	float v30; // xmm7_4
	__int128* v31; // rax
	__int64 v32; // rbx
	int v33; // r12d
	__int64 v34; // rax
	__int64 v35; // r9
	_DWORD* v36; // rax
	__int64 v37; // rbx
	__int64 v38; // rax
	__int64 v39; // r9
	_DWORD* v40; // rax
	float v41; // xmm1_4
	__int64 v42; // rbx
	int v43; // esi
	__int64 v44; // rax
	__int64 v45; // r9
	_DWORD* v46; // rax
	__int64 v47; // rbx
	__int64 v48; // rax
	__int64 v49; // r9
	_DWORD* v50; // rax
	float v51; // xmm1_4
	__int64 v52; // rbx
	int v53; // r14d
	__int64 v54; // rax
	__int64 v55; // r9
	_DWORD* v56; // rax
	__int64 v57; // rbx
	__int64 v58; // rax
	__int64 v59; // r9
	_DWORD* v60; // rax
	float v61; // xmm1_4
	__int64 v62; // rbx
	int v63; // r13d
	__int64 v64; // rax
	__int64 v65; // r9
	_DWORD* v66; // rax
	__int64 v67; // rbx
	__int64 v68; // rax
	__int64 v69; // r9
	_DWORD* v70; // rax
	float v71; // xmm1_4
	int v72; // ebx
	int v73; // xmm6_4
	__int64 v74; // rbx
	__int64 v75; // rax
	__int64 v76; // r9
	_DWORD* v77; // rax
	char* v78; // rax
	__int64 v79; // r9
	__int64 v80; // rdx
	int* v81; // rcx
	signed __int64 v82; // r8
	__int16 v83; // ax
	__int64 v84; // rbx
	__int64 v85; // rax
	__int64 v86; // r9
	_DWORD* v87; // rax
	double v88; // xmm0_8
	float v89; // xmm1_4
	__int64 v90; // rbx
	__int64 v91; // rax
	__int64 v92; // r9
	_DWORD* v93; // rax
	float v94; // xmm1_4
	__int64 v95; // rbx
	__int64 v96; // rax
	__int64 v97; // r9
	_DWORD* v98; // rax
	__int64 v99; // rbx
	__int64 v100; // rax
	__int64 v101; // r9
	_DWORD* v102; // rax
	int v103; // xmm0_4
	__int64 v104; // rbx
	__int64 v105; // rax
	__int64 v106; // r9
	_DWORD* v107; // rax
	int v108; // xmm0_4
	__int64 v109; // rbx
	__int64 v110; // rax
	__int64 v111; // r9
	_DWORD* v112; // rax
	__int64 v113; // rbx
	__int64 v114; // rax
	__int64 v115; // r9
	_DWORD* v116; // rax
	float v117; // xmm1_4
	__int64 v118; // rbx
	__int64 v119; // rax
	__int64 v120; // r9
	_DWORD* v121; // rax
	float v122; // xmm1_4
	__int64 v123; // rbx
	__int64 v124; // rax
	__int64 v125; // r9
	_DWORD* v126; // rax
	__int64 v127; // rbx
	__int64 v128; // rax
	__int64 v129; // r9
	_DWORD* v130; // rax
	__int64 v131; // rbx
	__int64 v132; // rax
	__int64 v133; // r9
	_DWORD* v134; // rax
	__int64 v135; // rbx
	__int64 v136; // rax
	__int64 v137; // r9
	_DWORD* v138; // rax
	__int64 v139; // rbx
	__int64 v140; // rax
	__int64 v141; // r9
	_DWORD* v142; // rax
	__int64 v143; // rbx
	__int64 v144; // rax
	__int64 v145; // r9
	_DWORD* v146; // rax
	__m128d v147; // xmm0
	__int64 v148; // rbx
	__int64 v149; // rax
	__int64 v150; // r9
	_DWORD* v151; // rax
	int v152; // ecx
	_DWORD* v153; // rcx
	int v154; // eax
	BOOL v155; // edx
	int v156; // esi
	_DWORD* v157; // rax
	int v158; // ebx
	_DWORD* v159; // rax
	int v160; // ecx
	BOOL v161; // ecx
	__int64 v162; // rdx
	__int64 v163; // rax
	__int64 v165; // [rsp+38h] [rbp-D0h] BYREF
	int* v166; // [rsp+40h] [rbp-C8h]
	int* v167; // [rsp+48h] [rbp-C0h]
	int* v168; // [rsp+50h] [rbp-B8h]
	__int64 v169; // [rsp+58h] [rbp-B0h] BYREF
	int* v170; // [rsp+60h] [rbp-A8h]
	int* v171; // [rsp+68h] [rbp-A0h]
	int* v172; // [rsp+70h] [rbp-98h]
	__int64 v173; // [rsp+78h] [rbp-90h]
	int v174[19]; // [rsp+88h] [rbp-80h] BYREF
	int v175; // [rsp+D4h] [rbp-34h]
	int v176; // [rsp+D8h] [rbp-30h]
	float v177; // [rsp+DCh] [rbp-2Ch]
	float v178; // [rsp+E0h] [rbp-28h]
	__int64 v179; // [rsp+118h] [rbp+10h] BYREF
	int* v180; // [rsp+120h] [rbp+18h]
	_DWORD* v181; // [rsp+128h] [rbp+20h]
	_DWORD* v182; // [rsp+130h] [rbp+28h]
	float v183; // [rsp+138h] [rbp+30h]
	float v184; // [rsp+13Ch] [rbp+34h]
	int v185; // [rsp+140h] [rbp+38h]
	int v186; // [rsp+144h] [rbp+3Ch]
	float v187; // [rsp+148h] [rbp+40h]
	float v188; // [rsp+14Ch] [rbp+44h]
	int v189; // [rsp+150h] [rbp+48h]
	int v190; // [rsp+154h] [rbp+4Ch]
	int v191; // [rsp+158h] [rbp+50h]
	int v192; // [rsp+15Ch] [rbp+54h]
	int v193; // [rsp+160h] [rbp+58h]
	int v194; // [rsp+164h] [rbp+5Ch]
	int v195; // [rsp+168h] [rbp+60h]
	BOOL v196; // [rsp+16Ch] [rbp+64h]
	int v197; // [rsp+180h] [rbp+78h]
	char v198[80]; // [rsp+198h] [rbp+90h] BYREF

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	v3 = 0i64;
	if (v2)
		v173 = sub_1403D90D0(qword_140C65898, *v2);
	else
		v173 = 0i64;
	v4 = sub_14018B280(16i64, 0);
	v170 = v4;
	v171 = v4;
	v172 = v4 + 4;
	if (v4)
		*(_WORD*)v4 = 0;
	v5 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64) != 3)
	{
		v10 = (char*)sub_140056BB0(a1, 2u, 0i64);
		sub_14018F2D0(&v165, v10);
		v9 = (__int64)v4;
		v4 = v166;
		v171 = v167;
		v172 = v168;
		v170 = v166;
		goto LABEL_19;
	}
	v6 = sub_140056D60(a1, 2u);
	v7 = sub_140056D60(a1, 3u);
	if (!v6)
	{
		if (v7)
		{
			v8 = sub_14018EFA0(&v165, (__int64)L"(%d)", v7);
			goto LABEL_12;
		}
	LABEL_17:
		v8 = sub_14018EFA0(&v165, (__int64)L"%d (%d)", v6, v7);
		goto LABEL_12;
	}
	if (v7)
		goto LABEL_17;
	v8 = sub_14018EFA0(&v165, (__int64)L"%d", v6);
LABEL_12:
	if (v8 != &v169)
	{
		sub_14001C480((__int64)&v169, (int*)v8[1], (int*)v8[2]);
		v4 = v170;
	}
	v9 = (__int64)v166;
LABEL_19:
	if (v9)
		sub_14018B900(v9, 0);
	sub_1407E4830(v174, 0i64, 0x110ui64);
	v11 = a1[2];
	v12 = a1[3] + 32i64;
	v13 = dword_140A12138;
	v176 = 9;
	v175 = 1;
	if (v12 < v11)
		v13 = (_DWORD*)v12;
	v14 = v13[2];
	if (v14 == 5 || v14 == 7)
		v15 = *(_QWORD*)(*(_QWORD*)v13 + 16i64);
	else
		v15 = *(_QWORD*)(a1[4] + 8i64 * (int)v13[2] + 224);
	if (v15)
	{
		*(_QWORD*)v11 = v15;
		*(_DWORD*)(v11 + 8) = 5;
		a1[2] += 16i64;
	}
	v16 = a1[2];
	v17 = sub_140062650((__int64)a1, (unsigned __int64*)"nColor", 6ui64);
	v18 = a1[2];
	v165 = v17;
	LODWORD(v166) = 4;
	sub_14005E8E0((__int64)a1, v16 - 16, (int*)&v165, v18);
	a1[2] += 16i64;
	v19 = (_DWORD*)(a1[2] - 16i64);
	if (v19 == dword_140A12138 || v19[2])
		v174[17] = sub_140056D60(a1, 0xFFFFFFFF) - 0x1000000;
	a1[2] -= 16i64;
	v20 = a1[2];
	v21 = sub_140062650((__int64)a1, (unsigned __int64*)"arFrames", 8ui64);
	v22 = a1[2];
	v165 = v21;
	LODWORD(v166) = 4;
	sub_14005E8E0((__int64)a1, v20 - 16, (int*)&v165, v22);
	a1[2] += 16i64;
	v23 = (_DWORD*)(a1[2] - 16i64);
	if (v23 == dword_140A12138 || v23[2])
	{
		v24 = 1;
		while (1)
		{
			v25 = a1[2];
			*(_DWORD*)(v25 + 8) = 3;
			*(double*)v25 = (double)v24;
			a1[2] += 16i64;
			sub_14005E8E0((__int64)a1, a1[2] - 32i64, (int*)(a1[2] - 16i64), a1[2] - 16i64);
			v26 = (_DWORD*)(a1[2] - 16i64);
			if (v26 != dword_140A12138 && !v26[2])
				break;
			v27 = sub_140750220((__int64)v198, a1);
			v28 = v181;
			if (v181 == v182)
			{
				sub_140753D70(&v179, (__int64)v181, (__int128*)v27);
				a1[2] -= 16i64;
				++v24;
			}
			else
			{
				if (v181)
				{
					*v181 = *(_DWORD*)v27;
					v28[1] = *(_DWORD*)(v27 + 4);
					v28[2] = *(_DWORD*)(v27 + 8);
					v28[3] = *(_DWORD*)(v27 + 12);
					v28[4] = *(_DWORD*)(v27 + 16);
					v28[5] = *(_DWORD*)(v27 + 20);
					v28[6] = *(_DWORD*)(v27 + 24);
					v28[7] = *(_DWORD*)(v27 + 28);
					v28[8] = *(_DWORD*)(v27 + 32);
					v28[9] = *(_DWORD*)(v27 + 36);
					v28[10] = *(_DWORD*)(v27 + 40);
					v28[11] = *(_DWORD*)(v27 + 44);
					v28[12] = *(_DWORD*)(v27 + 48);
					v28[13] = *(_DWORD*)(v27 + 52);
					v28[14] = *(_DWORD*)(v27 + 56);
					v28[15] = *(_DWORD*)(v27 + 60);
					v28[16] = *(_DWORD*)(v27 + 64);
					v28[17] = *(_DWORD*)(v27 + 68);
					v28 = v181;
				}
				a1[2] -= 16i64;
				++v24;
				v181 = v28 + 18;
			}
		}
		a1[2] -= 16i64;
	}
	v29 = v181;
	a1[2] -= 16i64;
	v30 = 1.0;
	if (v180 == v29)
	{
		v31 = (__int128*)sub_140750220((__int64)v198, a1);
		if (v181 == v182)
		{
			sub_140753D70(&v179, (__int64)v181, v31);
		}
		else
		{
			sub_1403D8660(v181, v31);
			v181 += 18;
		}
		v32 = a1[2];
		v33 = 0;
		v34 = sub_140062650((__int64)a1, (unsigned __int64*)"nDuration", 9ui64);
		v35 = a1[2];
		v165 = v34;
		LODWORD(v166) = 4;
		sub_14005E8E0((__int64)a1, v32 - 16, (int*)&v165, v35);
		a1[2] += 16i64;
		v36 = (_DWORD*)(a1[2] - 16i64);
		if (v36 == dword_140A12138 || v36[2])
			v33 = sub_140056D60(a1, 0xFFFFFFFF);
		a1[2] -= 16i64;
		v37 = a1[2];
		v38 = sub_140062650((__int64)a1, (unsigned __int64*)"fDuration", 9ui64);
		v39 = a1[2];
		v165 = v38;
		LODWORD(v166) = 4;
		sub_14005E8E0((__int64)a1, v37 - 16, (int*)&v165, v39);
		a1[2] += 16i64;
		v40 = (_DWORD*)(a1[2] - 16i64);
		if (v40 == dword_140A12138 || v40[2])
		{
			v41 = sub_140056C40(a1, 0xFFFFFFFF);
			v33 = (int)(float)(v41 * 1000.0);
		}
		a1[2] -= 16i64;
		v42 = a1[2];
		v43 = 0;
		v44 = sub_140062650((__int64)a1, (unsigned __int64*)"nFadeInDuration", 0xFui64);
		v45 = a1[2];
		v165 = v44;
		LODWORD(v166) = 4;
		sub_14005E8E0((__int64)a1, v42 - 16, (int*)&v165, v45);
		a1[2] += 16i64;
		v46 = (_DWORD*)(a1[2] - 16i64);
		if (v46 == dword_140A12138 || v46[2])
			v43 = sub_140056D60(a1, 0xFFFFFFFF);
		a1[2] -= 16i64;
		v47 = a1[2];
		v48 = sub_140062650((__int64)a1, (unsigned __int64*)"fFadeInDuration", 0xFui64);
		v49 = a1[2];
		v165 = v48;
		LODWORD(v166) = 4;
		sub_14005E8E0((__int64)a1, v47 - 16, (int*)&v165, v49);
		a1[2] += 16i64;
		v50 = (_DWORD*)(a1[2] - 16i64);
		if (v50 == dword_140A12138 || v50[2])
		{
			v51 = sub_140056C40(a1, 0xFFFFFFFF);
			v43 = (int)(float)(v51 * 1000.0);
		}
		a1[2] -= 16i64;
		v52 = a1[2];
		v53 = 0;
		v54 = sub_140062650((__int64)a1, (unsigned __int64*)"nFadeOutDuration", 0x10ui64);
		v55 = a1[2];
		v165 = v54;
		LODWORD(v166) = 4;
		sub_14005E8E0((__int64)a1, v52 - 16, (int*)&v165, v55);
		a1[2] += 16i64;
		v56 = (_DWORD*)(a1[2] - 16i64);
		if (v56 == dword_140A12138 || v56[2])
			v53 = sub_140056D60(a1, 0xFFFFFFFF);
		a1[2] -= 16i64;
		v57 = a1[2];
		v58 = sub_140062650((__int64)a1, (unsigned __int64*)"fFadeOutDuration", 0x10ui64);
		v59 = a1[2];
		v165 = v58;
		LODWORD(v166) = 4;
		sub_14005E8E0((__int64)a1, v57 - 16, (int*)&v165, v59);
		a1[2] += 16i64;
		v60 = (_DWORD*)(a1[2] - 16i64);
		if (v60 == dword_140A12138 || v60[2])
		{
			v61 = sub_140056C40(a1, 0xFFFFFFFF);
			v53 = (int)(float)(v61 * 1000.0);
		}
		a1[2] -= 16i64;
		v62 = a1[2];
		v63 = v33 - v53;
		v64 = sub_140062650((__int64)a1, (unsigned __int64*)"nEndHoldDuration", 0x10ui64);
		v65 = a1[2];
		v165 = v64;
		LODWORD(v166) = 4;
		sub_14005E8E0((__int64)a1, v62 - 16, (int*)&v165, v65);
		a1[2] += 16i64;
		v66 = (_DWORD*)(a1[2] - 16i64);
		if (v66 == dword_140A12138 || v66[2])
			LODWORD(v3) = sub_140056D60(a1, 0xFFFFFFFF);
		a1[2] -= 16i64;
		v67 = a1[2];
		v68 = sub_140062650((__int64)a1, (unsigned __int64*)"fEndHoldDuration", 0x10ui64);
		v69 = a1[2];
		v165 = v68;
		LODWORD(v166) = 4;
		sub_14005E8E0((__int64)a1, v67 - 16, (int*)&v165, v69);
		a1[2] += 16i64;
		v70 = (_DWORD*)(a1[2] - 16i64);
		if (v70 == dword_140A12138 || v70[2])
		{
			v71 = sub_140056C40(a1, 0xFFFFFFFF);
			LODWORD(v3) = (int)(float)(v71 * 1000.0);
		}
		a1[2] -= 16i64;
		v72 = v33 - v3;
		if (!v43 && !v53 && !(_DWORD)v3)
		{
			*v180 = v33;
		LABEL_100:
			v4 = v170;
			v3 = 0i64;
			goto LABEL_101;
		}
		v73 = 1065353216;
		if (v43 > v63)
			v43 = v33 - v53;
		if (v180[16] == 1)
			v73 = v180[10];
		if (v72 > v43)
		{
			if (v72 > v53)
			{
				if (v43 > 0)
				{
					v180[16] = 1;
					*v180 = 0;
					v180[10] = 0;
					sub_140750940(&v179, v43, *(float*)&v73);
				}
				if (v53 > 0)
					sub_140750940(&v179, v63, *(float*)&v73);
				if ((int)v3 > 0)
					sub_140750A60(&v179, v72);
				goto LABEL_99;
			}
			if (v43 > 0)
			{
				v180[16] = 1;
				*v180 = 0;
				v180[10] = 0;
				sub_140750940(&v179, v43, *(float*)&v73);
			}
			if ((int)v3 > 0)
				sub_140750A60(&v179, v72);
		}
		else
		{
			if (v43 > 0)
			{
				v180[16] = 1;
				*v180 = 0;
				v180[10] = 0;
			}
			if ((int)v3 > 0)
				sub_140750A60(&v179, v72);
			if (v43 > 0)
				sub_140750940(&v179, v43, *(float*)&v73);
		}
		if (v53 > 0)
			sub_140750940(&v179, v63, *(float*)&v73);
	LABEL_99:
		sub_140750BB0(&v179, v53, v33);
		goto LABEL_100;
	}
LABEL_101:
	v74 = a1[2];
	v75 = sub_140062650((__int64)a1, (unsigned __int64*)"strFontFace", 0xBui64);
	v76 = a1[2];
	v165 = v75;
	LODWORD(v166) = 4;
	sub_14005E8E0((__int64)a1, v74 - 16, (int*)&v165, v76);
	a1[2] += 16i64;
	v77 = (_DWORD*)(a1[2] - 16i64);
	if (v77 == dword_140A12138 || v77[2])
	{
		v78 = (char*)sub_140056BB0(a1, 0xFFFFFFFF, 0i64);
		sub_14018F2D0(&v165, v78);
		v79 = (__int64)v166;
		v80 = 32i64;
		v81 = v174;
		v82 = (char*)v166 - (char*)v174;
		while (v80 != -2147483614)
		{
			v83 = *(_WORD*)((char*)v81 + v82);
			if (!v83)
				break;
			*(_WORD*)v81 = v83;
			v81 = (int*)((char*)v81 + 2);
			if (!--v80)
			{
				v81 = (int*)((char*)v81 - 2);
				break;
			}
		}
		*(_WORD*)v81 = 0;
		if (v79)
			sub_14018B900(v79, 0);
	}
	a1[2] -= 16i64;
	v84 = a1[2];
	v85 = sub_140062650((__int64)a1, (unsigned __int64*)"fSpinAroundRadius", 0x11ui64);
	v86 = a1[2];
	v165 = v85;
	LODWORD(v166) = 4;
	sub_14005E8E0((__int64)a1, v84 - 16, (int*)&v165, v86);
	a1[2] += 16i64;
	v87 = (_DWORD*)(a1[2] - 16i64);
	if (v87 == dword_140A12138 || v87[2])
	{
		v88 = sub_140056C40(a1, 0xFFFFFFFF);
		v185 = 1148846080;
		v89 = v88;
		v184 = v89;
	}
	a1[2] -= 16i64;
	v90 = a1[2];
	v91 = sub_140062650((__int64)a1, (unsigned __int64*)"fVibrate", 8ui64);
	v92 = a1[2];
	v165 = v91;
	LODWORD(v166) = 4;
	sub_14005E8E0((__int64)a1, v90 - 16, (int*)&v165, v92);
	a1[2] += 16i64;
	v93 = (_DWORD*)(a1[2] - 16i64);
	if (v93 == dword_140A12138 || v93[2])
	{
		v94 = sub_140056C40(a1, 0xFFFFFFFF);
		v183 = v94;
	}
	a1[2] -= 16i64;
	v95 = a1[2];
	v96 = sub_140062650((__int64)a1, (unsigned __int64*)"eCollisionMode", 0xEui64);
	v97 = a1[2];
	v165 = v96;
	LODWORD(v166) = 4;
	sub_14005E8E0((__int64)a1, v95 - 16, (int*)&v165, v97);
	a1[2] += 16i64;
	v98 = (_DWORD*)(a1[2] - 16i64);
	if (v98 == dword_140A12138 || v98[2])
		v186 = sub_140056D60(a1, 0xFFFFFFFF);
	a1[2] -= 16i64;
	v99 = a1[2];
	v100 = sub_140062650((__int64)a1, (unsigned __int64*)"fExpandCollisionBoxWidth", 0x18ui64);
	v101 = a1[2];
	v165 = v100;
	LODWORD(v166) = 4;
	sub_14005E8E0((__int64)a1, v99 - 16, (int*)&v165, v101);
	a1[2] += 16i64;
	v102 = (_DWORD*)(a1[2] - 16i64);
	if (v102 == dword_140A12138 || v102[2])
	{
		*(float*)&v103 = sub_140056C40(a1, 0xFFFFFFFF);
		v187 = *(float*)&v103;
	}
	else
	{
		*(float*)&v103 = v187;
	}
	if (*(float*)&v103 == 0.0)
		v187 = 1.0;
	a1[2] -= 16i64;
	v104 = a1[2];
	v105 = sub_140062650((__int64)a1, (unsigned __int64*)"fExpandCollisionBoxHeight", 0x19ui64);
	v106 = a1[2];
	v165 = v105;
	LODWORD(v166) = 4;
	sub_14005E8E0((__int64)a1, v104 - 16, (int*)&v165, v106);
	a1[2] += 16i64;
	v107 = (_DWORD*)(a1[2] - 16i64);
	if (v107 == dword_140A12138 || v107[2])
	{
		*(float*)&v108 = sub_140056C40(a1, 0xFFFFFFFF);
		v188 = *(float*)&v108;
	}
	else
	{
		*(float*)&v108 = v188;
	}
	if (*(float*)&v108 == 0.0)
		v188 = 1.0;
	a1[2] -= 16i64;
	v109 = a1[2];
	v110 = sub_140062650((__int64)a1, (unsigned __int64*)"eLocation", 9ui64);
	v111 = a1[2];
	v165 = v110;
	LODWORD(v166) = 4;
	sub_14005E8E0((__int64)a1, v109 - 16, (int*)&v165, v111);
	a1[2] += 16i64;
	v112 = (_DWORD*)(a1[2] - 16i64);
	if (v112 == dword_140A12138 || v112[2])
		v176 = sub_140056D60(a1, 0xFFFFFFFF);
	a1[2] -= 16i64;
	v113 = a1[2];
	v114 = sub_140062650((__int64)a1, (unsigned __int64*)"fOffsetDirection", 0x10ui64);
	v115 = a1[2];
	v165 = v114;
	LODWORD(v166) = 4;
	sub_14005E8E0((__int64)a1, v113 - 16, (int*)&v165, v115);
	a1[2] += 16i64;
	v116 = (_DWORD*)(a1[2] - 16i64);
	if (v116 == dword_140A12138 || v116[2])
	{
		v117 = sub_140056C40(a1, 0xFFFFFFFF);
		v177 = v117;
	}
	a1[2] -= 16i64;
	v118 = a1[2];
	v119 = sub_140062650((__int64)a1, (unsigned __int64*)"fOffset", 7ui64);
	v120 = a1[2];
	v165 = v119;
	LODWORD(v166) = 4;
	sub_14005E8E0((__int64)a1, v118 - 16, (int*)&v165, v120);
	a1[2] += 16i64;
	v121 = (_DWORD*)(a1[2] - 16i64);
	if (v121 == dword_140A12138 || v121[2])
	{
		v122 = sub_140056C40(a1, 0xFFFFFFFF);
		v178 = v122;
	}
	a1[2] -= 16i64;
	v123 = a1[2];
	v124 = sub_140062650((__int64)a1, (unsigned __int64*)"iUseDigitSpriteSet", 0x12ui64);
	v125 = a1[2];
	v165 = v124;
	LODWORD(v166) = 4;
	sub_14005E8E0((__int64)a1, v123 - 16, (int*)&v165, v125);
	a1[2] += 16i64;
	v126 = (_DWORD*)(a1[2] - 16i64);
	if (v126 == dword_140A12138 || v126[2])
	{
		v189 = 1;
		v190 = sub_140056D60(a1, 0xFFFFFFFF);
	}
	a1[2] -= 16i64;
	v127 = a1[2];
	v128 = sub_140062650((__int64)a1, (unsigned __int64*)"nDigitSpriteSpacing", 0x13ui64);
	v129 = a1[2];
	v165 = v128;
	LODWORD(v166) = 4;
	sub_14005E8E0((__int64)a1, v127 - 16, (int*)&v165, v129);
	a1[2] += 16i64;
	v130 = (_DWORD*)(a1[2] - 16i64);
	if (v130 == dword_140A12138 || v130[2])
		v191 = sub_140056D60(a1, 0xFFFFFFFF);
	a1[2] -= 16i64;
	v131 = a1[2];
	v132 = sub_140062650((__int64)a1, (unsigned __int64*)"iUseBGSprite", 0xCui64);
	v133 = a1[2];
	v165 = v132;
	LODWORD(v166) = 4;
	sub_14005E8E0((__int64)a1, v131 - 16, (int*)&v165, v133);
	a1[2] += 16i64;
	v134 = (_DWORD*)(a1[2] - 16i64);
	if (v134 == dword_140A12138 || v134[2])
	{
		v192 = 1;
		v193 = sub_140056D60(a1, 0xFFFFFFFF);
	}
	a1[2] -= 16i64;
	v135 = a1[2];
	v136 = sub_140062650((__int64)a1, (unsigned __int64*)"nBGSpriteMargin", 0xFui64);
	v137 = a1[2];
	v165 = v136;
	LODWORD(v166) = 4;
	sub_14005E8E0((__int64)a1, v135 - 16, (int*)&v165, v137);
	a1[2] += 16i64;
	v138 = (_DWORD*)(a1[2] - 16i64);
	if (v138 == dword_140A12138 || v138[2])
		v195 = sub_140056D60(a1, 0xFFFFFFFF);
	a1[2] -= 16i64;
	v139 = a1[2];
	v140 = sub_140062650((__int64)a1, (unsigned __int64*)"nBGSpriteColor", 0xEui64);
	v141 = a1[2];
	v165 = v140;
	LODWORD(v166) = 4;
	sub_14005E8E0((__int64)a1, v139 - 16, (int*)&v165, v141);
	a1[2] += 16i64;
	v142 = (_DWORD*)(a1[2] - 16i64);
	if (v142 == dword_140A12138 || v142[2])
		v194 = sub_140056D60(a1, 0xFFFFFFFF);
	else
		v194 = 0xFFFFFF;
	a1[2] -= 16i64;
	v143 = a1[2];
	v144 = sub_140062650((__int64)a1, (unsigned __int64*)"fBGSpriteAlpha", 0xEui64);
	v145 = a1[2];
	v165 = v144;
	LODWORD(v166) = 4;
	sub_14005E8E0((__int64)a1, v143 - 16, (int*)&v165, v145);
	a1[2] += 16i64;
	v146 = (_DWORD*)(a1[2] - 16i64);
	if (v146 == dword_140A12138 || v146[2])
		v30 = sub_140056C40(a1, 0xFFFFFFFF);
	v147 = 0i64;
	v147.m128d_f64[0] = (float)((float)(v30 * 255.0) + 0.5);
	if ((double)(int)v147.m128d_f64[0] != v147.m128d_f64[0])
		v147.m128d_f64[0] = (double)((int)v147.m128d_f64[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v147, v147)) & 1));
	a1[2] -= 16i64;
	v148 = a1[2];
	v194 += (int)(v147.m128d_f64[0] * 16777216.0);
	v149 = sub_140062650((__int64)a1, (unsigned __int64*)"bUseScreenPos", 0xDui64);
	v150 = a1[2];
	v165 = v149;
	LODWORD(v166) = 4;
	sub_14005E8E0((__int64)a1, v148 - 16, (int*)&v165, v150);
	a1[2] += 16i64;
	v151 = (_DWORD*)(a1[2] - 16i64);
	if (v151 == dword_140A12138 || v151[2])
	{
		v152 = v151[2];
		if (v152)
		{
			if (v152 != 1 || *v151)
			{
				v197 = 1;
				v175 = 4;
			}
		}
	}
	a1[2] = v151;
	sub_140058890((__int64)a1, -1);
	v153 = (_DWORD*)(a1[2] - 16i64);
	if (v153 == dword_140A12138 || v153[2])
	{
		v154 = v153[2];
		v155 = v154 && (v154 != 1 || *v153);
		v196 = v155;
	}
	a1[2] = v153;
	v156 = 0;
	sub_140058890((__int64)a1, -1);
	v157 = (_DWORD*)(a1[2] - 16i64);
	if (v157 == dword_140A12138 || v157[2])
		v156 = sub_140056D60(a1, 0xFFFFFFFF);
	a1[2] -= 16i64;
	v158 = 0;
	sub_140058890((__int64)a1, -1);
	v159 = (_DWORD*)(a1[2] - 16i64);
	if (v159 == dword_140A12138 || v159[2])
	{
		v160 = v159[2];
		v161 = v160 && (v160 != 1 || *v159);
		LOBYTE(v158) = v161;
	}
	v162 = v173;
	a1[2] = v159;
	if (v162)
	{
		if (qword_140C65898)
			v3 = sub_1403C6090(qword_140C65898, v162, (__int64)&v169, v174, v156, v158);
		v163 = a1[2];
		*(_QWORD*)v163 = v3;
		*(_DWORD*)(v163 + 8) = 2;
	}
	else
	{
		v159[2] = 0;
	}
	a1[2] += 16i64;
	if (v180)
		sub_14018B900((__int64)v180, 0);
	if (v4)
		sub_14018B900((__int64)v4, 0);
	return 1i64;
}
// 1407516A7: conditional instruction was optimized away because rdx.8!=0
// 140751D0B: conditional instruction was optimized away because rcx.8<100000000u
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B4B308: using guessed type wchar_t aD_75[3];
// 140B4B508: using guessed type wchar_t aDD_0[8];
// 140B4B518: using guessed type wchar_t aD_76[5];
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C65898: using guessed type __int64 qword_140C65898;

