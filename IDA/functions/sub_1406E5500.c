//----- (00000001406E5500) ----------------------------------------------------
void sub_1406E5500(__int64 a1, __int64** a2, _QWORD* a3, ...)
{
	__int64** v3; // rsi
	__int64 v5; // rax
	__int64 v6; // rax
	unsigned __int64 v7; // r12
	unsigned __int64 v8; // r14
	__int64 v9; // r15
	__int64** v10; // rdi
	int* v11; // rax
	int* v12; // rbx
	__int64 v13; // rcx
	int v14; // eax
	int v15; // r11d
	__int64 v16; // rdx
	int v17; // r10d
	int v18; // r9d
	int v19; // eax
	int v20; // r8d
	__int64* v21; // rcx
	signed int v22; // esi
	signed int v23; // eax
	signed int v24; // eax
	int* v25; // rbx
	__int64* v26; // rdx
	__int64 v27; // rcx
	int v28; // edx
	__int64 v29; // rcx
	int v30; // eax
	int v31; // r11d
	__int64 v32; // rdx
	int v33; // r10d
	signed int v34; // ebx
	signed int v35; // eax
	signed int v36; // eax
	unsigned __int64 v37; // r14
	int* v38; // rsi
	int* v39; // rax
	__int64 v40; // rcx
	unsigned __int64 v41; // r14
	unsigned __int64 v42; // rsi
	int* v43; // rbx
	int* v44; // rax
	int* v45; // rdx
	__int64 v46; // rcx
	__int64 v47; // rsi
	int* v48; // rdx
	int* v49; // rbx
	bool v50; // al
	int* v51; // rcx
	int* i; // rax
	int* v53; // rax
	int* v54; // rcx
	__int64* v55; // rbx
	unsigned __int64 v56; // rdx
	__int64** v57; // r8
	__int64 v58; // rdx
	__int64** v59; // r15
	unsigned __int64 v60; // rdx
	int* v61; // r12
	__int64* v62; // rsi
	__int64 v63; // rsi
	unsigned __int64 v64; // rdi
	_QWORD* v65; // rbx
	__int64* v66; // rax
	__int64 v67; // rcx
	unsigned __int64 v68; // rax
	int* v69; // r8
	__int64** v70; // r13
	__int64 v71; // rcx
	int v72; // eax
	int v73; // edx
	int* v74; // rcx
	int* v75; // rax
	_QWORD* v76; // rbx
	__int64 v77; // rdi
	unsigned __int64 v78; // r13
	int* v79; // rax
	int* v80; // rbx
	unsigned __int64 v81; // rax
	unsigned __int64 v82; // r12
	unsigned __int64 v83; // rdi
	_QWORD* v84; // rbx
	int* v85; // rax
	int* v86; // rsi
	__int64** v87; // rbx
	__int64* v88; // r14
	__int64 v89; // rcx
	int v90; // eax
	int v91; // r11d
	__int64 v92; // rdx
	int v93; // r10d
	signed int v94; // r15d
	signed int v95; // eax
	signed int v96; // eax
	_QWORD* v97; // rsi
	unsigned __int64 v98; // r12
	unsigned __int64 v99; // rdx
	__int64 v100; // r8
	__int64 v101; // rbx
	__int64 v102; // rbx
	unsigned __int64 v103; // r14
	__int64 v104; // r15
	__int64 v105; // rcx
	int v106; // eax
	int v107; // r11d
	__int64 v108; // rdx
	int v109; // r10d
	signed int v110; // esi
	signed int v111; // eax
	signed int v112; // eax
	unsigned __int64 v113; // rax
	char v114; // cl
	unsigned __int8 v115; // cl
	unsigned __int64 v116; // rbx
	__int64 v117; // rax
	int* v118; // rdi
	int* v119; // r8
	_QWORD* v120; // rcx
	unsigned __int64 v121; // rdx
	unsigned __int64 v122; // rdi
	int* v123; // rbx
	int* v124; // rax
	__int64 v125; // rcx
	__int64 v126; // rsi
	unsigned __int64 v127; // rax
	char v128; // cl
	unsigned __int8 v129; // cl
	unsigned __int64 v130; // rbx
	__int64 v131; // rax
	int* v132; // rdi
	int* v133; // rcx
	_QWORD* v134; // r8
	unsigned __int64 v135; // rdx
	unsigned __int64 v136; // rdi
	int* v137; // rbx
	int* v138; // rax
	__int64 v139; // rcx
	int* v140; // rdx
	bool v141; // al
	int* v142; // rbx
	int* v143; // rcx
	int* j; // rax
	int* v145; // rax
	int* v146; // rcx
	int* v147; // r12
	unsigned __int64 v148; // rdi
	__int64* v149; // rbx
	__int64 v150; // rcx
	unsigned __int64 v151; // rdi
	int* v152; // rbx
	__int64 v153; // rcx
	__int64 v154; // rdx
	unsigned __int64 v155; // r8
	int* v156; // rax
	__int64 v157; // rdi
	__int64 v158; // rbx
	unsigned __int64 v159; // rsi
	__int64* v160; // r13
	__int64 v161; // rcx
	int v162; // edx
	unsigned __int64 v163; // rdi
	_QWORD* v164; // rbx
	__int64* v165; // rbx
	unsigned __int64 v166; // rdi
	int* v167; // rbx
	__int64 v168; // rcx
	unsigned __int64 v169; // rdi
	_QWORD* v170; // rbx
	__int64*** v171; // rbx
	__int64* v172; // rbx
	unsigned __int64 v173; // rdx
	__int64** v174; // r8
	__int64 v175; // rdx
	__int64 v176; // rbx
	__int64 v177; // rcx
	__int64(__fastcall * v178)(_DWORD*, _DWORD*); // [rsp+20h] [rbp-E0h] BYREF
	__int64** v179; // [rsp+28h] [rbp-D8h] BYREF
	unsigned __int64 v180; // [rsp+30h] [rbp-D0h]
	__int64 v181; // [rsp+38h] [rbp-C8h]
	int* v182; // [rsp+40h] [rbp-C0h]
	char v183[8]; // [rsp+48h] [rbp-B8h] BYREF
	int* v184; // [rsp+50h] [rbp-B0h]
	__int64 v185; // [rsp+58h] [rbp-A8h]
	int v186; // [rsp+68h] [rbp-98h] BYREF
	int v187; // [rsp+6Ch] [rbp-94h]
	int* v188; // [rsp+70h] [rbp-90h]
	unsigned __int64 v189; // [rsp+78h] [rbp-88h]
	unsigned __int64 v190; // [rsp+80h] [rbp-80h]
	__int64 v191; // [rsp+88h] [rbp-78h]
	unsigned __int64 v192; // [rsp+90h] [rbp-70h]
	__int64 v193; // [rsp+98h] [rbp-68h]
	int* v194; // [rsp+A0h] [rbp-60h] BYREF
	int v195; // [rsp+A8h] [rbp-58h]
	int v196; // [rsp+B0h] [rbp-50h]
	unsigned __int64 v197; // [rsp+B8h] [rbp-48h] BYREF
	int v198; // [rsp+C0h] [rbp-40h]
	__int64 v199; // [rsp+C8h] [rbp-38h] BYREF
	unsigned __int64 v200; // [rsp+D0h] [rbp-30h]
	int* v201; // [rsp+D8h] [rbp-28h]
	__int64(__fastcall * v202)(int*); // [rsp+E0h] [rbp-20h]
	_BOOL8(__fastcall * v203)(int*, _QWORD*); // [rsp+E8h] [rbp-18h]
	__int64 v204; // [rsp+F0h] [rbp-10h] BYREF
	unsigned __int64 v205; // [rsp+F8h] [rbp-8h]
	int* v206; // [rsp+100h] [rbp+0h]
	__int64(__fastcall * v207)(int*); // [rsp+108h] [rbp+8h]
	_BOOL8(__fastcall * v208)(_QWORD*, _QWORD*); // [rsp+110h] [rbp+10h]
	_QWORD* v209; // [rsp+118h] [rbp+18h] BYREF
	int v210; // [rsp+120h] [rbp+20h]
	_QWORD* v211; // [rsp+128h] [rbp+28h] BYREF
	int v212; // [rsp+130h] [rbp+30h]
	__int64* v215; // [rsp+1A0h] [rbp+A0h] BYREF
	__int64* v216; // [rsp+1A8h] [rbp+A8h] BYREF
	va_list va; // [rsp+1A8h] [rbp+A8h]
	unsigned int(__fastcall * v218)(_QWORD); // [rsp+1B0h] [rbp+B0h]
	va_list va1; // [rsp+1B8h] [rbp+B8h] BYREF

	va_start(va1, a3);
	va_start(va, a3);
	v216 = va_arg(va1, __int64*);
	v218 = va_arg(va1, unsigned int(__fastcall*)(_QWORD));
	v3 = a2;
	v216[1] = 0i64;
	v185 = 0i64;
	v184 = sub_14018B280(40i64, 0);
	*(_BYTE*)v184 = 0;
	*((_QWORD*)v184 + 1) = 0i64;
	*((_QWORD*)v184 + 2) = v184;
	*((_QWORD*)v184 + 3) = v184;
	v180 = 0i64;
	v178 = sub_1403D33B0;
	v179 = 0i64;
	sub_140312F60((__int64*)&v179);
	v193 = 0i64;
	v204 = 0i64;
	v181 = 0i64;
	v192 = 13i64;
	v205 = 13i64;
	v5 = 104i64;
	if (!is_mul_ok(0xDui64, 8ui64))
		v5 = -1i64;
	v188 = sub_14018B280(v5, 0);
	v206 = v188;
	sub_1407E4830(v188, 0i64, 0x68ui64);
	v190 = 13i64;
	v207 = sub_1402DD520;
	v200 = 13i64;
	v208 = sub_1402DD540;
	v191 = 0i64;
	v199 = 0i64;
	v6 = 104i64;
	if (!is_mul_ok(0xDui64, 8ui64))
		v6 = -1i64;
	v182 = sub_14018B280(v6, 0);
	v201 = v182;
	sub_1407E4830(v182, 0i64, 0x68ui64);
	v7 = a3[1];
	v8 = 0i64;
	v202 = sub_1402DD520;
	v203 = (_BOOL8(__fastcall*)(int*, _QWORD*))sub_1402DD540;
	v9 = 0i64;
	if (v7)
	{
		while (1)
		{
			v10 = *(__int64***)(*a3 + 8 * v9);
			v11 = sub_14018B280(24i64, 0);
			v12 = v11;
			if (v11)
				*((_QWORD*)v11 + 1) = 0i64;
			else
				v12 = 0i64;
			*(_QWORD*)v12 = v10;
			v13 = **v10;
			v14 = *(_DWORD*)(v13 + 4);
			v15 = *(_DWORD*)(v13 + 8);
			v16 = **v3;
			LODWORD(v13) = *(_DWORD*)(v16 + 4);
			v17 = *(_DWORD*)(v16 + 8);
			v18 = -(v15 + v14);
			v19 = v14 - v13;
			v20 = v17 + v13;
			v21 = (__int64*)*((_QWORD*)v12 + 1);
			v22 = abs32(v19);
			v23 = abs32(v18 + v20);
			if (v22 < v23)
				v22 = v23;
			v24 = abs32(v15 - v17);
			if (v22 < v24)
				v22 = v24;
			v25 = v12 + 2;
			if (!v21)
				break;
			if (v21 != (__int64*)&v178)
			{
				sub_1403088B0((__int64)v21, v25);
				v194 = v25;
				v195 = v22;
				v26 = (__int64*)&v194;
				goto LABEL_19;
			}
			LODWORD(v179[2 * *((_QWORD*)v25 + 1) + 1]) = v22;
			if (!(unsigned int)sub_14030A510((__int64)&v178, (__int64)v25))
				sub_14030A5F0((__int64)&v178, (__int64)v25);
		LABEL_20:
			v27 = **v10;
			v28 = *(_DWORD*)(v27 + 8);
			LODWORD(v215) = *(_DWORD*)(v27 + 4);
			HIDWORD(v215) = v28;
			v29 = **v10;
			v30 = *(_DWORD*)(v29 + 4);
			v31 = *(_DWORD*)(v29 + 8);
			v32 = **a2;
			LODWORD(v29) = *(_DWORD*)(v32 + 4);
			v33 = *(_DWORD*)(v32 + 8);
			v34 = abs32(v30 - v29);
			v35 = abs32(v33 + v29 - (v31 + v30));
			if (v34 < v35)
				v34 = v35;
			v36 = abs32(v31 - v33);
			if (v34 < v36)
				v34 = v36;
			if (v193 == v192)
			{
				sub_1400290D0((__int64)&v204);
				v188 = v206;
				v192 = v205;
				v193 = v204;
			}
			v37 = v207((int*)&v215);
			v38 = &v188[2 * (v37 % v192)];
			v39 = sub_14018B280(32i64, 0);
			if (v39)
			{
				v40 = *(_QWORD*)v38;
				*(_QWORD*)v39 = v37;
				*((_QWORD*)v39 + 1) = v40;
				*((_QWORD*)v39 + 2) = v215;
				v39[6] = v34;
			}
			v41 = v190;
			*(_QWORD*)v38 = v39;
			v204 = ++v193;
			if (v191 == v41)
			{
				sub_1400290D0((__int64)&v199);
				v41 = v200;
				v182 = v201;
				v190 = v200;
				v191 = v199;
			}
			v42 = v202((int*)&v215);
			v43 = &v182[2 * (v42 % v41)];
			v44 = sub_14018B280(32i64, 0);
			v8 = 0i64;
			v45 = v44;
			if (v44)
			{
				v46 = *(_QWORD*)v43;
				*(_QWORD*)v44 = v42;
				*((_QWORD*)v44 + 1) = v46;
				*((_QWORD*)v44 + 2) = v215;
				*((_QWORD*)v44 + 3) = v215;
			}
			else
			{
				v45 = 0i64;
			}
			v47 = v191;
			*(_QWORD*)v43 = v45;
			v48 = (int*)*((_QWORD*)v184 + 1);
			v49 = v184;
			v191 = v47 + 1;
			v199 = v47 + 1;
			v50 = 1;
			while (v48)
			{
				v49 = v48;
				v50 = (unsigned __int64)v10 < *((_QWORD*)v48 + 4);
				if ((unsigned __int64)v10 >= *((_QWORD*)v48 + 4))
					v48 = (int*)*((_QWORD*)v48 + 3);
				else
					v48 = (int*)*((_QWORD*)v48 + 2);
			}
			v51 = v49;
			if (v50)
			{
				if (v49 == *((int**)v184 + 2))
					goto LABEL_50;
				if (*(_BYTE*)v49 || *(int**)(*((_QWORD*)v49 + 1) + 8i64) != v49)
				{
					v51 = (int*)*((_QWORD*)v49 + 2);
					if (v51)
					{
						for (i = (int*)*((_QWORD*)v51 + 3); i; i = (int*)*((_QWORD*)i + 3))
							v51 = i;
					}
					else
					{
						v51 = (int*)*((_QWORD*)v49 + 1);
						if (v49 == *((int**)v51 + 2))
						{
							do
							{
								v53 = v51;
								v51 = (int*)*((_QWORD*)v51 + 1);
							} while (v53 == *((int**)v51 + 2));
						}
					}
				}
				else
				{
					v51 = (int*)*((_QWORD*)v49 + 3);
				}
			}
			if (*((_QWORD*)v51 + 4) < (unsigned __int64)v10)
			{
			LABEL_50:
				if (v49 == v184 || (unsigned __int64)v10 < *((_QWORD*)v49 + 4))
				{
					v54 = sub_14018B280(40i64, 0);
					if (v54 != (int*)-32i64)
						*((_QWORD*)v54 + 4) = v10;
					*((_QWORD*)v49 + 2) = v54;
					if (v49 == v184)
					{
						*((_QWORD*)v184 + 1) = v54;
						*((_QWORD*)v184 + 3) = v54;
					}
					else if (v49 == *((int**)v184 + 2))
					{
						*((_QWORD*)v184 + 2) = v54;
					}
				}
				else
				{
					v54 = sub_14018B280(40i64, 0);
					if (v54 != (int*)-32i64)
						*((_QWORD*)v54 + 4) = v10;
					*((_QWORD*)v49 + 3) = v54;
					if (v49 == *((int**)v184 + 3))
						*((_QWORD*)v184 + 3) = v54;
				}
				*((_QWORD*)v54 + 1) = v49;
				*((_QWORD*)v54 + 2) = 0i64;
				*((_QWORD*)v54 + 3) = 0i64;
				sub_1400081C0((__int64)v54, (_QWORD*)v184 + 1);
				++v185;
			}
			v3 = a2;
			if (++v9 >= v7)
				goto LABEL_64;
		}
		v197 = (unsigned __int64)v25;
		v198 = v22;
		v26 = (__int64*)&v197;
	LABEL_19:
		*(_QWORD*)v25 = &v178;
		*((_QWORD*)v25 + 1) = sub_14030A7C0((__int64*)&v179, (__int64)v26);
		sub_14030A510((__int64)&v178, (__int64)v25);
		goto LABEL_20;
	}
LABEL_64:
	if (v180)
	{
		while (1)
		{
			v55 = *v179;
			**v179 = 0i64;
			v56 = v180 - 1;
			if (v180 == 1)
			{
				sub_14030A710((__int64*)&v179, 0i64);
			}
			else
			{
				v57 = v179;
				*v179 = v179[2 * v56];
				v57[1] = v57[2 * v56 + 1];
				sub_14030A710((__int64*)&v179, v56);
				v58 = (__int64)*v179;
				*(_QWORD*)(v58 + 8) = 0i64;
				sub_14030A5F0((__int64)&v178, v58);
			}
			v59 = (__int64**)*(v55 - 1);
			if (*v55)
				sub_1403088B0(*v55, v55);
			sub_14018B900((__int64)(v55 - 1), 0);
			if (v59 == v3)
				break;
			v60 = 0i64;
			v61 = 0i64;
			v189 = 0i64;
			do
			{
				v62 = (__int64*)(*v59)[v8 + 1];
				if (v62)
				{
					v63 = *v62;
					v64 = (*(__int64(__fastcall**)(__int64))(a1 + 2440))(v63);
					v65 = *(_QWORD**)(*(_QWORD*)(a1 + 2432) + 8 * (v64 % *(_QWORD*)(a1 + 2424)));
					if (!v65)
						goto LABEL_77;
					while (v64 != *v65 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 2448))(v63, v65 + 2))
					{
						v65 = (_QWORD*)v65[1];
						if (!v65)
							goto LABEL_77;
					}
					v76 = v65 + 3;
					if (v76 && ((v77 = *v76, !v218) || v218(*v76)))
					{
						v78 = v189;
						v79 = sub_14018DB00((__int64)v61, v189 + 1, 8i64);
						*(_QWORD*)&v79[2 * v78] = v77;
						v80 = v79;
						if (v61 != v79)
						{
							sub_1407DB590(v79, v61, 8 * v78);
							if (v61)
								(*(void(__fastcall**)(int*))(*((_QWORD*)v61 - 2) + 8i64))(v61 - 4);
							v61 = v80;
						}
						v60 = v78 + 1;
						v189 = v78 + 1;
					}
					else
					{
					LABEL_77:
						v60 = v189;
					}
				}
				++v8;
			} while (v8 < 6);
			v66 = *v59;
			v8 = 0i64;
			v194 = v61;
			v67 = *v66;
			LODWORD(v215) = *(_DWORD*)(*v66 + 4);
			v196 = *(_DWORD*)(v67 + 8);
			v68 = 0i64;
			v197 = 0i64;
			if (v60)
			{
				v69 = v184;
				while (2)
				{
					v70 = *(__int64***)&v61[2 * v68];
					v71 = **v70;
					v72 = *(_DWORD*)(v71 + 4);
					v73 = *(_DWORD*)(v71 + 8);
					v74 = v69;
					v186 = v72;
					v187 = v73;
					v75 = (int*)*((_QWORD*)v69 + 1);
					if (v75)
					{
						do
						{
							if (*((_QWORD*)v75 + 4) < (unsigned __int64)v70)
							{
								v75 = (int*)*((_QWORD*)v75 + 3);
							}
							else
							{
								v74 = v75;
								v75 = (int*)*((_QWORD*)v75 + 2);
							}
						} while (v75);
						if (v74 != v69 && (unsigned __int64)v70 >= *((_QWORD*)v74 + 4))
							goto LABEL_216;
					}
					v81 = v202(&v186);
					v82 = v190;
					v83 = v81;
					v84 = *(_QWORD**)&v182[2 * (v81 % v190)];
					if (v84)
					{
						while (v83 != *v84 || !v203(&v186, v84 + 2))
						{
							v84 = (_QWORD*)v84[1];
							if (!v84)
								goto LABEL_102;
						}
						if (v84 != (_QWORD*)-24i64)
							goto LABEL_214;
					}
				LABEL_102:
					v85 = sub_14018B280(24i64, 0);
					v86 = v85;
					if (v85)
						*((_QWORD*)v85 + 1) = 0i64;
					else
						v86 = 0i64;
					v87 = a2;
					*(_QWORD*)v86 = *(_QWORD*)&v194[2 * v197];
					v88 = (__int64*)*((_QWORD*)v86 + 1);
					v89 = **v70;
					v90 = *(_DWORD*)(v89 + 4);
					v91 = *(_DWORD*)(v89 + 8);
					v92 = **a2;
					LODWORD(v89) = *(_DWORD*)(v92 + 4);
					v93 = *(_DWORD*)(v92 + 8);
					v94 = abs32(v90 - v89);
					v95 = abs32(v93 + v89 - (v91 + v90));
					if (v94 < v95)
						v94 = v95;
					v96 = abs32(v91 - v93);
					if (v94 < v96)
						v94 = v96;
					v97 = v86 + 2;
					if (v88)
					{
						if (v88 == (__int64*)&v178)
						{
							LODWORD(v179[2 * v97[1] + 1]) = v94;
							if (!(unsigned int)sub_14030A510((__int64)&v178, (__int64)v97))
								sub_14030A5F0((__int64)&v178, (__int64)v97);
						}
						else
						{
							v98 = v97[1];
							*v97 = 0i64;
							v99 = v88[2] - 1;
							if (v98 >= v99)
							{
								sub_14030A710(v88 + 1, v99);
							}
							else
							{
								v100 = v88[1];
								v101 = 2 * v98;
								*(_QWORD*)(v100 + 8 * v101) = *(_QWORD*)(v100 + 16 * v99);
								*(_QWORD*)(v100 + 8 * v101 + 8) = *(_QWORD*)(v100 + 16 * v99 + 8);
								sub_14030A710(v88 + 1, v99);
								v102 = *(_QWORD*)(v88[1] + 16 * v98);
								*(_QWORD*)(v102 + 8) = v98;
								if (!(unsigned int)sub_14030A510((__int64)v88, v102))
									sub_14030A5F0((__int64)v88, v102);
								v87 = a2;
							}
							v209 = v97;
							v210 = v94;
							*v97 = &v178;
							v97[1] = sub_14030A7C0((__int64*)&v179, (__int64)&v209);
							sub_14030A510((__int64)&v178, (__int64)v97);
							v82 = v190;
						}
					}
					else
					{
						*v97 = &v178;
						v211 = v97;
						v212 = v94;
						v97[1] = sub_14030A7C0((__int64*)&v179, (__int64)&v211);
						sub_14030A510((__int64)&v178, (__int64)v97);
					}
					v103 = v192;
					v104 = v193;
					v105 = **v70;
					v106 = *(_DWORD*)(v105 + 4);
					v107 = *(_DWORD*)(v105 + 8);
					v108 = **v87;
					LODWORD(v105) = *(_DWORD*)(v108 + 4);
					v109 = *(_DWORD*)(v108 + 8);
					v110 = abs32(v106 - v105);
					v111 = abs32(v109 + v105 - (v107 + v106));
					if (v110 < v111)
						v110 = v111;
					v112 = abs32(v107 - v109);
					if (v110 < v112)
						v110 = v112;
					if (v193 == v192)
					{
						if (v192 + 1 < 2)
							goto LABEL_140;
						v113 = v192;
						v114 = 1;
						if ((v192 & 0xFFFFFFFF00000000ui64) != 0)
						{
							v114 = 33;
							v113 = HIDWORD(v192);
						}
						if ((v113 & 0xFFFF0000) != 0)
						{
							v114 += 16;
							v113 >>= 16;
						}
						if ((v113 & 0xFF00) != 0)
						{
							v114 += 8;
							v113 >>= 8;
						}
						if ((v113 & 0xF0) != 0)
						{
							v114 += 4;
							v113 >>= 4;
						}
						if ((v113 & 0xC) != 0)
						{
							v114 += 2;
							v113 >>= 2;
						}
						if ((v113 & 2) != 0)
							++v114;
						if ((unsigned __int8)v114 < 4u)
							LABEL_140:
						v115 = 0;
						else
							v115 = v114 - 4;
						v116 = *(_QWORD*)&asc_140B5E820[8 * v115];
						if (v192 + 1 > v116)
							v116 = *(_QWORD*)&asc_140B5E820[8 * v115 + 8];
						v117 = 8 * v116;
						if (!is_mul_ok(v116, 8ui64))
							v117 = -1i64;
						v118 = sub_14018B280(v117, 0);
						sub_1407E4830(v118, 0i64, 8 * v116);
						if (v103)
						{
							v119 = v188;
							do
							{
								for (; *(_QWORD*)v119; *(_QWORD*)&v118[2 * v121] = v120)
								{
									v120 = *(_QWORD**)v119;
									*(_QWORD*)v119 = *(_QWORD*)(*(_QWORD*)v119 + 8i64);
									v121 = *v120 % v116;
									v120[1] = *(_QWORD*)&v118[2 * v121];
								}
								v119 += 2;
								--v103;
							} while (v103);
						}
						sub_14018B900((__int64)v188, 0);
						v103 = v116;
						v192 = v116;
						v188 = v118;
					}
					v122 = v207(&v186);
					v123 = &v188[2 * (v122 % v103)];
					v124 = sub_14018B280(32i64, 0);
					v8 = 0i64;
					if (v124)
					{
						v125 = *(_QWORD*)v123;
						*(_QWORD*)v124 = v122;
						*((_QWORD*)v124 + 1) = v125;
						v124[4] = v186;
						v124[5] = v187;
						v124[6] = v110;
					}
					else
					{
						v124 = 0i64;
					}
					v126 = v191;
					*(_QWORD*)v123 = v124;
					v193 = v104 + 1;
					if (v126 == v82)
					{
						if (v82 + 1 < 2)
							goto LABEL_170;
						v127 = v82;
						v128 = 1;
						if ((v82 & 0xFFFFFFFF00000000ui64) != 0)
						{
							v128 = 33;
							v127 = HIDWORD(v82);
						}
						if ((v127 & 0xFFFF0000) != 0)
						{
							v128 += 16;
							v127 >>= 16;
						}
						if ((v127 & 0xFF00) != 0)
						{
							v128 += 8;
							v127 >>= 8;
						}
						if ((v127 & 0xF0) != 0)
						{
							v128 += 4;
							v127 >>= 4;
						}
						if ((v127 & 0xC) != 0)
						{
							v128 += 2;
							v127 >>= 2;
						}
						if ((v127 & 2) != 0)
							++v128;
						if ((unsigned __int8)v128 < 4u)
							LABEL_170:
						v129 = 0;
						else
							v129 = v128 - 4;
						v130 = *(_QWORD*)&asc_140B5E820[8 * v129];
						if (v82 + 1 > v130)
							v130 = *(_QWORD*)&asc_140B5E820[8 * v129 + 8];
						v131 = 8 * v130;
						if (!is_mul_ok(v130, 8ui64))
							v131 = -1i64;
						v132 = sub_14018B280(v131, 0);
						sub_1407E4830(v132, 0i64, 8 * v130);
						if (v82)
						{
							v133 = v182;
							do
							{
								for (; *(_QWORD*)v133; *(_QWORD*)&v132[2 * v135] = v134)
								{
									v134 = *(_QWORD**)v133;
									*(_QWORD*)v133 = *(_QWORD*)(*(_QWORD*)v133 + 8i64);
									v135 = *v134 % v130;
									v134[1] = *(_QWORD*)&v132[2 * v135];
								}
								v133 += 2;
								--v82;
							} while (v82);
						}
						sub_14018B900((__int64)v182, 0);
						v82 = v130;
						v190 = v130;
						v182 = v132;
					}
					v136 = v202(&v186);
					v137 = &v182[2 * (v136 % v82)];
					v138 = sub_14018B280(32i64, 0);
					if (v138)
					{
						v139 = *(_QWORD*)v137;
						*(_QWORD*)v138 = v136;
						*((_QWORD*)v138 + 1) = v139;
						v138[4] = v186;
						v138[5] = v187;
						v138[6] = (int)v215;
						v138[7] = v196;
					}
					else
					{
						v138 = 0i64;
					}
					*(_QWORD*)v137 = v138;
					v69 = v184;
					v140 = (int*)*((_QWORD*)v184 + 1);
					v191 = v126 + 1;
					v141 = 1;
					v142 = v184;
					while (v140)
					{
						v142 = v140;
						v141 = (unsigned __int64)v70 < *((_QWORD*)v140 + 4);
						if ((unsigned __int64)v70 >= *((_QWORD*)v140 + 4))
							v140 = (int*)*((_QWORD*)v140 + 3);
						else
							v140 = (int*)*((_QWORD*)v140 + 2);
					}
					v143 = v142;
					if (v141)
					{
						if (v142 != *((int**)v184 + 2))
						{
							if (*(_BYTE*)v142 || *(int**)(*((_QWORD*)v142 + 1) + 8i64) != v142)
							{
								v143 = (int*)*((_QWORD*)v142 + 2);
								if (v143)
								{
									for (j = (int*)*((_QWORD*)v143 + 3); j; j = (int*)*((_QWORD*)j + 3))
										v143 = j;
								}
								else
								{
									v143 = (int*)*((_QWORD*)v142 + 1);
									if (v142 == *((int**)v143 + 2))
									{
										do
										{
											v145 = v143;
											v143 = (int*)*((_QWORD*)v143 + 1);
										} while (v145 == *((int**)v143 + 2));
									}
								}
							}
							else
							{
								v143 = (int*)*((_QWORD*)v142 + 3);
							}
							goto LABEL_200;
						}
					LABEL_201:
						if (v142 == v184 || (unsigned __int64)v70 < *((_QWORD*)v142 + 4))
						{
							v146 = sub_14018B280(40i64, 0);
							if (v146 != (int*)-32i64)
								*((_QWORD*)v146 + 4) = v70;
							*((_QWORD*)v142 + 2) = v146;
							if (v142 == v184)
							{
								*((_QWORD*)v184 + 1) = v146;
								*((_QWORD*)v184 + 3) = v146;
							}
							else if (v142 == *((int**)v184 + 2))
							{
								*((_QWORD*)v184 + 2) = v146;
							}
						}
						else
						{
							v146 = sub_14018B280(40i64, 0);
							if (v146 != (int*)-32i64)
								*((_QWORD*)v146 + 4) = v70;
							*((_QWORD*)v142 + 3) = v146;
							if (v142 == *((int**)v184 + 3))
								*((_QWORD*)v184 + 3) = v146;
						}
						*((_QWORD*)v146 + 1) = v142;
						*((_QWORD*)v146 + 2) = 0i64;
						*((_QWORD*)v146 + 3) = 0i64;
						sub_1400081C0((__int64)v146, (_QWORD*)v184 + 1);
						++v185;
					LABEL_214:
						v69 = v184;
					}
					else
					{
					LABEL_200:
						if (*((_QWORD*)v143 + 4) < (unsigned __int64)v70)
							goto LABEL_201;
					}
					v61 = v194;
				LABEL_216:
					v68 = v197 + 1;
					v197 = v68;
					if (v68 >= v189)
						break;
					continue;
				}
			}
			if (v61)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v61 - 2) + 8i64))(v61 - 4);
			v3 = a2;
			if (!v180)
				goto LABEL_220;
		}
		v159 = v190;
		v147 = v182;
		v160 = v216;
		while (1)
		{
		LABEL_243:
			v161 = **v59;
			v162 = *(_DWORD*)(v161 + 8);
			LODWORD(v216) = *(_DWORD*)(v161 + 4);
			HIDWORD(v216) = v162;
			v163 = v202((int*)va);
			v164 = *(_QWORD**)&v147[2 * (v163 % v159)];
			if (v164)
			{
				while (v163 != *v164 || !v203((int*)va, v164 + 2))
				{
					v164 = (_QWORD*)v164[1];
					if (!v164)
						goto LABEL_250;
				}
				v165 = v164 + 3;
				if (v165)
					v215 = (__int64*)*v165;
			}
		LABEL_250:
			if (v215 == v216)
				break;
			v166 = v160[1] + 1;
			v167 = sub_14018DB00(*v160, v166, 8i64);
			sub_1407DB590(v167 + 2, (int*)*v160, 8 * v160[1]);
			*(_QWORD*)v167 = v59;
			v168 = *v160;
			if ((int*)*v160 != v167)
			{
				if (v168)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v168 - 16) + 8i64))(v168 - 16);
				*v160 = (__int64)v167;
			}
			v160[1] = v166;
			v169 = (*(__int64(__fastcall**)(__int64**))(a1 + 2400))(&v215);
			v170 = *(_QWORD**)(*(_QWORD*)(a1 + 2392) + 8 * (v169 % *(_QWORD*)(a1 + 2384)));
			if (v170)
			{
				while (v169 != *v170 || !(*(unsigned int(__fastcall**)(__int64**, _QWORD*))(a1 + 2408))(&v215, v170 + 2))
				{
					v170 = (_QWORD*)v170[1];
					if (!v170)
						goto LABEL_243;
				}
				v171 = (__int64***)(v170 + 3);
				if (v171)
					v59 = *v171;
			}
		}
		while (v180)
		{
			v172 = *v179;
			**v179 = 0i64;
			v173 = v180 - 1;
			if (v180 == 1)
			{
				sub_14030A710((__int64*)&v179, 0i64);
			}
			else
			{
				v174 = v179;
				*v179 = v179[2 * v173];
				v174[1] = v174[2 * v173 + 1];
				sub_14030A710((__int64*)&v179, v173);
				v175 = (__int64)*v179;
				*(_QWORD*)(v175 + 8) = 0i64;
				sub_14030A5F0((__int64)&v178, v175);
			}
			v176 = (__int64)(v172 - 1);
			if (v176)
			{
				v177 = *(_QWORD*)(v176 + 8);
				if (v177)
					sub_1403088B0(v177, (_QWORD*)(v176 + 8));
				sub_14018B900(v176, 0);
			}
		}
	}
	else
	{
	LABEL_220:
		v147 = v182;
	}
	v148 = v190;
	if (v190)
	{
		v149 = (__int64*)v147;
		do
		{
			while (*v149)
			{
				v150 = *v149;
				*v149 = *(_QWORD*)(*v149 + 8);
				sub_14018B900(v150, 0);
			}
			++v149;
			--v148;
		} while (v148);
	}
	sub_14018B900((__int64)v147, 0);
	v151 = v192;
	if (v192)
	{
		v152 = v188;
		do
		{
			while (*(_QWORD*)v152)
			{
				v153 = *(_QWORD*)v152;
				*(_QWORD*)v152 = *(_QWORD*)(*(_QWORD*)v152 + 8i64);
				sub_14018B900(v153, 0);
			}
			v152 += 2;
			--v151;
		} while (v151);
	}
	sub_14018B900((__int64)v188, 0);
	v155 = 0i64;
	if (v180)
	{
		v154 = 0i64;
		do
		{
			++v155;
			v154 += 2i64;
			*v179[v154 - 2] = 0i64;
		} while (v155 < v180);
	}
	if (v179)
		((void(__fastcall*)(__int64**, __int64, unsigned __int64))(*(v179 - 2))[1])(v179 - 2, v154 * 8, v155);
	if (v185)
	{
		v156 = v184;
		v157 = *((_QWORD*)v184 + 1);
		if (v157)
		{
			do
			{
				sub_1400083B0((__int64)v183, *(_QWORD*)(v157 + 24));
				v158 = *(_QWORD*)(v157 + 16);
				sub_14018B900(v157, 0);
				v157 = v158;
			} while (v158);
			v156 = v184;
		}
		*((_QWORD*)v156 + 2) = v156;
		*((_QWORD*)v184 + 1) = 0i64;
		*((_QWORD*)v184 + 3) = v184;
		v185 = 0i64;
	}
	sub_14018B900((__int64)v184, 0);
}
// 1406E598F: conditional instruction was optimized away because rdx.8==0
// 1406E626F: conditional instruction was optimized away because rdx.8==0
// 1406E640D: variable 'v154' is possibly undefined
// 1406E5500: using guessed type char var_138[8];

