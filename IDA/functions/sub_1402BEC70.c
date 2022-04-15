//----- (00000001402BEC70) ----------------------------------------------------
__int64 __fastcall sub_1402BEC70(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	__int64 a4,
	int a5,
	int a6,
	__int64* a7,
	_DWORD* a8)
{
	_DWORD* v8; // r14
	__int64 v9; // r13
	unsigned int v10; // r12d
	unsigned int v11; // r15d
	__int64 v12; // rcx
	__int64 v15; // rcx
	int v16; // r10d
	unsigned int v17; // esi
	unsigned int v18; // ebx
	__int64 v19; // rdi
	__int64 result; // rax
	unsigned int v21; // r13d
	__int64 v22; // rdx
	unsigned int v23; // eax
	unsigned int v24; // r15d
	_BYTE* v25; // rsi
	int v26; // r14d
	unsigned __int64 v27; // rax
	int v28; // edx
	unsigned __int8* v29; // r10
	char* v30; // rdi
	char v31; // r9
	__int16* v32; // rbx
	__int16* v33; // r11
	int v34; // r8d
	int v35; // edx
	int v36; // r8d
	int v37; // ecx
	__int16 v38; // cx
	int v39; // edx
	char v40; // r9
	int v41; // r8d
	int v42; // edx
	int v43; // r8d
	int v44; // ecx
	__int16 v45; // cx
	int v46; // edx
	char v47; // r9
	int v48; // r8d
	int v49; // edx
	int v50; // r8d
	int v51; // ecx
	__int16 v52; // cx
	int v53; // edx
	char v54; // r9
	int v55; // r8d
	int v56; // edx
	int v57; // r8d
	int v58; // ecx
	__int16 v59; // cx
	int v60; // edx
	char v61; // r9
	int v62; // r8d
	int v63; // edx
	int v64; // r8d
	int v65; // ecx
	__int16 v66; // cx
	int v67; // edx
	char v68; // r9
	int v69; // r8d
	int v70; // edx
	int v71; // r8d
	int v72; // ecx
	__int16 v73; // cx
	int v74; // edx
	char v75; // r9
	int v76; // r8d
	int v77; // edx
	int v78; // r8d
	int v79; // ecx
	__int16 v80; // cx
	int v81; // edx
	char v82; // r9
	int v83; // r8d
	int v84; // edx
	int v85; // r8d
	int v86; // ecx
	__int16 v87; // cx
	int v88; // edx
	char v89; // r9
	int v90; // r8d
	int v91; // edx
	int v92; // r8d
	int v93; // ecx
	__int16 v94; // cx
	int v95; // edx
	char v96; // r9
	int v97; // r8d
	int v98; // edx
	int v99; // r8d
	int v100; // ecx
	__int16 v101; // cx
	int v102; // edx
	char v103; // r9
	int v104; // r8d
	int v105; // edx
	int v106; // r8d
	int v107; // ecx
	__int16 v108; // cx
	int v109; // edx
	char v110; // r9
	int v111; // r8d
	int v112; // edx
	int v113; // r8d
	int v114; // ecx
	__int16 v115; // cx
	int v116; // edx
	char v117; // r9
	int v118; // r8d
	int v119; // edx
	int v120; // r8d
	int v121; // ecx
	__int16 v122; // cx
	int v123; // edx
	char v124; // r9
	int v125; // r8d
	int v126; // edx
	int v127; // r8d
	int v128; // ecx
	__int16 v129; // cx
	int v130; // edx
	char v131; // r9
	int v132; // r8d
	int v133; // edx
	int v134; // r8d
	int v135; // ecx
	__int16 v136; // cx
	int v137; // edx
	char v138; // r9
	int v139; // eax
	int v140; // r8d
	int v141; // eax
	int v142; // edx
	unsigned __int8 v143; // r9
	unsigned __int8 v144; // r8
	__int64 v145; // r8
	__int16 v146; // ax
	__int64 v147; // rax
	__int64 v148; // rax
	__int64 v149; // rax
	unsigned int v150[4]; // [rsp+20h] [rbp-E0h] BYREF
	unsigned int v151[4]; // [rsp+30h] [rbp-D0h] BYREF
	int v152; // [rsp+40h] [rbp-C0h]
	int v153; // [rsp+44h] [rbp-BCh]
	int v154; // [rsp+48h] [rbp-B8h]
	int v155; // [rsp+4Ch] [rbp-B4h]
	int v156; // [rsp+50h] [rbp-B0h]
	int v157; // [rsp+54h] [rbp-ACh]
	int v158; // [rsp+58h] [rbp-A8h]
	int v159; // [rsp+5Ch] [rbp-A4h]
	int v160; // [rsp+60h] [rbp-A0h]
	int v161; // [rsp+64h] [rbp-9Ch]
	int v162; // [rsp+68h] [rbp-98h]
	int v163; // [rsp+6Ch] [rbp-94h]
	int v164; // [rsp+70h] [rbp-90h]
	int v165; // [rsp+74h] [rbp-8Ch]
	int v166; // [rsp+78h] [rbp-88h]
	int v167; // [rsp+7Ch] [rbp-84h]
	unsigned int v168; // [rsp+80h] [rbp-80h]
	unsigned int v169; // [rsp+84h] [rbp-7Ch]
	unsigned int v170; // [rsp+88h] [rbp-78h]
	_BYTE* v171; // [rsp+90h] [rbp-70h] BYREF
	unsigned int v172; // [rsp+98h] [rbp-68h]
	unsigned int v173; // [rsp+9Ch] [rbp-64h]
	unsigned int v174; // [rsp+A0h] [rbp-60h]
	unsigned int v175; // [rsp+A4h] [rbp-5Ch]
	unsigned int v176; // [rsp+A8h] [rbp-58h]
	__int64 v177; // [rsp+B0h] [rbp-50h]
	__int64 v178; // [rsp+B8h] [rbp-48h]
	__int64 v179; // [rsp+C0h] [rbp-40h]
	__int64 v180; // [rsp+C8h] [rbp-38h]
	unsigned int* v181; // [rsp+D0h] [rbp-30h]
	__int64 v182; // [rsp+D8h] [rbp-28h]
	__int64 v183[4]; // [rsp+E0h] [rbp-20h] BYREF
	char v184[384]; // [rsp+100h] [rbp+0h] BYREF
	__int64 v185[106]; // [rsp+280h] [rbp+180h] BYREF
	__m128i v186; // [rsp+5D0h] [rbp+4D0h] BYREF
	int v187; // [rsp+5E0h] [rbp+4E0h]
	int v188; // [rsp+5E4h] [rbp+4E4h]
	int v189; // [rsp+5E8h] [rbp+4E8h]
	int v190; // [rsp+5ECh] [rbp+4ECh]
	int v191; // [rsp+5F0h] [rbp+4F0h]
	int v192; // [rsp+5F4h] [rbp+4F4h]
	int v193; // [rsp+5F8h] [rbp+4F8h]
	int v194; // [rsp+5FCh] [rbp+4FCh]
	int v195; // [rsp+600h] [rbp+500h]
	int v196; // [rsp+604h] [rbp+504h]
	int v197; // [rsp+608h] [rbp+508h]
	int v198; // [rsp+60Ch] [rbp+50Ch]

	v8 = a8;
	v9 = a1;
	v180 = a1;
	v10 = (unsigned int)(a6 + 3) >> 2;
	v170 = (unsigned int)(a6 + 7) >> 3;
	v182 = a2;
	v11 = (unsigned int)(a5 + 7) >> 3;
	v12 = *a8 * v10;
	v181 = a8;
	v174 = v11;
	v173 = (unsigned int)(a5 + 3) >> 2;
	v175 = v10;
	*a7 = (__int64)sub_14018B280(v12, 0);
	v183[0] = a3;
	v183[1] = a4;
	v183[2] = a3;
	v183[3] = 0i64;
	sub_1402C0750(v185, (__int64)v183);
	v15 = *a7;
	v16 = 0;
	v17 = 0;
	v169 = 0;
	v179 = v15;
	if (!v170)
		return 0i64;
	while (1)
	{
		v18 = v16;
		v19 = v15;
		v178 = v15;
		v172 = v16;
		if (v11)
			break;
	LABEL_209:
		++v17;
		v149 = (unsigned int)(2 * *v8);
		v169 = v17;
		v15 += v149;
		v179 = v15;
		if (v17 >= v170)
			return 0i64;
	}
	while (1)
	{
		result = sub_1402BD040((__int64)v184, (__int64)v185, v182, v9);
		if ((int)result < 0)
			return result;
		v21 = 2;
		v22 = v19;
		v177 = v19;
		if ((int)(v173 - 2 * v18) < 2)
			v21 = v173 - 2 * v18;
		v23 = 2;
		if ((int)(v10 - 2 * v17) < 2)
			v23 = v10 - 2 * v17;
		v16 = 0;
		v24 = 0;
		v168 = 0;
		v176 = v23;
		if (v23)
		{
			do
			{
				v25 = (_BYTE*)v22;
				v26 = v16;
				if (v21)
				{
					while (1)
					{
						v27 = 32 * v24 + (unsigned __int64)(unsigned int)(4 * v26);
						v28 = *(__int16*)&v184[2 * v27 + 192];
						v29 = (unsigned __int8*)&v184[v27];
						v30 = &v184[v27 + 320];
						v31 = v184[v27 + 320];
						v32 = (__int16*)&v184[2 * v27 + 192];
						v33 = (__int16*)&v184[2 * v27 + 64];
						v34 = (__int16)((unsigned __int8)v184[v27] - ((__int16)v28 >> 1));
						v35 = v34 + v28;
						if (v35 >= 0)
						{
							if (v35 > 255)
								LOBYTE(v35) = -1;
						}
						else
						{
							LOBYTE(v35) = 0;
						}
						v36 = v34 - (*v33 >> 1);
						if (v36 >= 0)
						{
							if (v36 > 255)
								LOWORD(v36) = 255;
						}
						else
						{
							LOWORD(v36) = 0;
						}
						v37 = (__int16)v36 + *v33;
						if (v37 >= 0)
						{
							if (v37 > 255)
								LOBYTE(v37) = -1;
						}
						else
						{
							LOBYTE(v37) = 0;
						}
						LOBYTE(v166) = v37;
						v38 = v29[1];
						BYTE2(v166) = v35;
						v39 = v32[1];
						BYTE1(v166) = v36;
						HIBYTE(v166) = v31;
						v40 = v30[1];
						v186.m128i_i32[0] = v166;
						v41 = (__int16)(v38 - ((__int16)v39 >> 1));
						v42 = v41 + v39;
						if (v42 >= 0)
						{
							if (v42 > 255)
								LOBYTE(v42) = -1;
						}
						else
						{
							LOBYTE(v42) = 0;
						}
						v43 = v41 - (v33[1] >> 1);
						if (v43 >= 0)
						{
							if (v43 > 255)
								LOWORD(v43) = 255;
						}
						else
						{
							LOWORD(v43) = 0;
						}
						v44 = (__int16)v43 + v33[1];
						if (v44 >= 0)
						{
							if (v44 > 255)
								LOBYTE(v44) = -1;
						}
						else
						{
							LOBYTE(v44) = 0;
						}
						LOBYTE(v154) = v44;
						v45 = v29[2];
						BYTE2(v154) = v42;
						v46 = v32[2];
						BYTE1(v154) = v43;
						HIBYTE(v154) = v40;
						v47 = v30[2];
						v186.m128i_i32[1] = v154;
						v48 = (__int16)(v45 - ((__int16)v46 >> 1));
						v49 = v48 + v46;
						if (v49 >= 0)
						{
							if (v49 > 255)
								LOBYTE(v49) = -1;
						}
						else
						{
							LOBYTE(v49) = 0;
						}
						v50 = v48 - (v33[2] >> 1);
						if (v50 >= 0)
						{
							if (v50 > 255)
								LOWORD(v50) = 255;
						}
						else
						{
							LOWORD(v50) = 0;
						}
						v51 = (__int16)v50 + v33[2];
						if (v51 >= 0)
						{
							if (v51 > 255)
								LOBYTE(v51) = -1;
						}
						else
						{
							LOBYTE(v51) = 0;
						}
						LOBYTE(v164) = v51;
						v52 = v29[3];
						BYTE2(v164) = v49;
						v53 = v32[3];
						BYTE1(v164) = v50;
						HIBYTE(v164) = v47;
						v54 = v30[3];
						v186.m128i_i32[2] = v164;
						v55 = (__int16)(v52 - ((__int16)v53 >> 1));
						v56 = v55 + v53;
						if (v56 >= 0)
						{
							if (v56 > 255)
								LOBYTE(v56) = -1;
						}
						else
						{
							LOBYTE(v56) = 0;
						}
						v57 = v55 - (v33[3] >> 1);
						if (v57 >= 0)
						{
							if (v57 > 255)
								LOWORD(v57) = 255;
						}
						else
						{
							LOWORD(v57) = 0;
						}
						v58 = (__int16)v57 + v33[3];
						if (v58 >= 0)
						{
							if (v58 > 255)
								LOBYTE(v58) = -1;
						}
						else
						{
							LOBYTE(v58) = 0;
						}
						LOBYTE(v156) = v58;
						v59 = v29[8];
						BYTE2(v156) = v56;
						v60 = v32[8];
						BYTE1(v156) = v57;
						HIBYTE(v156) = v54;
						v61 = v30[8];
						v186.m128i_i32[3] = v156;
						v62 = (__int16)(v59 - ((__int16)v60 >> 1));
						v63 = v62 + v60;
						if (v63 >= 0)
						{
							if (v63 > 255)
								LOBYTE(v63) = -1;
						}
						else
						{
							LOBYTE(v63) = 0;
						}
						v64 = v62 - (v33[8] >> 1);
						if (v64 >= 0)
						{
							if (v64 > 255)
								LOWORD(v64) = 255;
						}
						else
						{
							LOWORD(v64) = 0;
						}
						v65 = (__int16)v64 + v33[8];
						if (v65 >= 0)
						{
							if (v65 > 255)
								LOBYTE(v65) = -1;
						}
						else
						{
							LOBYTE(v65) = 0;
						}
						LOBYTE(v162) = v65;
						v66 = v29[9];
						BYTE2(v162) = v63;
						v67 = v32[9];
						BYTE1(v162) = v64;
						HIBYTE(v162) = v61;
						v68 = v30[9];
						v187 = v162;
						v69 = (__int16)(v66 - ((__int16)v67 >> 1));
						v70 = v69 + v67;
						if (v70 >= 0)
						{
							if (v70 > 255)
								LOBYTE(v70) = -1;
						}
						else
						{
							LOBYTE(v70) = 0;
						}
						v71 = v69 - (v33[9] >> 1);
						if (v71 >= 0)
						{
							if (v71 > 255)
								LOWORD(v71) = 255;
						}
						else
						{
							LOWORD(v71) = 0;
						}
						v72 = (__int16)v71 + v33[9];
						if (v72 >= 0)
						{
							if (v72 > 255)
								LOBYTE(v72) = -1;
						}
						else
						{
							LOBYTE(v72) = 0;
						}
						LOBYTE(v158) = v72;
						v73 = v29[10];
						BYTE2(v158) = v70;
						v74 = v32[10];
						BYTE1(v158) = v71;
						HIBYTE(v158) = v68;
						v75 = v30[10];
						v188 = v158;
						v76 = (__int16)(v73 - ((__int16)v74 >> 1));
						v77 = v76 + v74;
						if (v77 >= 0)
						{
							if (v77 > 255)
								LOBYTE(v77) = -1;
						}
						else
						{
							LOBYTE(v77) = 0;
						}
						v78 = v76 - (v33[10] >> 1);
						if (v78 >= 0)
						{
							if (v78 > 255)
								LOWORD(v78) = 255;
						}
						else
						{
							LOWORD(v78) = 0;
						}
						v79 = (__int16)v78 + v33[10];
						if (v79 >= 0)
						{
							if (v79 > 255)
								LOBYTE(v79) = -1;
						}
						else
						{
							LOBYTE(v79) = 0;
						}
						LOBYTE(v152) = v79;
						v80 = v29[11];
						BYTE2(v152) = v77;
						v81 = v32[11];
						BYTE1(v152) = v78;
						HIBYTE(v152) = v75;
						v82 = v30[11];
						v189 = v152;
						v83 = (__int16)(v80 - ((__int16)v81 >> 1));
						v84 = v83 + v81;
						if (v84 >= 0)
						{
							if (v84 > 255)
								LOBYTE(v84) = -1;
						}
						else
						{
							LOBYTE(v84) = 0;
						}
						v85 = v83 - (v33[11] >> 1);
						if (v85 >= 0)
						{
							if (v85 > 255)
								LOWORD(v85) = 255;
						}
						else
						{
							LOWORD(v85) = 0;
						}
						v86 = (__int16)v85 + v33[11];
						if (v86 >= 0)
						{
							if (v86 > 255)
								LOBYTE(v86) = -1;
						}
						else
						{
							LOBYTE(v86) = 0;
						}
						LOBYTE(v160) = v86;
						v87 = v29[16];
						BYTE2(v160) = v84;
						v88 = v32[16];
						BYTE1(v160) = v85;
						HIBYTE(v160) = v82;
						v89 = v30[16];
						v190 = v160;
						v90 = (__int16)(v87 - ((__int16)v88 >> 1));
						v91 = v90 + v88;
						if (v91 >= 0)
						{
							if (v91 > 255)
								LOBYTE(v91) = -1;
						}
						else
						{
							LOBYTE(v91) = 0;
						}
						v92 = v90 - (v33[16] >> 1);
						if (v92 >= 0)
						{
							if (v92 > 255)
								LOWORD(v92) = 255;
						}
						else
						{
							LOWORD(v92) = 0;
						}
						v93 = (__int16)v92 + v33[16];
						if (v93 >= 0)
						{
							if (v93 > 255)
								LOBYTE(v93) = -1;
						}
						else
						{
							LOBYTE(v93) = 0;
						}
						LOBYTE(v153) = v93;
						v94 = v29[17];
						BYTE2(v153) = v91;
						v95 = v32[17];
						BYTE1(v153) = v92;
						HIBYTE(v153) = v89;
						v96 = v30[17];
						v191 = v153;
						v97 = (__int16)(v94 - ((__int16)v95 >> 1));
						v98 = v97 + v95;
						if (v98 >= 0)
						{
							if (v98 > 255)
								LOBYTE(v98) = -1;
						}
						else
						{
							LOBYTE(v98) = 0;
						}
						v99 = v97 - (v33[17] >> 1);
						if (v99 >= 0)
						{
							if (v99 > 255)
								LOWORD(v99) = 255;
						}
						else
						{
							LOWORD(v99) = 0;
						}
						v100 = (__int16)v99 + v33[17];
						if (v100 >= 0)
						{
							if (v100 > 255)
								LOBYTE(v100) = -1;
						}
						else
						{
							LOBYTE(v100) = 0;
						}
						LOBYTE(v155) = v100;
						v101 = v29[18];
						BYTE2(v155) = v98;
						v102 = v32[18];
						BYTE1(v155) = v99;
						HIBYTE(v155) = v96;
						v103 = v30[18];
						v192 = v155;
						v104 = (__int16)(v101 - ((__int16)v102 >> 1));
						v105 = v104 + v102;
						if (v105 >= 0)
						{
							if (v105 > 255)
								LOBYTE(v105) = -1;
						}
						else
						{
							LOBYTE(v105) = 0;
						}
						v106 = v104 - (v33[18] >> 1);
						if (v106 >= 0)
						{
							if (v106 > 255)
								LOWORD(v106) = 255;
						}
						else
						{
							LOWORD(v106) = 0;
						}
						v107 = (__int16)v106 + v33[18];
						if (v107 >= 0)
						{
							if (v107 > 255)
								LOBYTE(v107) = -1;
						}
						else
						{
							LOBYTE(v107) = 0;
						}
						LOBYTE(v157) = v107;
						v108 = v29[19];
						BYTE2(v157) = v105;
						v109 = v32[19];
						BYTE1(v157) = v106;
						HIBYTE(v157) = v103;
						v110 = v30[19];
						v193 = v157;
						v111 = (__int16)(v108 - ((__int16)v109 >> 1));
						v112 = v111 + v109;
						if (v112 >= 0)
						{
							if (v112 > 255)
								LOBYTE(v112) = -1;
						}
						else
						{
							LOBYTE(v112) = 0;
						}
						v113 = v111 - (v33[19] >> 1);
						if (v113 >= 0)
						{
							if (v113 > 255)
								LOWORD(v113) = 255;
						}
						else
						{
							LOWORD(v113) = 0;
						}
						v114 = (__int16)v113 + v33[19];
						if (v114 >= 0)
						{
							if (v114 > 255)
								LOBYTE(v114) = -1;
						}
						else
						{
							LOBYTE(v114) = 0;
						}
						LOBYTE(v159) = v114;
						v115 = v29[24];
						BYTE2(v159) = v112;
						v116 = v32[24];
						BYTE1(v159) = v113;
						HIBYTE(v159) = v110;
						v117 = v30[24];
						v194 = v159;
						v118 = (__int16)(v115 - ((__int16)v116 >> 1));
						v119 = v118 + v116;
						if (v119 >= 0)
						{
							if (v119 > 255)
								LOBYTE(v119) = -1;
						}
						else
						{
							LOBYTE(v119) = 0;
						}
						v120 = v118 - (v33[24] >> 1);
						if (v120 >= 0)
						{
							if (v120 > 255)
								LOWORD(v120) = 255;
						}
						else
						{
							LOWORD(v120) = 0;
						}
						v121 = (__int16)v120 + v33[24];
						if (v121 >= 0)
						{
							if (v121 > 255)
								LOBYTE(v121) = -1;
						}
						else
						{
							LOBYTE(v121) = 0;
						}
						LOBYTE(v161) = v121;
						v122 = v29[25];
						BYTE2(v161) = v119;
						v123 = v32[25];
						BYTE1(v161) = v120;
						HIBYTE(v161) = v117;
						v124 = v30[25];
						v195 = v161;
						v125 = (__int16)(v122 - ((__int16)v123 >> 1));
						v126 = v125 + v123;
						if (v126 >= 0)
						{
							if (v126 > 255)
								LOBYTE(v126) = -1;
						}
						else
						{
							LOBYTE(v126) = 0;
						}
						v127 = v125 - (v33[25] >> 1);
						if (v127 >= 0)
						{
							if (v127 > 255)
								LOWORD(v127) = 255;
						}
						else
						{
							LOWORD(v127) = 0;
						}
						v128 = (__int16)v127 + v33[25];
						if (v128 >= 0)
						{
							if (v128 > 255)
								LOBYTE(v128) = -1;
						}
						else
						{
							LOBYTE(v128) = 0;
						}
						LOBYTE(v163) = v128;
						v129 = v29[26];
						BYTE2(v163) = v126;
						v130 = v32[26];
						BYTE1(v163) = v127;
						HIBYTE(v163) = v124;
						v131 = v30[26];
						v196 = v163;
						v132 = (__int16)(v129 - ((__int16)v130 >> 1));
						v133 = v132 + v130;
						if (v133 >= 0)
						{
							if (v133 > 255)
								LOBYTE(v133) = -1;
						}
						else
						{
							LOBYTE(v133) = 0;
						}
						v134 = v132 - (v33[26] >> 1);
						if (v134 >= 0)
						{
							if (v134 > 255)
								LOWORD(v134) = 255;
						}
						else
						{
							LOWORD(v134) = 0;
						}
						v135 = (__int16)v134 + v33[26];
						if (v135 >= 0)
						{
							if (v135 > 255)
								LOBYTE(v135) = -1;
						}
						else
						{
							LOBYTE(v135) = 0;
						}
						LOBYTE(v165) = v135;
						v136 = v29[27];
						BYTE1(v165) = v134;
						BYTE2(v165) = v133;
						v137 = v32[27];
						HIBYTE(v165) = v131;
						v138 = v30[27];
						v197 = v165;
						v139 = (__int16)(v136 - ((__int16)v137 >> 1));
						v140 = v139 + v137;
						if (v139 + v137 >= 0)
						{
							if (v140 > 255)
								LOBYTE(v140) = -1;
						}
						else
						{
							LOBYTE(v140) = 0;
						}
						v141 = v139 - (v33[27] >> 1);
						if (v141 >= 0)
						{
							if (v141 > 255)
								LOWORD(v141) = 255;
						}
						else
						{
							LOWORD(v141) = 0;
						}
						v142 = (__int16)v141 + v33[27];
						if (v142 >= 0)
						{
							if (v142 > 255)
								LOBYTE(v142) = -1;
						}
						else
						{
							LOBYTE(v142) = 0;
						}
						LOBYTE(v167) = v142;
						BYTE1(v167) = v141;
						BYTE2(v167) = v140;
						HIBYTE(v167) = v138;
						v198 = v167;
						sub_1402C7250(&v186, v151, v150);
						v143 = HIBYTE(v150[0]);
						v144 = HIBYTE(v151[0]);
						*v25 = HIBYTE(v150[0]);
						v25[1] = v144;
						v171 = v25 + 2;
						sub_1402C77D0(&v186, (__int64*)&v171, v144, v143);
						v145 = (__int64)(v171 + 4);
						v171 = (_BYTE*)v145;
						v146 = BYTE2(v151[0]);
						*(_WORD*)(v145 - 4) = (BYTE1(v150[0]) >> 3) | (8 * (BYTE2(v150[0]) & 0xFC | (32 * (v150[0] & 0xF8))));
						*(_WORD*)(v145 - 2) = (BYTE1(v151[0]) >> 3) | (8 * (v146 & 0xFFFC | (32 * (v151[0] & 0xF8))));
						sub_1402C74E0((__int64)&v186, (__int64*)&v171, v151, v150);
						if (++v26 >= v21)
							break;
						v25 = v171;
					}
					v24 = v168;
					v22 = v177;
				}
				v8 = v181;
				++v24;
				v147 = *v181;
				v168 = v24;
				v22 += v147;
				v177 = v22;
			} while (v24 < v176);
			v18 = v172;
			v19 = v178;
			v17 = v169;
			v10 = v175;
		}
		v11 = v174;
		++v18;
		v148 = 16 * v21;
		v9 = v180;
		v172 = v18;
		v19 += v148;
		v178 = v19;
		if (v18 >= v174)
		{
			v15 = v179;
			goto LABEL_209;
		}
	}
}
// 1402BED50: variable 'v16' is possibly undefined
// 1402BEC70: using guessed type __int64 var_3D0[106];

