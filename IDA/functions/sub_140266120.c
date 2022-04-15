//----- (0000000140266120) ----------------------------------------------------
__int64 __fastcall sub_140266120(float* a1, float* a2, __int64 a3, __int64 a4, int a5)
{
	_BYTE* v5; // r10
	_BYTE* v6; // r11
	float v10; // xmm11_4
	float v11; // xmm9_4
	float v12; // xmm10_4
	float* v13; // r12
	__int64 v14; // rcx
	__int64 result; // rax
	float v16; // xmm12_4
	float v17; // xmm7_4
	float v18; // xmm6_4
	float v19; // xmm0_4
	float v20; // xmm1_4
	float v21; // xmm0_4
	float v22; // xmm1_4
	float v23; // xmm2_4
	float v24; // xmm0_4
	float v25; // xmm1_4
	float v26; // xmm2_4
	float v27; // xmm0_4
	float v28; // xmm1_4
	float v29; // xmm2_4
	float v30; // xmm2_4
	float v31; // xmm3_4
	float v32; // xmm4_4
	float v33; // xmm8_4
	float v34; // xmm13_4
	float* v35; // rax
	__int64 v36; // rcx
	float v37; // xmm14_4
	float v38; // xmm15_4
	float v39; // xmm12_4
	float v40; // xmm1_4
	float v41; // xmm9_4
	float v42; // xmm8_4
	float v43; // xmm7_4
	float v44; // xmm6_4
	float v45; // xmm11_4
	float v46; // xmm13_4
	float v47; // xmm14_4
	float v48; // xmm15_4
	float v49; // xmm12_4
	float v50; // xmm10_4
	float v51; // xmm4_4
	float v52; // xmm1_4
	float v53; // xmm4_4
	float v54; // xmm3_4
	float v55; // xmm5_4
	float v56; // xmm13_4
	float v57; // xmm7_4
	float v58; // xmm8_4
	float v59; // xmm1_4
	float v60; // xmm5_4
	float v61; // xmm9_4
	float v62; // xmm3_4
	float v63; // xmm4_4
	float v64; // xmm13_4
	float v65; // xmm7_4
	float v66; // xmm8_4
	float v67; // xmm1_4
	float v68; // xmm9_4
	float v69; // xmm4_4
	float v70; // xmm3_4
	float v71; // xmm5_4
	float v72; // xmm13_4
	float v73; // xmm7_4
	float v74; // xmm8_4
	float v75; // xmm9_4
	float v76; // xmm3_4
	float v77; // xmm4_4
	float v78; // xmm1_4
	float v79; // xmm5_4
	float v80; // xmm13_4
	float v81; // xmm7_4
	float v82; // xmm8_4
	float v83; // xmm1_4
	float v84; // xmm4_4
	float v85; // xmm9_4
	float v86; // xmm3_4
	float v87; // xmm5_4
	float v88; // xmm13_4
	float v89; // xmm7_4
	float v90; // xmm0_4
	float v91; // xmm1_4
	float v92; // xmm5_4
	float v93; // xmm9_4
	float v94; // xmm3_4
	float v95; // xmm4_4
	float v96; // xmm2_4
	float v97; // xmm13_4
	float v98; // xmm7_4
	float v99; // xmm8_4
	float v100; // xmm9_4
	float v101; // xmm3_4
	float v102; // xmm5_4
	float v103; // xmm1_4
	float v104; // xmm4_4
	float v105; // xmm3_4
	float v106; // xmm5_4
	float v107; // xmm2_4
	float v108; // xmm13_4
	float v109; // xmm7_4
	float v110; // xmm0_4
	float v111; // xmm1_4
	float v112; // xmm4_4
	float v113; // xmm5_4
	float v114; // xmm3_4
	bool v115; // cc
	__int64 v116; // r8
	unsigned __int64 i; // rsi
	unsigned __int64 v118; // rbx
	signed __int64 v119; // rdx
	float* v120; // rcx
	unsigned __int64 v121; // r9
	float v122; // xmm4_4
	float v123; // xmm3_4
	float v124; // xmm5_4
	float v125; // xmm2_4
	float v126; // xmm4_4
	float v127; // xmm3_4
	float v128; // xmm4_4
	float v129; // xmm2_4
	float v130; // xmm0_4
	float v131; // xmm5_4
	float v132; // xmm3_4
	float v133; // xmm5_4
	float v134; // xmm2_4
	float v135; // xmm4_4
	float v136; // xmm3_4
	int* v137; // rcx
	unsigned __int64 v138; // rdx
	float v139; // xmm4_4
	float v140; // xmm3_4
	float v141; // xmm5_4
	float v142; // xmm2_4
	float v143; // xmm3_4
	float v144; // xmm4_4
	float v145; // xmm6_4
	float* v146; // rcx
	__int64 v147; // r9
	float v148; // xmm12_4
	float v149; // xmm13_4
	float v150; // xmm14_4
	float v151; // xmm15_4
	float v152; // xmm5_4
	float v153; // xmm2_4
	unsigned __int64 v154; // rdx
	float v155; // xmm2_4
	unsigned __int64 v156; // rax
	float v157; // xmm2_4
	float v158; // xmm7_4
	float v159; // xmm6_4
	float v160; // xmm5_4
	float v161; // xmm4_4
	float v162; // xmm15_4
	float v163; // xmm13_4
	float v164; // xmm3_4
	float v165; // xmm12_4
	float v166; // xmm14_4
	float v167; // xmm2_4
	unsigned __int64 v168; // rdx
	float v169; // xmm2_4
	unsigned __int64 v170; // rax
	float v171; // xmm2_4
	float v172; // xmm7_4
	float v173; // xmm6_4
	float v174; // xmm5_4
	float v175; // xmm4_4
	float v176; // xmm15_4
	float v177; // xmm13_4
	float v178; // xmm3_4
	float v179; // xmm12_4
	float v180; // xmm14_4
	float v181; // xmm2_4
	unsigned __int64 v182; // rdx
	float v183; // xmm2_4
	unsigned __int64 v184; // rax
	float v185; // xmm2_4
	float v186; // xmm7_4
	float v187; // xmm6_4
	float v188; // xmm5_4
	float v189; // xmm4_4
	float v190; // xmm15_4
	float v191; // xmm13_4
	float v192; // xmm3_4
	float v193; // xmm12_4
	float v194; // xmm4_4
	float v195; // xmm14_4
	float v196; // xmm2_4
	unsigned __int64 v197; // rdx
	float v198; // xmm2_4
	unsigned __int64 v199; // rax
	float v200; // xmm2_4
	float v201; // xmm7_4
	float v202; // xmm6_4
	float v203; // xmm5_4
	float v204; // xmm4_4
	float v205; // xmm0_4
	float v206; // xmm1_4
	float v207; // xmm0_4
	float v208; // [rsp+8h] [rbp-100h]
	float v209; // [rsp+8h] [rbp-100h]
	float v210; // [rsp+8h] [rbp-100h]
	float v211; // [rsp+8h] [rbp-100h]
	float v212; // [rsp+8h] [rbp-100h]
	float v213; // [rsp+Ch] [rbp-FCh]
	float v214; // [rsp+Ch] [rbp-FCh]
	float v215; // [rsp+Ch] [rbp-FCh]
	float v216; // [rsp+Ch] [rbp-FCh]
	float v217; // [rsp+Ch] [rbp-FCh]
	float v218; // [rsp+10h] [rbp-F8h]
	float v219; // [rsp+10h] [rbp-F8h]
	float v220; // [rsp+14h] [rbp-F4h]
	float v221; // [rsp+14h] [rbp-F4h]
	float v222; // [rsp+14h] [rbp-F4h]
	float v223; // [rsp+14h] [rbp-F4h]
	float v224; // [rsp+14h] [rbp-F4h]
	float v225; // [rsp+18h] [rbp-F0h]
	float v226; // [rsp+18h] [rbp-F0h]
	float v227; // [rsp+18h] [rbp-F0h]
	float v228; // [rsp+18h] [rbp-F0h]
	float v229; // [rsp+1Ch] [rbp-ECh]
	float v230; // [rsp+20h] [rbp-E8h]
	float v231; // [rsp+24h] [rbp-E4h]
	float v232; // [rsp+28h] [rbp-E0h]
	float v233; // [rsp+2Ch] [rbp-DCh]
	float v234; // [rsp+2Ch] [rbp-DCh]
	float v235; // [rsp+30h] [rbp-D8h]
	float v236; // [rsp+30h] [rbp-D8h]
	int v237; // [rsp+34h] [rbp-D4h]
	int v238; // [rsp+38h] [rbp-D0h]
	int v239; // [rsp+3Ch] [rbp-CCh]
	int v241[15]; // [rsp+4Ch] [rbp-BCh] BYREF

	v5 = &unk_140B60E08;
	v6 = &unk_140B60D78;
	if (a4 == 3)
		v5 = &unk_140B60DD0;
	if (a4 == 3)
		v6 = &unk_140B60DC0;
	if ((a5 & 0x40000) != 0)
	{
		*(float*)&v237 = 1.0;
		*(float*)&v238 = 1.0;
		*(float*)&v239 = 1.0;
	}
	else
	{
		v237 = dword_140C40618;
		v238 = dword_140C4061C;
		v239 = dword_140C40620;
	}
	v10 = *(float*)&v237;
	v11 = *(float*)&v238;
	v12 = *(float*)&v239;
	v13 = (float*)(a3 + 8);
	v14 = 4i64;
	result = a3 + 8;
	v16 = 0.0;
	v17 = 0.0;
	v18 = 0.0;
	do
	{
		v19 = *(float*)(result - 8);
		if (v19 < v10)
			v10 = *(float*)(result - 8);
		v20 = *(float*)(result - 4);
		if (v20 < v11)
			v11 = *(float*)(result - 4);
		if (*(float*)result < v12)
			v12 = *(float*)result;
		if (v19 > v16)
			v16 = *(float*)(result - 8);
		if (v20 > v17)
			v17 = *(float*)(result - 4);
		if (*(float*)result > v18)
			v18 = *(float*)result;
		v21 = *(float*)(result + 8);
		if (v21 < v10)
			v10 = *(float*)(result + 8);
		v22 = *(float*)(result + 12);
		if (v22 < v11)
			v11 = *(float*)(result + 12);
		v23 = *(float*)(result + 16);
		if (v23 < v12)
			v12 = *(float*)(result + 16);
		if (v21 > v16)
			v16 = *(float*)(result + 8);
		if (v22 > v17)
			v17 = *(float*)(result + 12);
		if (v23 > v18)
			v18 = *(float*)(result + 16);
		v24 = *(float*)(result + 24);
		if (v24 < v10)
			v10 = *(float*)(result + 24);
		v25 = *(float*)(result + 28);
		if (v25 < v11)
			v11 = *(float*)(result + 28);
		v26 = *(float*)(result + 32);
		if (v26 < v12)
			v12 = *(float*)(result + 32);
		if (v24 > v16)
			v16 = *(float*)(result + 24);
		if (v25 > v17)
			v17 = *(float*)(result + 28);
		if (v26 > v18)
			v18 = *(float*)(result + 32);
		v27 = *(float*)(result + 40);
		if (v27 < v10)
			v10 = *(float*)(result + 40);
		v28 = *(float*)(result + 44);
		if (v28 < v11)
			v11 = *(float*)(result + 44);
		v29 = *(float*)(result + 48);
		if (v29 < v12)
			v12 = *(float*)(result + 48);
		if (v27 > v16)
			v16 = *(float*)(result + 40);
		if (v28 > v17)
			v17 = *(float*)(result + 44);
		if (v29 > v18)
			v18 = *(float*)(result + 48);
		result += 64i64;
		--v14;
	} while (v14);
	v229 = v16;
	v231 = v17;
	v230 = v18;
	v30 = v16 - v10;
	v31 = v17 - v11;
	v32 = v18 - v12;
	v208 = v10;
	v213 = v12;
	v33 = (float)((float)(v31 * v31) + (float)(v30 * v30)) + (float)(v32 * v32);
	v218 = v11;
	v220 = v33;
	if (v33 < 1.1754944e-38)
		goto LABEL_59;
	v34 = 1.0 / v33;
	v35 = (float*)(a3 + 8);
	v36 = 2i64;
	v37 = v16 + v10;
	v38 = v17 + v11;
	v39 = v18 + v12;
	v40 = (float)(1.0 / v33) * v31;
	v41 = 0.0;
	v42 = 0.0;
	v43 = 0.0;
	v44 = v34 * v32;
	v45 = v34 * v30;
	v46 = 0.0;
	v47 = v37 * 0.5;
	v48 = v38 * 0.5;
	v49 = v39 * 0.5;
	v50 = v40;
	do
	{
		v51 = (float)(*(v35 - 2) - v47) * v45;
		v52 = (float)((float)(*(v35 - 1) - v48) * v50) + v51;
		v53 = v51 - (float)((float)(*(v35 - 1) - v48) * v50);
		v54 = (float)(*v35 - v49) * v44;
		v55 = (float)(v35[2] - v47) * v45;
		v56 = v46 + (float)((float)(v52 + v54) * (float)(v52 + v54));
		v57 = v43 + (float)((float)(v52 - v54) * (float)(v52 - v54));
		v58 = v42 + (float)((float)(v53 + v54) * (float)(v53 + v54));
		v59 = (float)((float)(v35[3] - v48) * v50) + v55;
		v60 = v55 - (float)((float)(v35[3] - v48) * v50);
		v61 = v41 + (float)((float)(v53 - v54) * (float)(v53 - v54));
		v62 = (float)(v35[4] - v49) * v44;
		v63 = (float)(v35[6] - v47) * v45;
		v64 = v56 + (float)((float)(v59 + v62) * (float)(v59 + v62));
		v65 = v57 + (float)((float)(v59 - v62) * (float)(v59 - v62));
		v66 = v58 + (float)((float)(v60 + v62) * (float)(v60 + v62));
		v67 = (float)((float)(v35[7] - v48) * v50) + v63;
		v68 = v61 + (float)((float)(v60 - v62) * (float)(v60 - v62));
		v69 = v63 - (float)((float)(v35[7] - v48) * v50);
		v70 = (float)(v35[8] - v49) * v44;
		v71 = (float)(v35[10] - v47) * v45;
		v72 = v64 + (float)((float)(v67 + v70) * (float)(v67 + v70));
		v73 = v65 + (float)((float)(v67 - v70) * (float)(v67 - v70));
		v74 = v66 + (float)((float)(v69 + v70) * (float)(v69 + v70));
		v75 = v68 + (float)((float)(v69 - v70) * (float)(v69 - v70));
		v76 = (float)(v35[12] - v49) * v44;
		v77 = (float)(v35[14] - v47) * v45;
		v78 = (float)((float)(v35[11] - v48) * v50) + v71;
		v79 = v71 - (float)((float)(v35[11] - v48) * v50);
		v80 = v72 + (float)((float)(v78 + v76) * (float)(v78 + v76));
		v81 = v73 + (float)((float)(v78 - v76) * (float)(v78 - v76));
		v82 = v74 + (float)((float)(v79 + v76) * (float)(v79 + v76));
		v83 = (float)((float)(v35[15] - v48) * v50) + v77;
		v84 = v77 - (float)((float)(v35[15] - v48) * v50);
		v85 = v75 + (float)((float)(v79 - v76) * (float)(v79 - v76));
		v86 = (float)(v35[16] - v49) * v44;
		v87 = (float)(v35[18] - v47) * v45;
		v88 = v80 + (float)((float)(v83 + v86) * (float)(v83 + v86));
		v89 = v81 + (float)((float)(v83 - v86) * (float)(v83 - v86));
		v90 = v84 + v86;
		v91 = (float)((float)(v35[19] - v48) * v50) + v87;
		v92 = v87 - (float)((float)(v35[19] - v48) * v50);
		v93 = v85 + (float)((float)(v84 - v86) * (float)(v84 - v86));
		v94 = (float)(v35[20] - v49) * v44;
		v95 = (float)(v35[22] - v47) * v45;
		v96 = (float)(v35[23] - v48) * v50;
		v97 = v88 + (float)((float)(v91 + v94) * (float)(v91 + v94));
		v98 = v89 + (float)((float)(v91 - v94) * (float)(v91 - v94));
		v99 = (float)(v82 + (float)(v90 * v90)) + (float)((float)(v92 + v94) * (float)(v92 + v94));
		v100 = v93 + (float)((float)(v92 - v94) * (float)(v92 - v94));
		v101 = v35[24];
		v102 = v35[26];
		v35 += 32;
		v103 = v96 + v95;
		v104 = v95 - v96;
		v105 = (float)(v101 - v49) * v44;
		v106 = (float)(v102 - v47) * v45;
		v107 = (float)(*(v35 - 5) - v48) * v50;
		v108 = v97 + (float)((float)(v103 + v105) * (float)(v103 + v105));
		v109 = v98 + (float)((float)(v103 - v105) * (float)(v103 - v105));
		v110 = v104 + v105;
		v111 = v107 + v106;
		v112 = (float)(v104 - v105) * (float)(v104 - v105);
		v113 = v106 - v107;
		v114 = (float)(*(v35 - 4) - v49) * v44;
		v46 = v108 + (float)((float)(v111 + v114) * (float)(v111 + v114));
		v43 = v109 + (float)((float)(v111 - v114) * (float)(v111 - v114));
		v42 = (float)(v99 + (float)(v110 * v110)) + (float)((float)(v113 + v114) * (float)(v113 + v114));
		v41 = (float)(v100 + v112) + (float)((float)(v113 - v114) * (float)(v113 - v114));
		--v36;
	} while (v36);
	v12 = v213;
	v10 = v208;
	v18 = v230;
	result = 0i64;
	v16 = v229;
	v235 = v41;
	v11 = v218;
	v233 = v43;
	v115 = v43 <= v46;
	v17 = v231;
	if (!v115)
	{
		v46 = v233;
		result = 1i64;
	}
	if (v42 > v46)
	{
		v46 = v42;
		result = 2i64;
	}
	if (v235 > v46)
		result = 3i64;
	if ((result & 2) != 0)
	{
		v11 = v231;
		v17 = v218;
		v231 = v218;
	}
	if ((result & 1) != 0)
	{
		v12 = v230;
		v18 = v213;
		v230 = v213;
	}
	if (v220 < 0.00024414062)
	{
	LABEL_59:
		*a1 = v10;
		a1[1] = v11;
		a1[2] = v12;
		*a2 = v16;
		a2[1] = v17;
		a2[2] = v18;
	}
	else
	{
		v116 = a4 - 1;
		v219 = (float)(a4 - 1);
		if (a4 - 1 < 0)
			v219 = (float)(int)v116 + 1.8446744e19;
		for (i = 0i64; i < 8; ++i)
		{
			v118 = 0i64;
			if (a4 >= 4)
			{
				result = (__int64)v241;
				v119 = v6 - v5;
				v120 = (float*)(v5 + 4);
				v121 = ((unsigned __int64)(a4 - 4) >> 2) + 1;
				v118 = 4 * v121;
				do
				{
					v122 = *(float*)((char*)v120 + v119 - 4);
					v123 = *(v120 - 1);
					v124 = *(float*)((char*)v120 + v119);
					result += 64i64;
					v120 += 4;
					*(float*)(result - 68) = (float)(v122 * v16) + (float)(v123 * v10);
					v125 = (float)(v122 * v17) + (float)(v123 * v11);
					v126 = (float)(v122 * v18) + (float)(v123 * v12);
					v127 = *(v120 - 4);
					*(float*)(result - 64) = v125;
					*(float*)(result - 60) = v126;
					v128 = *(float*)((char*)v120 + v119 - 12);
					v129 = v124;
					v130 = v127;
					*(float*)(result - 52) = (float)(v124 * v16) + (float)(v127 * v10);
					v131 = (float)(v124 * v18) + (float)(v127 * v12);
					v132 = *(v120 - 3);
					*(float*)(result - 44) = v131;
					v133 = *(float*)((char*)v120 + v119 - 8);
					*(float*)(result - 48) = (float)(v129 * v17) + (float)(v130 * v11);
					*(float*)(result - 36) = (float)(v128 * v16) + (float)(v132 * v10);
					v134 = (float)(v128 * v17) + (float)(v132 * v11);
					v135 = (float)(v128 * v18) + (float)(v132 * v12);
					v136 = *(v120 - 2);
					*(float*)(result - 32) = v134;
					*(float*)(result - 28) = v135;
					*(float*)(result - 20) = (float)(v133 * v16) + (float)(v136 * v10);
					*(float*)(result - 12) = (float)(v133 * v18) + (float)(v136 * v12);
					*(float*)(result - 16) = (float)(v133 * v17) + (float)(v136 * v11);
					--v121;
				} while (v121);
			}
			if (v118 < a4)
			{
				v137 = &v241[4 * v118];
				result = (__int64)&v5[4 * v118];
				v138 = a4 - v118;
				do
				{
					v139 = *(float*)(v6 - v5 + result);
					v140 = *(float*)result;
					v137 += 4;
					result += 4i64;
					*((float*)v137 - 5) = (float)(v139 * v16) + (float)(v140 * v10);
					*((float*)v137 - 4) = (float)(v139 * v17) + (float)(v140 * v11);
					*((float*)v137 - 3) = (float)(v139 * v18) + (float)(v140 * v12);
					--v138;
				} while (v138);
			}
			v141 = v16 - v10;
			v142 = v17 - v11;
			v143 = v18 - v12;
			v144 = (float)((float)(v142 * v142) + (float)(v141 * v141)) + (float)(v143 * v143);
			if (v144 < 0.00024414062)
				break;
			v145 = v219;
			v146 = v13;
			v147 = 4i64;
			v148 = 0.0;
			v149 = 0.0;
			v150 = 0.0;
			v151 = 0.0;
			v221 = 0.0;
			v152 = v141 * (float)(v219 / v144);
			v214 = 0.0;
			v209 = 0.0;
			v232 = v143 * (float)(v219 / v144);
			v234 = v152;
			v236 = v142 * (float)(v219 / v144);
			v225 = 0.0;
			do
			{
				v153 = (float)((float)((float)(*(v146 - 2) - v10) * v152) + (float)((float)(*(v146 - 1) - v11) * v236))
					+ (float)((float)(*v146 - v12) * v232);
				if (v153 < v145)
				{
					v155 = v153 + 0.5;
					v156 = 0i64;
					if (v155 >= 9.223372e18)
					{
						v155 = v155 - 9.223372e18;
						if (v155 < 9.223372e18)
							v156 = 0x8000000000000000ui64;
					}
					v154 = v156 + (unsigned int)(int)v155;
				}
				else
				{
					v154 = v116;
				}
				v157 = *(float*)&v5[4 * v154] * 0.125;
				v158 = *(float*)&v241[4 * v154 + 1] - *v146;
				v159 = *(float*)&v241[4 * v154] - *(v146 - 1);
				v210 = v209 + (float)(*(float*)&v5[4 * v154] * v157);
				v160 = *(float*)&v241[4 * v154 - 1] - *(v146 - 2);
				v161 = *(float*)&v6[4 * v154] * 0.125;
				v222 = v221 + (float)(v157 * v160);
				v162 = v151 + (float)(v157 * v158);
				v226 = v225 + (float)(v157 * v159);
				v163 = v149 + (float)(v161 * v159);
				v164 = v146[2];
				v215 = v214 + (float)(*(float*)&v6[4 * v154] * v161);
				v165 = v148 + (float)(v161 * v158);
				v166 = v150 + (float)(v161 * v160);
				v167 = (float)((float)((float)(v146[3] - v11) * v236) + (float)((float)(v164 - v10) * v234))
					+ (float)((float)(v146[4] - v12) * v232);
				if (v167 < v219)
				{
					v169 = v167 + 0.5;
					v170 = 0i64;
					if (v169 >= 9.223372e18)
					{
						v169 = v169 - 9.223372e18;
						if (v169 < 9.223372e18)
							v170 = 0x8000000000000000ui64;
					}
					v168 = v170 + (unsigned int)(int)v169;
				}
				else
				{
					v168 = v116;
				}
				v171 = *(float*)&v5[4 * v168] * 0.125;
				v172 = *(float*)&v241[4 * v168 + 1] - v146[4];
				v173 = *(float*)&v241[4 * v168] - v146[3];
				v211 = v210 + (float)(*(float*)&v5[4 * v168] * v171);
				v174 = *(float*)&v241[4 * v168 - 1] - v164;
				v175 = *(float*)&v6[4 * v168] * 0.125;
				v223 = v222 + (float)(v171 * v174);
				v176 = v162 + (float)(v171 * v172);
				v227 = v226 + (float)(v171 * v173);
				v177 = v163 + (float)(v175 * v173);
				v178 = v146[6];
				v216 = v215 + (float)(*(float*)&v6[4 * v168] * v175);
				v179 = v165 + (float)(v175 * v172);
				v180 = v166 + (float)(v175 * v174);
				v181 = (float)((float)((float)(v146[7] - v11) * v236) + (float)((float)(v178 - v10) * v234))
					+ (float)((float)(v146[8] - v12) * v232);
				if (v181 < v219)
				{
					v183 = v181 + 0.5;
					v184 = 0i64;
					if (v183 >= 9.223372e18)
					{
						v183 = v183 - 9.223372e18;
						if (v183 < 9.223372e18)
							v184 = 0x8000000000000000ui64;
					}
					v182 = v184 + (unsigned int)(int)v183;
				}
				else
				{
					v182 = v116;
				}
				v185 = *(float*)&v5[4 * v182] * 0.125;
				v186 = *(float*)&v241[4 * v182 + 1] - v146[8];
				v187 = *(float*)&v241[4 * v182] - v146[7];
				v212 = v211 + (float)(*(float*)&v5[4 * v182] * v185);
				v188 = *(float*)&v241[4 * v182 - 1] - v178;
				v189 = *(float*)&v6[4 * v182] * 0.125;
				v224 = v223 + (float)(v185 * v188);
				v190 = v176 + (float)(v185 * v186);
				v228 = v227 + (float)(v185 * v187);
				v191 = v177 + (float)(v189 * v187);
				v192 = v146[10];
				v217 = v216 + (float)(*(float*)&v6[4 * v182] * v189);
				v193 = v179 + (float)(v189 * v186);
				v194 = v146[11];
				v195 = v180 + (float)((float)(*(float*)&v6[4 * v182] * 0.125) * v188);
				v196 = (float)((float)((float)(v194 - v11) * v236) + (float)((float)(v192 - v10) * v234))
					+ (float)((float)(v146[12] - v12) * v232);
				if (v196 < v219)
				{
					v198 = v196 + 0.5;
					v199 = 0i64;
					if (v198 >= 9.223372e18)
					{
						v198 = v198 - 9.223372e18;
						if (v198 < 9.223372e18)
							v199 = 0x8000000000000000ui64;
					}
					v197 = v199 + (unsigned int)(int)v198;
				}
				else
				{
					v197 = v116;
				}
				result = 2 * v197;
				v146 += 16;
				v200 = *(float*)&v5[4 * v197] * 0.125;
				v201 = *(float*)&v241[4 * v197 + 1] - *(v146 - 4);
				v202 = *(float*)&v241[4 * v197] - v194;
				v209 = v212 + (float)(*(float*)&v5[4 * v197] * v200);
				v203 = *(float*)&v241[4 * v197 - 1] - v192;
				v204 = *(float*)&v6[4 * v197] * 0.125;
				v221 = v224 + (float)(v200 * v203);
				v205 = v228 + (float)(v200 * v202);
				v151 = v190 + (float)(v200 * v201);
				v206 = v204 * v202;
				v145 = v219;
				v225 = v205;
				v149 = v191 + v206;
				v214 = v217 + (float)(*(float*)&v6[4 * v197] * v204);
				v207 = v204 * v203;
				v152 = v234;
				v148 = v193 + (float)(v204 * v201);
				v150 = v195 + v207;
				--v147;
			} while (v147);
			if (v209 > 0.0)
			{
				v12 = v12 + (float)((float)(-1.0 / v209) * v151);
				v10 = v10 + (float)((float)(-1.0 / v209) * v221);
				v11 = v11 + (float)((float)(-1.0 / v209) * v225);
			}
			v17 = v231;
			if (v214 <= 0.0)
			{
				v18 = v230;
			}
			else
			{
				v229 = v229 + (float)((float)(-1.0 / v214) * v150);
				v18 = v230 + (float)((float)(-1.0 / v214) * v148);
				v17 = v231 + (float)((float)(-1.0 / v214) * v149);
				v230 = v18;
				v231 = v17;
			}
			if ((float)(v221 * v221) < 0.000015258789
				&& (float)(v225 * v225) < 0.000015258789
				&& (float)(v151 * v151) < 0.000015258789
				&& (float)(v150 * v150) < 0.000015258789
				&& (float)(v149 * v149) < 0.000015258789
				&& (float)(v148 * v148) < 0.000015258789)
			{
				v16 = v229;
				break;
			}
			v16 = v229;
		}
		*a1 = v10;
		a1[1] = v11;
		a1[2] = v12;
		*a2 = v16;
		a2[1] = v17;
		a2[2] = v18;
	}
	return result;
}
// 140C40618: using guessed type int dword_140C40618;
// 140C4061C: using guessed type int dword_140C4061C;
// 140C40620: using guessed type int dword_140C40620;

