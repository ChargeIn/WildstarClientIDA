//----- (00000001403CE4A0) ----------------------------------------------------
__int64 __fastcall sub_1403CE4A0(unsigned __int8 a1, __int64 a2)
{
	__int64 v2; // r14
	unsigned int v4; // edi
	int v5; // eax
	__int64 v6; // rax
	int* v7; // rbx
	int* v8; // rax
	__int64 v9; // rcx
	int* v10; // rcx
	__int64 v11; // rdx
	int v12; // eax
	int* v13; // rax
	int v14; // xmm1_4
	int v15; // xmm0_4
	int v16; // xmm1_4
	__int32 v17; // xmm0_4
	__int32 v18; // xmm1_4
	__int32 v19; // xmm0_4
	__int32 v20; // xmm1_4
	__int32 v21; // xmm0_4
	__int32 v22; // xmm1_4
	__int32 v23; // xmm0_4
	__int64 v24; // rax
	int v25; // edi
	__int64 v26; // rax
	int v27; // xmm0_4
	unsigned int v28; // ebx
	int v29; // r15d
	int v30; // eax
	_DWORD* v31; // rax
	__int64 v32; // rcx
	_DWORD* v33; // rsi
	int v34; // ebx
	unsigned __int64 v35; // rdx
	__int64 v36; // rax
	unsigned int v37; // r8d
	unsigned int v38; // edx
	__int32 v39; // eax
	unsigned int v40; // r8d
	unsigned __int64 v41; // r9
	BOOL v42; // r11d
	unsigned __int64 v43; // rdx
	unsigned __int64 v44; // r8
	unsigned __int64 v45; // rdx
	unsigned __int64 v46; // r10
	unsigned __int64 v47; // rdx
	__int16* v48; // rax
	int v49; // edx
	__int16* v50; // r12
	__int64 v51; // rcx
	__int16* v52; // rax
	unsigned int v53; // edx
	__int64 v54; // rcx
	BOOL v55; // eax
	__int64 v56; // r8
	__int64 v57; // r9
	__int64 v58; // rcx
	__int64 v59; // rax
	__int64* v60; // rax
	__int64 v61; // rax
	__int64 v62; // rdi
	__int64 v63; // rax
	unsigned __int64 v64; // r8
	unsigned int v65; // edi
	int v66; // r10d
	unsigned __int64 v67; // rdx
	unsigned __int64 v68; // r9
	unsigned __int16* v69; // rcx
	unsigned __int64 v70; // rdx
	unsigned __int16* v71; // rcx
	unsigned int v72; // edx
	__int64 v73; // rax
	int* v74; // rcx
	__int64* v75; // rax
	__int64 v76; // rax
	__int64 v77; // r15
	int v78; // ebx
	float v79; // xmm6_4
	int* v80; // r12
	int* v81; // r15
	int* v82; // rax
	int* v83; // rax
	float v84; // xmm0_4
	float v85; // xmm0_4
	__int64 v86; // rbx
	int* v87; // rax
	int* v88; // rax
	int* v89; // rax
	int* v90; // rax
	__int128 v91; // xmm1
	__int128 v92; // xmm0
	__int128 v93; // xmm1
	int* v94; // r10
	__int64 v95; // rax
	unsigned int v96; // r8d
	unsigned int v97; // ebx
	_DWORD* v98; // r11
	unsigned int v99; // r9d
	__int64 v100; // rcx
	__int64 v101; // rdx
	__int64* v102; // rcx
	__int64 v103; // rcx
	__int64 v104; // rcx
	__int64 i; // rcx
	__int64 j; // rcx
	__int64 v107; // rbx
	__int64 v108; // rax
	__int64 k; // rax
	__int64 m; // rax
	__int64 v111; // r15
	__int64 v112; // rdi
	__int64 v113; // rcx
	unsigned __int64 v114; // rax
	__int64 v115; // rbx
	__int64 v116; // rax
	unsigned int v117; // edi
	__int64 v118; // rsi
	__int64 v119; // rcx
	__int64 v120; // rbx
	__int64 v121; // rax
	int v122; // r14d
	int* v123; // rax
	unsigned int v124; // edi
	__int64 v125; // r9
	int v126; // r12d
	__int64 v127; // rbx
	_DWORD* v128; // rdx
	__int64 v129; // rcx
	unsigned __int64* v130; // r15
	unsigned __int64 v131; // rdi
	__int64 v132; // rbx
	__int64 v133; // rax
	__int64 v134; // rax
	__int64* v135; // rax
	__int64 v136; // rcx
	__int16* v137; // rax
	__int64 v138; // r9
	_DWORD* v139; // rdx
	__int64 v140; // rcx
	float v141; // xmm7_4
	__int64 v142; // r9
	__int64 v143; // r10
	_DWORD* v144; // rcx
	unsigned __int64* v145; // r15
	unsigned __int64 v146; // rdi
	__int64 v147; // rbx
	__int64 v148; // rax
	__int64 v149; // rcx
	__int64 v150; // rax
	__int64* v151; // rax
	__int64 v152; // r9
	__int64 v153; // r10
	int v154; // r12d
	_DWORD* v155; // rcx
	unsigned __int64* v156; // r15
	unsigned __int64 v157; // rdi
	__int64 v158; // rbx
	__int64 v159; // rax
	__int64 v160; // rcx
	__int64 v161; // rax
	__int64* v162; // rax
	__int64 v163; // r9
	__int64 v164; // r10
	unsigned int v165; // r13d
	_DWORD* v166; // rcx
	unsigned __int64* v167; // r15
	unsigned __int64 v168; // rdi
	__int64 v169; // rbx
	__int64 v170; // rax
	__int64 v171; // rcx
	__int64 v172; // rax
	__int64* v173; // rax
	__int64 v174; // rdi
	__int64 v175; // rcx
	__int64 v176; // rbx
	__int64 v177; // rax
	int v178; // ebx
	__int64 v179; // r14
	__int64 v180; // rsi
	int* v181; // r12
	__int64 v182; // rdi
	__int64 v183; // rbx
	__int64 v184; // rax
	int v185; // eax
	int v186; // ebx
	int v187; // r13d
	__int64 v188; // r9
	_DWORD* v189; // rdx
	__int64 v190; // rcx
	unsigned __int64* v191; // r15
	unsigned __int64 v192; // r14
	__int64 v193; // rbx
	__int64 v194; // rax
	__int64 v195; // rcx
	__int64 v196; // rax
	__int64* v197; // rax
	_QWORD* v198; // rax
	__int64 v199; // r10
	__int64 v200; // rdx
	int v201; // r11d
	__int64* v202; // rax
	__int64 v203; // rdx
	__int64 v204; // r10
	int v205; // r11d
	__int64 v206; // rdx
	__int64 v207; // rdx
	int v208; // r14d
	__int64 v209; // rdi
	__int64 v210; // rcx
	unsigned __int64 v211; // rax
	__int64 v212; // rbx
	__int64 v213; // rax
	int v214; // esi
	int* v215; // rbx
	__int64 v216; // rsi
	__int64 v217; // rdi
	__int64 v218; // rax
	int v219; // edi
	_QWORD* v220; // rax
	__int64 v221; // rdx
	int v222; // r10d
	_QWORD* v223; // rax
	__int64 v224; // r10
	__int64 v225; // rdx
	int v226; // r11d
	_QWORD* v227; // rax
	__int64 v228; // r10
	__int64 v229; // rdx
	int v230; // r11d
	_QWORD* v231; // rax
	__int64 v232; // r10
	__int64 v233; // rdx
	int v234; // r11d
	_QWORD* v235; // rax
	__int64 v236; // r10
	__int64 v237; // rdx
	int v238; // r11d
	_QWORD* v239; // rax
	__int64 v240; // r10
	__int64 v241; // rdx
	int v242; // r11d
	_QWORD* v243; // rax
	__int64 v244; // r10
	__int64 v245; // rdx
	int v246; // r11d
	_QWORD* v247; // rax
	__int64 v248; // r10
	__int64 v249; // rdx
	int v250; // r11d
	_QWORD* v251; // rax
	__int64 v252; // r10
	__int64 v253; // rdx
	int v254; // r11d
	_QWORD* v255; // rax
	__int64 v256; // r10
	__int64 v257; // rdx
	int v258; // r11d
	_QWORD* v259; // rax
	__int64 v260; // r10
	__int64 v261; // rdx
	int v262; // r11d
	_QWORD* v263; // rax
	int v264; // r11d
	__int64 v265; // r10
	__int64 v266; // rdx
	_QWORD* v267; // rax
	__int64 v268; // r10
	__int64 v269; // rdx
	int v270; // r11d
	int* v271; // rax
	int* v272; // rdx
	__int64 v273; // rax
	_QWORD* v274; // rax
	__int64 v275; // rdx
	unsigned __int16* v276; // r10
	int* v277; // rdx
	__int64 v278; // rax
	_QWORD* v279; // rax
	__int64 v280; // rdx
	unsigned __int16* v281; // r10
	__int64 v282; // rdx
	__int64 v283; // rax
	int* n; // rax
	__int64 ii; // rax
	__int64 v286; // rdx
	double v288; // [rsp+28h] [rbp-E0h] BYREF
	__int64 v289; // [rsp+30h] [rbp-D8h]
	int* v290; // [rsp+38h] [rbp-D0h]
	__int64 v291; // [rsp+40h] [rbp-C8h] BYREF
	__int64 v292; // [rsp+48h] [rbp-C0h]
	__int64 v293; // [rsp+50h] [rbp-B8h] BYREF
	int* v294; // [rsp+58h] [rbp-B0h]
	__int64 v295; // [rsp+60h] [rbp-A8h]
	__int64 v296[2]; // [rsp+70h] [rbp-98h] BYREF
	int* v297; // [rsp+80h] [rbp-88h] BYREF
	__int64(__fastcall * *v298)(); // [rsp+88h] [rbp-80h] BYREF
	int v299; // [rsp+90h] [rbp-78h]
	__int64 v300; // [rsp+98h] [rbp-70h]
	int v301; // [rsp+A0h] [rbp-68h]
	char v302[8]; // [rsp+A8h] [rbp-60h] BYREF
	int* v303; // [rsp+B0h] [rbp-58h]
	__int64 v304; // [rsp+B8h] [rbp-50h]
	char v305[8]; // [rsp+C8h] [rbp-40h] BYREF
	int* v306; // [rsp+D0h] [rbp-38h]
	__int64 v307; // [rsp+D8h] [rbp-30h]
	__int64(__fastcall * *v308)(); // [rsp+E8h] [rbp-20h] BYREF
	int v309; // [rsp+F0h] [rbp-18h]
	__int64 v310; // [rsp+F8h] [rbp-10h]
	int v311; // [rsp+100h] [rbp-8h]
	__int64(__fastcall * *v312)(); // [rsp+108h] [rbp+0h] BYREF
	int v313; // [rsp+110h] [rbp+8h]
	__int64 v314; // [rsp+118h] [rbp+10h]
	int v315; // [rsp+120h] [rbp+18h]
	__int64(__fastcall * *v316)(); // [rsp+128h] [rbp+20h] BYREF
	char v317[8]; // [rsp+130h] [rbp+28h] BYREF
	_WORD* v318; // [rsp+138h] [rbp+30h]
	_WORD* v319; // [rsp+140h] [rbp+38h]
	__int128 v320; // [rsp+1E8h] [rbp+E0h]
	int* v321; // [rsp+1F8h] [rbp+F0h]
	__int64 v322; // [rsp+208h] [rbp+100h] BYREF
	char v323[8]; // [rsp+210h] [rbp+108h] BYREF
	_WORD* v324; // [rsp+218h] [rbp+110h]
	_WORD* v325; // [rsp+220h] [rbp+118h]
	__int64 v326; // [rsp+2C8h] [rbp+1C0h]
	__int128 v327; // [rsp+2E8h] [rbp+1E0h] BYREF
	__m256i v328; // [rsp+2F8h] [rbp+1F0h] BYREF
	__int128 v329; // [rsp+318h] [rbp+210h]
	__int16* v330; // [rsp+328h] [rbp+220h]
	int v331[6]; // [rsp+338h] [rbp+230h] BYREF

	v2 = qword_140C65898;
	v292 = a2;
	v303 = sub_14018B280(112i64, 0);
	v304 = 0i64;
	*(_BYTE*)v303 = 0;
	*((_QWORD*)v303 + 1) = 0i64;
	*((_QWORD*)v303 + 2) = v303;
	*((_QWORD*)v303 + 3) = v303;
	v295 = 0i64;
	v294 = sub_14018B280(88i64, 0);
	*(_BYTE*)v294 = 0;
	*((_QWORD*)v294 + 1) = 0i64;
	*((_QWORD*)v294 + 2) = v294;
	*((_QWORD*)v294 + 3) = v294;
	v307 = 0i64;
	v306 = sub_14018B280(48i64, 0);
	*(_BYTE*)v306 = 0;
	*((_QWORD*)v306 + 1) = 0i64;
	v4 = 0;
	*((_QWORD*)v306 + 2) = v306;
	*((_QWORD*)v306 + 3) = v306;
	while (1)
	{
		if (qword_140C63838)
		{
			v5 = qword_140C63838(off_140A6A1A0, qword_140C63858);
		}
		else if (dword_140C655F8)
		{
			v5 = 0;
		}
		else
		{
			v5 = (int)sub_1401FD100() >= 0
				? (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63FB8 + 40i64))(qword_140C63FB8)
				: 0;
		}
		if (v4 == v5)
			break;
		if (qword_140C63848)
		{
			v6 = qword_140C63848(off_140A6A1A0, v4, qword_140C63858);
		}
		else
		{
			if (dword_140C655F8 || (int)sub_1401FD100() < 0)
				goto LABEL_27;
			v6 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63FB8 + 32i64))(qword_140C63FB8, v4);
		}
		v7 = (int*)v6;
		if (v6)
		{
			v8 = v306;
			v9 = *((_QWORD*)v306 + 1);
			while (v9)
			{
				if (*(_DWORD*)(v9 + 32) < (unsigned int)*v7)
				{
					v9 = *(_QWORD*)(v9 + 24);
				}
				else
				{
					v8 = (int*)v9;
					v9 = *(_QWORD*)(v9 + 16);
				}
			}
			if (v8 == v306 || *v7 < (unsigned int)v8[8])
			{
				LODWORD(v296[0]) = *v7;
				v296[1] = 0i64;
				v291 = (__int64)v8;
				sub_140055C60((__int64)v305, (int**)&v288, &v291, v296);
				v8 = *(int**)&v288;
			}
			*((_QWORD*)v8 + 5) = v7;
			*((_QWORD*)&v327 + 1) = 0i64;
			memset((char*)v328.m256i_i64 + 4, 0, 28);
			LODWORD(v327) = *v7;
			DWORD1(v327) = v7[7];
			v10 = v7 + 3;
			v11 = 2i64;
			do
			{
				v12 = *(v10 - 2);
				*(int*)((char*)++v10 + (char*)&v327 + 8 - (char*)v7 - 4) = v12;
				*(int*)((char*)v10 + (char*)&v328 - (char*)v7 - 4) = *(v10 - 1);
				*(int*)((char*)v10 + (char*)&v328.m256i_u64[1] - (char*)v7 - 4) = v10[1];
				--v11;
			} while (v11);
			*((_QWORD*)&v327 + 1) = 0i64;
			v13 = sub_1403D2880((__int64)&v293, v7);
			v14 = DWORD1(v327);
			*v13 = v327;
			v15 = DWORD2(v327);
			v13[1] = v14;
			v16 = HIDWORD(v327);
			v13[2] = v15;
			v17 = v328.m256i_i32[1];
			v13[3] = v16;
			v18 = v328.m256i_i32[2];
			v13[4] = 0;
			v13[5] = v17;
			v19 = v328.m256i_i32[3];
			v13[6] = v18;
			v20 = v328.m256i_i32[4];
			v13[7] = v19;
			v21 = v328.m256i_i32[5];
			v13[8] = v20;
			v22 = v328.m256i_i32[6];
			v13[9] = v21;
			v23 = v328.m256i_i32[7];
			v13[10] = v22;
			v13[11] = v23;
		}
	LABEL_27:
		++v4;
	}
	v24 = *(_QWORD*)(v2 + 120);
	if (v24)
		v25 = *(_DWORD*)(v24 + 220);
	else
		v25 = 23;
	LODWORD(v289) = v25;
	if ((dword_140DC2338 & 1) == 0)
	{
		dword_140DC2338 |= 1u;
		if (qword_140C63840)
		{
			v26 = qword_140C63840(off_140A6A408, 942i64, qword_140C63858);
			goto LABEL_37;
		}
		if (dword_140C638AC || (int)sub_1401FFFC0() < 0)
			goto LABEL_39;
		v26 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C64C58 + 24i64))(qword_140C64C58, 942i64);
	LABEL_37:
		if (!v26)
			LABEL_39 :
			v27 = 1056964608;
		else
			v27 = *(_DWORD*)(v26 + 28);
		dword_140DC233C = v27;
	}
	v28 = 0;
	v29 = 1;
	while (2)
	{
		LODWORD(v290) = v28;
		if (qword_140C63838)
		{
			v30 = qword_140C63838(off_140A6A1D8, qword_140C63858);
		}
		else if (dword_140C65444)
		{
			v30 = 0;
		}
		else if ((int)sub_1401FD540() >= 0)
		{
			v30 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C653A0 + 40i64))(qword_140C653A0);
		}
		else
		{
			v30 = 0;
		}
		if (v28 != v30)
		{
			if (qword_140C63848)
			{
				v31 = (_DWORD*)qword_140C63848(off_140A6A1D8, v28, qword_140C63858);
			LABEL_55:
				v33 = v31;
				if (!v31 || v31[3] != v25)
					goto LABEL_155;
				v34 = *v31;
				LODWORD(v327) = *v31;
				if (a1 >= 4u)
					goto LABEL_62;
				v35 = *(_QWORD*)(v2 + 28344);
				v32 = 0i64;
				if (!v35)
					goto LABEL_62;
				v36 = 0i64;
				while (*(unsigned __int16*)(*(_QWORD*)(v2 + 28336) + 2 * v36) != v34)
				{
					v32 = (unsigned int)(v32 + 1);
					v36 = (unsigned int)v32;
					if ((unsigned int)v32 >= v35)
						goto LABEL_62;
				}
				v32 = a1;
				v43 = 0i64;
				v44 = *(_QWORD*)(v2 + 16i64 * a1 + 28280);
				if (v44)
				{
					v32 = *(_QWORD*)(v2 + 16 * (a1 + 1767i64));
					while (*(unsigned __int16*)v32 != v34)
					{
						++v43;
						v32 += 2i64;
						if (v43 >= v44)
							goto LABEL_78;
					}
				LABEL_62:
					DWORD2(v327) = 0;
				}
				else
				{
				LABEL_78:
					DWORD2(v327) = 1;
				}
				HIDWORD(v327) = v33[4];
				v328.m256i_i32[0] = v33[7];
				if (v328.m256i_i32[0])
				{
					v37 = *(_DWORD*)(v2 + 28144);
					v38 = 0;
					if (v37)
					{
						v32 = v2 + 28148;
						while (*(unsigned __int16*)v32 != v34)
						{
							++v38;
							v32 += 2i64;
							if (v38 >= v37)
								goto LABEL_68;
						}
					}
					else
					{
					LABEL_68:
						v29 = 0;
					}
				}
				v39 = v33[1];
				v40 = v33[5];
				*(__int64*)((char*)v328.m256i_i64 + 4) = __PAIR64__(v40, v29);
				v328.m256i_i32[4] = v39;
				v328.m256i_i32[5] = v33[2];
				v328.m256i_i64[3] = *((_QWORD*)v33 + 4);
				LODWORD(v329) = v33[6];
				if (!v40)
				{
					v328.m256i_i64[1] = 0x100000000i64;
					goto LABEL_92;
				}
				if (a1 < 4u)
				{
					v41 = *(_QWORD*)(v2 + 28344);
					v42 = a1 == *(_DWORD*)(v2 + 28140) && v41;
					v32 = a1;
					v45 = 0i64;
					v46 = *(_QWORD*)(v2 + 16i64 * a1 + 28280);
					if (v46)
					{
						v32 = *(_QWORD*)(v2 + 16 * (a1 + 1767i64));
						while (*(unsigned __int16*)v32 != v40)
						{
							++v45;
							v32 += 2i64;
							if (v45 >= v46)
								goto LABEL_84;
						}
					LABEL_90:
						v328.m256i_i32[3] = 1;
					LABEL_92:
						v48 = sub_14034BDD0(v32, v33[10]);
						v49 = v33[11];
						v50 = v48;
						*((_QWORD*)&v329 + 1) = v48;
						v52 = sub_14034BDD0(v51, v49);
						v53 = v33[6];
						v54 = *(_QWORD*)(v2 + 120);
						v330 = v52;
						if (v53)
						{
							if (v54)
							{
								v55 = *(_QWORD*)(qword_140C65898 + 120) == v54 || *(_QWORD*)(qword_140C65898 + 25744) == v54;
								v56 = 0i64;
								if (v55)
									v56 = qword_140C65898;
								if (v56)
								{
									v57 = *(_QWORD*)(v56 + 32024);
									v58 = v57;
									v59 = *(_QWORD*)(v57 + 8);
									while (v59)
									{
										if (*(_DWORD*)(v59 + 32) < v53)
										{
											v59 = *(_QWORD*)(v59 + 24);
										}
										else
										{
											v58 = v59;
											v59 = *(_QWORD*)(v59 + 16);
										}
									}
									if (v58 == v57 || v53 < *(_DWORD*)(v58 + 32))
									{
										v288 = *(double*)(v56 + 32024);
										v60 = (__int64*)&v288;
									}
									else
									{
										v291 = v58;
										v60 = &v291;
									}
									v61 = *v60;
									if (v61 != v57)
									{
										v62 = *(_QWORD*)(v61 + 40);
										if (v62)
											goto LABEL_112;
									}
								}
							}
							v62 = sub_1407A0FD0(qword_140C65B70, v53);
							if (v62)
							{
							LABEL_112:
								v63 = *(_QWORD*)(v62 + 8);
								if (v63)
								{
									if (!v50 || !*v50)
										*((_QWORD*)&v329 + 1) = sub_14034BDD0(v58, *(_DWORD*)(v63 + 16));
									if (!v330 || !*v330)
										v330 = sub_14034BDD0(v58, *(_DWORD*)(*(_QWORD*)(v62 + 8) + 32i64));
								}
							}
						}
						if (a1 < 4u)
						{
							v64 = *(_QWORD*)(v2 + 28344);
							if (a1 == *(_DWORD*)(v2 + 28140) && v64)
							{
								v65 = 1;
								v66 = 1;
							}
							else
							{
								v66 = 0;
								v65 = 1;
							}
							v67 = 0i64;
							v68 = *(_QWORD*)(v2 + 16i64 * a1 + 28280);
							if (v68)
							{
								v69 = *(unsigned __int16**)(v2 + 16 * (a1 + 1767i64));
								while (*v69 != v34)
								{
									++v67;
									++v69;
									if (v67 >= v68)
										goto LABEL_128;
								}
							LABEL_134:
								v72 = v33[8];
								DWORD1(v327) = 3;
								v73 = *((_QWORD*)v306 + 1);
								v74 = v306;
								if (!v73)
									goto LABEL_142;
								do
								{
									if (*(_DWORD*)(v73 + 32) < v72)
									{
										v73 = *(_QWORD*)(v73 + 24);
									}
									else
									{
										v74 = (int*)v73;
										v73 = *(_QWORD*)(v73 + 16);
									}
								} while (v73);
								if (v74 == v306 || v72 < v74[8])
								{
								LABEL_142:
									v296[0] = (__int64)v306;
									v75 = v296;
								}
								else
								{
									v297 = v74;
									v75 = (__int64*)&v297;
								}
								v76 = *v75;
								if ((int*)v76 != v306)
								{
									v77 = *(_QWORD*)(v76 + 40);
									v78 = v33[9];
									v79 = (float)(int)v33[4];
									v80 = (int*)(v77 + 8);
									v81 = (int*)(v77 + 4);
									if (*v80)
									{
										v82 = sub_1403D2880((__int64)&v293, v81);
										*((float*)v82 + 4) = (float)(v79 * *(float*)&dword_140DC233C) + *((float*)v82 + 4);
										v83 = sub_1403D2880((__int64)&v293, v80);
										v84 = v79 * *(float*)&dword_140DC233C;
									}
									else
									{
										v83 = sub_1403D2880((__int64)&v293, v81);
										v84 = v79;
										v78 = 0;
									}
									v85 = v84 + *((float*)v83 + 4);
									if (v78 > 1)
										v65 = v78;
									for (*((float*)v83 + 4) = v85; v65 <= 2; ++v65)
									{
										if (*v80)
										{
											v86 = v65 - 1;
											v87 = sub_1403D2880((__int64)&v293, v81);
											*(float*)&v87[v86 + 2] = (float)(v79 * *(float*)&dword_140DC233C) + *(float*)&v87[v86 + 2];
											v88 = sub_1403D2880((__int64)&v293, v80);
											*(float*)&v88[v86 + 2] = (float)(v79 * *(float*)&dword_140DC233C) + *(float*)&v88[v86 + 2];
										}
										else
										{
											v89 = sub_1403D2880((__int64)&v293, v81);
											*(float*)&v89[v65 + 1] = v79 + *(float*)&v89[v65 + 1];
										}
									}
								}
							LABEL_154:
								v90 = sub_1403D2790((__int64)v302, v33);
								v28 = (unsigned int)v290;
								v29 = 1;
								v91 = *(_OWORD*)v328.m256i_i8;
								*(_OWORD*)v90 = v327;
								v92 = *(_OWORD*)&v328.m256i_u64[2];
								*((_OWORD*)v90 + 1) = v91;
								v93 = v329;
								*((_OWORD*)v90 + 2) = v92;
								*(_QWORD*)&v92 = v330;
								*((_OWORD*)v90 + 3) = v93;
								*((_QWORD*)v90 + 8) = v92;
							LABEL_155:
								v25 = v289;
								++v28;
								continue;
							}
						LABEL_128:
							if (v66)
							{
								v70 = 0i64;
								if (v64)
								{
									v71 = *(unsigned __int16**)(v2 + 28336);
									while (*v71 != v34)
									{
										++v70;
										++v71;
										if (v70 >= v64)
										{
											DWORD1(v327) = v29 != 0;
											goto LABEL_154;
										}
									}
									goto LABEL_134;
								}
							}
						}
						DWORD1(v327) = v29 != 0;
						goto LABEL_154;
					}
				LABEL_84:
					if (v42)
					{
						v47 = 0i64;
						if (v41)
						{
							v32 = *(_QWORD*)(v2 + 28336);
							while (*(unsigned __int16*)v32 != v40)
							{
								++v47;
								v32 += 2i64;
								if (v47 >= v41)
									goto LABEL_89;
							}
							goto LABEL_90;
						}
					}
				}
			LABEL_89:
				v328.m256i_i32[3] = 0;
				goto LABEL_92;
			}
			if (!dword_140C65444 && (int)sub_1401FD540() >= 0)
			{
				v31 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C653A0 + 32i64))(
					qword_140C653A0,
					v28);
				goto LABEL_55;
			}
			goto LABEL_155;
		}
		break;
	}
	v94 = v294;
	v95 = *((_QWORD*)v294 + 2);
	if ((int*)v95 != v294)
	{
	LABEL_158:
		v96 = 3;
		v97 = 0;
		v98 = (_DWORD*)(v95 + 72);
		while (1)
		{
			if (!v96)
			{
			LABEL_181:
				*(_DWORD*)(v95 + 80) = v96;
				v104 = *(_QWORD*)(v95 + 24);
				if (v104)
				{
					v95 = *(_QWORD*)(v95 + 24);
					for (i = *(_QWORD*)(v104 + 16); i; i = *(_QWORD*)(i + 16))
						v95 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v95 + 8); v95 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v95 = j;
					if (*(_QWORD*)(v95 + 24) != j)
						v95 = j;
				}
				v94 = v294;
				if ((int*)v95 == v294)
					break;
				goto LABEL_158;
			}
			v99 = *(v98 - 4);
			if (v99)
			{
				v100 = *((_QWORD*)v94 + 1);
				v101 = (__int64)v94;
				if (!v100)
					goto LABEL_169;
				do
				{
					if (*(_DWORD*)(v100 + 32) < v99)
					{
						v100 = *(_QWORD*)(v100 + 24);
					}
					else
					{
						v101 = v100;
						v100 = *(_QWORD*)(v100 + 16);
					}
				} while (v100);
				if ((int*)v101 == v94 || v99 < *(_DWORD*)(v101 + 32))
				{
				LABEL_169:
					v297 = v94;
					v102 = (__int64*)&v297;
				}
				else
				{
					v296[0] = v101;
					v102 = v296;
				}
				v103 = *v102;
				if ((int*)v103 != v94)
				{
					if ((unsigned int)(int)*(float*)(v103 + 48) >= *v98)
					{
						if (v96 > 2)
							v96 = 2;
						goto LABEL_180;
					}
					if ((unsigned int)(int)*(float*)(v103 + 44) >= *(v98 - 2))
					{
						if (v96 > 1)
							v96 = 1;
						goto LABEL_180;
					}
				}
				v96 = 0;
			}
		LABEL_180:
			++v97;
			++v98;
			if (v97 >= 2)
				goto LABEL_181;
		}
	}
	v107 = *((_QWORD*)v303 + 2);
	while ((int*)v107 != v303)
	{
		if (*(_DWORD*)(v107 + 44) == 1
			&& *(_DWORD*)(v107 + 84) <= (unsigned int)sub_1403D2880((__int64)&v293, (int*)(v107 + 80))[11])
		{
			*(_DWORD*)(v107 + 44) = 2;
		}
		v108 = *(_QWORD*)(v107 + 24);
		if (v108)
		{
			v107 = *(_QWORD*)(v107 + 24);
			for (k = *(_QWORD*)(v108 + 16); k; k = *(_QWORD*)(k + 16))
				v107 = k;
		}
		else
		{
			for (m = *(_QWORD*)(v107 + 8); v107 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
				v107 = m;
			if (*(_QWORD*)(v107 + 24) != m)
				v107 = m;
		}
	}
	v331[3] = 1;
	v111 = v292;
	v112 = *(_QWORD*)(v292 + 16);
	v331[0] = 4;
	v113 = *(_QWORD*)(v112 + 32);
	v331[1] = 2;
	v331[2] = 6;
	v114 = *(_QWORD*)(v113 + 112);
	v331[4] = 5;
	v331[5] = 3;
	v308 = off_140B569F0;
	v310 = v112;
	v311 = 1;
	if (*(_QWORD*)(v113 + 120) >= v114)
		sub_14005E2C0(v112);
	v115 = *(_QWORD*)(v112 + 16);
	v116 = sub_14005C1B0(v112, 0, 0);
	*(_DWORD*)(v115 + 8) = 5;
	*(_QWORD*)v115 = v116;
	*(_QWORD*)(v112 + 16) += 16i64;
	v309 = sub_1400578C0(v112);
	v117 = 0;
	LODWORD(v289) = 0;
	do
	{
		v118 = *(_QWORD*)(v111 + 16);
		v312 = off_140B569F0;
		v315 = 1;
		v119 = *(_QWORD*)(v118 + 32);
		v296[0] = v118;
		v314 = v118;
		if (*(_QWORD*)(v119 + 120) >= *(_QWORD*)(v119 + 112))
			sub_14005E2C0(v118);
		v120 = *(_QWORD*)(v118 + 16);
		v121 = sub_14005C1B0(v118, 0, 0);
		*(_DWORD*)(v120 + 8) = 5;
		*(_QWORD*)v120 = v121;
		*(_QWORD*)(v118 + 16) += 16i64;
		v122 = sub_1400578C0(v118);
		v313 = v122;
		v123 = sub_1403D2880((__int64)&v293, &v331[v117]);
		v124 = v122 - 1;
		v125 = *(_QWORD*)(*(_QWORD*)(v118 + 32) + 160i64);
		v126 = *v123;
		v127 = (__int64)v123;
		v290 = v123;
		if ((unsigned int)(v122 - 1) >= *(_DWORD*)(v125 + 56))
		{
			v288 = (double)v122;
			if ((double)v122 == 0.0)
				v128 = *(_DWORD**)(v125 + 32);
			else
				v128 = (_DWORD*)(*(_QWORD*)(v125 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v288) + HIDWORD(v288)) % (((1i64 << *(_BYTE*)(v125 + 11)) - 1) | 1)));
			while (v128[6] != 3 || (double)v122 != *((double*)v128 + 2))
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
			v128 = (_DWORD*)(*(_QWORD*)(v125 + 24) + 16i64 * (v122 - 1));
		}
		v129 = *(_QWORD*)(v118 + 16);
		*(_QWORD*)v129 = *(_QWORD*)v128;
		*(_DWORD*)(v129 + 8) = v128[2];
		*(_QWORD*)(v118 + 16) += 16i64;
		v130 = (unsigned __int64*)sub_14018F0E0(&v327, L"nId")[1];
		if (v130)
		{
			v131 = -1i64;
			do
				++v131;
			while (*((_BYTE*)v130 + v131));
			if (*(_QWORD*)(*(_QWORD*)(v118 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v118 + 32) + 112i64))
				sub_14005E2C0(v118);
			v132 = *(_QWORD*)(v118 + 16);
			v133 = sub_140062650(v118, v130, v131);
			*(_DWORD*)(v132 + 8) = 4;
			v124 = v122 - 1;
			*(_QWORD*)v132 = v133;
			*(_QWORD*)(v118 + 16) += 16i64;
			v127 = (__int64)v290;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v118 + 16) + 8i64) = 0;
			*(_QWORD*)(v118 + 16) += 16i64;
		}
		if (*((_QWORD*)&v327 + 1))
			sub_14018B900(*((__int64*)&v327 + 1), 0);
		v134 = *(_QWORD*)(v118 + 16);
		*(_DWORD*)(v134 + 8) = 3;
		*(double*)v134 = (double)v126;
		*(_QWORD*)(v118 + 16) += 16i64;
		v135 = (__int64*)sub_1400580E0(v118, -3);
		sub_14005EA50(v118, v135, (int*)(*(_QWORD*)(v118 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v118 + 16) - 16i64));
		*(_QWORD*)(v118 + 16) -= 48i64;
		v137 = sub_14034BDD0(v136, *(_DWORD*)(v127 + 4));
		v138 = *(_QWORD*)(*(_QWORD*)(v118 + 32) + 160i64);
		if (v124 >= *(_DWORD*)(v138 + 56))
		{
			v288 = (double)v122;
			if ((double)v122 == 0.0)
				v139 = *(_DWORD**)(v138 + 32);
			else
				v139 = (_DWORD*)(*(_QWORD*)(v138 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v288) + HIDWORD(v288)) % (((1i64 << *(_BYTE*)(v138 + 11)) - 1) | 1)));
			while (v139[6] != 3 || (double)v122 != *((double*)v139 + 2))
			{
				v139 = (_DWORD*)*((_QWORD*)v139 + 4);
				if (!v139)
				{
					v139 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v139 = (_DWORD*)(*(_QWORD*)(v138 + 24) + 16i64 * (v122 - 1));
		}
		v140 = *(_QWORD*)(v118 + 16);
		*(_QWORD*)v140 = *(_QWORD*)v139;
		*(_DWORD*)(v140 + 8) = v139[2];
		*(_QWORD*)(v118 + 16) += 16i64;
		sub_1400F0870(v118, (__int64)v139, L"strName", (unsigned __int16*)v137);
		*(_QWORD*)(v118 + 16) -= 16i64;
		v141 = *(float*)(v127 + 16);
		v142 = *(_QWORD*)(*(_QWORD*)(v118 + 32) + 160i64);
		v143 = *(_QWORD*)(v118 + 16);
		if (v124 >= *(_DWORD*)(v142 + 56))
		{
			v288 = (double)v122;
			if ((double)v122 == 0.0)
				v144 = *(_DWORD**)(v142 + 32);
			else
				v144 = (_DWORD*)(*(_QWORD*)(v142 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v288) + HIDWORD(v288)) % (((1i64 << *(_BYTE*)(v142 + 11)) - 1) | 1)));
			while (v144[6] != 3 || (double)v122 != *((double*)v144 + 2))
			{
				v144 = (_DWORD*)*((_QWORD*)v144 + 4);
				if (!v144)
				{
					v144 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v144 = (_DWORD*)(*(_QWORD*)(v142 + 24) + 16i64 * (v122 - 1));
		}
		*(_QWORD*)v143 = *(_QWORD*)v144;
		*(_DWORD*)(v143 + 8) = v144[2];
		*(_QWORD*)(v118 + 16) += 16i64;
		v145 = (unsigned __int64*)sub_14018F0E0(&v327, L"fPowerInCategory")[1];
		if (v145)
		{
			v146 = -1i64;
			do
				++v146;
			while (*((_BYTE*)v145 + v146));
			if (*(_QWORD*)(*(_QWORD*)(v118 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v118 + 32) + 112i64))
				sub_14005E2C0(v118);
			v147 = *(_QWORD*)(v118 + 16);
			v148 = sub_140062650(v118, v145, v146);
			*(_DWORD*)(v147 + 8) = 4;
			v124 = v122 - 1;
			*(_QWORD*)v147 = v148;
			v127 = (__int64)v290;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v118 + 16) + 8i64) = 0;
		}
		v149 = *((_QWORD*)&v327 + 1);
		*(_QWORD*)(v118 + 16) += 16i64;
		if (v149)
			sub_14018B900(v149, 0);
		v150 = *(_QWORD*)(v118 + 16);
		*(_DWORD*)(v150 + 8) = 3;
		*(double*)v150 = v141;
		*(_QWORD*)(v118 + 16) += 16i64;
		v151 = (__int64*)sub_1400580E0(v118, -3);
		sub_14005EA50(v118, v151, (int*)(*(_QWORD*)(v118 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v118 + 16) - 16i64));
		*(_QWORD*)(v118 + 16) -= 48i64;
		v152 = *(_QWORD*)(*(_QWORD*)(v118 + 32) + 160i64);
		v153 = *(_QWORD*)(v118 + 16);
		v154 = *(_DWORD*)(v127 + 44) + 1;
		if (v124 >= *(_DWORD*)(v152 + 56))
		{
			v288 = (double)v122;
			if ((double)v122 == 0.0)
				v155 = *(_DWORD**)(v152 + 32);
			else
				v155 = (_DWORD*)(*(_QWORD*)(v152 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v288) + HIDWORD(v288)) % (((1i64 << *(_BYTE*)(v152 + 11)) - 1) | 1)));
			while (v155[6] != 3 || (double)v122 != *((double*)v155 + 2))
			{
				v155 = (_DWORD*)*((_QWORD*)v155 + 4);
				if (!v155)
				{
					v155 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v155 = (_DWORD*)(*(_QWORD*)(v152 + 24) + 16i64 * (v122 - 1));
		}
		*(_QWORD*)v153 = *(_QWORD*)v155;
		*(_DWORD*)(v153 + 8) = v155[2];
		*(_QWORD*)(v118 + 16) += 16i64;
		v156 = (unsigned __int64*)sub_14018F0E0(&v327, L"nHighestTierUnlocked")[1];
		if (v156)
		{
			v157 = -1i64;
			do
				++v157;
			while (*((_BYTE*)v156 + v157));
			if (*(_QWORD*)(*(_QWORD*)(v118 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v118 + 32) + 112i64))
				sub_14005E2C0(v118);
			v158 = *(_QWORD*)(v118 + 16);
			v159 = sub_140062650(v118, v156, v157);
			*(_DWORD*)(v158 + 8) = 4;
			v124 = v122 - 1;
			*(_QWORD*)v158 = v159;
			v127 = (__int64)v290;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v118 + 16) + 8i64) = 0;
		}
		v160 = *((_QWORD*)&v327 + 1);
		*(_QWORD*)(v118 + 16) += 16i64;
		if (v160)
			sub_14018B900(v160, 0);
		v161 = *(_QWORD*)(v118 + 16);
		*(_DWORD*)(v161 + 8) = 3;
		*(double*)v161 = (double)v154;
		*(_QWORD*)(v118 + 16) += 16i64;
		v162 = (__int64*)sub_1400580E0(v118, -3);
		sub_14005EA50(v118, v162, (int*)(*(_QWORD*)(v118 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v118 + 16) - 16i64));
		*(_QWORD*)(v118 + 16) -= 48i64;
		v163 = *(_QWORD*)(*(_QWORD*)(v118 + 32) + 160i64);
		v164 = *(_QWORD*)(v118 + 16);
		v165 = (*(_DWORD*)(v127 + 24) != 0) + 1;
		if (v124 >= *(_DWORD*)(v163 + 56))
		{
			v288 = (double)v122;
			if ((double)v122 == 0.0)
				v166 = *(_DWORD**)(v163 + 32);
			else
				v166 = (_DWORD*)(*(_QWORD*)(v163 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v288) + HIDWORD(v288)) % (((1i64 << *(_BYTE*)(v163 + 11)) - 1) | 1)));
			while (v166[6] != 3 || (double)v122 != *((double*)v166 + 2))
			{
				v166 = (_DWORD*)*((_QWORD*)v166 + 4);
				if (!v166)
				{
					v166 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v166 = (_DWORD*)(*(_QWORD*)(v163 + 24) + 16i64 * (v122 - 1));
		}
		*(_QWORD*)v164 = *(_QWORD*)v166;
		*(_DWORD*)(v164 + 8) = v166[2];
		*(_QWORD*)(v118 + 16) += 16i64;
		v167 = (unsigned __int64*)sub_14018F0E0(&v327, L"nCategoriesToUnlock")[1];
		if (v167)
		{
			v168 = -1i64;
			do
				++v168;
			while (*((_BYTE*)v167 + v168));
			if (*(_QWORD*)(*(_QWORD*)(v118 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v118 + 32) + 112i64))
				sub_14005E2C0(v118);
			v169 = *(_QWORD*)(v118 + 16);
			v170 = sub_140062650(v118, v167, v168);
			*(_DWORD*)(v169 + 8) = 4;
			*(_QWORD*)v169 = v170;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v118 + 16) + 8i64) = 0;
		}
		v171 = *((_QWORD*)&v327 + 1);
		*(_QWORD*)(v118 + 16) += 16i64;
		if (v171)
			sub_14018B900(v171, 0);
		v172 = *(_QWORD*)(v118 + 16);
		*(_DWORD*)(v172 + 8) = 3;
		*(double*)v172 = (double)(int)v165;
		*(_QWORD*)(v118 + 16) += 16i64;
		v173 = (__int64*)sub_1400580E0(v118, -3);
		sub_14005EA50(v118, v173, (int*)(*(_QWORD*)(v118 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v118 + 16) - 16i64));
		*(_QWORD*)(v118 + 16) -= 48i64;
		v111 = v292;
		v174 = *(_QWORD*)(v292 + 16);
		v301 = 1;
		v175 = *(_QWORD*)(v174 + 32);
		v298 = off_140B569F0;
		v300 = v174;
		if (*(_QWORD*)(v175 + 120) >= *(_QWORD*)(v175 + 112))
			sub_14005E2C0(v174);
		v176 = *(_QWORD*)(v174 + 16);
		v177 = sub_14005C1B0(v174, 0, 0);
		*(_DWORD*)(v176 + 8) = 5;
		*(_QWORD*)v176 = v177;
		*(_QWORD*)(v174 + 16) += 16i64;
		v178 = sub_1400578C0(v174);
		v299 = v178;
		if (v165)
		{
			v179 = v165;
			v180 = v111;
			v181 = v290 + 7;
			v291 = v165;
			do
			{
				v182 = *(_QWORD*)(v180 + 16);
				if (*(_QWORD*)(*(_QWORD*)(v182 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v182 + 32) + 112i64))
					sub_14005E2C0(*(_QWORD*)(v180 + 16));
				v183 = *(_QWORD*)(v182 + 16);
				v184 = sub_14005C1B0(v182, 0, 0);
				*(_DWORD*)(v183 + 8) = 5;
				*(_QWORD*)v183 = v184;
				*(_QWORD*)(v182 + 16) += 16i64;
				v185 = sub_1400578C0(v182);
				v186 = *(v181 - 2);
				v187 = v185;
				v188 = *(_QWORD*)(*(_QWORD*)(v182 + 32) + 160i64);
				LODWORD(v290) = v186;
				if ((unsigned int)(v185 - 1) >= *(_DWORD*)(v188 + 56))
				{
					v288 = (double)v185;
					if ((double)v185 == 0.0)
						v189 = *(_DWORD**)(v188 + 32);
					else
						v189 = (_DWORD*)(*(_QWORD*)(v188 + 32)
							+ 40
							* ((unsigned int)(LODWORD(v288) + HIDWORD(v288))
								% (((1i64 << *(_BYTE*)(v188 + 11)) - 1) | 1)));
					while (v189[6] != 3 || (double)v185 != *((double*)v189 + 2))
					{
						v189 = (_DWORD*)*((_QWORD*)v189 + 4);
						if (!v189)
						{
							v189 = dword_140A12138;
							break;
						}
					}
				}
				else
				{
					v189 = (_DWORD*)(*(_QWORD*)(v188 + 24) + 16i64 * (v185 - 1));
				}
				v190 = *(_QWORD*)(v182 + 16);
				*(_QWORD*)v190 = *(_QWORD*)v189;
				*(_DWORD*)(v190 + 8) = v189[2];
				*(_QWORD*)(v182 + 16) += 16i64;
				v191 = (unsigned __int64*)sub_14018F0E0(&v327, L"nUnlockCategoryId")[1];
				if (v191)
				{
					v192 = -1i64;
					do
						++v192;
					while (*((_BYTE*)v191 + v192));
					if (*(_QWORD*)(*(_QWORD*)(v182 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v182 + 32) + 112i64))
						sub_14005E2C0(v182);
					v193 = *(_QWORD*)(v182 + 16);
					v194 = sub_140062650(v182, v191, v192);
					v179 = v291;
					*(_DWORD*)(v193 + 8) = 4;
					*(_QWORD*)v193 = v194;
					v186 = (int)v290;
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v182 + 16) + 8i64) = 0;
				}
				v195 = *((_QWORD*)&v327 + 1);
				*(_QWORD*)(v182 + 16) += 16i64;
				if (v195)
					sub_14018B900(v195, 0);
				v196 = *(_QWORD*)(v182 + 16);
				*(_DWORD*)(v196 + 8) = 3;
				*(double*)v196 = (double)v186;
				*(_QWORD*)(v182 + 16) += 16i64;
				v197 = (__int64*)sub_1400580E0(v182, -3);
				sub_14005EA50(
					v182,
					v197,
					(int*)(*(_QWORD*)(v182 + 16) - 32i64),
					(unsigned int*)(*(_QWORD*)(v182 + 16) - 16i64));
				*(_QWORD*)(v182 + 16) -= 48i64;
				v198 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v182 + 32) + 160i64), v187);
				*(_QWORD*)v199 = *v198;
				*(_DWORD*)(v199 + 8) = *((_DWORD*)v198 + 2);
				*(_QWORD*)(v182 + 16) += 16i64;
				sub_1400F06F0(v182, v200, L"nTier2Amount", v201);
				*(_QWORD*)(v182 + 16) -= 16i64;
				v202 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v182 + 32) + 160i64), v187);
				v203 = *v202;
				*(_QWORD*)v204 = *v202;
				*(_DWORD*)(v204 + 8) = *((_DWORD*)v202 + 2);
				*(_QWORD*)(v182 + 16) += 16i64;
				sub_1400F06F0(v182, v203, L"nTier3Amount", v205);
				*(_QWORD*)(v182 + 16) -= 16i64;
				sub_1400FB1D0((__int64)&v298);
				sub_1400579E0(v182, v206, v187);
				++v181;
				v291 = --v179;
			} while (v179);
			v174 = v300;
			v178 = v299;
			v118 = v296[0];
			v122 = v313;
			v111 = v292;
		}
		sub_1400FB2A0((__int64)&v312, (__int64)L"tUnlockedCategories", v178);
		sub_1400FB1D0((__int64)&v308);
		if (v174)
			sub_1400579E0(v174, v207, v178);
		sub_1400579E0(v118, v207, v122);
		v117 = v289 + 1;
		LODWORD(v289) = v117;
	} while (v117 < 6);
	v208 = v309;
	sub_1400FB2A0(v111, (__int64)L"tCategories", v309);
	v209 = *(_QWORD*)(v111 + 16);
	v210 = *(_QWORD*)(v209 + 32);
	v298 = off_140B569F0;
	v300 = v209;
	v211 = *(_QWORD*)(v210 + 112);
	v301 = 1;
	if (*(_QWORD*)(v210 + 120) >= v211)
		sub_14005E2C0(v209);
	v212 = *(_QWORD*)(v209 + 16);
	v213 = sub_14005C1B0(v209, 0, 0);
	*(_DWORD*)(v212 + 8) = 5;
	*(_QWORD*)v212 = v213;
	*(_QWORD*)(v209 + 16) += 16i64;
	v214 = sub_1400578C0(v209);
	v299 = v214;
	v215 = (int*)*((_QWORD*)v303 + 2);
	if (v215 != v303)
	{
		do
		{
			v216 = *(_QWORD*)(v111 + 16);
			if (*(_QWORD*)(*(_QWORD*)(v216 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v216 + 32) + 112i64))
				sub_14005E2C0(*(_QWORD*)(v111 + 16));
			v217 = *(_QWORD*)(v216 + 16);
			v218 = sub_14005C1B0(v216, 0, 0);
			*(_DWORD*)(v217 + 8) = 5;
			*(_QWORD*)v217 = v218;
			*(_QWORD*)(v216 + 16) += 16i64;
			v219 = sub_1400578C0(v216);
			v220 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v216 + 32) + 160i64), v219);
			v221 = *(_QWORD*)(v216 + 16);
			*(_QWORD*)v221 = *v220;
			*(_DWORD*)(v221 + 8) = *((_DWORD*)v220 + 2);
			*(_QWORD*)(v216 + 16) += 16i64;
			sub_1400F06F0(v216, v221, L"nId", v222);
			*(_QWORD*)(v216 + 16) -= 16i64;
			v223 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v216 + 32) + 160i64), v219);
			*(_QWORD*)v224 = *v223;
			*(_DWORD*)(v224 + 8) = *((_DWORD*)v223 + 2);
			*(_QWORD*)(v216 + 16) += 16i64;
			sub_1400F06F0(v216, v225, L"eEldanAvailability", v226);
			*(_QWORD*)(v216 + 16) -= 16i64;
			v227 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v216 + 32) + 160i64), v219);
			*(_QWORD*)v228 = *v227;
			*(_DWORD*)(v228 + 8) = *((_DWORD*)v227 + 2);
			*(_QWORD*)(v216 + 16) += 16i64;
			sub_1400F0630(v216, v229, L"bIsCached", v230);
			*(_QWORD*)(v216 + 16) -= 16i64;
			v231 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v216 + 32) + 160i64), v219);
			*(_QWORD*)v232 = *v231;
			*(_DWORD*)(v232 + 8) = *((_DWORD*)v231 + 2);
			*(_QWORD*)(v216 + 16) += 16i64;
			sub_1400F06F0(v216, v233, L"nPowerCost", v234);
			*(_QWORD*)(v216 + 16) -= 16i64;
			v235 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v216 + 32) + 160i64), v219);
			*(_QWORD*)v236 = *v235;
			*(_DWORD*)(v236 + 8) = *((_DWORD*)v235 + 2);
			*(_QWORD*)(v216 + 16) += 16i64;
			sub_1400F06F0(v216, v237, L"nItemIdUnlock", v238);
			*(_QWORD*)(v216 + 16) -= 16i64;
			v239 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v216 + 32) + 160i64), v219);
			*(_QWORD*)v240 = *v239;
			*(_DWORD*)(v240 + 8) = *((_DWORD*)v239 + 2);
			*(_QWORD*)(v216 + 16) += 16i64;
			sub_1400F0630(v216, v241, L"bUnlocked", v242);
			*(_QWORD*)(v216 + 16) -= 16i64;
			v243 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v216 + 32) + 160i64), v219);
			*(_QWORD*)v244 = *v243;
			*(_DWORD*)(v244 + 8) = *((_DWORD*)v243 + 2);
			*(_QWORD*)(v216 + 16) += 16i64;
			sub_1400F06F0(v216, v245, L"nEldanAugmentationIdRequired", v246);
			*(_QWORD*)(v216 + 16) -= 16i64;
			v247 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v216 + 32) + 160i64), v219);
			*(_QWORD*)v248 = *v247;
			*(_DWORD*)(v248 + 8) = *((_DWORD*)v247 + 2);
			*(_QWORD*)(v216 + 16) += 16i64;
			sub_1400F0630(v216, v249, L"bRequiredOkay", v250);
			*(_QWORD*)(v216 + 16) -= 16i64;
			v251 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v216 + 32) + 160i64), v219);
			*(_QWORD*)v252 = *v251;
			*(_DWORD*)(v252 + 8) = *((_DWORD*)v251 + 2);
			*(_QWORD*)(v216 + 16) += 16i64;
			sub_1400F06F0(v216, v253, L"nDisplayRow", v254);
			*(_QWORD*)(v216 + 16) -= 16i64;
			v255 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v216 + 32) + 160i64), v219);
			*(_QWORD*)v256 = *v255;
			*(_DWORD*)(v256 + 8) = *((_DWORD*)v255 + 2);
			*(_QWORD*)(v216 + 16) += 16i64;
			sub_1400F06F0(v216, v257, L"nDisplayColumn", v258);
			*(_QWORD*)(v216 + 16) -= 16i64;
			v259 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v216 + 32) + 160i64), v219);
			*(_QWORD*)v260 = *v259;
			*(_DWORD*)(v260 + 8) = *((_DWORD*)v259 + 2);
			*(_QWORD*)(v216 + 16) += 16i64;
			sub_1400F06F0(v216, v261, L"nCategoryId", v262);
			*(_QWORD*)(v216 + 16) -= 16i64;
			v263 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v216 + 32) + 160i64), v219);
			*(_QWORD*)v265 = *v263;
			*(_DWORD*)(v265 + 8) = *((_DWORD*)v263 + 2);
			*(_QWORD*)(v216 + 16) += 16i64;
			sub_1400F06F0(v216, v266, L"nCategoryTier", v264 + 1);
			*(_QWORD*)(v216 + 16) -= 16i64;
			v267 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v216 + 32) + 160i64), v219);
			*(_QWORD*)v268 = *v267;
			*(_DWORD*)(v268 + 8) = *((_DWORD*)v267 + 2);
			*(_QWORD*)(v216 + 16) += 16i64;
			sub_1400F06F0(v216, v269, L"nSpellIdAugment", v270);
			*(_QWORD*)(v216 + 16) -= 16i64;
			sub_1400B6F30((__int64)&v316);
			v316 = off_140B69230;
			v321 = 0i64;
			v320 = 0i64;
			v271 = sub_14018B280(16i64, 0);
			*(_QWORD*)&v320 = v271;
			*((_QWORD*)&v320 + 1) = v271;
			v321 = v271 + 4;
			if (v271)
				*(_WORD*)v271 = 0;
			v272 = (int*)*((_QWORD*)v215 + 12);
			if (v272)
			{
				v273 = 0i64;
				if (*(_WORD*)v272)
				{
					do
						++v273;
					while (*((_WORD*)v272 + v273));
				}
				sub_14001C480((__int64)v317, v272, (int*)((char*)v272 + 2 * v273));
			}
			else if (v318 != v319)
			{
				*v318 = 0;
				v319 = v318;
			}
			sub_1400B7660(&v316);
			v274 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v216 + 32) + 160i64), v219);
			v275 = *(_QWORD*)(v216 + 16);
			*(_QWORD*)v275 = *v274;
			*(_DWORD*)(v275 + 8) = *((_DWORD*)v274 + 2);
			*(_QWORD*)(v216 + 16) += 16i64;
			sub_1400F0870(v216, v275, L"strTitle", v276);
			*(_QWORD*)(v216 + 16) -= 16i64;
			sub_1404DDE90(&v322);
			v277 = (int*)*((_QWORD*)v215 + 13);
			if (v277)
			{
				v278 = 0i64;
				if (*(_WORD*)v277)
				{
					do
						++v278;
					while (*((_WORD*)v277 + v278));
				}
				sub_14001C480((__int64)v323, v277, (int*)((char*)v277 + 2 * v278));
			}
			else if (v324 != v325)
			{
				*v324 = 0;
				v325 = v324;
			}
			sub_1400B7660(&v322);
			v279 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v216 + 32) + 160i64), v219);
			v280 = *(_QWORD*)(v216 + 16);
			*(_QWORD*)v280 = *v279;
			*(_DWORD*)(v280 + 8) = *((_DWORD*)v279 + 2);
			*(_QWORD*)(v216 + 16) += 16i64;
			sub_1400F0870(v216, v280, L"strDescription", v281);
			*(_QWORD*)(v216 + 16) -= 16i64;
			sub_1400FB1D0((__int64)&v298);
			if (v326)
				sub_14018B900(v326, 0);
			sub_1400B7390(&v322);
			if ((_QWORD)v320)
				sub_14018B900(v320, 0);
			sub_1400B7390(&v316);
			sub_1400579E0(v216, v282, v219);
			v283 = *((_QWORD*)v215 + 3);
			if (v283)
			{
				v215 = (int*)*((_QWORD*)v215 + 3);
				for (n = *(int**)(v283 + 16); n; n = (int*)*((_QWORD*)n + 2))
					v215 = n;
			}
			else
			{
				for (ii = *((_QWORD*)v215 + 1); v215 == *(int**)(ii + 24); ii = *(_QWORD*)(ii + 8))
					v215 = (int*)ii;
				if (*((_QWORD*)v215 + 3) != ii)
					v215 = (int*)ii;
			}
		} while (v215 != v303);
		v209 = v300;
		v214 = v299;
	}
	sub_1400FB2A0(v111, (__int64)L"tAugments", v214);
	if (v209)
		sub_1400579E0(v209, v286, v214);
	if (v310)
		sub_1400579E0(v310, v286, v208);
	sub_140008410((__int64)v305);
	sub_14018B900((__int64)v306, 0);
	sub_140008410((__int64)&v293);
	sub_14018B900((__int64)v294, 0);
	sub_140008410((__int64)v302);
	sub_14018B900((__int64)v303, 0);
	return 1i64;
}
// 1403CEB09: variable 'v32' is possibly undefined
// 1403CEB1B: variable 'v51' is possibly undefined
// 1403CEBF5: variable 'v58' is possibly undefined
// 1403CF2F9: variable 'v136' is possibly undefined
// 1403CFA8A: variable 'v199' is possibly undefined
// 1403CFA9C: variable 'v200' is possibly undefined
// 1403CFA9C: variable 'v201' is possibly undefined
// 1403CFAD2: variable 'v204' is possibly undefined
// 1403CFAE1: variable 'v205' is possibly undefined
// 1403CFAFD: variable 'v206' is possibly undefined
// 1403CFB56: variable 'v207' is possibly undefined
// 1403CFC8C: variable 'v222' is possibly undefined
// 1403CFCBD: variable 'v224' is possibly undefined
// 1403CFCCF: variable 'v225' is possibly undefined
// 1403CFCCF: variable 'v226' is possibly undefined
// 1403CFD00: variable 'v228' is possibly undefined
// 1403CFD12: variable 'v229' is possibly undefined
// 1403CFD12: variable 'v230' is possibly undefined
// 1403CFD43: variable 'v232' is possibly undefined
// 1403CFD55: variable 'v233' is possibly undefined
// 1403CFD55: variable 'v234' is possibly undefined
// 1403CFD86: variable 'v236' is possibly undefined
// 1403CFD98: variable 'v237' is possibly undefined
// 1403CFD98: variable 'v238' is possibly undefined
// 1403CFDC9: variable 'v240' is possibly undefined
// 1403CFDDB: variable 'v241' is possibly undefined
// 1403CFDDB: variable 'v242' is possibly undefined
// 1403CFE0C: variable 'v244' is possibly undefined
// 1403CFE1E: variable 'v245' is possibly undefined
// 1403CFE1E: variable 'v246' is possibly undefined
// 1403CFE4F: variable 'v248' is possibly undefined
// 1403CFE61: variable 'v249' is possibly undefined
// 1403CFE61: variable 'v250' is possibly undefined
// 1403CFE92: variable 'v252' is possibly undefined
// 1403CFEA4: variable 'v253' is possibly undefined
// 1403CFEA4: variable 'v254' is possibly undefined
// 1403CFECB: variable 'v256' is possibly undefined
// 1403CFEE7: variable 'v257' is possibly undefined
// 1403CFEE7: variable 'v258' is possibly undefined
// 1403CFF18: variable 'v260' is possibly undefined
// 1403CFF2A: variable 'v261' is possibly undefined
// 1403CFF2A: variable 'v262' is possibly undefined
// 1403CFF5C: variable 'v265' is possibly undefined
// 1403CFF6E: variable 'v266' is possibly undefined
// 1403CFF4E: variable 'v264' is possibly undefined
// 1403CFF9F: variable 'v268' is possibly undefined
// 1403CFFB1: variable 'v269' is possibly undefined
// 1403CFFB1: variable 'v270' is possibly undefined
// 1403D0088: variable 'v276' is possibly undefined
// 1403D0132: variable 'v281' is possibly undefined
// 1403D0188: variable 'v282' is possibly undefined
// 1403D0203: variable 'v286' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6A1A0: using guessed type wchar_t *off_140A6A1A0[2];
// 140A6A1D8: using guessed type wchar_t *off_140A6A1D8[2];
// 140A6A408: using guessed type wchar_t *off_140A6A408[2];
// 140AF6590: using guessed type wchar_t aTcategories[12];
// 140AF65A8: using guessed type wchar_t aNid_4[4];
// 140AF65B0: using guessed type wchar_t aNtier3amount[13];
// 140AF65D0: using guessed type wchar_t aTunlockedcateg[20];
// 140AF65F8: using guessed type wchar_t aNpowercost[11];
// 140AF6610: using guessed type wchar_t aNitemidunlock[14];
// 140AF6630: using guessed type wchar_t aEeldanavailabi[19];
// 140AF6658: using guessed type wchar_t aBiscached[10];
// 140AF6670: using guessed type wchar_t aStrname_10[8];
// 140AF6680: using guessed type wchar_t aFpowerincatego[17];
// 140AF66D8: using guessed type wchar_t aNid_3[4];
// 140AF66E0: using guessed type wchar_t aNunlockcategor[18];
// 140AF6708: using guessed type wchar_t aNtier2amount[13];
// 140AF6728: using guessed type wchar_t aNhighesttierun[21];
// 140AF6758: using guessed type wchar_t aNcategoriestou[20];
// 140AF6780: using guessed type wchar_t aTaugments[10];
// 140AF6798: using guessed type wchar_t aStrtitle[9];
// 140AF67B0: using guessed type wchar_t aStrdescription[15];
// 140AF6848: using guessed type wchar_t aBrequiredokay[14];
// 140AF6868: using guessed type wchar_t aNdisplayrow[12];
// 140AF6880: using guessed type wchar_t aBunlocked[10];
// 140AF6898: using guessed type wchar_t aNeldanaugmenta[29];
// 140AF68D8: using guessed type wchar_t aNcategorytier[14];
// 140AF68F8: using guessed type wchar_t aNspellidaugmen[16];
// 140AF6918: using guessed type wchar_t aNdisplaycolumn[15];
// 140AF6938: using guessed type wchar_t aNcategoryid[12];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638AC: using guessed type int dword_140C638AC;
// 140C63FB8: using guessed type __int64 qword_140C63FB8;
// 140C64C58: using guessed type __int64 qword_140C64C58;
// 140C653A0: using guessed type __int64 qword_140C653A0;
// 140C65444: using guessed type int dword_140C65444;
// 140C655F8: using guessed type int dword_140C655F8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140DC2338: using guessed type int dword_140DC2338;
// 140DC233C: using guessed type int dword_140DC233C;
// 1403CE4A0: using guessed type char var_2D0[8];
// 1403CE4A0: using guessed type char var_2F0[8];
// 1403CE4A0: using guessed type char var_268[8];
// 1403CE4A0: using guessed type char var_188[8];

