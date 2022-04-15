#include "../winhttp.h"

//----- (00000001406DFAD0) ----------------------------------------------------
__int64 __fastcall sub_1406DFAD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _OWORD* a5, __int64 a6)
{
	int* v8; // rdx
	int v9; // eax
	int v10; // ecx
	_QWORD* v11; // rdi
	int v12; // esi
	int** v13; // rbx
	int* v14; // rcx
	int v15; // xmm0_4
	_QWORD* v16; // rax
	__int64 v17; // rcx
	_QWORD* v18; // rdi
	int v19; // esi
	int** v20; // rbx
	int* v21; // rcx
	int v22; // xmm0_4
	__int64 v23; // rdi
	int* v24; // rcx
	__int64 v25; // rdi
	int* v26; // rcx
	int* v27; // rax
	__int64 v28; // rax
	__int32 v29; // xmm0_4
	void(__fastcall * **v30)(_QWORD); // rbx
	__int64 v31; // r8
	bool v32; // zf
	void(__fastcall * **v33)(_QWORD); // rbx
	__int64 v34; // r8
	void(__fastcall * **v35)(_QWORD); // rbx
	__int64 v36; // r8
	void(__fastcall * **v37)(_QWORD); // rbx
	__int64 v38; // r8
	void(__fastcall * **v39)(_QWORD); // rbx
	__int64 v40; // r8
	void(__fastcall * **v41)(_QWORD); // rbx
	__int64 v42; // r8
	void(__fastcall * **v43)(_QWORD); // rbx
	__int64 v44; // r8
	void(__fastcall * **v45)(_QWORD); // rbx
	__int64 v46; // r8
	void(__fastcall * **v47)(_QWORD); // rbx
	__int64 v48; // r8
	void(__fastcall * **v49)(_QWORD); // rbx
	__int64 v50; // r8
	void(__fastcall * **v51)(_QWORD); // rbx
	__int64 v52; // r8
	void(__fastcall * **v53)(_QWORD); // rbx
	__int64 v54; // r8
	void(__fastcall * **v55)(_QWORD); // rdi
	__int64 v56; // r8
	void(__fastcall * **v57)(_QWORD); // rdi
	__int64 v58; // r8
	void(__fastcall * **v59)(_QWORD); // rdi
	__int64 v60; // r8
	void(__fastcall * **v61)(_QWORD); // rdi
	__int64 v62; // r8
	void(__fastcall * **v63)(_QWORD); // rdi
	__int64 v64; // r8
	__int64 v65; // rbx
	void(__fastcall * **v66)(_QWORD); // rbx
	__int64 v67; // r8
	__int64 v68; // rdi
	void(__fastcall * **v69)(_QWORD); // rdi
	__int64 v70; // r8
	__int64 v71; // rdi
	void(__fastcall * **v72)(_QWORD); // rdi
	__int64 v73; // r8
	__int64 v74; // rdi
	void(__fastcall * **v75)(_QWORD); // rdi
	__int64 v76; // r8
	__int64 v77; // rdi
	void(__fastcall * **v78)(_QWORD); // rdi
	__int64 v79; // r8
	void(__fastcall * **v80)(_QWORD); // rbx
	__int64 v81; // r8
	__int64 v82; // rax
	int* v83; // r13
	__int64 v84; // rsi
	__int64* v85; // r12
	float v86; // xmm7_4
	_BYTE* v87; // r14
	__m128 v88; // xmm2
	__m128 v89; // xmm0
	__m128 v90; // xmm3
	__m128 v91; // xmm6
	float v92; // xmm1_4
	float v93; // xmm2_4
	float v94; // xmm1_4
	int v95; // r9d
	int v96; // edx
	int v97; // eax
	int v98; // ecx
	int* v99; // rax
	__int64 v100; // rdi
	__int128 v101; // xmm0
	__int64 v102; // rdx
	__int64 v103; // rax
	__m128 v104; // xmm0
	__m128 v105; // xmm1
	int v106; // ecx
	__int64 v107; // rax
	unsigned __int64 v108; // rbx
	__int64 v109; // rsi
	unsigned __int64 v110; // rdi
	int* v111; // rcx
	__int64 v112; // rax
	__int64* v113; // rsi
	__int64 v114; // r14
	unsigned int v115; // eax
	__int64 v116; // rax
	int v117; // r12d
	int v118; // r13d
	__int64 v119; // rdi
	unsigned int* v120; // rbx
	__int64 v121; // rax
	__m128i** v122; // r8
	__int64 v123; // rdx
	__int64 v124; // rdx
	__m128i* v125; // r8
	unsigned __int64 v126; // rdi
	__int64 v127; // r14
	float v128; // xmm7_4
	int** v129; // rbx
	__m128 v130; // xmm0
	__m128 v131; // xmm2
	__m128 v132; // xmm3
	__m128 v133; // xmm6
	float v134; // xmm4_4
	float v135; // xmm3_4
	float v136; // xmm4_4
	int v137; // edx
	int v138; // r9d
	int v139; // eax
	int v140; // ecx
	int* v141; // rax
	__int128 v142; // xmm0
	int v143; // ecx
	__int64 v144; // rax
	unsigned __int64 v145; // r12
	unsigned __int64 v146; // rdx
	__int64 v147; // r14
	unsigned __int64 v148; // rsi
	int* v149; // rcx
	__int64 v150; // rax
	int v151; // r9d
	int v152; // eax
	unsigned __int64 v153; // r12
	__int64** v154; // rdi
	__int64* v155; // rdx
	float* v156; // r14
	__int64 v157; // rax
	__int64 v158; // rbx
	__int64* v159; // rdx
	__int64* v160; // r9
	__int64 v161; // r10
	__int64 v162; // r11
	int v163; // edx
	int v164; // r8d
	int v165; // eax
	__int64* v166; // rcx
	int v167; // eax
	int v168; // ecx
	int v169; // eax
	bool v170; // cc
	int v171; // eax
	unsigned __int64 i; // rbx
	_DWORD* v173; // rax
	unsigned int v174; // ebx
	_DWORD* v175; // rax
	int v176; // ebx
	_DWORD* v177; // rax
	int v178; // ebx
	_DWORD* v179; // rax
	__int64 v180; // r9
	int v181; // eax
	int v182; // ebx
	_QWORD* v183; // rdi
	int v184; // ebx
	__int64 v185; // rcx
	_DWORD* v186; // rax
	int v187; // eax
	__int64 v188; // rbx
	__int64 v189; // rcx
	__int64 v190; // rax
	__int64 v191; // rcx
	__int64 v192; // rcx
	int v193; // eax
	int v194; // edx
	__int64(__fastcall * *v195)(); // rcx
	int v196; // eax
	char* v197; // rcx
	int v198; // eax
	int* v199; // r8
	int v200; // eax
	__int128 v201; // xmm1
	__int128 v202; // xmm0
	__int128 v203; // xmm1
	int v204; // eax
	__int128 v205; // xmm0
	int v206; // eax
	__int128 v207; // xmm1
	int v208; // eax
	int v209; // eax
	int v210; // ecx
	__m128 v211; // xmm0
	__int64 v213; // [rsp+28h] [rbp-E0h]
	__int64* v214; // [rsp+58h] [rbp-B0h] BYREF
	__int64 v215; // [rsp+60h] [rbp-A8h] BYREF
	int* v216; // [rsp+68h] [rbp-A0h] BYREF
	__int64* v217; // [rsp+70h] [rbp-98h] BYREF
	__m256i v218; // [rsp+78h] [rbp-90h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+98h] [rbp-70h] BYREF
	__int128 v220; // [rsp+A0h] [rbp-68h]
	int v221; // [rsp+B0h] [rbp-58h] BYREF
	int v222; // [rsp+B4h] [rbp-54h]
	int v223; // [rsp+B8h] [rbp-50h]
	int v224; // [rsp+BCh] [rbp-4Ch]
	int v225[6]; // [rsp+C0h] [rbp-48h] BYREF
	__int64(__fastcall * *v226)(); // [rsp+D8h] [rbp-30h] BYREF
	__int128 v227; // [rsp+E0h] [rbp-28h]
	__m256i v228; // [rsp+F8h] [rbp-10h] BYREF
	__int128 v229; // [rsp+118h] [rbp+10h] BYREF
	__int128 v230; // [rsp+128h] [rbp+20h]
	__int64 v231; // [rsp+138h] [rbp+30h]
	__int64 v232; // [rsp+140h] [rbp+38h]
	__int128 v233; // [rsp+148h] [rbp+40h]
	__int128 v234; // [rsp+158h] [rbp+50h]
	int v235; // [rsp+168h] [rbp+60h]
	__int128 v236; // [rsp+178h] [rbp+70h]
	__int128 v237; // [rsp+188h] [rbp+80h]
	int v238; // [rsp+198h] [rbp+90h]
	__int64(__fastcall * *v239)(); // [rsp+1A8h] [rbp+A0h] BYREF
	__int128 v240; // [rsp+1B0h] [rbp+A8h]

	sub_1400C5920(a1, a2, a3, 0i64, a5, a6, 0i64);
	v8 = (int*)qword_140C63750;
	*(_QWORD*)a1 = off_140B720D0;
	*(_QWORD*)(a1 + 1024) = qword_140C784C0;
	*(_QWORD*)(a1 + 1032) = qword_140C784C8;
	*(__m256*)(a1 + 1040) = ymmword_140C78390;
	*(_OWORD*)(a1 + 1072) = xmmword_140C783B0;
	*(_OWORD*)(a1 + 1088) = xmmword_140C783C0;
	*(__m128*)(a1 + 1104) = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(
				_mm_cvtsi32_si128((*(_DWORD*)(a1 + 716) + *(_DWORD*)(a1 + 724)) >> 1),
				_mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(
				_mm_cvtsi32_si128((*(_DWORD*)(a1 + 720) + *(_DWORD*)(a1 + 728)) >> 1),
				_mm_cvtsi32_si128(0))));
	*(_DWORD*)(a1 + 1120) = 0;
	*(_QWORD*)(a1 + 1128) = 0i64;
	v9 = dword_140C53AC0;
	if (*v8 < dword_140C53AC0)
		v9 = *v8;
	*(_DWORD*)(a1 + 1136) = dword_140C53AD0[v9];
	v10 = dword_140C53AC0;
	if (*v8 < dword_140C53AC0)
		v10 = *v8;
	*(_DWORD*)(a1 + 1140) = dword_140C53AD0[v10];
	sub_1401095E0(a1 + 1144);
	sub_1401095E0(a1 + 1192);
	sub_1401095E0(a1 + 1240);
	sub_1401095E0(a1 + 1288);
	sub_1401095E0(a1 + 1336);
	sub_1401095E0(a1 + 1384);
	v11 = (_QWORD*)(a1 + 1432);
	v12 = 5;
	v13 = (int**)(a1 + 1464);
	do
	{
		*(v13 - 1) = 0i64;
		*v13 = 0i64;
		v13[1] = 0i64;
		v14 = sub_14018B280(16i64, 0);
		*(v13 - 1) = v14;
		*v13 = v14;
		v13[1] = v14 + 4;
		if (v14)
			*(_WORD*)v14 = 0;
		v15 = dword_140C63664;
		*v11 = 0i64;
		*((_DWORD*)v13 - 5) = 1065353216;
		*((_DWORD*)v13 - 6) = v15;
		v13 += 6;
		v11 += 6;
		--v12;
	} while (v12 >= 0);
	sub_1401095E0(a1 + 1720);
	sub_1401095E0(a1 + 1768);
	sub_1401095E0(a1 + 1816);
	sub_1401095E0(a1 + 1864);
	sub_1401095E0(a1 + 1912);
	v16 = (_QWORD*)(a1 + 1968);
	v17 = 2i64;
	do
	{
		*v16 = 0i64;
		v16[1] = 0i64;
		v16[2] = 0i64;
		v16 += 8;
		*(v16 - 5) = 0i64;
		*(v16 - 4) = 0i64;
		*(v16 - 3) = 0i64;
		*(v16 - 2) = 0i64;
		*(v16 - 1) = 0i64;
		--v17;
	} while (v17);
	*v16 = 0i64;
	v16[1] = 0i64;
	v18 = (_QWORD*)(a1 + 2128);
	v16[2] = 0i64;
	v19 = 4;
	v20 = (int**)(a1 + 2160);
	v16[3] = 0i64;
	do
	{
		*(v20 - 1) = 0i64;
		*v20 = 0i64;
		v20[1] = 0i64;
		v21 = sub_14018B280(16i64, 0);
		*(v20 - 1) = v21;
		*v20 = v21;
		v20[1] = v21 + 4;
		if (v21)
			*(_WORD*)v21 = 0;
		v22 = dword_140C63664;
		*v18 = 0i64;
		*((_DWORD*)v20 - 5) = 1065353216;
		*((_DWORD*)v20 - 6) = v22;
		v20 += 6;
		v18 += 6;
		--v19;
	} while (v19 >= 0);
	*(_QWORD*)(a1 + 2368) = 0i64;
	sub_1402E2870((_QWORD*)(a1 + 2376));
	sub_1400522F0((_QWORD*)(a1 + 2416));
	*(_QWORD*)(a1 + 2464) = 0i64;
	*(_QWORD*)(a1 + 2456) = 0i64;
	sub_1402E2870((_QWORD*)(a1 + 2472));
	sub_1400522F0((_QWORD*)(a1 + 2512));
	*(_QWORD*)(a1 + 2560) = 0i64;
	*(_QWORD*)(a1 + 2552) = 0i64;
	*(_QWORD*)(a1 + 2576) = 0i64;
	*(_QWORD*)(a1 + 2568) = 0i64;
	*(_QWORD*)(a1 + 2584) = 0i64;
	sub_1401095E0(a1 + 2592);
	*(_QWORD*)(a1 + 2640) = 0i64;
	*(_QWORD*)(a1 + 2656) = 0i64;
	*(_QWORD*)(a1 + 2648) = 0i64;
	*(_QWORD*)(a1 + 2672) = 0i64;
	*(_QWORD*)(a1 + 2664) = 0i64;
	*(_QWORD*)(a1 + 2688) = 0i64;
	*(_QWORD*)(a1 + 2680) = 0i64;
	v23 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 2696) = 0i64;
	*(_QWORD*)(a1 + 2704) = 0i64;
	*(_QWORD*)(a1 + 2712) = 0i64;
	*(_QWORD*)(a1 + 2736) = 0i64;
	*(_QWORD*)(a1 + 2744) = 0i64;
	*(_QWORD*)(a1 + 2752) = 0i64;
	v24 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 2736) = v24;
	*(_QWORD*)(a1 + 2744) = v24;
	*(_QWORD*)(a1 + 2752) = v24 + 4;
	if (v24)
		*(_WORD*)v24 = 0;
	sub_14010AEB0(a1 + 2720, v23, (int*)L"PlayUIPrimalMatrixSFXSave");
	v25 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 2776) = 0i64;
	*(_QWORD*)(a1 + 2784) = 0i64;
	*(_QWORD*)(a1 + 2792) = 0i64;
	v26 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 2776) = v26;
	*(_QWORD*)(a1 + 2784) = v26;
	*(_QWORD*)(a1 + 2792) = v26 + 4;
	if (v26)
		*(_WORD*)v26 = 0;
	sub_14010AEB0(a1 + 2760, v25, (int*)L"PlayUIPrimalMatrixSFXVectorComplete");
	*(__m256*)(a1 + 2800) = ymmword_140C78390;
	*(_OWORD*)(a1 + 2832) = xmmword_140C783B0;
	*(_OWORD*)(a1 + 2848) = xmmword_140C783C0;
	*(__m256*)(a1 + 2864) = ymmword_140C78390;
	*(_OWORD*)(a1 + 2896) = xmmword_140C783B0;
	*(_OWORD*)(a1 + 2912) = xmmword_140C783C0;
	*(__m256*)(a1 + 2928) = ymmword_140C78390;
	*(_OWORD*)(a1 + 2960) = xmmword_140C783B0;
	*(_OWORD*)(a1 + 2976) = xmmword_140C783C0;
	*(_QWORD*)(a1 + 2992) = qword_140C79888;
	sub_1407E4830((int*)(a1 + 3008), 0i64, 0x310ui64);
	*(_QWORD*)(a1 + 3792) = 0i64;
	*(_QWORD*)(a1 + 3800) = 0i64;
	*(_QWORD*)(a1 + 3808) = 0i64;
	*(_QWORD*)(a1 + 3816) = 0i64;
	*(_DWORD*)(a1 + 3824) = 0;
	*(_QWORD*)(a1 + 3832) = 0i64;
	*(_QWORD*)(a1 + 432) |= 0x100000000000ui64;
	if (a1 != -3832)
	{
		v27 = sub_14018B280(24i64, 0);
		if (v27)
			v28 = sub_1401AE310((__int64)v27);
		else
			v28 = 0i64;
		*(_QWORD*)(a1 + 3832) = v28;
	}
	v29 = *(_DWORD*)(a1 + 1136);
	v218.m256i_i64[1] = 0i64;
	v218.m256i_i32[0] = v29;
	v218.m256i_i64[3] = a1 + 1104;
	v218.m256i_i32[4] = 0;
	v229 = v218.m256i_u64[0];
	v230 = *(_OWORD*)&v218.m256i_u64[2];
	sub_1401B0840((int*)&v229, a1 + 1040);
	if (!*(_QWORD*)(a1 + 1720) || !sub_14002C740(a1 + 1736, L"BasicSprites:WhiteFill"))
	{
		v30 = (void(__fastcall***)(_QWORD))sub_140108E80(a2 + 240, (const __m128i*)L"BasicSprites:WhiteFill");
		if (v30)
		{
			v31 = 0i64;
			do
				v32 = aBasicspritesWh[++v31] == 0;
			while (!v32);
			sub_14001C480(a1 + 1736, (int*)L"BasicSprites:WhiteFill", (int*)&aBasicspritesWh[v31]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1720), v30);
	}
	if (!*(_QWORD*)(a1 + 1768) || !sub_14002C740(a1 + 1784, L"PrimalMatrix:Background_1"))
	{
		v33 = (void(__fastcall***)(_QWORD))sub_140108E80(a2 + 240, (const __m128i*)L"PrimalMatrix:Background_1");
		if (v33)
		{
			v34 = 0i64;
			do
				v32 = aPrimalmatrixBa[++v34] == 0;
			while (!v32);
			sub_14001C480(a1 + 1784, (int*)L"PrimalMatrix:Background_1", (int*)&aPrimalmatrixBa[v34]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1768), v33);
	}
	if (!*(_QWORD*)(a1 + 1816) || !sub_14002C740(a1 + 1832, L"PrimalMatrix:Background_2"))
	{
		v35 = (void(__fastcall***)(_QWORD))sub_140108E80(a2 + 240, (const __m128i*)L"PrimalMatrix:Background_2");
		if (v35)
		{
			v36 = 0i64;
			do
				v32 = aPrimalmatrixBa_0[++v36] == 0;
			while (!v32);
			sub_14001C480(a1 + 1832, (int*)L"PrimalMatrix:Background_2", (int*)&aPrimalmatrixBa_0[v36]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1816), v35);
	}
	if (!*(_QWORD*)(a1 + 1864) || !sub_14002C740(a1 + 1880, L"PrimalMatrix:Background_3"))
	{
		v37 = (void(__fastcall***)(_QWORD))sub_140108E80(a2 + 240, (const __m128i*)L"PrimalMatrix:Background_3");
		if (v37)
		{
			v38 = 0i64;
			do
				v32 = aPrimalmatrixBa_1[++v38] == 0;
			while (!v32);
			sub_14001C480(a1 + 1880, (int*)L"PrimalMatrix:Background_3", (int*)&aPrimalmatrixBa_1[v38]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1864), v37);
	}
	if (!*(_QWORD*)(a1 + 1144) || !sub_14002C740(a1 + 1160, L"PrimalMatrix:Sector_Base_Locked"))
	{
		v39 = (void(__fastcall***)(_QWORD))sub_140108E80(a2 + 240, (const __m128i*)L"PrimalMatrix:Sector_Base_Locked");
		if (v39)
		{
			v40 = 0i64;
			do
				v32 = aPrimalmatrixSe[++v40] == 0;
			while (!v32);
			sub_14001C480(a1 + 1160, (int*)L"PrimalMatrix:Sector_Base_Locked", (int*)&aPrimalmatrixSe[v40]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1144), v39);
	}
	if (!*(_QWORD*)(a1 + 1192) || !sub_14002C740(a1 + 1208, L"PrimalMatrix:Sector_Base_Unlocked"))
	{
		v41 = (void(__fastcall***)(_QWORD))sub_140108E80(a2 + 240, (const __m128i*)L"PrimalMatrix:Sector_Base_Unlocked");
		if (v41)
		{
			v42 = 0i64;
			do
				v32 = aPrimalmatrixSe_0[++v42] == 0;
			while (!v32);
			sub_14001C480(a1 + 1208, (int*)L"PrimalMatrix:Sector_Base_Unlocked", (int*)&aPrimalmatrixSe_0[v42]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1192), v41);
	}
	if (!*(_QWORD*)(a1 + 1240) || !sub_14002C740(a1 + 1256, L"PrimalMatrix:Sector_Base_Completed"))
	{
		v43 = (void(__fastcall***)(_QWORD))sub_140108E80(a2 + 240, (const __m128i*)L"PrimalMatrix:Sector_Base_Completed");
		if (v43)
		{
			v44 = 0i64;
			do
				v32 = aPrimalmatrixSe_1[++v44] == 0;
			while (!v32);
			sub_14001C480(a1 + 1256, (int*)L"PrimalMatrix:Sector_Base_Completed", (int*)&aPrimalmatrixSe_1[v44]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1240), v43);
	}
	if (!*(_QWORD*)(a1 + 2592) || !sub_14002C740(a1 + 2608, L"PrimalMatrix:Node_Pathfinding"))
	{
		v45 = (void(__fastcall***)(_QWORD))sub_140108E80(a2 + 240, (const __m128i*)L"PrimalMatrix:Node_Pathfinding");
		if (v45)
		{
			v46 = 0i64;
			do
				v32 = aPrimalmatrixNo[++v46] == 0;
			while (!v32);
			sub_14001C480(a1 + 2608, (int*)L"PrimalMatrix:Node_Pathfinding", (int*)&aPrimalmatrixNo[v46]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2592), v45);
	}
	if (!*(_QWORD*)(a1 + 1288) || !sub_14002C740(a1 + 1304, L"PrimalMatrix:Node_Blue_Unlocked"))
	{
		v47 = (void(__fastcall***)(_QWORD))sub_140108E80(a2 + 240, (const __m128i*)L"PrimalMatrix:Node_Blue_Unlocked");
		if (v47)
		{
			v48 = 0i64;
			do
				v32 = aPrimalmatrixNo_0[++v48] == 0;
			while (!v32);
			sub_14001C480(a1 + 1304, (int*)L"PrimalMatrix:Node_Blue_Unlocked", (int*)&aPrimalmatrixNo_0[v48]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1288), v47);
	}
	if (!*(_QWORD*)(a1 + 1336) || !sub_14002C740(a1 + 1352, L"PrimalMatrix:Connector_Bridge_Inactive"))
	{
		v49 = (void(__fastcall***)(_QWORD))sub_140108E80(
			a2 + 240,
			(const __m128i*)L"PrimalMatrix:Connector_Bridge_Inactive");
		if (v49)
		{
			v50 = 0i64;
			do
				v32 = aPrimalmatrixCo[++v50] == 0;
			while (!v32);
			sub_14001C480(a1 + 1352, (int*)L"PrimalMatrix:Connector_Bridge_Inactive", (int*)&aPrimalmatrixCo[v50]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1336), v49);
	}
	if (!*(_QWORD*)(a1 + 1384) || !sub_14002C740(a1 + 1400, L"PrimalMatrix:Connector_Bridge_Active"))
	{
		v51 = (void(__fastcall***)(_QWORD))sub_140108E80(
			a2 + 240,
			(const __m128i*)L"PrimalMatrix:Connector_Bridge_Active");
		if (v51)
		{
			v52 = 0i64;
			do
				v32 = aPrimalmatrixCo_0[++v52] == 0;
			while (!v32);
			sub_14001C480(a1 + 1400, (int*)L"PrimalMatrix:Connector_Bridge_Active", (int*)&aPrimalmatrixCo_0[v52]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1384), v51);
	}
	if (!*(_QWORD*)(a1 + 1432) || !sub_14002C740(a1 + 1448, L"PrimalMatrix:Connector_SectorTopRight_Active"))
	{
		v53 = (void(__fastcall***)(_QWORD))sub_140108E80(
			a2 + 240,
			(const __m128i*)L"PrimalMatrix:Connector_SectorTopRight_Active");
		if (v53)
		{
			v54 = 0i64;
			do
				v32 = aPrimalmatrixCo_1[++v54] == 0;
			while (!v32);
			sub_14001C480(a1 + 1448, (int*)L"PrimalMatrix:Connector_SectorTopRight_Active", (int*)&aPrimalmatrixCo_1[v54]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1432), v53);
	}
	if (!*(_QWORD*)(a1 + 1480) || !sub_14002C740(a1 + 1496, L"PrimalMatrix:Connector_SectorWideRight_Active"))
	{
		v55 = (void(__fastcall***)(_QWORD))sub_140108E80(
			a2 + 240,
			(const __m128i*)L"PrimalMatrix:Connector_SectorWideRight_Active");
		if (v55)
		{
			v56 = 0i64;
			do
				v32 = aPrimalmatrixCo_2[++v56] == 0;
			while (!v32);
			sub_14001C480(a1 + 1496, (int*)L"PrimalMatrix:Connector_SectorWideRight_Active", (int*)&aPrimalmatrixCo_2[v56]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1480), v55);
	}
	if (!*(_QWORD*)(a1 + 1528) || !sub_14002C740(a1 + 1544, L"PrimalMatrix:Connector_SectorBottomRight_Active"))
	{
		v57 = (void(__fastcall***)(_QWORD))sub_140108E80(
			a2 + 240,
			(const __m128i*)L"PrimalMatrix:Connector_SectorBottomRight_Active");
		if (v57)
		{
			v58 = 0i64;
			do
				v32 = aPrimalmatrixCo_3[++v58] == 0;
			while (!v32);
			sub_14001C480(
				a1 + 1544,
				(int*)L"PrimalMatrix:Connector_SectorBottomRight_Active",
				(int*)&aPrimalmatrixCo_3[v58]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1528), v57);
	}
	if (!*(_QWORD*)(a1 + 1576) || !sub_14002C740(a1 + 1592, L"PrimalMatrix:Connector_SectorBottomLeft_Active"))
	{
		v59 = (void(__fastcall***)(_QWORD))sub_140108E80(
			a2 + 240,
			(const __m128i*)L"PrimalMatrix:Connector_SectorBottomLeft_Active");
		if (v59)
		{
			v60 = 0i64;
			do
				v32 = aPrimalmatrixCo_4[++v60] == 0;
			while (!v32);
			sub_14001C480(a1 + 1592, (int*)L"PrimalMatrix:Connector_SectorBottomLeft_Active", (int*)&aPrimalmatrixCo_4[v60]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1576), v59);
	}
	if (!*(_QWORD*)(a1 + 1624) || !sub_14002C740(a1 + 1640, L"PrimalMatrix:Connector_SectorWideLeft_Active"))
	{
		v61 = (void(__fastcall***)(_QWORD))sub_140108E80(
			a2 + 240,
			(const __m128i*)L"PrimalMatrix:Connector_SectorWideLeft_Active");
		if (v61)
		{
			v62 = 0i64;
			do
				v32 = aPrimalmatrixCo_5[++v62] == 0;
			while (!v32);
			sub_14001C480(a1 + 1640, (int*)L"PrimalMatrix:Connector_SectorWideLeft_Active", (int*)&aPrimalmatrixCo_5[v62]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1624), v61);
	}
	if (!*(_QWORD*)(a1 + 1672) || !sub_14002C740(a1 + 1688, L"PrimalMatrix:Connector_SectorTopLeft_Active"))
	{
		v63 = (void(__fastcall***)(_QWORD))sub_140108E80(
			a2 + 240,
			(const __m128i*)L"PrimalMatrix:Connector_SectorTopLeft_Active");
		if (v63)
		{
			v64 = 0i64;
			do
				v32 = aPrimalmatrixCo_6[++v64] == 0;
			while (!v32);
			sub_14001C480(a1 + 1688, (int*)L"PrimalMatrix:Connector_SectorTopLeft_Active", (int*)&aPrimalmatrixCo_6[v64]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1672), v63);
	}
	v65 = *(_QWORD*)(a1 + 32);
	if (v65 && (!*(_QWORD*)(a1 + 2128) || !sub_14002C740(a1 + 2144, L"PrimalMatrix:Node_Red_Pending")))
	{
		v66 = (void(__fastcall***)(_QWORD))sub_140108E80(v65 + 240, (const __m128i*)L"PrimalMatrix:Node_Red_Pending");
		if (v66)
		{
			v67 = 0i64;
			do
				v32 = aPrimalmatrixNo_1[++v67] == 0;
			while (!v32);
			sub_14001C480(a1 + 2144, (int*)L"PrimalMatrix:Node_Red_Pending", (int*)&aPrimalmatrixNo_1[v67]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2128), v66);
	}
	v68 = *(_QWORD*)(a1 + 32);
	if (v68 && (!*(_QWORD*)(a1 + 2176) || !sub_14002C740(a1 + 2192, L"PrimalMatrix:Node_Green_Pending")))
	{
		v69 = (void(__fastcall***)(_QWORD))sub_140108E80(v68 + 240, (const __m128i*)L"PrimalMatrix:Node_Green_Pending");
		if (v69)
		{
			v70 = 0i64;
			do
				v32 = aPrimalmatrixNo_2[++v70] == 0;
			while (!v32);
			sub_14001C480(a1 + 2192, (int*)L"PrimalMatrix:Node_Green_Pending", (int*)&aPrimalmatrixNo_2[v70]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2176), v69);
	}
	v71 = *(_QWORD*)(a1 + 32);
	if (v71 && (!*(_QWORD*)(a1 + 2224) || !sub_14002C740(a1 + 2240, L"PrimalMatrix:Node_Blue_Pending")))
	{
		v72 = (void(__fastcall***)(_QWORD))sub_140108E80(v71 + 240, (const __m128i*)L"PrimalMatrix:Node_Blue_Pending");
		if (v72)
		{
			v73 = 0i64;
			do
				v32 = aPrimalmatrixNo_3[++v73] == 0;
			while (!v32);
			sub_14001C480(a1 + 2240, (int*)L"PrimalMatrix:Node_Blue_Pending", (int*)&aPrimalmatrixNo_3[v73]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2224), v72);
	}
	v74 = *(_QWORD*)(a1 + 32);
	if (v74 && (!*(_QWORD*)(a1 + 2272) || !sub_14002C740(a1 + 2288, L"PrimalMatrix:Node_Purple_Pending")))
	{
		v75 = (void(__fastcall***)(_QWORD))sub_140108E80(v74 + 240, (const __m128i*)L"PrimalMatrix:Node_Purple_Pending");
		if (v75)
		{
			v76 = 0i64;
			do
				v32 = aPrimalmatrixNo_4[++v76] == 0;
			while (!v32);
			sub_14001C480(a1 + 2288, (int*)L"PrimalMatrix:Node_Purple_Pending", (int*)&aPrimalmatrixNo_4[v76]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2272), v75);
	}
	v77 = *(_QWORD*)(a1 + 32);
	if (v77 && (!*(_QWORD*)(a1 + 2320) || !sub_14002C740(a1 + 2336, L"PrimalMatrix:Node_Green_Pending")))
	{
		v78 = (void(__fastcall***)(_QWORD))sub_140108E80(v77 + 240, (const __m128i*)L"PrimalMatrix:Node_Green_Pending");
		if (v78)
		{
			v79 = 0i64;
			do
				v32 = aPrimalmatrixNo_5[++v79] == 0;
			while (!v32);
			sub_14001C480(a1 + 2336, (int*)L"PrimalMatrix:Node_Green_Pending", (int*)&aPrimalmatrixNo_5[v79]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2320), v78);
	}
	if (!*(_QWORD*)(a1 + 1912) || !sub_14002C740(a1 + 1928, L"PrimalMatrix:NodeRank_Base"))
	{
		v80 = (void(__fastcall***)(_QWORD))sub_140108E80(a2 + 240, (const __m128i*)L"PrimalMatrix:NodeRank_Base");
		if (v80)
		{
			v81 = 0i64;
			do
				v32 = aPrimalmatrixNo_6[++v81] == 0;
			while (!v32);
			sub_14001C480(a1 + 1928, (int*)L"PrimalMatrix:NodeRank_Base", (int*)&aPrimalmatrixNo_6[v81]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1912), v80);
	}
	v82 = sub_1400E58C0(*(_QWORD*)(a1 + 32), (int*)L"CRB_Header9");
	v83 = (int*)qword_140C65A50;
	v84 = 0i64;
	*(_QWORD*)(a1 + 1960) = v82;
	v216 = v83;
	v85 = 0i64;
	v217 = 0i64;
	if (*((_QWORD*)v83 + 1))
	{
		v86 = _mm_sqrt_ps((__m128)0x40400000u).m128_f32[0] * 64.0;
		while (1)
		{
			v87 = *(_BYTE**)(*(_QWORD*)v83 + 8i64 * (_QWORD)v85);
			v88 = (__m128)COERCE_UNSIGNED_INT((float)*(int*)(*(_QWORD*)v87 + 8i64));
			v89 = (__m128)COERCE_UNSIGNED_INT((float)*(int*)(*(_QWORD*)v87 + 4i64));
			v90 = v89;
			v90.m128_f32[0] = v89.m128_f32[0] * 96.0;
			v88.m128_f32[0] = (float)(v88.m128_f32[0] + (float)(v89.m128_f32[0] * 0.5)) * v86;
			v91 = _mm_unpacklo_ps(_mm_unpacklo_ps(v90, (__m128)0i64), _mm_unpacklo_ps(v88, (__m128)0i64));
			v92 = _mm_shuffle_ps(v91, v91, 85).m128_f32[0];
			v93 = v92 + 55.425621;
			v94 = v92 - 55.425621;
			v223 = (int)(float)(*(float*)&dword_140C4B068 + v91.m128_f32[0]);
			v224 = (int)v93;
			v222 = (int)v94;
			v221 = (int)(float)(v91.m128_f32[0] - *(float*)&dword_140C4B068);
			v95 = *(_DWORD*)(a1 + 1032);
			v96 = *(_DWORD*)(a1 + 1036);
			if (v95 < v223)
				v95 = (int)(float)(*(float*)&dword_140C4B068 + v91.m128_f32[0]);
			v97 = *(_DWORD*)(a1 + 1028);
			*(float*)v218.m256i_i32 = v91.m128_f32[0] - *(float*)&dword_140C4B068;
			*(float*)&v218.m256i_i32[1] = v94;
			*(float*)&v218.m256i_i32[4] = *(float*)&dword_140C4B068 + v91.m128_f32[0];
			if (v96 < (int)v93)
				v96 = (int)v93;
			v98 = *(_DWORD*)(a1 + 1024);
			*(float*)&v218.m256i_i32[5] = v93;
			if ((int)(float)(v91.m128_f32[0] - *(float*)&dword_140C4B068) < v98)
				v98 = (int)(float)(v91.m128_f32[0] - *(float*)&dword_140C4B068);
			*(_DWORD*)(a1 + 1024) = v98;
			if ((int)v94 < v97)
				v97 = (int)v94;
			*(_DWORD*)(a1 + 1028) = v97;
			*(_DWORD*)(a1 + 1036) = v96;
			*(_DWORD*)(a1 + 1032) = v95;
			v99 = sub_14018B280(608i64, 0);
			if (v99)
			{
				v100 = sub_1406DF690((__int64)v99, v87);
				v214 = (__int64*)v100;
			}
			else
			{
				v100 = 0i64;
				v214 = 0i64;
			}
			v101 = *(_OWORD*)v218.m256i_i8;
			*(__m128*)(v100 + 16) = v91;
			*(_QWORD*)&v229 = 0i64;
			*(_OWORD*)(v100 + 32) = v101;
			BYTE8(v229) = 0;
			v230 = 0ui64;
			*(_OWORD*)(v100 + 48) = *(_OWORD*)&v218.m256i_u64[2];
			v102 = *(_QWORD*)(a1 + 32);
			v231 = 0i64;
			v232 = 0i64;
			v233 = 0ui64;
			*(_QWORD*)&v234 = 0i64;
			sub_14010B330(&v229, v102, (__m128i*)L"PrimalMatrix:Node_Blue_Button", L"PrimalMatrixNode");
			*(_DWORD*)(v100 + 368) = 0;
			sub_1400C3730(v100 + 72, (__int64)&v229);
			*(_BYTE*)(v100 + 486) &= ~1u;
			v103 = v234;
			*(_WORD*)(v100 + 484) = 16;
			*(_DWORD*)(v100 + 468) = 1048576000;
			*(_QWORD*)(v100 + 472) = 1048576000i64;
			*(_QWORD*)(v100 + 460) = 5i64;
			*(_DWORD*)(v100 + 480) = 1056964608;
			*(_DWORD*)(v100 + 456) = 5;
			*(_QWORD*)(v100 + 360) = v103;
			v104 = _mm_add_ps(*(__m128*)(v100 + 48), (__m128)xmmword_140B7B5C0);
			v105 = _mm_sub_ps(*(__m128*)(v100 + 32), (__m128)xmmword_140B7B5C0);
			v225[0] = (int)v105.m128_f32[0];
			v225[2] = (int)v104.m128_f32[0];
			v225[3] = (int)_mm_shuffle_ps(v104, v104, 85).m128_f32[0];
			v225[1] = (int)_mm_shuffle_ps(v105, v105, 85).m128_f32[0];
			sub_1400C3AD0(v100 + 72, v225);
			*(_BYTE*)(v100 + 484) |= 1u;
			*(_DWORD*)(v100 + 480) = 1048576000;
			sub_140033260((__int64*)(a1 + 2456), &v214);
			v106 = *(_DWORD*)(*(_QWORD*)v87 + 8i64);
			LODWORD(v215) = *(_DWORD*)(*(_QWORD*)v87 + 4i64);
			v107 = *(_QWORD*)(a1 + 2384);
			HIDWORD(v215) = v106;
			if (*(_QWORD*)(a1 + 2376) == v107)
				sub_1400290D0(a1 + 2376);
			v108 = (*(__int64(__fastcall**)(__int64*))(a1 + 2400))(&v215);
			v109 = *(_QWORD*)(a1 + 2392);
			v110 = v108 % *(_QWORD*)(a1 + 2384);
			v111 = sub_14018B280(32i64, 0);
			if (v111)
			{
				v112 = *(_QWORD*)(v109 + 8 * v110);
				*(_QWORD*)v111 = v108;
				*((_QWORD*)v111 + 1) = v112;
				*((_QWORD*)v111 + 2) = v215;
				*((_QWORD*)v111 + 3) = v214;
			}
			else
			{
				v111 = 0i64;
			}
			*(_QWORD*)(v109 + 8 * v110) = v111;
			++* (_QWORD*)(a1 + 2376);
			sub_1400B6080(a1 + 2416, *(int**)v87, &v214);
			v113 = v214;
			if (!qword_140C65898)
				goto LABEL_233;
			v114 = *(_QWORD*)(qword_140C65898 + 120);
			if (!v114)
				goto LABEL_233;
			v115 = sub_1406DFA40((__int64)v214, *(_QWORD*)(qword_140C65898 + 120));
			v116 = sub_140226240(v115);
			if (!v116)
				goto LABEL_233;
			v117 = 0;
			v118 = 0;
			v119 = 4i64;
			v120 = (unsigned int*)(v116 + 20);
			do
			{
				switch (*(v120 - 4))
				{
				case 2u:
					v117 = 1;
					break;
				case 3u:
					v118 = 1;
					break;
				case 4u:
					v121 = sub_1403ACD90(qword_140C65B70, *v120, v114);
					if (v121)
					{
						v122 = *(__m128i***)(v121 + 8);
						if (v122 || MEMORY[0] || MEMORY[0])
						{
							v123 = *(_QWORD*)(a1 + 32);
							if (v123)
								sub_140109710(v113 + 62, v123 + 240, *v122, 0);
						}
					}
					break;
				}
				++v120;
				--v119;
			} while (v119);
			if (!v113[62])
			{
				if (!v117)
				{
					if (!v118)
						goto LABEL_232;
					v124 = *(_QWORD*)(a1 + 32);
					if (!v124)
						goto LABEL_232;
					v125 = (__m128i*)L"IconSprites:Icon_ItemMisc_PrimalMatrix_AMP";
					goto LABEL_231;
				}
				v124 = *(_QWORD*)(a1 + 32);
				if (v124)
				{
					v125 = (__m128i*)L"IconSprites:Icon_ItemMisc_PrimalMatrix_AP";
				LABEL_231:
					sub_140109710(v113 + 62, v124 + 240, v125, 0);
				}
			}
		LABEL_232:
			v83 = v216;
			v85 = v217;
		LABEL_233:
			if ((*(_BYTE*)(*(_QWORD*)*v113 + 16i64) & 1) != 0)
				*(_QWORD*)(a1 + 2368) = v113;
			v85 = (__int64*)((char*)v85 + 1);
			v84 = 0i64;
			v217 = v85;
			if ((unsigned __int64)v85 >= *((_QWORD*)v83 + 1))
			{
				v83 = (int*)qword_140C65A50;
				break;
			}
		}
	}
	v126 = 0i64;
	if (*((_QWORD*)v83 + 13))
	{
		v127 = a1 + 2472;
		v128 = fsqrt(3.0) * 64.0;
		do
		{
			v129 = *(int***)(*((_QWORD*)v83 + 12) + 8 * v126);
			v130 = (__m128)COERCE_UNSIGNED_INT((float)(*v129)[1]);
			v131 = (__m128)COERCE_UNSIGNED_INT((float)(*v129)[2]);
			v132 = v130;
			v132.m128_f32[0] = v130.m128_f32[0] * 96.0;
			v131.m128_f32[0] = (float)(v131.m128_f32[0] + (float)(v130.m128_f32[0] * 0.5)) * v128;
			v133 = _mm_unpacklo_ps(_mm_unpacklo_ps(v132, (__m128)0i64), _mm_unpacklo_ps(v131, (__m128)0i64));
			v134 = _mm_shuffle_ps(v133, v133, 85).m128_f32[0];
			v135 = v134 - 55.425621;
			v136 = v134 + 55.425621;
			v223 = (int)(float)(v133.m128_f32[0] + *(float*)&dword_140C4B068);
			v224 = (int)v136;
			v222 = (int)v135;
			v221 = (int)(float)(v133.m128_f32[0] - *(float*)&dword_140C4B068);
			v137 = *(_DWORD*)(a1 + 1036);
			v138 = *(_DWORD*)(a1 + 1032);
			if (v138 < v223)
				v138 = (int)(float)(v133.m128_f32[0] + *(float*)&dword_140C4B068);
			v139 = *(_DWORD*)(a1 + 1028);
			*(float*)v218.m256i_i32 = v133.m128_f32[0] - *(float*)&dword_140C4B068;
			*(float*)&v218.m256i_i32[1] = v135;
			*(float*)&v218.m256i_i32[4] = v133.m128_f32[0] + *(float*)&dword_140C4B068;
			if (v137 < (int)v136)
				v137 = (int)v136;
			v140 = *(_DWORD*)(a1 + 1024);
			*(float*)&v218.m256i_i32[5] = v136;
			if ((int)(float)(v133.m128_f32[0] - *(float*)&dword_140C4B068) < v140)
				v140 = (int)(float)(v133.m128_f32[0] - *(float*)&dword_140C4B068);
			*(_DWORD*)(a1 + 1024) = v140;
			if ((int)v135 < v139)
				v139 = (int)v135;
			*(_DWORD*)(a1 + 1028) = v139;
			*(_DWORD*)(a1 + 1036) = v137;
			*(_DWORD*)(a1 + 1032) = v138;
			v141 = sub_14018B280(96i64, 0);
			if (v141)
			{
				*(_QWORD*)v141 = v129;
				*((_OWORD*)v141 + 1) = 0i64;
				*((_QWORD*)v141 + 4) = 0i64;
				*((_QWORD*)v141 + 6) = 0i64;
				v141[16] = 0;
				*((_QWORD*)v141 + 10) = 0i64;
				*((_QWORD*)v141 + 9) = 0i64;
			}
			else
			{
				v141 = 0i64;
			}
			v142 = *(_OWORD*)v218.m256i_i8;
			*((__m128*)v141 + 1) = v133;
			v216 = v141;
			*((_OWORD*)v141 + 2) = v142;
			*((_OWORD*)v141 + 3) = *(_OWORD*)&v218.m256i_u64[2];
			sub_140033260((__int64*)(a1 + 2552), &v216);
			v143 = (*v129)[2];
			LODWORD(v214) = (*v129)[1];
			v144 = *(_QWORD*)(v127 + 8);
			HIDWORD(v214) = v143;
			if (*(_QWORD*)v127 == v144)
				sub_1400290D0(v127);
			v145 = (*(__int64(__fastcall**)(__int64**))(v127 + 24))(&v214);
			v146 = v145 % *(_QWORD*)(v127 + 8);
			v147 = *(_QWORD*)(v127 + 16);
			v148 = v146;
			v149 = sub_14018B280(32i64, 0);
			if (v149)
			{
				v150 = *(_QWORD*)(v147 + 8 * v148);
				*(_QWORD*)v149 = v145;
				*((_QWORD*)v149 + 1) = v150;
				*((_QWORD*)v149 + 2) = v214;
				*((_QWORD*)v149 + 3) = v216;
			}
			else
			{
				v149 = 0i64;
			}
			*(_QWORD*)(v147 + 8 * v148) = v149;
			v127 = a1 + 2472;
			++* (_QWORD*)(a1 + 2472);
			sub_1400B6080(a1 + 2512, *v129, &v216);
			++v126;
			v84 = 0i64;
		} while (v126 < *((_QWORD*)v83 + 13));
	}
	v151 = (*(_DWORD*)(a1 + 716) + *(_DWORD*)(a1 + 724)) >> 1;
	v152 = (*(_DWORD*)(a1 + 720) + *(_DWORD*)(a1 + 728)) >> 1;
	v153 = 0i64;
	*(_DWORD*)(a1 + 1024) += v151;
	*(_DWORD*)(a1 + 1028) += v152;
	*(_DWORD*)(a1 + 1032) += v151;
	*(_DWORD*)(a1 + 1036) += v152;
	v32 = *(_QWORD*)(a1 + 2464) == 0i64;
	v214 = 0i64;
	if (!v32)
	{
	LABEL_257:
		v154 = *(__int64***)(*(_QWORD*)(a1 + 2456) + 8 * v153);
		while (1)
		{
			v155 = (__int64*)(*v154)[v84 + 1];
			if (!v155 || !(unsigned int)sub_1402DD480(a1 + 2416, *v155, &v216))
				goto LABEL_291;
			v156 = (float*)v216;
			if (!*((_DWORD*)v154 + 16) && (unsigned int)(v216[16] - 2) <= 1)
				sub_1406E4720(a1, (__int64)v154, 1);
			if (v154[v84 + 68])
				goto LABEL_291;
			v157 = (__int64)sub_14018B280(40i64, 0);
			if (v157)
				v157 = sub_1406DF7E0(v157, (float*)v154, v156);
			v154[v84 + 68] = (__int64*)v157;
			v158 = v157;
			v215 = v157;
			*(_QWORD*)&v156[2 * ((v84 + 3) % 6ui64) + 136] = v157;
			v159 = (__int64*)(*v154)[7];
			if (!v159 || v159 != *(__int64**)(*(_QWORD*)v156 + 56i64))
			{
				v166 = (__int64*)(a1 + 2568);
				goto LABEL_290;
			}
			if ((unsigned int)sub_1402DD480(a1 + 2512, *v159, &v217))
				break;
		LABEL_291:
			if ((unsigned __int64)++v84 >= 6)
			{
				v84 = 0i64;
				v153 = (unsigned __int64)v214 + 1;
				v214 = (__int64*)v153;
				if (v153 >= *(_QWORD*)(a1 + 2464))
					goto LABEL_293;
				goto LABEL_257;
			}
		}
		v160 = v217;
		v161 = **v154;
		v162 = **(_QWORD**)v156;
		v163 = *(_DWORD*)(v161 + 4);
		v164 = *(_DWORD*)(v162 + 4);
		if (v163 == v164)
		{
			v165 = *(_DWORD*)(*(_QWORD*)*v217 + 8i64);
			if (*(_DWORD*)(v161 + 8) < v165 || *(_DWORD*)(v162 + 8) < v165)
			{
				*(_DWORD*)(v158 + 20) = 1;
				v166 = v160 + 9;
			}
			else
			{
				*(_DWORD*)(v158 + 20) = 4;
				v166 = v160 + 9;
			}
			goto LABEL_290;
		}
		v167 = *(_DWORD*)(v161 + 8);
		v168 = *(_DWORD*)(v162 + 8);
		if (v167 == v168)
		{
			v169 = *(_DWORD*)(*(_QWORD*)*v217 + 4i64);
			if (v163 < v169 || v164 < v169)
			{
				*(_DWORD*)(v158 + 20) = 3;
				v166 = v160 + 9;
			}
			else
			{
				v166 = v217 + 9;
				*(_DWORD*)(v158 + 20) = 0;
			}
			goto LABEL_290;
		}
		v170 = v163 <= v164;
		if (v163 >= v164)
		{
		LABEL_282:
			if (!v170 && v168 > v167)
				goto LABEL_284;
		}
		else
		{
			if (v168 >= v167)
			{
				v170 = v163 <= v164;
				goto LABEL_282;
			}
		LABEL_284:
			v171 = *(_DWORD*)(*(_QWORD*)*v217 + 4i64);
			if (v163 >= v171 && v164 >= v171)
			{
				*(_DWORD*)(v158 + 20) = 2;
				v166 = v160 + 9;
			LABEL_290:
				sub_140033260(v166, &v215);
				goto LABEL_291;
			}
			*(_DWORD*)(v158 + 20) = 5;
		}
		v166 = v160 + 9;
		goto LABEL_290;
	}
LABEL_293:
	for (i = 0i64; i < *(_QWORD*)(a1 + 2560); ++i)
		sub_1406E51A0(a1, *(_DWORD**)(*(_QWORD*)(a1 + 2552) + 8 * i));
	v173 = sub_1400CB3D0(a1, &v221);
	v174 = v173[3] - v173[1];
	v175 = sub_1400CB3D0(a1, v225);
	v176 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		(unsigned int)(v175[2] - *v175),
		v174,
		1i64,
		0,
		5,
		1,
		256,
		0,
		a1 + 3816);
	if (v176 < 0)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v220 = 0i64;
		*((_QWORD*)&v220 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v226 = TlsValue;
		v227 = v220;
		v218.m256i_i64[0] = (__int64)&off_140B5E648;
		v218.m256i_i64[1] = (__int64)L"Result";
		v218.m256i_i64[2] = (__int64)TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v218);
		v218.m256i_i64[0] = (__int64)&off_140B5E640;
		v218.m256i_i32[6] = v176;
		v228 = v218;
		v177 = sub_1400CB3D0(a1, &v221);
		v178 = v177[3] - v177[1];
		v179 = sub_1400CB3D0(a1, v225);
		v180 = (unsigned int)(v179[2] - *v179);
		v215 = 0x141E39500i64;
		LODWORD(v213) = v178;
		v181 = sub_1401971E0(&dword_140C8B05C, 13, &v215, v180, v213, &v228, &v226);
		v218.m256i_i64[0] = (__int64)&off_140B5E648;
		v182 = v181;
		TlsSetValue(dwTlsIndex, (LPVOID)v218.m256i_i64[2]);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v220 + 1));
		if (v182)
			DebugBreak();
	}
	v183 = (_QWORD*)(a1 + 3808);
	if ((*(int(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD, int, _DWORD, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		1i64,
		1i64,
		1i64,
		0,
		1,
		0,
		256,
		0,
		a1 + 3808) < 0)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v220 = 0i64;
		*((_QWORD*)&v220 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v226 = TlsValue;
		v215 = 0x141E39470i64;
		v227 = v220;
		v184 = sub_140197770(13, &v215, &v226);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v220 + 1));
		if (v184)
			DebugBreak();
	}
	if (!(*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)*v183 + 48i64))(*v183))
	{
		v186 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, __int64**, __int64))(*(_QWORD*)*v183 + 72i64))(
			*v183,
			0i64,
			&v217,
			2i64);
		if (v186)
		{
			*v186 = 0;
			(*(void(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)*v183 + 80i64))(*v183, 0i64);
		}
	}
	v215 = 0i64;
	v187 = sub_1402EC590(v185, &v215);
	v188 = v215;
	if (v187 >= 0)
	{
		v214 = 0i64;
		if ((*(int(__fastcall**)(__int64, const wchar_t*, __int64**, _QWORD))(*(_QWORD*)v215 + 40i64))(
			v215,
			L"Art\\Prop\\BackgroundUI\\Parallax\\PRP_Parallax_UI_Fractal_000.m3",
			&v214,
			0i64) >= 0)
		{
			if (*(_QWORD*)(a1 + 3792) != v188)
			{
				(**(void(__fastcall***)(__int64))v188)(v188);
				v189 = *(_QWORD*)(a1 + 3792);
				if (v189)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v189 + 8i64))(v189);
				*(_QWORD*)(a1 + 3792) = v188;
			}
			v190 = (__int64)v214;
			if (*(__int64**)(a1 + 3800) != v214)
			{
				if (v214)
				{
					(*(void(__fastcall**)(__int64*)) * v214)(v214);
					v190 = (__int64)v214;
				}
				v191 = *(_QWORD*)(a1 + 3800);
				if (v191)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v191 + 8i64))(v191);
					v190 = (__int64)v214;
				}
				*(_QWORD*)(a1 + 3800) = v190;
			}
			v192 = *(_QWORD*)(a1 + 3800);
			v218.m256i_i64[0] = 150i64;
			memset((char*)&v218.m256i_u64[1] + 4, 0, 20);
			v218.m256i_i32[2] = 1065353216;
			(*(void(__fastcall**)(__int64, _QWORD, __m256i*))(*(_QWORD*)v192 + 584i64))(v192, 0i64, &v218);
			(*(void(__fastcall**)(_QWORD, __int64(__fastcall*)(__int64*, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 3800) + 648i64))(
				*(_QWORD*)(a1 + 3800),
				sub_1406E3430,
				a1);
			v193 = dword_140C54160;
			v194 = *(_DWORD*)qword_140C63750;
			if (*(_DWORD*)qword_140C63750 < dword_140C54160)
				v193 = *(_DWORD*)qword_140C63750;
			v195 = (__int64(__fastcall**)())((char*)&unk_140C54170 + 16 * v193);
			v196 = dword_140C54220;
			TlsValue = v195;
			if (v194 < dword_140C54220)
				v196 = v194;
			v239 = TlsValue;
			v197 = (char*)&unk_140C54230 + 16 * v196;
			v198 = dword_140C540A0;
			*(_QWORD*)&v220 = v197;
			if (v194 < dword_140C540A0)
				v198 = v194;
			*((_QWORD*)&v220 + 1) = (char*)&unk_140C540B0 + 16 * v198;
			v240 = v220;
			sub_1401AEFA0((__int64)&v239, (__int64)&v229);
			v200 = v231;
			v201 = v230;
			*(_OWORD*)(a1 + 3008) = v229;
			v202 = v233;
			*(_OWORD*)(a1 + 3024) = v201;
			v203 = v234;
			*(_DWORD*)(a1 + 3040) = v200;
			v204 = v235;
			*(_OWORD*)(a1 + 3056) = v202;
			v205 = v236;
			*(_OWORD*)(a1 + 3072) = v203;
			*(_DWORD*)(a1 + 3088) = v204;
			v206 = v238;
			v207 = v237;
			*(_OWORD*)(a1 + 3104) = v205;
			*(_OWORD*)(a1 + 3120) = v207;
			*(_DWORD*)(a1 + 3136) = v206;
			v208 = dword_140C542E0;
			if (*v199 < dword_140C542E0)
				v208 = *v199;
			*(_OWORD*)(a1 + 3152) = xmmword_140C542F0[v208];
			v209 = dword_140C543A0;
			if (*v199 < dword_140C543A0)
				v209 = *v199;
			*(_OWORD*)(a1 + 3168) = xmmword_140C543B0[v209];
			v210 = dword_140C54460;
			v211 = (__m128)(unsigned int)dword_140C3B438;
			if (*v199 < dword_140C54460)
				v210 = *v199;
			v211.m128_f32[0] = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * 24.75;
			*(_DWORD*)(a1 + 3696) = dword_140C54470[v210];
			v211.m128_f32[0] = sub_1408FE3D0(*(double*)v211.m128_u64);
			*(__m128*)(a1 + 3184) = _mm_unpacklo_ps((__m128)xmmword_140B7A490, _mm_unpacklo_ps(v211, (__m128)0i64));
		}
		if (v214)
			(*(void(__fastcall**)(__int64*))(*v214 + 8))(v214);
	}
	if (v188)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v188 + 8i64))(v188);
	return a1;
}
// 1406E1675: variable 'v213' is possibly undefined
// 1406E17C3: variable 'v185' is possibly undefined
// 1406E19BE: variable 'v199' is possibly undefined
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B3E450: using guessed type wchar_t aPrimalmatrixCo_0[37];
// 140B3E4A0: using guessed type wchar_t aPrimalmatrixCo[39];
// 140B3E4F0: using guessed type wchar_t aPrimalmatrixNo_0[32];
// 140B3E530: using guessed type wchar_t aPrimalmatrixNo[30];
// 140B3E570: using guessed type wchar_t aPrimalmatrixSe_1[35];
// 140B3E5B8: using guessed type wchar_t aPrimalmatrixBa_1[26];
// 140B3E5F0: using guessed type wchar_t aPrimalmatrixSe_0[34];
// 140B3E640: using guessed type wchar_t aPrimalmatrixSe[32];
// 140B3E680: using guessed type wchar_t aPrimalmatrixBa_0[26];
// 140B3E6B8: using guessed type wchar_t aPrimalmatrixBa[26];
// 140B3E6F0: using guessed type wchar_t aBasicspritesWh[23];
// 140B3E720: using guessed type wchar_t aPlayuiprimalma_0[36];
// 140B3E768: using guessed type wchar_t aPlayuiprimalma[26];
// 140B3E7A0: using guessed type wchar_t aIconspritesIco_0[42];
// 140B3E7F8: using guessed type wchar_t aPrimalmatrixNo_7[30];
// 140B3E838: using guessed type wchar_t aPrimalmatrixno_0[17];
// 140B3E860: using guessed type wchar_t aCrbHeader9[12];
// 140B3E878: using guessed type wchar_t aPrimalmatrixNo_6[27];
// 140B3E8B0: using guessed type wchar_t aPrimalmatrixNo_5[32];
// 140B3E8F0: using guessed type wchar_t aPrimalmatrixNo_4[33];
// 140B3E938: using guessed type wchar_t aPrimalmatrixNo_3[31];
// 140B3E990: using guessed type wchar_t aPrimalmatrixNo_2[32];
// 140B3E9D0: using guessed type wchar_t aPrimalmatrixNo_1[30];
// 140B3EA10: using guessed type wchar_t aPrimalmatrixCo_6[44];
// 140B3EA90: using guessed type wchar_t aPrimalmatrixCo_5[45];
// 140B3EAF0: using guessed type wchar_t aPrimalmatrixCo_4[47];
// 140B3EB50: using guessed type wchar_t aPrimalmatrixCo_3[48];
// 140B3EBB0: using guessed type wchar_t aPrimalmatrixCo_2[46];
// 140B3EC10: using guessed type wchar_t aPrimalmatrixCo_1[45];
// 140B3EDB0: using guessed type wchar_t aArtPropBackgro[62];
// 140B3EF40: using guessed type wchar_t aIconspritesIco_1[43];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B720D0: using guessed type __int64 (__fastcall *off_140B720D0[25])();
// 140B7A490: using guessed type __int128 xmmword_140B7A490;
// 140B7B5C0: using guessed type __int128 xmmword_140B7B5C0;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C4B068: using guessed type int dword_140C4B068;
// 140C53AC0: using guessed type int dword_140C53AC0;
// 140C53AD0: using guessed type int dword_140C53AD0[16];
// 140C540A0: using guessed type int dword_140C540A0;
// 140C54160: using guessed type int dword_140C54160;
// 140C54220: using guessed type int dword_140C54220;
// 140C542E0: using guessed type int dword_140C542E0;
// 140C542F0: using guessed type _OWORD xmmword_140C542F0[7];
// 140C543A0: using guessed type int dword_140C543A0;
// 140C543B0: using guessed type _OWORD xmmword_140C543B0[7];
// 140C54460: using guessed type int dword_140C54460;
// 140C54470: using guessed type int dword_140C54470[14];
// 140C63664: using guessed type int dword_140C63664;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A50: using guessed type __int64 qword_140C65A50;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C784C0: using guessed type __int64 qword_140C784C0;
// 140C784C8: using guessed type __int64 qword_140C784C8;
// 140C79888: using guessed type __int64 qword_140C79888;
// 140C8B05C: using guessed type _DWORD dword_140C8B05C;

