#include "../winhttp.h"

//----- (00000001402BDEB0) ----------------------------------------------------
__int64 __fastcall sub_1402BDEB0(
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
	__int64 v9; // r12
	unsigned int v10; // r13d
	unsigned int v11; // r15d
	__int64 v13; // rcx
	__int64 v15; // r8
	__int64 v16; // rcx
	unsigned int v17; // esi
	__int64 v18; // rdi
	unsigned int v19; // ebx
	__int64 result; // rax
	int v21; // r8d
	__int64 v22; // rdx
	unsigned int v23; // eax
	unsigned int v24; // ecx
	_BYTE* v25; // r13
	unsigned int v26; // edx
	__int64 v27; // r8
	__int64 v28; // r9
	__int64 v29; // rcx
	__int64 v30; // rax
	int v31; // r10d
	unsigned __int8* v32; // rsi
	__int16* v33; // r12
	__int16 v34; // bx
	char* v35; // r14
	char* v36; // r15
	char v37; // r9
	int v38; // edx
	int v39; // r8d
	int v40; // edx
	int v41; // ecx
	__int16 v42; // cx
	char v43; // r9
	int v44; // edx
	int v45; // r8d
	int v46; // edx
	int v47; // ecx
	__int16 v48; // di
	char v49; // r11
	__int16 v50; // cx
	int v51; // r9d
	int v52; // edx
	int v53; // r8d
	int v54; // edx
	int v55; // ecx
	__int16 v56; // cx
	char v57; // r11
	int v58; // edx
	int v59; // r8d
	int v60; // edx
	int v61; // ecx
	__int16 v62; // cx
	char v63; // r11
	int v64; // edx
	int v65; // r8d
	int v66; // edx
	int v67; // ecx
	__int16 v68; // cx
	char v69; // r11
	int v70; // edx
	int v71; // r8d
	int v72; // edx
	int v73; // ecx
	char v74; // r10
	__int16 v75; // cx
	int v76; // edx
	int v77; // r8d
	int v78; // edx
	int v79; // ecx
	__int16 v80; // cx
	char v81; // r10
	int v82; // edx
	int v83; // r8d
	int v84; // edx
	int v85; // ecx
	__int16 v86; // di
	char v87; // r9
	__int16 v88; // cx
	int v89; // r10d
	int v90; // edx
	int v91; // r8d
	int v92; // edx
	int v93; // ecx
	__int16 v94; // cx
	char v95; // r9
	int v96; // edx
	int v97; // r8d
	int v98; // edx
	int v99; // ecx
	__int16 v100; // bx
	char v101; // r11
	__int16 v102; // cx
	int v103; // r9d
	int v104; // edx
	int v105; // r8d
	int v106; // edx
	int v107; // ecx
	__int16 v108; // cx
	char v109; // r11
	int v110; // edx
	int v111; // r8d
	int v112; // edx
	int v113; // ecx
	__int16 v114; // cx
	char v115; // r11
	int v116; // edx
	int v117; // r8d
	int v118; // edx
	int v119; // ecx
	__int16 v120; // cx
	char v121; // r11
	int v122; // edx
	int v123; // r8d
	int v124; // edx
	int v125; // ecx
	char v126; // r10
	__int16 v127; // cx
	int v128; // edx
	int v129; // r8d
	int v130; // edx
	int v131; // ecx
	__int16 v132; // cx
	char v133; // r10
	int v134; // eax
	int v135; // r8d
	int v136; // eax
	int v137; // edx
	unsigned __int8 v138; // r9
	unsigned __int8 v139; // r8
	__int64 v140; // r8
	__int16 v141; // ax
	__int64 v142; // rax
	unsigned int v143[4]; // [rsp+20h] [rbp-E0h] BYREF
	unsigned int v144[4]; // [rsp+30h] [rbp-D0h] BYREF
	int v145; // [rsp+40h] [rbp-C0h]
	int v146; // [rsp+44h] [rbp-BCh]
	int v147; // [rsp+48h] [rbp-B8h]
	int v148; // [rsp+4Ch] [rbp-B4h]
	int v149; // [rsp+50h] [rbp-B0h]
	int v150; // [rsp+54h] [rbp-ACh]
	int v151; // [rsp+58h] [rbp-A8h]
	int v152; // [rsp+5Ch] [rbp-A4h]
	int v153; // [rsp+60h] [rbp-A0h]
	int v154; // [rsp+64h] [rbp-9Ch]
	int v155; // [rsp+68h] [rbp-98h]
	int v156; // [rsp+6Ch] [rbp-94h]
	int v157; // [rsp+70h] [rbp-90h]
	int v158; // [rsp+74h] [rbp-8Ch]
	int v159; // [rsp+78h] [rbp-88h]
	int v160; // [rsp+7Ch] [rbp-84h]
	unsigned int v161; // [rsp+80h] [rbp-80h]
	unsigned int v162; // [rsp+84h] [rbp-7Ch]
	_BYTE* v163; // [rsp+88h] [rbp-78h] BYREF
	unsigned int v164; // [rsp+90h] [rbp-70h]
	unsigned int v165; // [rsp+94h] [rbp-6Ch]
	unsigned int v166; // [rsp+98h] [rbp-68h]
	unsigned int v167; // [rsp+9Ch] [rbp-64h]
	unsigned int v168; // [rsp+A0h] [rbp-60h]
	unsigned int v169; // [rsp+A4h] [rbp-5Ch]
	unsigned int v170; // [rsp+A8h] [rbp-58h]
	unsigned int v171; // [rsp+ACh] [rbp-54h]
	__int64 v172; // [rsp+B0h] [rbp-50h]
	__int64 v173; // [rsp+B8h] [rbp-48h]
	__int64 v174; // [rsp+C0h] [rbp-40h]
	_DWORD* v175; // [rsp+C8h] [rbp-38h]
	__int64 v176; // [rsp+D0h] [rbp-30h]
	__int64 v177; // [rsp+D8h] [rbp-28h]
	__int64 v178; // [rsp+E0h] [rbp-20h]
	__int64 v179[5]; // [rsp+E8h] [rbp-18h] BYREF
	char v180[768]; // [rsp+110h] [rbp+10h] BYREF
	__int64 v181[106]; // [rsp+410h] [rbp+310h] BYREF
	__m128i v182; // [rsp+760h] [rbp+660h] BYREF
	int v183; // [rsp+770h] [rbp+670h]
	int v184; // [rsp+774h] [rbp+674h]
	int v185; // [rsp+778h] [rbp+678h]
	int v186; // [rsp+77Ch] [rbp+67Ch]
	int v187; // [rsp+780h] [rbp+680h]
	int v188; // [rsp+784h] [rbp+684h]
	int v189; // [rsp+788h] [rbp+688h]
	int v190; // [rsp+78Ch] [rbp+68Ch]
	int v191; // [rsp+790h] [rbp+690h]
	int v192; // [rsp+794h] [rbp+694h]
	int v193; // [rsp+798h] [rbp+698h]
	int v194; // [rsp+79Ch] [rbp+69Ch]

	v8 = a8;
	v9 = a1;
	v178 = a1;
	v10 = (unsigned int)(a6 + 3) >> 2;
	v164 = (unsigned int)(a6 + 15) >> 4;
	v11 = (unsigned int)(a5 + 15) >> 4;
	v13 = *a8 * v10;
	v175 = a8;
	v167 = (unsigned int)(a5 + 3) >> 2;
	v168 = v11;
	v169 = v10;
	*a7 = (__int64)sub_14018B280(v13, 8u);
	v179[0] = a3;
	v179[1] = a4;
	v179[3] = 0i64;
	v179[2] = a3;
	sub_1402C0750(v181, (__int64)v179);
	v16 = *a7;
	v174 = *a7;
	v17 = 0;
	v162 = 0;
	if (!v164)
		return 0i64;
	while (1)
	{
		v18 = v16;
		v173 = v16;
		v19 = 0;
		v165 = 0;
		if (v11)
			break;
	LABEL_210:
		++v17;
		v142 = (unsigned int)(4 * *v8);
		v162 = v17;
		v16 += v142;
		v174 = v16;
		if (v17 >= v164)
			return 0i64;
	}
	while (1)
	{
		result = sub_1402BCB70((__int64)v180, (__int64)v181, v15, v9);
		if ((int)result < 0)
			return result;
		v21 = 4;
		v22 = v18;
		v172 = v18;
		if ((int)(v167 - 4 * v19) < 4)
			v21 = v167 - 4 * v19;
		v23 = 4;
		v171 = v21;
		if ((int)(v10 - 4 * v17) < 4)
			v23 = v10 - 4 * v17;
		v24 = 0;
		v161 = 0;
		v170 = v23;
		if (v23)
		{
			do
			{
				v25 = (_BYTE*)v22;
				v26 = 0;
				v166 = 0;
				if (v21)
				{
					v27 = v24 << 6;
					v28 = 16 * v24;
					v177 = v28;
					v176 = v27;
					while (1)
					{
						v29 = v28 + 2 * v26;
						v30 = v27 + 4 * v26;
						v31 = *(__int16*)&v180[2 * v29 + 384];
						v32 = (unsigned __int8*)&v180[v30];
						v33 = (__int16*)&v180[2 * v29 + 384];
						v34 = *(_WORD*)&v180[2 * v29 + 256];
						v35 = &v180[v30 + 512];
						v36 = &v180[2 * v29 + 256];
						v37 = v180[v30 + 512];
						v38 = (__int16)((unsigned __int8)v180[v30] - ((__int16)v31 >> 1));
						v39 = v38 + v31;
						if (v38 + v31 >= 0)
						{
							if (v39 > 255)
								LOBYTE(v39) = -1;
						}
						else
						{
							LOBYTE(v39) = 0;
						}
						v40 = v38 - (v34 >> 1);
						if (v40 >= 0)
						{
							if (v40 > 255)
								LOWORD(v40) = 255;
						}
						else
						{
							LOWORD(v40) = 0;
						}
						v41 = (__int16)v40 + v34;
						if (v41 >= 0)
						{
							if (v41 > 255)
								LOBYTE(v41) = -1;
						}
						else
						{
							LOBYTE(v41) = 0;
						}
						LOBYTE(v159) = v41;
						v42 = v32[1];
						BYTE2(v159) = v39;
						BYTE1(v159) = v40;
						HIBYTE(v159) = v37;
						v43 = v35[1];
						v182.m128i_i32[0] = v159;
						v44 = (__int16)(v42 - ((__int16)v31 >> 1));
						v45 = v44 + (__int16)v31;
						if (v45 >= 0)
						{
							if (v45 > 255)
								LOBYTE(v45) = -1;
						}
						else
						{
							LOBYTE(v45) = 0;
						}
						v46 = v44 - (v34 >> 1);
						if (v46 >= 0)
						{
							if (v46 > 255)
								LOWORD(v46) = 255;
						}
						else
						{
							LOWORD(v46) = 0;
						}
						v47 = (__int16)v46 + v34;
						if (v47 >= 0)
						{
							if (v47 > 255)
								LOBYTE(v47) = -1;
						}
						else
						{
							LOBYTE(v47) = 0;
						}
						v48 = *((_WORD*)v36 + 1);
						v49 = v35[2];
						LOBYTE(v147) = v47;
						v50 = v32[2];
						BYTE2(v147) = v45;
						BYTE1(v147) = v46;
						HIBYTE(v147) = v43;
						v51 = v33[1];
						v182.m128i_i32[1] = v147;
						v52 = (__int16)(v50 - ((__int16)v51 >> 1));
						v53 = v52 + v51;
						if (v52 + v51 >= 0)
						{
							if (v53 > 255)
								LOBYTE(v53) = -1;
						}
						else
						{
							LOBYTE(v53) = 0;
						}
						v54 = v52 - (v48 >> 1);
						if (v54 >= 0)
						{
							if (v54 > 255)
								LOWORD(v54) = 255;
						}
						else
						{
							LOWORD(v54) = 0;
						}
						v55 = (__int16)v54 + v48;
						if (v55 >= 0)
						{
							if (v55 > 255)
								LOBYTE(v55) = -1;
						}
						else
						{
							LOBYTE(v55) = 0;
						}
						LOBYTE(v157) = v55;
						v56 = v32[3];
						BYTE2(v157) = v53;
						BYTE1(v157) = v54;
						HIBYTE(v157) = v49;
						v57 = v35[3];
						v182.m128i_i32[2] = v157;
						v58 = (__int16)(v56 - ((__int16)v51 >> 1));
						v59 = v58 + (__int16)v51;
						if (v59 >= 0)
						{
							if (v59 > 255)
								LOBYTE(v59) = -1;
						}
						else
						{
							LOBYTE(v59) = 0;
						}
						v60 = v58 - (v48 >> 1);
						if (v60 >= 0)
						{
							if (v60 > 255)
								LOWORD(v60) = 255;
						}
						else
						{
							LOWORD(v60) = 0;
						}
						v61 = (__int16)v60 + v48;
						if (v61 >= 0)
						{
							if (v61 > 255)
								LOBYTE(v61) = -1;
						}
						else
						{
							LOBYTE(v61) = 0;
						}
						LOBYTE(v149) = v61;
						v62 = v32[16];
						BYTE2(v149) = v59;
						BYTE1(v149) = v60;
						HIBYTE(v149) = v57;
						v63 = v35[16];
						v182.m128i_i32[3] = v149;
						v64 = (__int16)(v62 - ((__int16)v31 >> 1));
						v65 = v64 + (__int16)v31;
						if (v65 >= 0)
						{
							if (v65 > 255)
								LOBYTE(v65) = -1;
						}
						else
						{
							LOBYTE(v65) = 0;
						}
						v66 = v64 - (v34 >> 1);
						if (v66 >= 0)
						{
							if (v66 > 255)
								LOWORD(v66) = 255;
						}
						else
						{
							LOWORD(v66) = 0;
						}
						v67 = (__int16)v66 + v34;
						if (v67 >= 0)
						{
							if (v67 > 255)
								LOBYTE(v67) = -1;
						}
						else
						{
							LOBYTE(v67) = 0;
						}
						LOBYTE(v155) = v67;
						v68 = v32[17];
						BYTE2(v155) = v65;
						BYTE1(v155) = v66;
						HIBYTE(v155) = v63;
						v69 = v35[17];
						v183 = v155;
						v70 = (__int16)(v68 - ((__int16)v31 >> 1));
						v71 = v70 + (__int16)v31;
						if (v71 >= 0)
						{
							if (v71 > 255)
								LOBYTE(v71) = -1;
						}
						else
						{
							LOBYTE(v71) = 0;
						}
						v72 = v70 - (v34 >> 1);
						if (v72 >= 0)
						{
							if (v72 > 255)
								LOWORD(v72) = 255;
						}
						else
						{
							LOWORD(v72) = 0;
						}
						v73 = (__int16)v72 + v34;
						if (v73 >= 0)
						{
							if (v73 > 255)
								LOBYTE(v73) = -1;
						}
						else
						{
							LOBYTE(v73) = 0;
						}
						v74 = v35[18];
						LOBYTE(v151) = v73;
						v75 = v32[18];
						BYTE2(v151) = v71;
						BYTE1(v151) = v72;
						HIBYTE(v151) = v69;
						v184 = v151;
						v76 = (__int16)(v75 - ((__int16)v51 >> 1));
						v77 = v76 + (__int16)v51;
						if (v77 >= 0)
						{
							if (v77 > 255)
								LOBYTE(v77) = -1;
						}
						else
						{
							LOBYTE(v77) = 0;
						}
						v78 = v76 - (v48 >> 1);
						if (v78 >= 0)
						{
							if (v78 > 255)
								LOWORD(v78) = 255;
						}
						else
						{
							LOWORD(v78) = 0;
						}
						v79 = (__int16)v78 + v48;
						if (v79 >= 0)
						{
							if (v79 > 255)
								LOBYTE(v79) = -1;
						}
						else
						{
							LOBYTE(v79) = 0;
						}
						LOBYTE(v145) = v79;
						v80 = v32[19];
						BYTE2(v145) = v77;
						BYTE1(v145) = v78;
						HIBYTE(v145) = v74;
						v81 = v35[19];
						v185 = v145;
						v82 = (__int16)(v80 - ((__int16)v51 >> 1));
						v83 = v82 + (__int16)v51;
						if (v83 >= 0)
						{
							if (v83 > 255)
								LOBYTE(v83) = -1;
						}
						else
						{
							LOBYTE(v83) = 0;
						}
						v84 = v82 - (v48 >> 1);
						if (v84 >= 0)
						{
							if (v84 > 255)
								LOWORD(v84) = 255;
						}
						else
						{
							LOWORD(v84) = 0;
						}
						v85 = (__int16)v84 + v48;
						if (v85 >= 0)
						{
							if (v85 > 255)
								LOBYTE(v85) = -1;
						}
						else
						{
							LOBYTE(v85) = 0;
						}
						v86 = *((_WORD*)v36 + 8);
						v87 = v35[32];
						LOBYTE(v153) = v85;
						v88 = v32[32];
						BYTE2(v153) = v83;
						BYTE1(v153) = v84;
						HIBYTE(v153) = v81;
						v89 = v33[8];
						v186 = v153;
						v90 = (__int16)(v88 - ((__int16)v89 >> 1));
						v91 = v90 + v89;
						if (v90 + v89 >= 0)
						{
							if (v91 > 255)
								LOBYTE(v91) = -1;
						}
						else
						{
							LOBYTE(v91) = 0;
						}
						v92 = v90 - (v86 >> 1);
						if (v92 >= 0)
						{
							if (v92 > 255)
								LOWORD(v92) = 255;
						}
						else
						{
							LOWORD(v92) = 0;
						}
						v93 = (__int16)v92 + v86;
						if (v93 >= 0)
						{
							if (v93 > 255)
								LOBYTE(v93) = -1;
						}
						else
						{
							LOBYTE(v93) = 0;
						}
						LOBYTE(v146) = v93;
						v94 = v32[33];
						BYTE2(v146) = v91;
						BYTE1(v146) = v92;
						HIBYTE(v146) = v87;
						v95 = v35[33];
						v187 = v146;
						v96 = (__int16)(v94 - ((__int16)v89 >> 1));
						v97 = v96 + (__int16)v89;
						if (v97 >= 0)
						{
							if (v97 > 255)
								LOBYTE(v97) = -1;
						}
						else
						{
							LOBYTE(v97) = 0;
						}
						v98 = v96 - (v86 >> 1);
						if (v98 >= 0)
						{
							if (v98 > 255)
								LOWORD(v98) = 255;
						}
						else
						{
							LOWORD(v98) = 0;
						}
						v99 = (__int16)v98 + v86;
						if (v99 >= 0)
						{
							if (v99 > 255)
								LOBYTE(v99) = -1;
						}
						else
						{
							LOBYTE(v99) = 0;
						}
						v100 = *((_WORD*)v36 + 9);
						v101 = v35[34];
						LOBYTE(v148) = v99;
						v102 = v32[34];
						BYTE2(v148) = v97;
						BYTE1(v148) = v98;
						HIBYTE(v148) = v95;
						v103 = v33[9];
						v188 = v148;
						v104 = (__int16)(v102 - ((__int16)v103 >> 1));
						v105 = v104 + v103;
						if (v104 + v103 >= 0)
						{
							if (v105 > 255)
								LOBYTE(v105) = -1;
						}
						else
						{
							LOBYTE(v105) = 0;
						}
						v106 = v104 - (v100 >> 1);
						if (v106 >= 0)
						{
							if (v106 > 255)
								LOWORD(v106) = 255;
						}
						else
						{
							LOWORD(v106) = 0;
						}
						v107 = (__int16)v106 + v100;
						if (v107 >= 0)
						{
							if (v107 > 255)
								LOBYTE(v107) = -1;
						}
						else
						{
							LOBYTE(v107) = 0;
						}
						LOBYTE(v150) = v107;
						v108 = v32[35];
						BYTE2(v150) = v105;
						BYTE1(v150) = v106;
						HIBYTE(v150) = v101;
						v109 = v35[35];
						v189 = v150;
						v110 = (__int16)(v108 - ((__int16)v103 >> 1));
						v111 = v110 + (__int16)v103;
						if (v111 >= 0)
						{
							if (v111 > 255)
								LOBYTE(v111) = -1;
						}
						else
						{
							LOBYTE(v111) = 0;
						}
						v112 = v110 - (v100 >> 1);
						if (v112 >= 0)
						{
							if (v112 > 255)
								LOWORD(v112) = 255;
						}
						else
						{
							LOWORD(v112) = 0;
						}
						v113 = (__int16)v112 + v100;
						if (v113 >= 0)
						{
							if (v113 > 255)
								LOBYTE(v113) = -1;
						}
						else
						{
							LOBYTE(v113) = 0;
						}
						LOBYTE(v152) = v113;
						v114 = v32[48];
						BYTE2(v152) = v111;
						BYTE1(v152) = v112;
						HIBYTE(v152) = v109;
						v115 = v35[48];
						v190 = v152;
						v116 = (__int16)(v114 - ((__int16)v89 >> 1));
						v117 = v116 + (__int16)v89;
						if (v117 >= 0)
						{
							if (v117 > 255)
								LOBYTE(v117) = -1;
						}
						else
						{
							LOBYTE(v117) = 0;
						}
						v118 = v116 - (v86 >> 1);
						if (v118 >= 0)
						{
							if (v118 > 255)
								LOWORD(v118) = 255;
						}
						else
						{
							LOWORD(v118) = 0;
						}
						v119 = (__int16)v118 + v86;
						if (v119 >= 0)
						{
							if (v119 > 255)
								LOBYTE(v119) = -1;
						}
						else
						{
							LOBYTE(v119) = 0;
						}
						LOBYTE(v154) = v119;
						v120 = v32[49];
						BYTE2(v154) = v117;
						BYTE1(v154) = v118;
						HIBYTE(v154) = v115;
						v121 = v35[49];
						v191 = v154;
						v122 = (__int16)(v120 - ((__int16)v89 >> 1));
						v123 = v122 + (__int16)v89;
						if (v123 >= 0)
						{
							if (v123 > 255)
								LOBYTE(v123) = -1;
						}
						else
						{
							LOBYTE(v123) = 0;
						}
						v124 = v122 - (v86 >> 1);
						if (v124 >= 0)
						{
							if (v124 > 255)
								LOWORD(v124) = 255;
						}
						else
						{
							LOWORD(v124) = 0;
						}
						v125 = (__int16)v124 + v86;
						if (v125 >= 0)
						{
							if (v125 > 255)
								LOBYTE(v125) = -1;
						}
						else
						{
							LOBYTE(v125) = 0;
						}
						v126 = v35[50];
						LOBYTE(v156) = v125;
						v127 = v32[50];
						BYTE2(v156) = v123;
						BYTE1(v156) = v124;
						HIBYTE(v156) = v121;
						v192 = v156;
						v128 = (__int16)(v127 - ((__int16)v103 >> 1));
						v129 = v128 + (__int16)v103;
						if (v129 >= 0)
						{
							if (v129 > 255)
								LOBYTE(v129) = -1;
						}
						else
						{
							LOBYTE(v129) = 0;
						}
						v130 = v128 - (v100 >> 1);
						if (v130 >= 0)
						{
							if (v130 > 255)
								LOWORD(v130) = 255;
						}
						else
						{
							LOWORD(v130) = 0;
						}
						v131 = (__int16)v130 + v100;
						if (v131 >= 0)
						{
							if (v131 > 255)
								LOBYTE(v131) = -1;
						}
						else
						{
							LOBYTE(v131) = 0;
						}
						LOBYTE(v158) = v131;
						v132 = v32[51];
						BYTE2(v158) = v129;
						HIBYTE(v158) = v126;
						v133 = v35[51];
						BYTE1(v158) = v130;
						v193 = v158;
						v134 = (__int16)(v132 - ((__int16)v103 >> 1));
						v135 = v134 + (__int16)v103;
						if (v135 >= 0)
						{
							if (v135 > 255)
								LOBYTE(v135) = -1;
						}
						else
						{
							LOBYTE(v135) = 0;
						}
						v136 = v134 - (v100 >> 1);
						if (v136 >= 0)
						{
							if (v136 > 255)
								LOWORD(v136) = 255;
						}
						else
						{
							LOWORD(v136) = 0;
						}
						v137 = (__int16)v136 + v100;
						if (v137 >= 0)
						{
							if (v137 > 255)
								LOBYTE(v137) = -1;
						}
						else
						{
							LOBYTE(v137) = 0;
						}
						LOBYTE(v160) = v137;
						BYTE1(v160) = v136;
						BYTE2(v160) = v135;
						HIBYTE(v160) = v133;
						v194 = v160;
						sub_1402C7250(&v182, v144, v143);
						v138 = HIBYTE(v143[0]);
						v139 = HIBYTE(v144[0]);
						*v25 = HIBYTE(v143[0]);
						v25[1] = v139;
						v163 = v25 + 2;
						sub_1402C77D0(&v182, (__int64*)&v163, v139, v138);
						v140 = (__int64)(v163 + 4);
						v163 = (_BYTE*)v140;
						v141 = BYTE2(v144[0]);
						*(_WORD*)(v140 - 4) = (BYTE1(v143[0]) >> 3) | (8 * (BYTE2(v143[0]) & 0xFC | (32 * (v143[0] & 0xF8))));
						*(_WORD*)(v140 - 2) = (BYTE1(v144[0]) >> 3) | (8 * (v141 & 0xFFFC | (32 * (v144[0] & 0xF8))));
						sub_1402C74E0((__int64)&v182, (__int64*)&v163, v144, v143);
						v21 = v171;
						v26 = v166 + 1;
						v166 = v26;
						if (v26 >= v171)
							break;
						v25 = v163;
						v27 = v176;
						v28 = v177;
					}
					v24 = v161;
					v8 = v175;
				}
				++v24;
				v22 = (unsigned int)*v8 + v172;
				v161 = v24;
				v172 = v22;
			} while (v24 < v170);
			v19 = v165;
			v18 = v173;
			v17 = v162;
			v11 = v168;
			v9 = v178;
			v10 = v169;
		}
		v15 = (unsigned int)(16 * v21);
		v165 = ++v19;
		v18 += (unsigned int)v15;
		v173 = v18;
		if (v19 >= v11)
		{
			v16 = v174;
			goto LABEL_210;
		}
	}
}
// 1402BDFBE: variable 'v15' is possibly undefined
// 1402BDEB0: using guessed type __int64 var_3C0[106];

