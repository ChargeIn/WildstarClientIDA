#include "../winhttp.h"

//----- (00000001407D3FF0) ----------------------------------------------------
__int64 __fastcall sub_1407D3FF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 result; // rax
	unsigned int v9; // r15d
	__int64 v10; // rbx
	_DWORD* v11; // rcx
	__int64 v12; // rax
	float v13; // xmm2_4
	float v14; // xmm0_4
	float v15; // xmm1_4
	float v16; // xmm1_4
	float v17; // xmm0_4
	float v18; // xmm2_4
	float v19; // xmm1_4
	float v20; // xmm0_4
	float v21; // xmm1_4
	float v22; // xmm0_4
	float v23; // xmm1_4
	float v24; // xmm0_4
	float v25; // xmm1_4
	float v26; // xmm0_4
	float v27; // xmm1_4
	float v28; // xmm0_4
	float v29; // xmm1_4
	float v30; // xmm0_4
	float v31; // xmm1_4
	float v32; // xmm0_4
	float v33; // xmm1_4
	float v34; // xmm0_4
	float v35; // xmm1_4
	float v36; // xmm0_4
	float v37; // xmm1_4
	float v38; // xmm0_4
	float v39; // xmm1_4
	float v40; // xmm0_4
	float v41; // xmm1_4
	__m128 v42; // xmm12
	unsigned int v43; // r12d
	__m128 v44; // xmm10
	__int64 v45; // r15
	_DWORD* v46; // rcx
	__int64 v47; // rbx
	__m128 v48; // xmm8
	float v49; // xmm0_4
	__m128 v50; // xmm6
	float v51; // xmm9_4
	__m128 v52; // xmm0
	__m128 v53; // xmm7
	__m128 v54; // xmm0
	__m128 v55; // xmm8
	__m128 v56; // xmm0
	float v57; // xmm1_4
	float v58; // xmm1_4
	float v59; // xmm1_4
	float v60; // xmm1_4
	float v61; // xmm1_4
	float v62; // xmm1_4
	float v63; // xmm1_4
	float v64; // xmm1_4
	float v65; // xmm1_4
	float v66; // xmm1_4
	float v67; // xmm1_4
	float v68; // xmm1_4
	float v69; // xmm1_4
	unsigned int v70; // r12d
	__m128 v71; // xmm10
	unsigned __int64 v72; // r15
	_DWORD* v73; // rcx
	__int64 v74; // rbx
	__m128 v75; // xmm8
	float v76; // xmm0_4
	__m128 v77; // xmm6
	float v78; // xmm9_4
	__m128 v79; // xmm0
	__m128 v80; // xmm7
	__m128 v81; // xmm0
	__m128 v82; // xmm8
	__m128 v83; // xmm0
	float v84; // xmm1_4
	float v85; // xmm1_4
	float v86; // xmm1_4
	float v87; // xmm1_4
	float v88; // xmm1_4
	float v89; // xmm1_4
	float v90; // xmm1_4
	float v91; // xmm1_4
	float v92; // xmm1_4
	float v93; // xmm1_4
	float v94; // xmm1_4
	float v95; // xmm1_4
	unsigned int v96; // r15d
	__int64 v97; // r8
	int* v98; // rcx
	__int64 v99; // rax
	float v100; // xmm1_4
	float v101; // xmm2_4
	float v102; // xmm3_4
	float v103; // xmm4_4
	float v104; // xmm5_4
	float v105; // xmm6_4
	float v106; // xmm7_4
	float v107; // xmm8_4
	float v108; // xmm9_4
	float v109; // xmm10_4
	float v110; // xmm11_4
	float v111; // xmm12_4
	float v112; // xmm13_4
	float v113; // xmm14_4
	float v114; // xmm15_4
	unsigned int v115; // r12d
	__m128 v116; // xmm10
	unsigned __int64 v117; // r15
	_DWORD* v118; // rcx
	__int64 v119; // rbx
	__m128 v120; // xmm8
	float v121; // xmm0_4
	__m128 v122; // xmm6
	float v123; // xmm9_4
	__m128 v124; // xmm0
	__m128 v125; // xmm7
	__m128 v126; // xmm0
	__m128 v127; // xmm8
	__m128 v128; // xmm0
	float v129; // xmm1_4
	float v130; // xmm1_4
	float v131; // xmm1_4
	float v132; // xmm1_4
	float v133; // xmm1_4
	float v134; // xmm1_4
	float v135; // xmm1_4
	float v136; // xmm1_4
	float v137; // xmm1_4
	float v138; // xmm1_4
	float v139; // xmm1_4
	float v140; // xmm1_4
	float v141; // xmm1_4
	unsigned __int64 v142; // r15
	_DWORD* v143; // rcx
	__int64 v144; // rbx
	__m128 v145; // xmm6
	float v146; // xmm0_4
	float v147; // xmm8_4
	__m128 v148; // xmm7
	float v149; // xmm10_4
	__m128 v150; // xmm0
	__m128 v151; // xmm9
	__m128 v152; // xmm0
	__m128 v153; // xmm6
	__m128 v154; // xmm0
	float v155; // xmm1_4
	float v156; // xmm1_4
	float v157; // xmm1_4
	float v158; // xmm1_4
	float v159; // xmm1_4
	float v160; // xmm1_4
	float v161; // xmm1_4
	float v162; // xmm1_4
	float v163; // xmm1_4
	float v164; // xmm1_4
	float v165; // xmm1_4
	float v166; // xmm1_4
	float v167; // xmm1_4
	float v168; // xmm1_4
	float v169; // xmm2_4
	float v170; // xmm3_4
	float v171; // xmm4_4
	float v172; // xmm5_4
	float v173; // xmm6_4
	float v174; // xmm7_4
	float v175; // xmm8_4
	float v176; // xmm9_4
	float v177; // xmm10_4
	float v178; // xmm11_4
	float v179; // xmm12_4
	float v180; // xmm13_4
	float v181; // xmm14_4
	float v182; // xmm15_4
	float v183; // [rsp+38h] [rbp-D0h]
	float v184; // [rsp+38h] [rbp-D0h]
	float v185; // [rsp+40h] [rbp-C8h]
	float v186; // [rsp+40h] [rbp-C8h]
	float v187; // [rsp+48h] [rbp-C0h]
	float v188; // [rsp+48h] [rbp-C0h]
	float v189; // [rsp+58h] [rbp-B0h]
	float v190; // [rsp+58h] [rbp-B0h]
	float v191; // [rsp+68h] [rbp-A0h]
	float v192; // [rsp+78h] [rbp-90h]
	float v193; // [rsp+78h] [rbp-90h]
	float v194; // [rsp+80h] [rbp-88h]
	float v195; // [rsp+80h] [rbp-88h]
	float v196; // [rsp+88h] [rbp-80h]
	float v197; // [rsp+88h] [rbp-80h]
	float v198; // [rsp+98h] [rbp-70h]
	float v199; // [rsp+A8h] [rbp-60h]
	float v200; // [rsp+A8h] [rbp-60h]
	float v201; // [rsp+B8h] [rbp-50h]
	float v202; // [rsp+B8h] [rbp-50h]
	float v203; // [rsp+C8h] [rbp-40h]
	float v204; // [rsp+C8h] [rbp-40h]
	__int128 v205; // [rsp+D8h] [rbp-30h]
	__int128 v206; // [rsp+D8h] [rbp-30h]
	__m128* v207; // [rsp+E8h] [rbp-20h]
	unsigned int v208; // [rsp+F0h] [rbp-18h]
	__m128 v209; // [rsp+F8h] [rbp-10h] BYREF
	__int64 v210; // [rsp+108h] [rbp+0h] BYREF
	__int64 v211; // [rsp+110h] [rbp+8h]
	__int64 v212; // [rsp+118h] [rbp+10h]
	__int64 v213; // [rsp+120h] [rbp+18h]
	int v214; // [rsp+128h] [rbp+20h]
	__int64 v215; // [rsp+138h] [rbp+30h]
	__int64 v216; // [rsp+140h] [rbp+38h]
	__int64 v217; // [rsp+148h] [rbp+40h]
	__int64 v218; // [rsp+150h] [rbp+48h]
	float v219; // [rsp+158h] [rbp+50h]
	__int64 v220; // [rsp+168h] [rbp+60h]
	__int64 v221; // [rsp+170h] [rbp+68h]
	__int64 v222; // [rsp+178h] [rbp+70h]
	__int64 v223; // [rsp+180h] [rbp+78h]
	int v224; // [rsp+188h] [rbp+80h]
	__int128 v225; // [rsp+198h] [rbp+90h] BYREF
	__m128* v226; // [rsp+1A8h] [rbp+A0h]

	*(_OWORD*)a2 = xmmword_140C78270;
	*(_OWORD*)(a2 + 16) = xmmword_140C78280;
	*(_DWORD*)(a2 + 32) = dword_140C78290;
	*(_OWORD*)(a2 + 48) = xmmword_140C782A0;
	*(_OWORD*)(a2 + 64) = xmmword_140C782B0;
	*(_DWORD*)(a2 + 80) = dword_140C782C0;
	*(_OWORD*)(a2 + 96) = xmmword_140C782D0;
	*(_OWORD*)(a2 + 112) = xmmword_140C782E0;
	*(_DWORD*)(a2 + 128) = dword_140C782F0;
	result = 0i64;
	v208 = 0;
	v9 = 0;
	if (*(_DWORD*)(a3 + 8))
	{
		do
		{
			v10 = 32i64 * v9;
			v11 = (_DWORD*)(*(_QWORD*)(a3 + 16) + 24i64 * v9);
			if (*v11)
				sub_1407D8350(
					(__int64)v11,
					*(_DWORD*)(*(_QWORD*)(a1 + 24) + 1312i64),
					(_OWORD*)(v10 + *(_QWORD*)a4),
					a4,
					(char*)(v10 + *(_QWORD*)a4 + 16));
			v12 = *(_QWORD*)a4;
			v211 = 0i64;
			v210 = 0i64;
			v216 = 0i64;
			v13 = *(float*)(v10 + v12 + 8);
			v14 = *(float*)(v10 + v12) * 3.5449078;
			v15 = *(float*)(v10 + v12 + 4) * 3.5449078;
			v215 = 0i64;
			v221 = 0i64;
			v220 = 0i64;
			*(float*)a2 = v14 + *(float*)a2;
			v16 = v15 + *(float*)(a2 + 48);
			v17 = *((float*)&v210 + 1);
			v212 = 0i64;
			v217 = 0i64;
			v222 = 0i64;
			v213 = 0i64;
			v218 = 0i64;
			v223 = 0i64;
			*(float*)(a2 + 48) = v16;
			v18 = (float)(v13 * 3.5449078) + *(float*)(a2 + 96);
			v19 = *((float*)&v215 + 1);
			*(float*)&v214 = 0.0;
			v219 = 0.0;
			*(float*)&v224 = 0.0;
			*(float*)(a2 + 96) = v18;
			*(float*)(a2 + 4) = v17 + *(float*)(a2 + 4);
			v20 = *((float*)&v220 + 1);
			*(float*)(a2 + 52) = v19 + *(float*)(a2 + 52);
			v21 = *(float*)&v211;
			*(float*)(a2 + 100) = v20 + *(float*)(a2 + 100);
			v22 = *(float*)&v216;
			*(float*)(a2 + 8) = v21 + *(float*)(a2 + 8);
			v23 = *(float*)&v221;
			*(float*)(a2 + 56) = v22 + *(float*)(a2 + 56);
			v24 = *((float*)&v211 + 1);
			*(float*)(a2 + 104) = v23 + *(float*)(a2 + 104);
			v25 = *((float*)&v216 + 1);
			*(float*)(a2 + 12) = v24 + *(float*)(a2 + 12);
			v26 = *((float*)&v221 + 1);
			*(float*)(a2 + 60) = v25 + *(float*)(a2 + 60);
			v27 = *(float*)&v212;
			*(float*)(a2 + 108) = v26 + *(float*)(a2 + 108);
			v28 = *(float*)&v217;
			*(float*)(a2 + 16) = v27 + *(float*)(a2 + 16);
			v29 = *(float*)&v222;
			*(float*)(a2 + 64) = v28 + *(float*)(a2 + 64);
			v30 = *((float*)&v212 + 1);
			*(float*)(a2 + 112) = v29 + *(float*)(a2 + 112);
			v31 = *((float*)&v217 + 1);
			*(float*)(a2 + 20) = v30 + *(float*)(a2 + 20);
			v32 = *((float*)&v222 + 1);
			*(float*)(a2 + 68) = v31 + *(float*)(a2 + 68);
			v33 = *(float*)&v213;
			*(float*)(a2 + 116) = v32 + *(float*)(a2 + 116);
			v34 = *(float*)&v218;
			*(float*)(a2 + 24) = v33 + *(float*)(a2 + 24);
			v35 = *(float*)&v223;
			*(float*)(a2 + 72) = v34 + *(float*)(a2 + 72);
			v36 = *((float*)&v213 + 1);
			++v9;
			*(float*)(a2 + 120) = v35 + *(float*)(a2 + 120);
			v37 = *((float*)&v218 + 1);
			*(float*)(a2 + 28) = v36 + *(float*)(a2 + 28);
			v38 = *((float*)&v223 + 1);
			*(float*)(a2 + 76) = v37 + *(float*)(a2 + 76);
			v39 = *(float*)&v214;
			*(float*)(a2 + 124) = v38 + *(float*)(a2 + 124);
			v40 = v219;
			*(float*)(a2 + 32) = v39 + *(float*)(a2 + 32);
			v41 = *(float*)&v224;
			*(float*)(a2 + 80) = v40 + *(float*)(a2 + 80);
			*(float*)(a2 + 128) = v41 + *(float*)(a2 + 128);
		} while (v9 < *(_DWORD*)(a3 + 8));
		result = 0i64;
	}
	v42 = (__m128)(unsigned int)dword_140C3B438;
	v43 = 0;
	if (*(_DWORD*)(a3 + 24))
	{
		v44 = (__m128)(unsigned int)dword_140C3B438;
		v44.m128_f32[0] = *(float*)&dword_140C3B438 * 0.0055555557;
		do
		{
			v45 = 48i64 * v43;
			v46 = (_DWORD*)(*(_QWORD*)(a3 + 32) + 24i64 * v43);
			if (*v46)
				sub_1407D8590(
					(__int64)v46,
					*(_DWORD*)(*(_QWORD*)(a1 + 24) + 1312i64),
					v45 + *(_QWORD*)(a4 + 16),
					a4,
					(char*)(v45 + *(_QWORD*)(a4 + 16) + 32));
			v47 = *(_QWORD*)(a4 + 16);
			v48 = v44;
			v48.m128_f32[0] = v44.m128_f32[0] * *(float*)(v45 + v47);
			v49 = sub_1408FC950(*(double*)v48.m128_u64);
			v50 = v44;
			v50.m128_f32[0] = v44.m128_f32[0] * *(float*)(v45 + v47 + 4);
			v51 = v49;
			v52 = v50;
			v52.m128_f32[0] = sub_1408FC950(*(double*)v50.m128_u64);
			v53 = v52;
			v54 = v48;
			v53.m128_f32[0] = v53.m128_f32[0] * v51;
			v54.m128_f32[0] = sub_1408FE3D0(*(double*)v48.m128_u64);
			v55 = v54;
			v56 = v50;
			v56.m128_f32[0] = sub_1408FE3D0(*(double*)v50.m128_u64);
			*((_QWORD*)&v225 + 1) = &v209;
			v56.m128_f32[0] = v56.m128_f32[0] * v51;
			*(_QWORD*)&v225 = v45 + v47 + 16;
			v209 = _mm_unpacklo_ps(_mm_unpacklo_ps(v53, v56), _mm_unpacklo_ps(v55, (__m128)0i64));
			sub_1401AF0B0((__int64)&v225, (float*)&v210);
			v57 = *(float*)&v215;
			*(float*)a2 = *(float*)&v210 + *(float*)a2;
			v56.m128_i32[0] = v220;
			*(float*)(a2 + 48) = v57 + *(float*)(a2 + 48);
			v58 = *((float*)&v210 + 1);
			*(float*)(a2 + 96) = v56.m128_f32[0] + *(float*)(a2 + 96);
			v56.m128_i32[0] = HIDWORD(v215);
			*(float*)(a2 + 4) = v58 + *(float*)(a2 + 4);
			v59 = *((float*)&v220 + 1);
			*(float*)(a2 + 52) = v56.m128_f32[0] + *(float*)(a2 + 52);
			v56.m128_i32[0] = v211;
			*(float*)(a2 + 100) = v59 + *(float*)(a2 + 100);
			v60 = *(float*)&v216;
			*(float*)(a2 + 8) = v56.m128_f32[0] + *(float*)(a2 + 8);
			v56.m128_i32[0] = v221;
			*(float*)(a2 + 56) = v60 + *(float*)(a2 + 56);
			v61 = *((float*)&v211 + 1);
			*(float*)(a2 + 104) = v56.m128_f32[0] + *(float*)(a2 + 104);
			v56.m128_i32[0] = HIDWORD(v216);
			*(float*)(a2 + 12) = v61 + *(float*)(a2 + 12);
			v62 = *((float*)&v221 + 1);
			*(float*)(a2 + 60) = v56.m128_f32[0] + *(float*)(a2 + 60);
			v56.m128_i32[0] = v212;
			*(float*)(a2 + 108) = v62 + *(float*)(a2 + 108);
			v63 = *(float*)&v217;
			*(float*)(a2 + 16) = v56.m128_f32[0] + *(float*)(a2 + 16);
			v56.m128_i32[0] = v222;
			*(float*)(a2 + 64) = v63 + *(float*)(a2 + 64);
			v64 = *((float*)&v212 + 1);
			*(float*)(a2 + 112) = v56.m128_f32[0] + *(float*)(a2 + 112);
			v56.m128_i32[0] = HIDWORD(v217);
			*(float*)(a2 + 20) = v64 + *(float*)(a2 + 20);
			v65 = *((float*)&v222 + 1);
			++v43;
			*(float*)(a2 + 68) = v56.m128_f32[0] + *(float*)(a2 + 68);
			v56.m128_i32[0] = v213;
			*(float*)(a2 + 116) = v65 + *(float*)(a2 + 116);
			v66 = *(float*)&v218;
			*(float*)(a2 + 24) = v56.m128_f32[0] + *(float*)(a2 + 24);
			v56.m128_i32[0] = v223;
			*(float*)(a2 + 72) = v66 + *(float*)(a2 + 72);
			v67 = *((float*)&v213 + 1);
			*(float*)(a2 + 120) = v56.m128_f32[0] + *(float*)(a2 + 120);
			v56.m128_i32[0] = HIDWORD(v218);
			*(float*)(a2 + 28) = v67 + *(float*)(a2 + 28);
			v68 = *((float*)&v223 + 1);
			*(float*)(a2 + 76) = v56.m128_f32[0] + *(float*)(a2 + 76);
			v56.m128_i32[0] = v214;
			*(float*)(a2 + 124) = v68 + *(float*)(a2 + 124);
			v69 = v219;
			*(float*)(a2 + 32) = v56.m128_f32[0] + *(float*)(a2 + 32);
			v56.m128_i32[0] = v224;
			*(float*)(a2 + 80) = v69 + *(float*)(a2 + 80);
			*(float*)(a2 + 128) = v56.m128_f32[0] + *(float*)(a2 + 128);
		} while (v43 < *(_DWORD*)(a3 + 24));
		result = 0i64;
	}
	v70 = 0;
	if (*(_DWORD*)(a3 + 40))
	{
		v71 = v42;
		v71.m128_f32[0] = v42.m128_f32[0] * 0.0055555557;
		do
		{
			v72 = (unsigned __int64)v70 << 6;
			v73 = (_DWORD*)(*(_QWORD*)(a3 + 48) + 24i64 * v70);
			if (*v73)
				sub_1407D9B20(
					(__int64)v73,
					*(_DWORD*)(*(_QWORD*)(a1 + 24) + 1312i64),
					v72 + *(_QWORD*)(a4 + 32),
					a4,
					(char*)(v72 + *(_QWORD*)(a4 + 32) + 48));
			v74 = *(_QWORD*)(a4 + 32);
			v75 = v71;
			v75.m128_f32[0] = v71.m128_f32[0] * *(float*)(v72 + v74);
			v76 = sub_1408FC950(*(double*)v75.m128_u64);
			v77 = v71;
			v77.m128_f32[0] = v71.m128_f32[0] * *(float*)(v72 + v74 + 4);
			v78 = v76;
			v79 = v77;
			v79.m128_f32[0] = sub_1408FC950(*(double*)v77.m128_u64);
			v80 = v79;
			v81 = v75;
			v80.m128_f32[0] = v80.m128_f32[0] * v78;
			v81.m128_f32[0] = sub_1408FE3D0(*(double*)v75.m128_u64);
			v82 = v81;
			v83 = v77;
			v83.m128_f32[0] = sub_1408FE3D0(*(double*)v77.m128_u64) * v78;
			*(_QWORD*)&v225 = v72 + v74 + 16;
			v209 = _mm_unpacklo_ps(_mm_unpacklo_ps(v80, v83), _mm_unpacklo_ps(v82, (__m128)0i64));
			v207 = &v209;
			*((_QWORD*)&v225 + 1) = v72 + v74 + 32;
			v226 = &v209;
			sub_1401AEFA0((__int64)&v225, (__int64)&v210);
			v84 = *(float*)&v215;
			*(float*)a2 = *(float*)&v210 + *(float*)a2;
			v83.m128_i32[0] = v220;
			*(float*)(a2 + 48) = v84 + *(float*)(a2 + 48);
			v85 = *((float*)&v210 + 1);
			*(float*)(a2 + 96) = v83.m128_f32[0] + *(float*)(a2 + 96);
			v83.m128_i32[0] = HIDWORD(v215);
			*(float*)(a2 + 4) = v85 + *(float*)(a2 + 4);
			v86 = *((float*)&v220 + 1);
			*(float*)(a2 + 52) = v83.m128_f32[0] + *(float*)(a2 + 52);
			v83.m128_i32[0] = v211;
			*(float*)(a2 + 100) = v86 + *(float*)(a2 + 100);
			v87 = *(float*)&v216;
			*(float*)(a2 + 8) = v83.m128_f32[0] + *(float*)(a2 + 8);
			v83.m128_i32[0] = v221;
			*(float*)(a2 + 56) = v87 + *(float*)(a2 + 56);
			v88 = *((float*)&v211 + 1);
			*(float*)(a2 + 104) = v83.m128_f32[0] + *(float*)(a2 + 104);
			v83.m128_i32[0] = HIDWORD(v216);
			*(float*)(a2 + 12) = v88 + *(float*)(a2 + 12);
			v89 = *((float*)&v221 + 1);
			*(float*)(a2 + 60) = v83.m128_f32[0] + *(float*)(a2 + 60);
			v83.m128_i32[0] = v212;
			*(float*)(a2 + 108) = v89 + *(float*)(a2 + 108);
			*(float*)(a2 + 16) = v83.m128_f32[0] + *(float*)(a2 + 16);
			v83.m128_i32[0] = v222;
			++v70;
			*(float*)(a2 + 64) = *(float*)&v217 + *(float*)(a2 + 64);
			v90 = *((float*)&v212 + 1);
			*(float*)(a2 + 112) = v83.m128_f32[0] + *(float*)(a2 + 112);
			v83.m128_i32[0] = HIDWORD(v217);
			*(float*)(a2 + 20) = v90 + *(float*)(a2 + 20);
			v91 = *((float*)&v222 + 1);
			*(float*)(a2 + 68) = v83.m128_f32[0] + *(float*)(a2 + 68);
			v83.m128_i32[0] = v213;
			*(float*)(a2 + 116) = v91 + *(float*)(a2 + 116);
			v92 = *(float*)&v218;
			*(float*)(a2 + 24) = v83.m128_f32[0] + *(float*)(a2 + 24);
			v83.m128_i32[0] = v223;
			*(float*)(a2 + 72) = v92 + *(float*)(a2 + 72);
			v93 = *((float*)&v213 + 1);
			*(float*)(a2 + 120) = v83.m128_f32[0] + *(float*)(a2 + 120);
			v83.m128_i32[0] = HIDWORD(v218);
			*(float*)(a2 + 28) = v93 + *(float*)(a2 + 28);
			v94 = *((float*)&v223 + 1);
			*(float*)(a2 + 76) = v83.m128_f32[0] + *(float*)(a2 + 76);
			v83.m128_i32[0] = v214;
			*(float*)(a2 + 124) = v94 + *(float*)(a2 + 124);
			v95 = v219;
			*(float*)(a2 + 32) = v83.m128_f32[0] + *(float*)(a2 + 32);
			v83.m128_i32[0] = v224;
			*(float*)(a2 + 80) = v95 + *(float*)(a2 + 80);
			*(float*)(a2 + 128) = v83.m128_f32[0] + *(float*)(a2 + 128);
		} while (v70 < *(_DWORD*)(a3 + 40));
		result = 0i64;
	}
	v96 = 0;
	if (*(_DWORD*)(a3 + 88))
	{
		do
		{
			v98 = (int*)(*(_QWORD*)(a3 + 96) + 24i64 * v96);
			if (*v98)
			{
				v97 = *(_QWORD*)(a4 + 80) + 112i64 * v96;
				sub_1407D9EA0(v98, *(_DWORD*)(*(_QWORD*)(a1 + 24) + 1312i64), (float*)v97, (char*)(v97 + 108));
			}
			v99 = *(_QWORD*)(a4 + 80);
			v100 = *(float*)(v99 + 112i64 * v96 + 36);
			v101 = *(float*)(v99 + 112i64 * v96 + 72);
			v102 = *(float*)(v99 + 112i64 * v96 + 4);
			v103 = *(float*)(v99 + 112i64 * v96 + 40);
			v104 = *(float*)(v99 + 112i64 * v96 + 76);
			v105 = *(float*)(v99 + 112i64 * v96 + 8);
			v106 = *(float*)(v99 + 112i64 * v96 + 44);
			v107 = *(float*)(v99 + 112i64 * v96 + 80);
			v108 = *(float*)(v99 + 112i64 * v96 + 12);
			v109 = *(float*)(v99 + 112i64 * v96 + 48);
			v110 = *(float*)(v99 + 112i64 * v96 + 84);
			v111 = *(float*)(v99 + 112i64 * v96 + 16);
			v112 = *(float*)(v99 + 112i64 * v96 + 52);
			v113 = *(float*)(v99 + 112i64 * v96 + 88);
			v191 = *(float*)(v99 + 112i64 * v96 + 20);
			v189 = *(float*)(v99 + 112i64 * v96 + 56);
			v196 = *(float*)(v99 + 112i64 * v96 + 92);
			v192 = *(float*)(v99 + 112i64 * v96 + 24);
			v201 = *(float*)(v99 + 112i64 * v96 + 60);
			v185 = *(float*)(v99 + 112i64 * v96 + 96);
			v187 = *(float*)(v99 + 112i64 * v96 + 28);
			v183 = *(float*)(v99 + 112i64 * v96 + 64);
			v194 = *(float*)(v99 + 112i64 * v96 + 100);
			v199 = *(float*)(v99 + 112i64 * v96 + 32);
			v203 = *(float*)(v99 + 112i64 * v96 + 68);
			v114 = *(float*)(v99 + 112i64 * v96 + 104);
			*(float*)a2 = *(float*)(v99 + 112i64 * v96) + *(float*)a2;
			*(float*)(a2 + 48) = v100 + *(float*)(a2 + 48);
			*(float*)(a2 + 96) = v101 + *(float*)(a2 + 96);
			*(float*)(a2 + 4) = v102 + *(float*)(a2 + 4);
			*(float*)(a2 + 52) = v103 + *(float*)(a2 + 52);
			*(float*)(a2 + 100) = v104 + *(float*)(a2 + 100);
			*(float*)(a2 + 8) = v105 + *(float*)(a2 + 8);
			*(float*)(a2 + 56) = v106 + *(float*)(a2 + 56);
			*(float*)(a2 + 104) = v107 + *(float*)(a2 + 104);
			*(float*)(a2 + 12) = v108 + *(float*)(a2 + 12);
			*(float*)(a2 + 60) = v109 + *(float*)(a2 + 60);
			*(float*)(a2 + 108) = v110 + *(float*)(a2 + 108);
			*(float*)(a2 + 16) = v111 + *(float*)(a2 + 16);
			*(float*)(a2 + 64) = v112 + *(float*)(a2 + 64);
			*(float*)(a2 + 112) = v113 + *(float*)(a2 + 112);
			*(float*)(a2 + 20) = v191 + *(float*)(a2 + 20);
			*(float*)(a2 + 68) = v189 + *(float*)(a2 + 68);
			*(float*)(a2 + 116) = v196 + *(float*)(a2 + 116);
			++v96;
			*(float*)(a2 + 24) = v192 + *(float*)(a2 + 24);
			*(float*)(a2 + 72) = v201 + *(float*)(a2 + 72);
			*(float*)(a2 + 120) = v185 + *(float*)(a2 + 120);
			*(float*)(a2 + 28) = v187 + *(float*)(a2 + 28);
			*(float*)(a2 + 76) = v183 + *(float*)(a2 + 76);
			*(float*)(a2 + 124) = v194 + *(float*)(a2 + 124);
			*(float*)(a2 + 32) = v199 + *(float*)(a2 + 32);
			*(float*)(a2 + 80) = v203 + *(float*)(a2 + 80);
			*(float*)(a2 + 128) = v114 + *(float*)(a2 + 128);
		} while (v96 < *(_DWORD*)(a3 + 88));
		v42 = (__m128)(unsigned int)dword_140C3B438;
		result = 0i64;
	}
	v115 = 0;
	if (*(_DWORD*)(a3 + 56))
	{
		v116 = v42;
		v116.m128_f32[0] = v42.m128_f32[0] * 0.0055555557;
		do
		{
			v117 = (unsigned __int64)v115 << 6;
			v118 = (_DWORD*)(*(_QWORD*)(a3 + 64) + 24i64 * v115);
			if (*v118)
				sub_1407DAB10(
					(__int64)v118,
					*(_DWORD*)(*(_QWORD*)(a1 + 24) + 1312i64),
					v117 + *(_QWORD*)(a4 + 48),
					a4,
					(char*)(v117 + *(_QWORD*)(a4 + 48) + 48));
			v119 = *(_QWORD*)(a4 + 48);
			v120 = v116;
			v120.m128_f32[0] = v116.m128_f32[0] * *(float*)(v117 + v119);
			v121 = sub_1408FC950(*(double*)v120.m128_u64);
			v122 = v116;
			v122.m128_f32[0] = v116.m128_f32[0] * *(float*)(v117 + v119 + 4);
			v123 = v121;
			v124 = v122;
			v124.m128_f32[0] = sub_1408FC950(*(double*)v122.m128_u64);
			v125 = v124;
			v126 = v120;
			v125.m128_f32[0] = v125.m128_f32[0] * v123;
			v126.m128_f32[0] = sub_1408FE3D0(*(double*)v120.m128_u64);
			v127 = v126;
			v128 = v122;
			v128.m128_f32[0] = sub_1408FE3D0(*(double*)v122.m128_u64) * v123;
			*(_QWORD*)&v205 = v117 + v119 + 16;
			*((_QWORD*)&v205 + 1) = &v209;
			v209 = _mm_unpacklo_ps(_mm_unpacklo_ps(v125, v128), _mm_unpacklo_ps(v127, (__m128)0i64));
			LODWORD(v207) = *(_DWORD*)(v117 + v119 + 32);
			v226 = v207;
			v225 = v205;
			sub_1401AF310((__int64)&v225, (__int64)&v210);
			v129 = *(float*)&v215;
			*(float*)a2 = *(float*)&v210 + *(float*)a2;
			v128.m128_i32[0] = v220;
			*(float*)(a2 + 48) = v129 + *(float*)(a2 + 48);
			v130 = *((float*)&v210 + 1);
			*(float*)(a2 + 96) = v128.m128_f32[0] + *(float*)(a2 + 96);
			v128.m128_i32[0] = HIDWORD(v215);
			*(float*)(a2 + 4) = v130 + *(float*)(a2 + 4);
			v131 = *((float*)&v220 + 1);
			*(float*)(a2 + 52) = v128.m128_f32[0] + *(float*)(a2 + 52);
			v128.m128_i32[0] = v211;
			*(float*)(a2 + 100) = v131 + *(float*)(a2 + 100);
			v132 = *(float*)&v216;
			*(float*)(a2 + 8) = v128.m128_f32[0] + *(float*)(a2 + 8);
			v128.m128_i32[0] = v221;
			*(float*)(a2 + 56) = v132 + *(float*)(a2 + 56);
			v133 = *((float*)&v211 + 1);
			*(float*)(a2 + 104) = v128.m128_f32[0] + *(float*)(a2 + 104);
			v128.m128_i32[0] = HIDWORD(v216);
			*(float*)(a2 + 12) = v133 + *(float*)(a2 + 12);
			v134 = *((float*)&v221 + 1);
			*(float*)(a2 + 60) = v128.m128_f32[0] + *(float*)(a2 + 60);
			v128.m128_i32[0] = v212;
			*(float*)(a2 + 108) = v134 + *(float*)(a2 + 108);
			v135 = *(float*)&v217;
			*(float*)(a2 + 16) = v128.m128_f32[0] + *(float*)(a2 + 16);
			*(float*)(a2 + 64) = v135 + *(float*)(a2 + 64);
			v136 = *((float*)&v212 + 1);
			++v115;
			*(float*)(a2 + 112) = *(float*)&v222 + *(float*)(a2 + 112);
			v128.m128_i32[0] = HIDWORD(v217);
			*(float*)(a2 + 20) = v136 + *(float*)(a2 + 20);
			v137 = *((float*)&v222 + 1);
			*(float*)(a2 + 68) = v128.m128_f32[0] + *(float*)(a2 + 68);
			v128.m128_i32[0] = v213;
			*(float*)(a2 + 116) = v137 + *(float*)(a2 + 116);
			v138 = *(float*)&v218;
			*(float*)(a2 + 24) = v128.m128_f32[0] + *(float*)(a2 + 24);
			v128.m128_i32[0] = v223;
			*(float*)(a2 + 72) = v138 + *(float*)(a2 + 72);
			v139 = *((float*)&v213 + 1);
			*(float*)(a2 + 120) = v128.m128_f32[0] + *(float*)(a2 + 120);
			v128.m128_i32[0] = HIDWORD(v218);
			*(float*)(a2 + 28) = v139 + *(float*)(a2 + 28);
			v140 = *((float*)&v223 + 1);
			*(float*)(a2 + 76) = v128.m128_f32[0] + *(float*)(a2 + 76);
			v128.m128_i32[0] = v214;
			*(float*)(a2 + 124) = v140 + *(float*)(a2 + 124);
			v141 = v219;
			*(float*)(a2 + 32) = v128.m128_f32[0] + *(float*)(a2 + 32);
			v128.m128_i32[0] = v224;
			*(float*)(a2 + 80) = v141 + *(float*)(a2 + 80);
			*(float*)(a2 + 128) = v128.m128_f32[0] + *(float*)(a2 + 128);
		} while (v115 < *(_DWORD*)(a3 + 56));
		result = 0i64;
	}
	if (*(_DWORD*)(a3 + 72))
	{
		v42.m128_f32[0] = v42.m128_f32[0] * 0.0055555557;
		do
		{
			v142 = (unsigned __int64)(unsigned int)result << 6;
			v143 = (_DWORD*)(*(_QWORD*)(a3 + 80) + 24 * result);
			if (*v143)
				sub_1407DAEC0(
					(__int64)v143,
					*(_DWORD*)(*(_QWORD*)(a1 + 24) + 1312i64),
					v142 + *(_QWORD*)(a4 + 64),
					a4,
					(char*)(v142 + *(_QWORD*)(a4 + 64) + 48));
			v144 = *(_QWORD*)(a4 + 64);
			v145 = v42;
			v145.m128_f32[0] = v42.m128_f32[0] * *(float*)(v142 + v144);
			v146 = sub_1408FC950(*(double*)v145.m128_u64);
			v147 = *(float*)(v142 + v144 + 36);
			v148 = v42;
			v148.m128_f32[0] = v42.m128_f32[0] * *(float*)(v142 + v144 + 4);
			v149 = v146;
			v150 = v148;
			v150.m128_f32[0] = sub_1408FC950(*(double*)v148.m128_u64);
			v151 = v150;
			v152 = v145;
			v151.m128_f32[0] = (float)(v151.m128_f32[0] * v147) * v149;
			v152.m128_f32[0] = sub_1408FE3D0(*(double*)v145.m128_u64);
			v153 = v152;
			v154 = v148;
			v153.m128_f32[0] = v153.m128_f32[0] * v147;
			*(_QWORD*)&v206 = v142 + v144 + 16;
			v154.m128_f32[0] = (float)(sub_1408FE3D0(*(double*)v148.m128_u64) * v147) * v149;
			*((_QWORD*)&v206 + 1) = &v209;
			v209 = _mm_unpacklo_ps(_mm_unpacklo_ps(v151, v154), _mm_unpacklo_ps(v153, (__m128)0i64));
			LODWORD(v207) = *(_DWORD*)(v142 + v144 + 32);
			v225 = v206;
			v226 = v207;
			sub_1401AF740((__int64)&v225, (__int64)&v210);
			v155 = *(float*)&v215;
			*(float*)a2 = *(float*)&v210 + *(float*)a2;
			v154.m128_i32[0] = v220;
			*(float*)(a2 + 48) = v155 + *(float*)(a2 + 48);
			v156 = *((float*)&v210 + 1);
			*(float*)(a2 + 96) = v154.m128_f32[0] + *(float*)(a2 + 96);
			v154.m128_i32[0] = HIDWORD(v215);
			*(float*)(a2 + 4) = v156 + *(float*)(a2 + 4);
			v157 = *((float*)&v220 + 1);
			*(float*)(a2 + 52) = v154.m128_f32[0] + *(float*)(a2 + 52);
			v154.m128_i32[0] = v211;
			*(float*)(a2 + 100) = v157 + *(float*)(a2 + 100);
			v158 = *(float*)&v216;
			*(float*)(a2 + 8) = v154.m128_f32[0] + *(float*)(a2 + 8);
			v154.m128_i32[0] = v221;
			*(float*)(a2 + 56) = v158 + *(float*)(a2 + 56);
			v159 = *((float*)&v211 + 1);
			*(float*)(a2 + 104) = v154.m128_f32[0] + *(float*)(a2 + 104);
			v154.m128_i32[0] = HIDWORD(v216);
			*(float*)(a2 + 12) = v159 + *(float*)(a2 + 12);
			v160 = *((float*)&v221 + 1);
			*(float*)(a2 + 60) = v154.m128_f32[0] + *(float*)(a2 + 60);
			v154.m128_i32[0] = v212;
			*(float*)(a2 + 108) = v160 + *(float*)(a2 + 108);
			v161 = *(float*)&v217;
			result = ++v208;
			*(float*)(a2 + 16) = v154.m128_f32[0] + *(float*)(a2 + 16);
			v154.m128_i32[0] = v222;
			*(float*)(a2 + 64) = v161 + *(float*)(a2 + 64);
			v162 = *((float*)&v212 + 1);
			*(float*)(a2 + 112) = v154.m128_f32[0] + *(float*)(a2 + 112);
			v154.m128_i32[0] = HIDWORD(v217);
			*(float*)(a2 + 20) = v162 + *(float*)(a2 + 20);
			v163 = *((float*)&v222 + 1);
			*(float*)(a2 + 68) = v154.m128_f32[0] + *(float*)(a2 + 68);
			v154.m128_i32[0] = v213;
			*(float*)(a2 + 116) = v163 + *(float*)(a2 + 116);
			v164 = *(float*)&v218;
			*(float*)(a2 + 24) = v154.m128_f32[0] + *(float*)(a2 + 24);
			v154.m128_i32[0] = v223;
			*(float*)(a2 + 72) = v164 + *(float*)(a2 + 72);
			v165 = *((float*)&v213 + 1);
			*(float*)(a2 + 120) = v154.m128_f32[0] + *(float*)(a2 + 120);
			v154.m128_i32[0] = HIDWORD(v218);
			*(float*)(a2 + 28) = v165 + *(float*)(a2 + 28);
			v166 = *((float*)&v223 + 1);
			*(float*)(a2 + 76) = v154.m128_f32[0] + *(float*)(a2 + 76);
			v154.m128_i32[0] = v214;
			*(float*)(a2 + 124) = v166 + *(float*)(a2 + 124);
			v167 = v219;
			*(float*)(a2 + 32) = v154.m128_f32[0] + *(float*)(a2 + 32);
			v154.m128_i32[0] = v224;
			*(float*)(a2 + 80) = v167 + *(float*)(a2 + 80);
			*(float*)(a2 + 128) = v154.m128_f32[0] + *(float*)(a2 + 128);
		} while (v208 < *(_DWORD*)(a3 + 72));
	}
	if (*(_DWORD*)(a3 + 104))
	{
		result = sub_1407D9EA0(
			(int*)(a3 + 104),
			*(_DWORD*)(*(_QWORD*)(a1 + 24) + 1312i64),
			(float*)(a4 + 96),
			(char*)(a4 + 204));
		v168 = *(float*)(a4 + 132);
		v169 = *(float*)(a4 + 168);
		v170 = *(float*)(a4 + 100);
		v171 = *(float*)(a4 + 136);
		v172 = *(float*)(a4 + 172);
		v173 = *(float*)(a4 + 104);
		v174 = *(float*)(a4 + 140);
		v175 = *(float*)(a4 + 176);
		v176 = *(float*)(a4 + 108);
		v177 = *(float*)(a4 + 144);
		v178 = *(float*)(a4 + 180);
		v179 = *(float*)(a4 + 112);
		v180 = *(float*)(a4 + 148);
		v181 = *(float*)(a4 + 184);
		v198 = *(float*)(a4 + 116);
		v204 = *(float*)(a4 + 152);
		v200 = *(float*)(a4 + 188);
		v195 = *(float*)(a4 + 120);
		v184 = *(float*)(a4 + 156);
		v188 = *(float*)(a4 + 192);
		v186 = *(float*)(a4 + 124);
		v202 = *(float*)(a4 + 160);
		v193 = *(float*)(a4 + 196);
		v197 = *(float*)(a4 + 128);
		v190 = *(float*)(a4 + 164);
		v182 = *(float*)(a4 + 200);
		*(float*)a2 = *(float*)(a4 + 96) + *(float*)a2;
		*(float*)(a2 + 48) = v168 + *(float*)(a2 + 48);
		*(float*)(a2 + 96) = v169 + *(float*)(a2 + 96);
		*(float*)(a2 + 4) = v170 + *(float*)(a2 + 4);
		*(float*)(a2 + 52) = v171 + *(float*)(a2 + 52);
		*(float*)(a2 + 100) = v172 + *(float*)(a2 + 100);
		*(float*)(a2 + 8) = v173 + *(float*)(a2 + 8);
		*(float*)(a2 + 56) = v174 + *(float*)(a2 + 56);
		*(float*)(a2 + 104) = v175 + *(float*)(a2 + 104);
		*(float*)(a2 + 12) = v176 + *(float*)(a2 + 12);
		*(float*)(a2 + 60) = v177 + *(float*)(a2 + 60);
		*(float*)(a2 + 108) = v178 + *(float*)(a2 + 108);
		*(float*)(a2 + 16) = v179 + *(float*)(a2 + 16);
		*(float*)(a2 + 64) = v180 + *(float*)(a2 + 64);
		*(float*)(a2 + 112) = v181 + *(float*)(a2 + 112);
		*(float*)(a2 + 20) = v198 + *(float*)(a2 + 20);
		*(float*)(a2 + 68) = v204 + *(float*)(a2 + 68);
		*(float*)(a2 + 116) = v200 + *(float*)(a2 + 116);
		*(float*)(a2 + 24) = v195 + *(float*)(a2 + 24);
		*(float*)(a2 + 72) = v184 + *(float*)(a2 + 72);
		*(float*)(a2 + 120) = v188 + *(float*)(a2 + 120);
		*(float*)(a2 + 28) = v186 + *(float*)(a2 + 28);
		*(float*)(a2 + 76) = v202 + *(float*)(a2 + 76);
		*(float*)(a2 + 124) = v193 + *(float*)(a2 + 124);
		*(float*)(a2 + 32) = v197 + *(float*)(a2 + 32);
		*(float*)(a2 + 80) = v190 + *(float*)(a2 + 80);
		*(float*)(a2 + 128) = v182 + *(float*)(a2 + 128);
	}
	return result;
}
// 1407D40F4: variable 'a4' is possibly undefined
// 1407D4C75: variable 'v207' is possibly undefined
// 140C3B438: using guessed type int dword_140C3B438;
// 140C78270: using guessed type __int128 xmmword_140C78270;
// 140C78280: using guessed type __int128 xmmword_140C78280;
// 140C78290: using guessed type int dword_140C78290;
// 140C782A0: using guessed type __int128 xmmword_140C782A0;
// 140C782B0: using guessed type __int128 xmmword_140C782B0;
// 140C782C0: using guessed type int dword_140C782C0;
// 140C782D0: using guessed type __int128 xmmword_140C782D0;
// 140C782E0: using guessed type __int128 xmmword_140C782E0;
// 140C782F0: using guessed type int dword_140C782F0;

