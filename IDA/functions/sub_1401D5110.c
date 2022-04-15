#include "../winhttp.h"

//----- (00000001401D5110) ----------------------------------------------------
__int64 __fastcall sub_1401D5110(int* a1, unsigned __int64 a2, unsigned __int64 a3)
{
	unsigned __int16* v3; // rsi
	unsigned int v4; // ebp
	__int64 v5; // r14
	unsigned int v6; // r13d
	unsigned __int64 v7; // r12
	unsigned __int8* v8; // r11
	unsigned int v9; // r10d
	int v10; // edx
	unsigned int v11; // r8d
	unsigned int v12; // eax
	unsigned int v13; // r15d
	int v14; // edi
	unsigned __int64 v15; // rbx
	int v16; // edx
	unsigned int v17; // r9d
	unsigned int v18; // r10d
	unsigned __int16* v19; // r14
	__int64 v20; // rbx
	unsigned __int64 v21; // rcx
	int v22; // edx
	unsigned int v23; // r8d
	int v24; // ecx
	unsigned int v25; // ecx
	unsigned int v26; // r10d
	unsigned __int16* v27; // r9
	int v28; // edx
	unsigned int v29; // ecx
	unsigned int v30; // r10d
	__int64 v31; // r8
	unsigned int v32; // edx
	unsigned __int16* v33; // r9
	unsigned int v34; // ecx
	unsigned int v35; // r10d
	__int64 v36; // r8
	unsigned int v37; // edx
	unsigned __int16* v38; // r9
	unsigned int v39; // ecx
	unsigned int v40; // r10d
	__int64 v41; // r8
	unsigned int v42; // edx
	unsigned __int16* v43; // r9
	unsigned int v44; // ecx
	unsigned int v45; // r10d
	__int64 v46; // r8
	unsigned int v47; // edx
	unsigned __int16* v48; // r9
	unsigned int v49; // ecx
	unsigned int v50; // r10d
	__int64 v51; // r8
	unsigned int v52; // edx
	unsigned __int16* v53; // r9
	unsigned int v54; // ecx
	unsigned int v55; // r10d
	__int64 v56; // r8
	unsigned int v57; // edx
	unsigned __int16* v58; // r9
	unsigned int v59; // ecx
	char v60; // cl
	char v61; // cl
	int v62; // ecx
	unsigned __int64 v63; // rdx
	int v64; // ecx
	int v65; // esi
	__int64 v66; // r8
	unsigned __int16* v67; // rbx
	int v68; // edx
	unsigned int v69; // ecx
	unsigned int v70; // r10d
	unsigned int v71; // ebx
	unsigned int v72; // r8d
	int v73; // esi
	int v74; // r9d
	unsigned __int16* v75; // rdi
	int v76; // edx
	unsigned int v77; // ecx
	unsigned int v78; // r10d
	unsigned int v79; // ebx
	unsigned int v80; // r8d
	int v81; // esi
	int v82; // r9d
	unsigned __int16* v83; // rdi
	int v84; // edx
	unsigned int v85; // ecx
	unsigned int v86; // r10d
	unsigned int v87; // ebx
	unsigned int v88; // r8d
	int v89; // esi
	int v90; // r9d
	unsigned __int16* v91; // rdi
	int v92; // edx
	unsigned int v93; // ecx
	unsigned int v94; // r10d
	unsigned int v95; // ebx
	unsigned int v96; // r8d
	int v97; // esi
	int v98; // r9d
	unsigned __int16* v99; // rdi
	int v100; // edx
	unsigned int v101; // ecx
	unsigned int v102; // r10d
	unsigned int v103; // ebx
	unsigned int v104; // r8d
	int v105; // esi
	int v106; // r9d
	unsigned __int16* v107; // rdi
	int v108; // edx
	unsigned int v109; // ecx
	unsigned int v110; // r10d
	unsigned int v111; // ebx
	unsigned int v112; // r8d
	int v113; // esi
	int v114; // r9d
	unsigned __int16* v115; // rdi
	int v116; // edx
	unsigned int v117; // ecx
	unsigned int v118; // r10d
	unsigned int v119; // ebx
	unsigned __int64 v120; // r8
	int v121; // edx
	unsigned int v122; // ecx
	unsigned int v123; // r10d
	__int64 v124; // r9
	unsigned int v125; // edx
	unsigned int v126; // ecx
	unsigned int v127; // r10d
	unsigned __int16* v128; // r9
	unsigned int v129; // r10d
	unsigned int v130; // r8d
	unsigned int v131; // edx
	unsigned int v132; // r10d
	unsigned int v133; // r8d
	unsigned int v134; // ecx
	unsigned __int64 v135; // rdx
	unsigned __int64 v136; // rdx
	int v137; // ecx
	unsigned int v138; // r10d
	unsigned int v139; // edx
	unsigned int v140; // ecx
	unsigned int v141; // ecx
	unsigned int v142; // r10d
	unsigned int v143; // edx
	unsigned int v144; // ecx
	unsigned int v145; // edx
	int v146; // ecx
	int v147; // edx
	unsigned int v148; // r8d
	unsigned int v149; // r10d
	unsigned __int16* v150; // rbx
	int v151; // edx
	unsigned int v152; // ecx
	unsigned int v153; // r10d
	unsigned int v154; // r8d
	unsigned __int16* v155; // r9
	int v156; // edx
	unsigned int v157; // ecx
	unsigned int v158; // r10d
	__int64 v159; // r8
	int v160; // edx
	unsigned __int16* v161; // r9
	unsigned int v162; // ecx
	unsigned int v163; // r15d
	unsigned int v164; // r10d
	unsigned int v165; // edx
	unsigned int v166; // r8d
	unsigned int v167; // r10d
	unsigned __int16* v168; // rbx
	int v169; // edx
	unsigned int v170; // ecx
	unsigned int v171; // r10d
	unsigned int v172; // r8d
	unsigned __int16* v173; // r9
	int v174; // edx
	unsigned int v175; // ecx
	unsigned int v176; // r10d
	__int64 v177; // r8
	int v178; // edx
	unsigned __int16* v179; // r9
	unsigned int v180; // ecx
	unsigned int v181; // r15d
	unsigned __int16* v182; // r9
	unsigned __int16* v183; // r8
	int v184; // edx
	unsigned int v185; // ecx
	int v186; // ebx
	unsigned __int16* v187; // rbx
	int v188; // edx
	unsigned int v189; // ecx
	unsigned int v190; // r10d
	unsigned int v191; // r8d
	unsigned __int16* v192; // r9
	int v193; // edx
	unsigned int v194; // ecx
	unsigned int v195; // r10d
	__int64 v196; // r8
	unsigned int v197; // edx
	unsigned __int16* v198; // r9
	unsigned int v199; // ecx
	unsigned int v200; // r10d
	__int64 v201; // r8
	unsigned int v202; // edx
	unsigned __int16* v203; // r9
	unsigned int v204; // ecx
	unsigned int v205; // r10d
	__int64 v206; // r8
	unsigned int v207; // edx
	unsigned __int16* v208; // r9
	unsigned int v209; // ecx
	unsigned int v210; // r10d
	__int64 v211; // r8
	unsigned int v212; // edx
	unsigned __int16* v213; // r9
	unsigned int v214; // ecx
	int v215; // r8d
	unsigned int v216; // r8d
	unsigned int v217; // r9d
	__int64 v218; // rdx
	int v219; // r8d
	int v220; // r9d
	unsigned __int16* v221; // r14
	int v222; // esi
	unsigned int v223; // edi
	unsigned __int16* v224; // rbx
	int v225; // edx
	unsigned int v226; // ecx
	int v227; // r9d
	unsigned int v228; // eax
	int v229; // edx
	unsigned int v230; // ecx
	unsigned int v231; // r10d
	unsigned int v232; // r9d
	unsigned __int16* v233; // rbx
	int v234; // edx
	unsigned int v235; // ecx
	unsigned int v236; // r10d
	__int64 v237; // r9
	unsigned __int16* v238; // rbx
	int v239; // edx
	unsigned int v240; // ecx
	unsigned int v241; // r10d
	__int64 v242; // r9
	unsigned __int16* v243; // r9
	int v244; // edx
	unsigned int v245; // ecx
	unsigned int v246; // edx
	unsigned int v247; // r9d
	unsigned int v248; // edi
	int v250; // ecx
	unsigned int v251; // r15d
	unsigned int v252; // r8d
	unsigned __int64 v253; // rdx
	unsigned int v254; // edi
	__int64 v255; // rbx
	unsigned __int64 v256; // rdx
	__int64 v257; // r8
	unsigned __int64 v258; // rdx
	__int64 v259; // r9
	char v260; // cl
	char v261; // cl
	unsigned int v262; // [rsp+0h] [rbp-88h]
	unsigned int v263; // [rsp+4h] [rbp-84h]
	unsigned int v264; // [rsp+8h] [rbp-80h]
	unsigned int v265; // [rsp+Ch] [rbp-7Ch]
	int v266; // [rsp+10h] [rbp-78h]
	__int64 v267; // [rsp+18h] [rbp-70h]
	unsigned __int16* v268; // [rsp+20h] [rbp-68h]
	unsigned __int64 v269; // [rsp+28h] [rbp-60h]
	int v270; // [rsp+30h] [rbp-58h]
	int v271; // [rsp+34h] [rbp-54h]
	unsigned int v275; // [rsp+A8h] [rbp+20h]

	v3 = (unsigned __int16*)*((_QWORD*)a1 + 2);
	v4 = a1[18];
	v5 = *((_QWORD*)a1 + 3);
	v6 = a1[22];
	v7 = *((_QWORD*)a1 + 6);
	v8 = (unsigned __int8*)*((_QWORD*)a1 + 4);
	v9 = a1[10];
	v262 = a1[19];
	v263 = a1[20];
	v264 = a1[21];
	v268 = v3;
	v267 = v5;
	v10 = (1 << a1[2]) - 1;
	v266 = *a1;
	v269 = *((_QWORD*)a1 + 7);
	v270 = (1 << a1[1]) - 1;
	v11 = a1[16];
	v12 = a1[11];
	v265 = a1[17];
	v271 = v10;
	v275 = v11;
	v13 = 0;
	while (1)
	{
		v14 = v10 & v11;
		v15 = (v10 & v11) + (unsigned __int64)(16 * v4);
		v16 = v3[v15];
		if (v9 < 0x1000000)
		{
			v9 <<= 8;
			v12 = *v8++ | (v12 << 8);
		}
		v17 = v16 * (v9 >> 11);
		if (v12 < v17)
		{
			v18 = v16 * (v9 >> 11);
			v19 = v3 + 1846;
			v3[v15] = v16 + ((unsigned int)(2048 - v16) >> 5);
			if (v11 || v265)
			{
				v20 = v267;
				v21 = v7;
				if (!v7)
					v21 = v269;
				v11 = v275;
				v19 += 768 * ((v270 & v275) << v266) + 768 * (*(unsigned __int8*)(v21 + v267 - 1) >> (8 - v266));
			}
			else
			{
				v20 = v267;
			}
			v275 = v11 + 1;
			if (v4 >= 7)
			{
				v62 = 6;
				if (v4 < 0xA)
					v62 = 3;
				v63 = 0i64;
				v4 -= v62;
				if (v7 < v262)
					v63 = v269;
				v64 = *(unsigned __int8*)(v7 + v63 - v262 + v20);
				v65 = 2 * v64;
				v66 = (2 * (_WORD)v64) & 0x100;
				v67 = &v19[v66];
				v68 = v67[257];
				if (v17 < 0x1000000)
				{
					v18 = v17 << 8;
					v12 = *v8++ | (v12 << 8);
				}
				v69 = v68 * (v18 >> 11);
				if (v12 >= v69)
				{
					v70 = v18 - v69;
					v12 -= v69;
					v67[257] -= v67[257] >> 5;
					v71 = 3;
				}
				else
				{
					v70 = v68 * (v18 >> 11);
					LOWORD(v66) = ~(_WORD)v66;
					v67[257] = v68 + ((unsigned int)(2048 - v68) >> 5);
					v71 = 2;
				}
				v72 = v66 & 0x100;
				v73 = 2 * v65;
				v74 = v73 & v72;
				v75 = &v19[v71 + v72 + (unsigned __int64)(v73 & v72)];
				v76 = *v75;
				if (v70 < 0x1000000)
				{
					v70 <<= 8;
					v12 = *v8++ | (v12 << 8);
				}
				v77 = v76 * (v70 >> 11);
				if (v12 >= v77)
				{
					v78 = v70 - v77;
					v12 -= v77;
					v79 = 2 * v71 + 1;
					*v75 -= *v75 >> 5;
				}
				else
				{
					v78 = v76 * (v70 >> 11);
					v74 = ~v74;
					v79 = 2 * v71;
					*v75 = v76 + ((unsigned int)(2048 - v76) >> 5);
				}
				v80 = v74 & v72;
				v81 = 2 * v73;
				v82 = v81 & v80;
				v83 = &v19[v79 + v80 + (unsigned __int64)(v81 & v80)];
				v84 = *v83;
				if (v78 < 0x1000000)
				{
					v78 <<= 8;
					v12 = *v8++ | (v12 << 8);
				}
				v85 = v84 * (v78 >> 11);
				if (v12 >= v85)
				{
					v86 = v78 - v85;
					v12 -= v85;
					v87 = 2 * v79 + 1;
					*v83 -= *v83 >> 5;
				}
				else
				{
					v86 = v84 * (v78 >> 11);
					v82 = ~v82;
					v87 = 2 * v79;
					*v83 = v84 + ((unsigned int)(2048 - v84) >> 5);
				}
				v88 = v82 & v80;
				v89 = 2 * v81;
				v90 = v89 & v88;
				v91 = &v19[v87 + v88 + (unsigned __int64)(v89 & v88)];
				v92 = *v91;
				if (v86 < 0x1000000)
				{
					v86 <<= 8;
					v12 = *v8++ | (v12 << 8);
				}
				v93 = v92 * (v86 >> 11);
				if (v12 >= v93)
				{
					v94 = v86 - v93;
					v12 -= v93;
					v95 = 2 * v87 + 1;
					*v91 -= *v91 >> 5;
				}
				else
				{
					v94 = v92 * (v86 >> 11);
					v90 = ~v90;
					v95 = 2 * v87;
					*v91 = v92 + ((unsigned int)(2048 - v92) >> 5);
				}
				v96 = v90 & v88;
				v97 = 2 * v89;
				v98 = v97 & v96;
				v99 = &v19[v95 + v96 + (unsigned __int64)(v97 & v96)];
				v100 = *v99;
				if (v94 < 0x1000000)
				{
					v94 <<= 8;
					v12 = *v8++ | (v12 << 8);
				}
				v101 = v100 * (v94 >> 11);
				if (v12 >= v101)
				{
					v102 = v94 - v101;
					v12 -= v101;
					v103 = 2 * v95 + 1;
					*v99 -= *v99 >> 5;
				}
				else
				{
					v102 = v100 * (v94 >> 11);
					v98 = ~v98;
					v103 = 2 * v95;
					*v99 = v100 + ((unsigned int)(2048 - v100) >> 5);
				}
				v104 = v98 & v96;
				v105 = 2 * v97;
				v106 = v105 & v104;
				v107 = &v19[v103 + v104 + (unsigned __int64)(v105 & v104)];
				v108 = *v107;
				if (v102 < 0x1000000)
				{
					v102 <<= 8;
					v12 = *v8++ | (v12 << 8);
				}
				v109 = v108 * (v102 >> 11);
				if (v12 >= v109)
				{
					v110 = v102 - v109;
					v12 -= v109;
					v111 = 2 * v103 + 1;
					*v107 -= *v107 >> 5;
				}
				else
				{
					v110 = v108 * (v102 >> 11);
					v106 = ~v106;
					v111 = 2 * v103;
					*v107 = v108 + ((unsigned int)(2048 - v108) >> 5);
				}
				v112 = v106 & v104;
				v113 = 2 * v105;
				v114 = v113 & v112;
				v115 = &v19[v111 + v112 + (unsigned __int64)(v113 & v112)];
				v116 = *v115;
				if (v110 < 0x1000000)
				{
					v110 <<= 8;
					v12 = *v8++ | (v12 << 8);
				}
				v117 = v116 * (v110 >> 11);
				if (v12 >= v117)
				{
					v118 = v110 - v117;
					v12 -= v117;
					v119 = 2 * v111 + 1;
					*v115 -= *v115 >> 5;
				}
				else
				{
					v118 = v116 * (v110 >> 11);
					v114 = ~v114;
					v119 = 2 * v111;
					*v115 = v116 + ((unsigned int)(2048 - v116) >> 5);
				}
				v120 = (v114 & v112) + (unsigned __int64)(v114 & v112 & (2 * v113)) + v119;
				v121 = v19[v120];
				if (v118 < 0x1000000)
				{
					v118 <<= 8;
					v12 = *v8++ | (v12 << 8);
				}
				v3 = v268;
				v122 = v121 * (v118 >> 11);
				if (v12 >= v122)
				{
					v9 = v118 - v122;
					v12 -= v122;
					++v7;
					v19[v120] -= v19[v120] >> 5;
					v5 = v267;
					v11 = v275;
					*(_BYTE*)(v7 + v267 - 1) = 2 * v119 + 1;
				}
				else
				{
					v9 = v121 * (v118 >> 11);
					++v7;
					v19[v120] = v121 + ((unsigned int)(2048 - v121) >> 5);
					v5 = v267;
					v11 = v275;
					*(_BYTE*)(v7 + v267 - 1) = 2 * v119;
				}
			}
			else
			{
				v22 = v19[1];
				v23 = 3;
				v24 = 3;
				if (v4 < 4)
					v24 = v4;
				v4 -= v24;
				if (v17 < 0x1000000)
				{
					v18 = v17 << 8;
					v12 = *v8++ | (v12 << 8);
				}
				v25 = v22 * (v18 >> 11);
				if (v12 >= v25)
				{
					v26 = v18 - v25;
					v12 -= v25;
					v19[1] -= v19[1] >> 5;
				}
				else
				{
					v26 = v22 * (v18 >> 11);
					v23 = 2;
					v19[1] = v22 + ((unsigned int)(2048 - v22) >> 5);
				}
				v27 = &v19[v23];
				v28 = *v27;
				if (v26 < 0x1000000)
				{
					v26 <<= 8;
					v12 = *v8++ | (v12 << 8);
				}
				v29 = v28 * (v26 >> 11);
				if (v12 >= v29)
				{
					v30 = v26 - v29;
					v12 -= v29;
					v31 = 2 * v23 + 1;
					*v27 -= *v27 >> 5;
				}
				else
				{
					v30 = v28 * (v26 >> 11);
					v31 = 2 * v23;
					*v27 = v28 + ((unsigned int)(2048 - v28) >> 5);
				}
				v32 = v19[v31];
				v33 = &v19[v31];
				if (v30 < 0x1000000)
				{
					v30 <<= 8;
					v12 = *v8++ | (v12 << 8);
				}
				v34 = v32 * (v30 >> 11);
				if (v12 >= v34)
				{
					v35 = v30 - v34;
					v12 -= v34;
					v36 = (unsigned int)(2 * v31 + 1);
					*v33 = v32 - (v32 >> 5);
				}
				else
				{
					v35 = v32 * (v30 >> 11);
					v36 = (unsigned int)(2 * v31);
					*v33 = v32 + ((2048 - v32) >> 5);
				}
				v37 = v19[v36];
				v38 = &v19[v36];
				if (v35 < 0x1000000)
				{
					v35 <<= 8;
					v12 = *v8++ | (v12 << 8);
				}
				v39 = v37 * (v35 >> 11);
				if (v12 >= v39)
				{
					v40 = v35 - v39;
					v12 -= v39;
					v41 = (unsigned int)(2 * v36 + 1);
					*v38 = v37 - (v37 >> 5);
				}
				else
				{
					v40 = v37 * (v35 >> 11);
					v41 = (unsigned int)(2 * v36);
					*v38 = v37 + ((2048 - v37) >> 5);
				}
				v42 = v19[v41];
				v43 = &v19[v41];
				if (v40 < 0x1000000)
				{
					v40 <<= 8;
					v12 = *v8++ | (v12 << 8);
				}
				v44 = v42 * (v40 >> 11);
				if (v12 >= v44)
				{
					v45 = v40 - v44;
					v12 -= v44;
					v46 = (unsigned int)(2 * v41 + 1);
					*v43 = v42 - (v42 >> 5);
				}
				else
				{
					v45 = v42 * (v40 >> 11);
					v46 = (unsigned int)(2 * v41);
					*v43 = v42 + ((2048 - v42) >> 5);
				}
				v47 = v19[v46];
				v48 = &v19[v46];
				if (v45 < 0x1000000)
				{
					v45 <<= 8;
					v12 = *v8++ | (v12 << 8);
				}
				v49 = v47 * (v45 >> 11);
				if (v12 >= v49)
				{
					v50 = v45 - v49;
					v12 -= v49;
					v51 = (unsigned int)(2 * v46 + 1);
					*v48 = v47 - (v47 >> 5);
				}
				else
				{
					v50 = v47 * (v45 >> 11);
					v51 = (unsigned int)(2 * v46);
					*v48 = v47 + ((2048 - v47) >> 5);
				}
				v52 = v19[v51];
				v53 = &v19[v51];
				if (v50 < 0x1000000)
				{
					v50 <<= 8;
					v12 = *v8++ | (v12 << 8);
				}
				v54 = v52 * (v50 >> 11);
				if (v12 >= v54)
				{
					v55 = v50 - v54;
					v12 -= v54;
					v56 = (unsigned int)(2 * v51 + 1);
					*v53 = v52 - (v52 >> 5);
				}
				else
				{
					v55 = v52 * (v50 >> 11);
					v56 = (unsigned int)(2 * v51);
					*v53 = v52 + ((2048 - v52) >> 5);
				}
				v57 = v19[v56];
				v58 = &v19[v56];
				if (v55 < 0x1000000)
				{
					v55 <<= 8;
					v12 = *v8++ | (v12 << 8);
				}
				v59 = v57 * (v55 >> 11);
				v5 = v267;
				if (v12 >= v59)
				{
					v9 = v55 - v59;
					v12 -= v59;
					v61 = 2 * v56 + 1;
					v11 = v275;
					*v58 = v57 - (v57 >> 5);
					*(_BYTE*)(v7 + v267) = v61;
					++v7;
				}
				else
				{
					v9 = v57 * (v55 >> 11);
					++v7;
					*v58 = v57 + ((2048 - v57) >> 5);
					v60 = 2 * v56;
					v11 = v275;
					*(_BYTE*)(v7 + v267 - 1) = v60;
				}
			}
			goto LABEL_265;
		}
		v123 = v9 - v17;
		v12 -= v17;
		v124 = v4;
		v3[v15] -= v3[v15] >> 5;
		v125 = v3[v4 + 192];
		if (v123 < 0x1000000)
		{
			v123 <<= 8;
			v12 = *v8++ | (v12 << 8);
		}
		v126 = v125 * (v123 >> 11);
		if (v12 >= v126)
		{
			v129 = v123 - v126;
			v12 -= v126;
			v3[v4 + 192] = v125 - (v125 >> 5);
			if (!v265 && !v11)
				return 1i64;
			v130 = v3[v4 + 204];
			if (v129 < 0x1000000)
			{
				v129 <<= 8;
				v12 = *v8++ | (v12 << 8);
			}
			v131 = v130 * (v129 >> 11);
			if (v12 >= v131)
			{
				v138 = v129 - v131;
				v12 -= v131;
				v3[v4 + 204] = v130 - (v130 >> 5);
				v139 = v3[v4 + 216];
				if (v138 < 0x1000000)
				{
					v138 <<= 8;
					v12 = *v8++ | (v12 << 8);
				}
				v140 = v139 * (v138 >> 11);
				if (v12 >= v140)
				{
					v142 = v138 - v140;
					v12 -= v140;
					v3[v4 + 216] = v139 - (v139 >> 5);
					v143 = v3[v4 + 228];
					if (v142 < 0x1000000)
					{
						v142 <<= 8;
						v12 = *v8++ | (v12 << 8);
					}
					v144 = v143 * (v142 >> 11);
					if (v12 >= v144)
					{
						v127 = v142 - v144;
						v12 -= v144;
						v141 = v6;
						v6 = v264;
						v3[v4 + 228] = v143 - (v143 >> 5);
					}
					else
					{
						v127 = v143 * (v142 >> 11);
						v3[v4 + 228] = v143 + ((2048 - v143) >> 5);
						v141 = v264;
					}
					v264 = v263;
				}
				else
				{
					v127 = v139 * (v138 >> 11);
					v3[v4 + 216] = v139 + ((2048 - v139) >> 5);
					v141 = v263;
				}
				v145 = v262;
				v262 = v141;
				v263 = v145;
			}
			else
			{
				v132 = v130 * (v129 >> 11);
				v3[v4 + 204] = v130 + ((2048 - v130) >> 5);
				v133 = v3[v15 + 240];
				if (v131 < 0x1000000)
				{
					v132 = v131 << 8;
					v12 = *v8++ | (v12 << 8);
				}
				v134 = v133 * (v132 >> 11);
				if (v12 < v134)
				{
					v9 = v133 * (v132 >> 11);
					v135 = 0i64;
					v3[v15 + 240] = v133 + ((2048 - v133) >> 5);
					if (v7 < v262)
						v135 = v269;
					v11 = ++v275;
					v136 = v7 + v135 - v262;
					*(_BYTE*)(++v7 + v5 - 1) = *(_BYTE*)(v136 + v5);
					v137 = 11;
					if (v4 < 7)
						v137 = 9;
					v4 = v137;
					goto LABEL_265;
				}
				v127 = v132 - v134;
				v12 -= v134;
				v3[v15 + 240] = v133 - (v133 >> 5);
			}
			v146 = 11;
			if (v4 < 7)
				v146 = 8;
			v128 = v3 + 1332;
			v4 = v146;
		}
		else
		{
			v127 = v125 * (v123 >> 11);
			v4 += 12;
			v3[v124 + 192] = v125 + ((2048 - v125) >> 5);
			v128 = v3 + 818;
		}
		v147 = *v128;
		if (v127 < 0x1000000)
		{
			v127 <<= 8;
			v12 = *v8++ | (v12 << 8);
		}
		v148 = v147 * (v127 >> 11);
		if (v12 >= v148)
		{
			v164 = v127 - v148;
			v12 -= v148;
			*v128 -= *v128 >> 5;
			v165 = v128[1];
			if (v164 < 0x1000000)
			{
				v164 <<= 8;
				v12 = *v8++ | (v12 << 8);
			}
			v166 = v165 * (v164 >> 11);
			if (v12 >= v166)
			{
				v9 = v164 - v166;
				v12 -= v166;
				v181 = 1;
				v182 = v128 + 258;
				*(v182 - 257) = v165 - (v165 >> 5);
				do
				{
					v183 = &v182[v181];
					v184 = *v183;
					if (v9 < 0x1000000)
					{
						v9 <<= 8;
						v12 = *v8++ | (v12 << 8);
					}
					v185 = v184 * (v9 >> 11);
					if (v12 >= v185)
					{
						v9 -= v185;
						v12 -= v185;
						v181 = 2 * v181 + 1;
						*v183 -= *v183 >> 5;
					}
					else
					{
						v9 = v184 * (v9 >> 11);
						v181 *= 2;
						*v183 = v184 + ((unsigned int)(2048 - v184) >> 5);
					}
				} while (v181 < 0x100);
				v163 = v181 - 240;
			}
			else
			{
				v167 = v165 * (v164 >> 11);
				v168 = &v128[8 * v14 + 130];
				v128[1] = v165 + ((2048 - v165) >> 5);
				v169 = v168[1];
				if (v166 < 0x1000000)
				{
					v167 = v166 << 8;
					v12 = *v8++ | (v12 << 8);
				}
				v170 = v169 * (v167 >> 11);
				if (v12 >= v170)
				{
					v171 = v167 - v170;
					v12 -= v170;
					v172 = 3;
					v168[1] -= v168[1] >> 5;
				}
				else
				{
					v171 = v169 * (v167 >> 11);
					v172 = 2;
					v168[1] = v169 + ((unsigned int)(2048 - v169) >> 5);
				}
				v173 = &v168[v172];
				v174 = *v173;
				if (v171 < 0x1000000)
				{
					v171 <<= 8;
					v12 = *v8++ | (v12 << 8);
				}
				v175 = v174 * (v171 >> 11);
				if (v12 >= v175)
				{
					v176 = v171 - v175;
					v12 -= v175;
					v177 = 2 * v172 + 1;
					*v173 -= *v173 >> 5;
				}
				else
				{
					v176 = v174 * (v171 >> 11);
					v177 = 2 * v172;
					*v173 = v174 + ((unsigned int)(2048 - v174) >> 5);
				}
				v178 = v168[v177];
				v179 = &v168[v177];
				if (v176 < 0x1000000)
				{
					v176 <<= 8;
					v12 = *v8++ | (v12 << 8);
				}
				v180 = v178 * (v176 >> 11);
				if (v12 >= v180)
				{
					v9 = v176 - v180;
					v12 -= v180;
					v163 = 2 * v177 + 1;
					*v179 = v168[v177] - (v168[v177] >> 5);
				}
				else
				{
					v9 = v178 * (v176 >> 11);
					v163 = 2 * v177;
					*v179 = v178 + ((unsigned int)(2048 - v178) >> 5);
				}
			}
		}
		else
		{
			v149 = v147 * (v127 >> 11);
			v150 = &v128[8 * v14 + 2];
			*v128 = v147 + ((unsigned int)(2048 - v147) >> 5);
			v151 = v150[1];
			if (v148 < 0x1000000)
			{
				v149 = v148 << 8;
				v12 = *v8++ | (v12 << 8);
			}
			v152 = v151 * (v149 >> 11);
			if (v12 >= v152)
			{
				v153 = v149 - v152;
				v12 -= v152;
				v154 = 3;
				v150[1] -= v150[1] >> 5;
			}
			else
			{
				v153 = v151 * (v149 >> 11);
				v154 = 2;
				v150[1] = v151 + ((unsigned int)(2048 - v151) >> 5);
			}
			v155 = &v150[v154];
			v156 = *v155;
			if (v153 < 0x1000000)
			{
				v153 <<= 8;
				v12 = *v8++ | (v12 << 8);
			}
			v157 = v156 * (v153 >> 11);
			if (v12 >= v157)
			{
				v158 = v153 - v157;
				v12 -= v157;
				v159 = 2 * v154 + 1;
				*v155 -= *v155 >> 5;
			}
			else
			{
				v158 = v156 * (v153 >> 11);
				v159 = 2 * v154;
				*v155 = v156 + ((unsigned int)(2048 - v156) >> 5);
			}
			v160 = v150[v159];
			v161 = &v150[v159];
			if (v158 < 0x1000000)
			{
				v158 <<= 8;
				v12 = *v8++ | (v12 << 8);
			}
			v162 = v160 * (v158 >> 11);
			if (v12 >= v162)
			{
				v9 = v158 - v162;
				v12 -= v162;
				v163 = 2 * v159 - 7;
				*v161 = v150[v159] - (v150[v159] >> 5);
			}
			else
			{
				v9 = v160 * (v158 >> 11);
				v163 = 2 * v159 - 8;
				*v161 = v160 + ((unsigned int)(2048 - v160) >> 5);
			}
		}
		if (v4 >= 0xC)
			break;
		v248 = v275;
		v247 = v262;
	LABEL_251:
		v251 = v163 + 2;
		if (a2 == v7)
			return 1i64;
		v252 = v251;
		if (a2 - v7 < v251)
			v252 = a2 - v7;
		v253 = 0i64;
		if (v7 < v247)
			v253 = v269;
		v254 = v252 + v248;
		v255 = v252;
		v13 = v251 - v252;
		v256 = v7 + v253 - v247;
		v275 = v254;
		if (v252 > v269 - v256)
		{
			do
			{
				v261 = *(_BYTE*)(v256 + v5);
				++v256;
				*(_BYTE*)(++v7 + v5 - 1) = v261;
				if (v256 == v269)
					v256 = 0i64;
				--v252;
			} while (v252);
			v3 = v268;
		}
		else
		{
			v257 = v7 + v5;
			v258 = v256 - v7;
			v7 += v255;
			v259 = v257 + v255;
			do
			{
				v260 = *(_BYTE*)(v258 + v257++);
				*(_BYTE*)(v257 - 1) = v260;
			} while (v257 != v259);
		}
		v11 = v254;
	LABEL_265:
		if (v7 >= a2 || (unsigned __int64)v8 >= a3)
			goto LABEL_269;
		v10 = v271;
	}
	v186 = 3;
	if (v163 < 4)
		v186 = v163;
	v187 = &v3[(v186 << 6) + 432];
	v188 = v187[1];
	if (v9 < 0x1000000)
	{
		v9 <<= 8;
		v12 = *v8++ | (v12 << 8);
	}
	v189 = v188 * (v9 >> 11);
	if (v12 >= v189)
	{
		v190 = v9 - v189;
		v12 -= v189;
		v191 = 3;
		v187[1] -= v187[1] >> 5;
	}
	else
	{
		v190 = v188 * (v9 >> 11);
		v191 = 2;
		v187[1] = v188 + ((unsigned int)(2048 - v188) >> 5);
	}
	v192 = &v187[v191];
	v193 = *v192;
	if (v190 < 0x1000000)
	{
		v190 <<= 8;
		v12 = *v8++ | (v12 << 8);
	}
	v194 = v193 * (v190 >> 11);
	if (v12 >= v194)
	{
		v195 = v190 - v194;
		v12 -= v194;
		v196 = 2 * v191 + 1;
		*v192 -= *v192 >> 5;
	}
	else
	{
		v195 = v193 * (v190 >> 11);
		v196 = 2 * v191;
		*v192 = v193 + ((unsigned int)(2048 - v193) >> 5);
	}
	v197 = v187[v196];
	v198 = &v187[v196];
	if (v195 < 0x1000000)
	{
		v195 <<= 8;
		v12 = *v8++ | (v12 << 8);
	}
	v199 = v197 * (v195 >> 11);
	if (v12 >= v199)
	{
		v200 = v195 - v199;
		v12 -= v199;
		v201 = (unsigned int)(2 * v196 + 1);
		*v198 = v197 - (v197 >> 5);
	}
	else
	{
		v200 = v197 * (v195 >> 11);
		v201 = (unsigned int)(2 * v196);
		*v198 = v197 + ((2048 - v197) >> 5);
	}
	v202 = v187[v201];
	v203 = &v187[v201];
	if (v200 < 0x1000000)
	{
		v200 <<= 8;
		v12 = *v8++ | (v12 << 8);
	}
	v204 = v202 * (v200 >> 11);
	if (v12 >= v204)
	{
		v205 = v200 - v204;
		v12 -= v204;
		v206 = (unsigned int)(2 * v201 + 1);
		*v203 = v202 - (v202 >> 5);
	}
	else
	{
		v205 = v202 * (v200 >> 11);
		v206 = (unsigned int)(2 * v201);
		*v203 = v202 + ((2048 - v202) >> 5);
	}
	v207 = v187[v206];
	v208 = &v187[v206];
	if (v205 < 0x1000000)
	{
		v205 <<= 8;
		v12 = *v8++ | (v12 << 8);
	}
	v209 = v207 * (v205 >> 11);
	if (v12 >= v209)
	{
		v210 = v205 - v209;
		v12 -= v209;
		v211 = (unsigned int)(2 * v206 + 1);
		*v208 = v207 - (v207 >> 5);
	}
	else
	{
		v210 = v207 * (v205 >> 11);
		v211 = (unsigned int)(2 * v206);
		*v208 = v207 + ((2048 - v207) >> 5);
	}
	v212 = v187[v211];
	v213 = &v187[v211];
	if (v210 < 0x1000000)
	{
		v210 <<= 8;
		v12 = *v8++ | (v12 << 8);
	}
	v214 = v212 * (v210 >> 11);
	if (v12 >= v214)
	{
		v9 = v210 - v214;
		v12 -= v214;
		v215 = 2 * v211 + 1;
		*v213 = v212 - (v212 >> 5);
	}
	else
	{
		v9 = v212 * (v210 >> 11);
		v215 = 2 * v211;
		*v213 = v212 + ((2048 - v212) >> 5);
	}
	v216 = v215 - 64;
	if (v216 < 4)
	{
	LABEL_242:
		v246 = v263;
		v6 = v264;
		v263 = v262;
		v247 = v216 + 1;
		v264 = v246;
		v262 = v216 + 1;
		if (v265)
		{
			if (v216 >= v265)
				return 1i64;
			v248 = v275;
		}
		else
		{
			v248 = v275;
			if (v216 >= v275)
				return 1i64;
		}
		v250 = 10;
		if (v4 < 0x13)
			v250 = 7;
		v4 = v250;
		goto LABEL_251;
	}
	v217 = v216;
	v218 = v216;
	v219 = v216 & 1 | 2;
	v220 = (v217 >> 1) - 1;
	if ((unsigned int)v218 < 0xE)
	{
		v216 = v219 << v220;
		v221 = &v3[v216 - v218 + 687];
		v222 = 1;
		v223 = 1;
		do
		{
			v224 = &v221[v223];
			v225 = *v224;
			if (v9 < 0x1000000)
			{
				v9 <<= 8;
				v12 = *v8++ | (v12 << 8);
			}
			v226 = v225 * (v9 >> 11);
			if (v12 >= v226)
			{
				v9 -= v226;
				v12 -= v226;
				v223 = 2 * v223 + 1;
				v216 |= v222;
				*v224 -= *v224 >> 5;
			}
			else
			{
				v9 = v225 * (v9 >> 11);
				v223 *= 2;
				*v224 = v225 + ((unsigned int)(2048 - v225) >> 5);
			}
			v222 *= 2;
			--v220;
		} while (v220);
		v3 = v268;
		v5 = v267;
		goto LABEL_242;
	}
	v227 = v220 - 4;
	do
	{
		if (v9 < 0x1000000)
		{
			v9 <<= 8;
			v12 = *v8++ | (v12 << 8);
		}
		v9 >>= 1;
		v228 = v12 - v9;
		v219 = 2 * v219 + 1 - (v228 >> 31);
		v12 = (v9 & -(v228 >> 31)) + v228;
		--v227;
	} while (v227);
	v229 = v3[803];
	v216 = 16 * v219;
	if (v9 < 0x1000000)
	{
		v9 <<= 8;
		v12 = *v8++ | (v12 << 8);
	}
	v230 = v229 * (v9 >> 11);
	if (v12 >= v230)
	{
		v231 = v9 - v230;
		v12 -= v230;
		v232 = 3;
		v216 |= 1u;
		v3[803] -= v3[803] >> 5;
	}
	else
	{
		v231 = v229 * (v9 >> 11);
		v232 = 2;
		v3[803] = v229 + ((unsigned int)(2048 - v229) >> 5);
	}
	v233 = &v3[v232];
	v234 = v233[802];
	if (v231 < 0x1000000)
	{
		v231 <<= 8;
		v12 = *v8++ | (v12 << 8);
	}
	v235 = v234 * (v231 >> 11);
	if (v12 >= v235)
	{
		v236 = v231 - v235;
		v12 -= v235;
		v237 = 2 * v232 + 1;
		v216 |= 2u;
		v233[802] -= v233[802] >> 5;
	}
	else
	{
		v236 = v234 * (v231 >> 11);
		v237 = 2 * v232;
		v233[802] = v234 + ((unsigned int)(2048 - v234) >> 5);
	}
	v238 = &v3[v237];
	v239 = v238[802];
	if (v236 < 0x1000000)
	{
		v236 <<= 8;
		v12 = *v8++ | (v12 << 8);
	}
	v240 = v239 * (v236 >> 11);
	if (v12 >= v240)
	{
		v241 = v236 - v240;
		v12 -= v240;
		v242 = (unsigned int)(2 * v237 + 1);
		v216 |= 4u;
		v238[802] -= v238[802] >> 5;
	}
	else
	{
		v241 = v239 * (v236 >> 11);
		v242 = (unsigned int)(2 * v237);
		v238[802] = v239 + ((unsigned int)(2048 - v239) >> 5);
	}
	v243 = &v3[v242];
	v244 = v243[802];
	if (v241 < 0x1000000)
	{
		v241 <<= 8;
		v12 = *v8++ | (v12 << 8);
	}
	v245 = v244 * (v241 >> 11);
	if (v12 >= v245)
	{
		v9 = v241 - v245;
		v12 -= v245;
		v216 |= 8u;
		v243[802] -= v243[802] >> 5;
	}
	else
	{
		v9 = v244 * (v241 >> 11);
		v243[802] = v244 + ((unsigned int)(2048 - v244) >> 5);
	}
	if (v216 != -1)
		goto LABEL_242;
	v13 = v163 + 274;
	v4 -= 12;
LABEL_269:
	if (v9 < 0x1000000)
	{
		v9 <<= 8;
		v12 = *v8++ | (v12 << 8);
	}
	a1[11] = v12;
	*((_QWORD*)a1 + 4) = v8;
	a1[10] = v9;
	a1[23] = v13;
	*((_QWORD*)a1 + 6) = v7;
	a1[16] = v275;
	a1[20] = v263;
	a1[19] = v262;
	a1[22] = v6;
	a1[21] = v264;
	a1[18] = v4;
	return 0i64;
}

