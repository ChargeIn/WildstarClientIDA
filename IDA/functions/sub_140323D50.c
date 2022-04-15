#include "../winhttp.h"

//----- (0000000140323D50) ----------------------------------------------------
_BYTE* __fastcall sub_140323D50(
	__int64 a1,
	__m128* a2,
	__int128* a3,
	__m128* a4,
	unsigned __int64 a5,
	__m128* a6,
	unsigned int* a7,
	__m128* a8,
	int a9,
	__int16 a10,
	__int64 a11,
	char a12)
{
	bool v12; // cc
	_BYTE* result; // rax
	__int64 v18; // rax
	__int128 v19; // xmm1
	unsigned int v20; // r12d
	__m128 v21; // xmm7
	int v22; // xmm6_4
	__int64 v23; // rcx
	__m128 v24; // xmm1
	__m128 v25; // xmm0
	__m128 v26; // xmm1
	__m128 v27; // xmm0
	__m128 v28; // xmm1
	__m128 v29; // xmm0
	__m128 v30; // xmm1
	__m128 v31; // xmm1
	__m128 v32; // xmm10
	float v33; // xmm10_4
	__m128 v34; // xmm8
	int v35; // eax
	unsigned int v36; // edx
	__m128 v37; // xmm9
	__m128 v38; // xmm2
	float v39; // xmm0_4
	__m128 v40; // xmm8
	__int64 v41; // r9
	_QWORD* v42; // r15
	__int64 v43; // r8
	int v44; // r11d
	int v45; // r10d
	__int64 v46; // rdx
	float v47; // xmm7_4
	float v48; // xmm5_4
	float v49; // xmm3_4
	__int64 v50; // rax
	float v51; // xmm1_4
	float v52; // xmm0_4
	int v53; // eax
	float v54; // xmm1_4
	__int64 v55; // rcx
	unsigned int v56; // edi
	bool v57; // zf
	int v58; // edx
	__int64 v59; // rax
	__int64 v60; // r8
	__int64 v61; // rdx
	__int64 v62; // rax
	__int64 v63; // rax
	__m128* v64; // rax
	__m128 v65; // xmm1
	__m128* v66; // rax
	__int64 v67; // r8
	int v68; // r8d
	__m128 v69; // xmm9
	int v70; // r14d
	unsigned int v71; // r13d
	unsigned int v72; // edi
	__m128* v73; // r13
	__m128 v74; // xmm1
	int v75; // ebx
	int v76; // eax
	double v77; // xmm1_8
	__m128* v78; // rax
	__m128 v79; // xmm1
	int v80; // ebx
	double v81; // xmm0_8
	int v82; // eax
	int v83; // edx
	__int64 v84; // rax
	__int64 v85; // r8
	__int64 v86; // rdx
	__int64 v87; // rax
	__int64 v88; // rax
	__m128* v89; // rax
	__m128 v90; // xmm1
	__m128* v91; // rax
	int v92; // ebx
	unsigned int i; // r14d
	__m128* v94; // rcx
	__m128 v95; // xmm1
	__m128* v96; // rax
	__m128 v97; // xmm1
	int v98; // eax
	int v99; // edx
	__int64 v100; // rax
	_WORD* v101; // rdx
	unsigned int v102; // r11d
	int v103; // r14d
	int v104; // r9d
	__int64 v105; // r15
	unsigned int v106; // r8d
	int v107; // ecx
	int v108; // edx
	__int64 v109; // rax
	unsigned int v110; // r15d
	int v111; // r12d
	int v112; // ecx
	__int16 v113; // r8
	__int64 v114; // rbx
	__int64 v115; // rcx
	float v116; // xmm1_4
	float v117; // xmm2_4
	float v118; // xmm0_4
	float v119; // xmm0_4
	__int64 v120; // rdx
	__int64 v121; // r8
	__int64 v122; // r8
	__int64 v123; // rdx
	__int64 v124; // r9
	__int64 v125; // r8
	__int64 v126; // r8
	__int64 v127; // rdx
	__int64 v128; // rdx
	__int64 v129; // r8
	__m128 v130; // xmm5
	__m128 v131; // xmm4
	__m128 v132; // xmm3
	__m128 v133; // xmm2
	__m128 v134; // xmm5
	__m128 v135; // xmm3
	__m128 v136; // xmm2
	__m128 v137; // xmm4
	_DWORD* v138; // rax
	int v139; // ecx
	__m128 v140; // xmm3
	int v141; // ecx
	unsigned int v142; // edx
	__m128 v143; // xmm4
	__m128 v144; // xmm1
	__m128 v145; // xmm2
	__int64 v146; // r13
	__int64 v147; // rcx
	__int64 v148; // r10
	__int64 v149; // rax
	int v150; // edx
	int v151; // r11d
	int v152; // edx
	__m128* v153; // rax
	__m128* v154; // rbx
	float v155; // xmm0_4
	float v156; // xmm1_4
	__m128 v157; // xmm2
	__m128 v158; // xmm0
	__m128 v159; // xmm3
	__int64 v160; // rax
	__int128 v161; // xmm0
	__int128* v162; // rax
	__m128* v163; // r8
	__int64 v164; // rcx
	float v165; // xmm1_4
	float v166; // xmm11_4
	__int64 v167; // [rsp+20h] [rbp-E0h]
	float v168; // [rsp+38h] [rbp-C8h]
	__m128 v169; // [rsp+50h] [rbp-B0h] BYREF
	unsigned int v170; // [rsp+60h] [rbp-A0h]
	int v171; // [rsp+64h] [rbp-9Ch]
	__int128 v172; // [rsp+68h] [rbp-98h]
	__m128 v173; // [rsp+80h] [rbp-80h] BYREF
	__m128* v174; // [rsp+90h] [rbp-70h]
	__m128* v175; // [rsp+98h] [rbp-68h]
	__m128 v176[3]; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v177; // [rsp+D0h] [rbp-30h] BYREF
	float v178; // [rsp+D8h] [rbp-28h]
	int v179; // [rsp+DCh] [rbp-24h]
	unsigned int* v180; // [rsp+E0h] [rbp-20h]
	__m128 v181[2]; // [rsp+F0h] [rbp-10h] BYREF
	float v182; // [rsp+110h] [rbp+10h]
	int v183; // [rsp+114h] [rbp+14h]
	__m128 v184; // [rsp+120h] [rbp+20h] BYREF
	__m128 v185; // [rsp+130h] [rbp+30h]
	__m128 v186; // [rsp+140h] [rbp+40h]
	__m128 v187; // [rsp+150h] [rbp+50h]
	__int128 v188; // [rsp+160h] [rbp+60h] BYREF
	__int128 v189; // [rsp+170h] [rbp+70h] BYREF
	__m128 v190; // [rsp+180h] [rbp+80h] BYREF
	__m128 v191; // [rsp+190h] [rbp+90h]
	__int128 v192; // [rsp+1A0h] [rbp+A0h] BYREF
	__int128 v193; // [rsp+1B0h] [rbp+B0h] BYREF
	__int128 v194; // [rsp+1C0h] [rbp+C0h] BYREF
	__m128 v195[3]; // [rsp+1D0h] [rbp+D0h] BYREF
	unsigned int v196; // [rsp+200h] [rbp+100h]
	unsigned int v197; // [rsp+204h] [rbp+104h]
	unsigned int v198; // [rsp+208h] [rbp+108h]
	__m128 v199; // [rsp+210h] [rbp+110h] BYREF
	__m128 v200; // [rsp+220h] [rbp+120h]
	__m128 v201; // [rsp+230h] [rbp+130h]
	__m128 v202; // [rsp+240h] [rbp+140h]
	__int128 v203; // [rsp+250h] [rbp+150h]
	__int128 v204; // [rsp+260h] [rbp+160h]
	__int128 v205; // [rsp+270h] [rbp+170h]
	__m128 v206; // [rsp+280h] [rbp+180h]
	__m128 v207[4]; // [rsp+290h] [rbp+190h] BYREF
	__m128 v208; // [rsp+2D0h] [rbp+1D0h]
	__m128 v209; // [rsp+2E0h] [rbp+1E0h]
	__int128 v210; // [rsp+2F0h] [rbp+1F0h]
	__m128 v211; // [rsp+300h] [rbp+200h]
	__m128 v212; // [rsp+310h] [rbp+210h]
	__m128 v213; // [rsp+320h] [rbp+220h]
	__m128 v214; // [rsp+330h] [rbp+230h]
	__m128 v215; // [rsp+340h] [rbp+240h]
	__m128 v216; // [rsp+350h] [rbp+250h]
	__m128 v217; // [rsp+360h] [rbp+260h]
	__m128 v218[3]; // [rsp+370h] [rbp+270h] BYREF
	int v219; // [rsp+3A4h] [rbp+2A4h]
	__m128 v220[3]; // [rsp+3B0h] [rbp+2B0h] BYREF
	int v221; // [rsp+3E4h] [rbp+2E4h]
	double v222[8]; // [rsp+3F0h] [rbp+2F0h] BYREF
	double v223[8]; // [rsp+430h] [rbp+330h] BYREF
	double v224[8]; // [rsp+470h] [rbp+370h] BYREF
	__m128* v225[10]; // [rsp+4B0h] [rbp+3B0h] BYREF
	__m128* v226[10]; // [rsp+500h] [rbp+400h] BYREF
	__m128* v227[10]; // [rsp+550h] [rbp+450h] BYREF
	__m128* v228[10]; // [rsp+5A0h] [rbp+4A0h] BYREF
	__m128* v229[10]; // [rsp+5F0h] [rbp+4F0h] BYREF
	__m128* v230; // [rsp+640h] [rbp+540h] BYREF
	__m128* v231; // [rsp+690h] [rbp+590h] BYREF
	__m128* v232; // [rsp+6E0h] [rbp+5E0h] BYREF
	__m128* v233; // [rsp+730h] [rbp+630h] BYREF
	char v234[32]; // [rsp+780h] [rbp+680h] BYREF
	int v235; // [rsp+7A0h] [rbp+6A0h]

	v12 = *(_DWORD*)(a1 + 1328) <= 1u;
	result = a7;
	v180 = a7;
	v174 = a8;
	v175 = a4;
	if (v12)
		return result;
	result = (_BYTE*)a11;
	if (!*(_WORD*)(a11 + 52) || *(float*)(a11 + 32) == 0.0 && *(float*)(a11 + 36) == 0.0)
		return result;
	result = *(_BYTE**)(a1 + 1256);
	if (*result == 1)
	{
		if (!*(_DWORD*)(a1 + 80))
			return result;
		result = (_BYTE*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 72i64))(a1);
		if (!(_DWORD)result)
			return result;
	}
	v18 = *(_QWORD*)(a1 + 8);
	v19 = a3[1];
	v20 = 0;
	v21 = (__m128)a3[3];
	v203 = *a3;
	v205 = a3[2];
	v204 = v19;
	v206 = v21;
	if (!*(_DWORD*)(v18 + 40) || *(_DWORD*)(v18 + 8) == 2)
	{
		v24 = a2[1];
		v207[0] = *a2;
		v25 = a2[2];
		v207[1] = v24;
		v26 = a2[3];
		v207[2] = v25;
		v27 = *(__m128*)a5;
		v207[3] = v26;
		v28 = *(__m128*)(a5 + 16);
		v184 = v27;
		v29 = *(__m128*)(a5 + 32);
		v185 = v28;
		v30 = *(__m128*)(a5 + 48);
		v186 = v29;
		v187 = v30;
	}
	else
	{
		v230 = a4;
		sub_1401AFC20((__int64*)&v230, v222);
		v227[0] = a2;
		v227[1] = (__m128*)v222;
		sub_1401AFB10(v227, v218);
		v233 = a4;
		sub_1401AFC20((__int64*)&v233, v223);
		v169.m128_u64[0] = a5;
		v228[0] = (__m128*)a5;
		v169.m128_u64[1] = (unsigned __int64)v223;
		v228[1] = (__m128*)v223;
		sub_1401AFB10(v228, v220);
		v22 = 0;
		v23 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) + 488i64);
		if (v23)
		{
			v210 = xmmword_140C77870;
			v190 = _mm_add_ps(v21, (__m128)xmmword_140C77870);
			if ((*(unsigned int(__fastcall**)(__int64, __m128*, char*, __int64, _QWORD))(*(_QWORD*)v23 + 440i64))(
				v23,
				&v190,
				v234,
				1i64,
				0i64))
			{
				v22 = v235;
			}
		}
		v219 = v22;
		v206.m128_i32[1] = v22;
		v221 = v22;
		v226[1] = a4;
		v226[0] = v218;
		sub_1401AFB10(v226, v207);
		v169.m128_u64[0] = (unsigned __int64)v220;
		v169.m128_u64[1] = (unsigned __int64)a4;
		v225[0] = v220;
		v225[1] = a4;
		sub_1401AFB10(v225, &v184);
	}
	v231 = &v184;
	sub_1401AFC20((__int64*)&v231, v224);
	sub_140052360(&qword_140C79DE8, (unsigned int)(*(_DWORD*)(a1 + 1312) + 1));
	sub_140052360(&qword_140C79DF8, (unsigned int)(*(_DWORD*)(a1 + 1312) + 1));
	v31 = *a2;
	v232 = &v184;
	v32 = _mm_mul_ps(v31, v31);
	v33 = fsqrt(
		(float)(v32.m128_f32[0] + _mm_shuffle_ps(v32, v32, 85).m128_f32[0])
		+ _mm_shuffle_ps(v32, v32, 170).m128_f32[0]);
	sub_1401AFC20((__int64*)&v232, (double*)v195[0].m128_u64);
	v34 = (__m128)0x40400000u;
	v35 = *(_DWORD*)(a1 + 1328);
	v36 = 0;
	v212 = (__m128)xmmword_140B7A8C0;
	v37 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v196, (__m128)v198), _mm_unpacklo_ps((__m128)v197, (__m128)0i64));
	v173 = v37;
	v216 = _mm_add_ps(
		_mm_add_ps(
			_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140B7A8C0, (__m128)xmmword_140B7A8C0, 85), v195[1]),
			_mm_mul_ps(_mm_shuffle_ps(v212, v212, 0), v195[0])),
		_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140B7A8C0, (__m128)xmmword_140B7A8C0, 170), v195[2]));
	v38 = _mm_mul_ps(v216, v216);
	v38.m128_f32[0] = (float)(v38.m128_f32[0] + _mm_shuffle_ps(v38, v38, 85).m128_f32[0])
		+ _mm_shuffle_ps(v38, v38, 170).m128_f32[0];
	v39 = 1.0 / fsqrt(v38.m128_f32[0]);
	v34.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v38.m128_f32[0] * v39) * v39)) * 0.5) * v39, 0.0);
	v40 = _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0), v216);
	v214 = v40;
	if (v35 != -1)
	{
		do
		{
			*(_DWORD*)(qword_140C79DE8 + 4i64 * v36) = v36;
			++v36;
		} while (v36 < *(_DWORD*)(a1 + 1328) + 1);
	}
	v189 = xmmword_140B7A700;
	sub_140262900(a8, &v169, (__m128*) & v189);
	v41 = *(_QWORD*)(a1 + 1424);
	v42 = (_QWORD*)(a1 + 1304);
	v43 = *(_QWORD*)(a1 + 1304);
	v44 = *(_DWORD*)(v41 + 24);
	v45 = *(_DWORD*)((unsigned int)(*(_DWORD*)(a1 + 1320) * *(_DWORD*)(a1 + 1316)) + v43 + 24);
	if (v45 == v44)
	{
		v47 = 1.0;
	}
	else
	{
		v48 = 1.0 / (float)*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 38i64);
		v49 = (float)(*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 38i64) - v45) * v48;
		v47 = fmaxf(
			0.0,
			fminf(
				(float)(1.0 - v49)
				/ (float)((float)((float)(*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 38i64) - v44) * v48) - v49),
				1.0));
	}
	v50 = *(_QWORD*)(a1 + 1416);
	v46 = (unsigned int)(*(_DWORD*)(a1 + 1320) * *(_DWORD*)(a1 + 1316));
	v51 = (float)((float)(*(float*)(v41 + 12) - *(float*)(v46 + v43 + 12)) * v47) + *(float*)(v46 + v43 + 12);
	*(float*)(a1 + 1296) = v51;
	v52 = *(float*)(v50 + 12) - v51;
	if (v52 > 0.000099999997)
		goto LABEL_25;
	v53 = *(_DWORD*)(a1 + 1324);
	if (!v53)
		v53 = *(_DWORD*)(a1 + 1312);
	v52 = *(float*)((unsigned int)(*(_DWORD*)(a1 + 1316) * (v53 - 1)) + *v42 + 12i64) - v51;
	if (v52 > 0.000099999997)
		LABEL_25:
	v54 = 1.0 / v52;
	else
		v54 = 0.0;
	v55 = *(_QWORD*)(a1 + 1256);
	*(float*)(a1 + 1300) = v54;
	if (*(_BYTE*)(v55 + 4))
	{
		v56 = *(_DWORD*)(a1 + 1372);
		v83 = v56 * (*(_DWORD*)(a1 + 1328) + 2);
		v57 = *(_WORD*)(v55 + 1028) == 0;
		v84 = *(_QWORD*)qword_140C65670;
		v171 = v83;
		if (v57)
		{
			v85 = 10i64;
			v86 = (unsigned int)(24 * v83);
		}
		else
		{
			v85 = 11i64;
			v86 = (unsigned int)(36 * v83);
		}
		result = (_BYTE*)(*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD))(v84 + 224))(
			qword_140C65670,
			v86,
			v85,
			0i64);
		if (!result)
			return result;
		v181[0] = (__m128)(unsigned __int64)result;
		v87 = *(_QWORD*)(a1 + 8);
		v182 = v33;
		v181[1] = v169;
		if (!*(_WORD*)(v87 + 24) || (v88 = *(_QWORD*)(a1 + 1256), v183 = 1, *(_WORD*)(v88 + 1028) == 1))
			v183 = 0;
		if (*(_DWORD*)(a1 + 1356))
		{
			v89 = *(__m128**)(a1 + 1424);
			v215 = _mm_sub_ps(v89[5], v37);
			v90 = _mm_mul_ps(v215, v40);
			v89->m128_f32[0] = (float)(v90.m128_f32[0] + _mm_shuffle_ps(v90, v90, 85).m128_f32[0])
				+ _mm_shuffle_ps(v90, v90, 170).m128_f32[0];
			*(_DWORD*)qword_140C79DF8 = **(_DWORD**)(a1 + 1424);
		}
		if (!*(_WORD*)(*(_QWORD*)(a1 + 8) + 24i64) || *(_WORD*)(*(_QWORD*)(a1 + 1256) + 1028i64) == 1)
		{
			v91 = (__m128*) & v194;
			v194 = xmmword_140B7B240;
		}
		else
		{
			v91 = &v169;
		}
		sub_140322CE0(
			a1,
			(__int64)v181,
			(__m128*)(*v42 + (unsigned int)(*(_DWORD*)(a1 + 1316) * *(_DWORD*)(a1 + 1320))),
			*(__m128**)(a1 + 1424),
			v47,
			v33,
			v91);
		v92 = *(_DWORD*)(a1 + 1320);
		for (i = 0; i < *(_DWORD*)(a1 + 1328); ++i)
		{
			v94 = (__m128*)(*(_QWORD*)(a1 + 1304) + (unsigned int)(*(_DWORD*)(a1 + 1316) * v92));
			v181[0].m128_u64[1] = (unsigned __int64)v94;
			if (*(_DWORD*)(a1 + 1356))
			{
				v208 = _mm_sub_ps(v94[5], v37);
				v95 = _mm_mul_ps(v208, v40);
				v95.m128_f32[0] = (float)(v95.m128_f32[0] + _mm_shuffle_ps(v95, v95, 85).m128_f32[0])
					+ _mm_shuffle_ps(v95, v95, 170).m128_f32[0];
				v94->m128_i32[0] = v95.m128_i32[0];
				*(_DWORD*)(qword_140C79DF8 + 4i64 * (i + 1)) = v95.m128_i32[0];
			}
			sub_140323590(a1, v181);
			if (++v92 == *(_DWORD*)(a1 + 1312))
				v92 = 0;
		}
		if (*(_DWORD*)(a1 + 1356))
		{
			v96 = *(__m128**)(a1 + 1416);
			v217 = _mm_sub_ps(v96[5], v37);
			v97 = _mm_mul_ps(v217, v40);
			v96->m128_f32[0] = (float)(v97.m128_f32[0] + _mm_shuffle_ps(v97, v97, 85).m128_f32[0])
				+ _mm_shuffle_ps(v97, v97, 170).m128_f32[0];
			*(_DWORD*)qword_140C79DF8 = **(_DWORD**)(a1 + 1416);
		}
		v181[0].m128_u64[1] = *(_QWORD*)(a1 + 1416);
		sub_140323590(a1, v181);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 232i64))(qword_140C65670);
	}
	else
	{
		v56 = 3;
		v57 = *(_WORD*)(v55 + 1028) == 0;
		v58 = 3 * (*(_DWORD*)(a1 + 1328) + 2);
		v59 = *(_QWORD*)qword_140C65670;
		v170 = 3;
		v171 = v58;
		if (v57)
		{
			v60 = 10i64;
			v61 = (unsigned int)(24 * v58);
		}
		else
		{
			v60 = 11i64;
			v61 = (unsigned int)(36 * v58);
		}
		result = (_BYTE*)(*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD))(v59 + 224))(
			qword_140C65670,
			v61,
			v60,
			0i64);
		if (!result)
			return result;
		v176[0] = (__m128)(unsigned __int64)result;
		v62 = *(_QWORD*)(a1 + 8);
		v178 = v33;
		v176[1] = v37;
		v177 = 0i64;
		v176[2] = v169;
		if (!*(_WORD*)(v62 + 24) || (v63 = *(_QWORD*)(a1 + 1256), v179 = 1, *(_WORD*)(v63 + 1028) == 1))
			v179 = 0;
		if (*(_DWORD*)(a1 + 1356))
		{
			v64 = *(__m128**)(a1 + 1424);
			v209 = _mm_sub_ps(v64[5], v37);
			v65 = _mm_mul_ps(v209, v40);
			v64->m128_f32[0] = (float)(v65.m128_f32[0] + _mm_shuffle_ps(v65, v65, 85).m128_f32[0])
				+ _mm_shuffle_ps(v65, v65, 170).m128_f32[0];
			*(_DWORD*)qword_140C79DF8 = **(_DWORD**)(a1 + 1424);
		}
		if (!*(_WORD*)(*(_QWORD*)(a1 + 8) + 24i64) || *(_WORD*)(*(_QWORD*)(a1 + 1256) + 1028i64) == 1)
		{
			v68 = *(_DWORD*)(a1 + 1320);
			v66 = (__m128*) & v188;
			v188 = xmmword_140B7B240;
			v67 = (unsigned int)(*(_DWORD*)(a1 + 1316) * v68);
		}
		else
		{
			v66 = &v169;
			v67 = (unsigned int)(*(_DWORD*)(a1 + 1320) * *(_DWORD*)(a1 + 1316));
		}
		sub_140321360(
			a1,
			(__int64*)v176,
			(__m128*)(*v42 + v67),
			*(__m128**)(a1 + 1424),
			v47,
			&v173,
			(float*)&v177,
			v168,
			v33,
			v66);
		v69 = v173;
		v70 = *(_DWORD*)(a1 + 1320);
		v71 = *(_DWORD*)((unsigned int)(*(_DWORD*)(a1 + 1316) * v70) + *v42 + 24i64)
			+ (int)(float)((float)(*(_DWORD*)(*(_QWORD*)(a1 + 1424) + 24i64)
				- *(_DWORD*)((unsigned int)(*(_DWORD*)(a1 + 1316) * v70) + *v42 + 24i64))
				* v47);
		*(_QWORD*)&v172 = v71;
		if (*(_DWORD*)(a1 + 1328))
		{
			v72 = v71;
			do
			{
				v73 = (__m128*)(*(_QWORD*)(a1 + 1304) + (unsigned int)(*(_DWORD*)(a1 + 1316) * v70));
				v57 = *(_DWORD*)(a1 + 1356) == 0;
				v176[0].m128_u64[1] = (unsigned __int64)v73;
				if (!v57)
				{
					v211 = _mm_sub_ps(v73[5], v69);
					v74 = _mm_mul_ps(v211, v40);
					v74.m128_f32[0] = (float)(v74.m128_f32[0] + _mm_shuffle_ps(v74, v74, 85).m128_f32[0])
						+ _mm_shuffle_ps(v74, v74, 170).m128_f32[0];
					v73->m128_i32[0] = v74.m128_i32[0];
					*(_DWORD*)(qword_140C79DF8 + 4i64 * (v20 + 1)) = v74.m128_i32[0];
				}
				if (!**(_BYTE**)(a1 + 1256))
				{
					v75 = *(_DWORD*)qword_140C63750;
					sub_1408FE170(COERCE_DOUBLE(0x40000000i64));
					v76 = dword_140C42240;
					HIDWORD(v77) = 0;
					if (v75 < dword_140C42240)
						v76 = v75;
					*(float*)&v77 = (float)((float)(2.0 * *((float*)&off_140C42230 + v76 + 8))
						* (float)(int)(v73[1].m128_i32[2] - v72))
						* -0.001;
					HIDWORD(v177) = sub_1408FC7F0(v77);
				}
				sub_1403220C0(a1, v176);
				v72 = v73[1].m128_u32[2];
				if (++v70 == *(_DWORD*)(a1 + 1312))
					v70 = 0;
				++v20;
			} while (v20 < *(_DWORD*)(a1 + 1328));
			*(_QWORD*)&v172 = v73[1].m128_u32[2];
			v56 = v170;
			v71 = v172;
		}
		if (*(_DWORD*)(a1 + 1356))
		{
			v78 = *(__m128**)(a1 + 1416);
			v213 = _mm_sub_ps(v78[5], v69);
			v79 = _mm_mul_ps(v213, v40);
			v78->m128_f32[0] = (float)(v79.m128_f32[0] + _mm_shuffle_ps(v79, v79, 85).m128_f32[0])
				+ _mm_shuffle_ps(v79, v79, 170).m128_f32[0];
			*(_DWORD*)(qword_140C79DF8 + 4i64 * (unsigned int)(*(_DWORD*)(a1 + 1328) + 1)) = **(_DWORD**)(a1 + 1416);
		}
		if (!**(_BYTE**)(a1 + 1256))
		{
			v80 = *(_DWORD*)qword_140C63750;
			v81 = sub_1408FE170(COERCE_DOUBLE(0x40000000i64));
			v82 = dword_140C42240;
			if (v80 < dword_140C42240)
				v82 = v80;
			*(float*)&v81 = (float)((float)(*(float*)&v81 * *((float*)&off_140C42230 + v82 + 8))
				* (float)(int)(*(_DWORD*)(*(_QWORD*)(a1 + 1416) + 24i64) - v71))
				* -0.001;
			HIDWORD(v177) = sub_1408FC7F0(v81);
		}
		v176[0].m128_u64[1] = *(_QWORD*)(a1 + 1416);
		sub_1403220C0(a1, v176);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 232i64))(qword_140C65670);
	}
	if (*(_DWORD*)(a1 + 1356))
		sub_1401C3280(
			(__int64(__fastcall*)(_QWORD, _QWORD, __int64))sub_14031CE60,
			(unsigned int*)qword_140C79DE8,
			(unsigned int)(*(_DWORD*)(a1 + 1328) + 1),
			a1 + 1304);
	v98 = *(_DWORD*)(a1 + 1328);
	if (*(_BYTE*)(*(_QWORD*)(a1 + 1256) + 4i64) == 2)
	{
		v99 = 3 * (v98 + 1) * (v56 - 2);
		v100 = *(_QWORD*)qword_140C65670;
		v170 = 2 * v99;
		result = (_BYTE*)(*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(v100 + 240))(
			qword_140C65670,
			(unsigned int)(4 * v99),
			0i64);
		v101 = result;
		if (!result)
			return result;
		v102 = 0;
		v103 = 1 - (*(_DWORD*)(a1 + 1320) & 1);
		if (*(_DWORD*)(a1 + 1328) != -1)
		{
			do
			{
				v104 = 0;
				v105 = 2i64;
				do
				{
					v106 = 0;
					if (v56 >> 1 != 1)
					{
						do
						{
							v107 = *(_DWORD*)(qword_140C79DE8 + 4i64 * v102);
							if ((((_BYTE)v106 + (_BYTE)v102) & 1) == v103)
							{
								*v101 = v106 + v104 + v56 * v107;
								v101[1] = v106 + v104 + v56 * (*(_DWORD*)(qword_140C79DE8 + 4i64 * v102) + 1);
								v101[2] = v106 + v104 + v56 * *(_DWORD*)(qword_140C79DE8 + 4i64 * v102) + 1;
								v101[3] = v106 + v104 + v56 * *(_DWORD*)(qword_140C79DE8 + 4i64 * v102) + 1;
								v101[4] = v106 + v104 + v56 * (*(_WORD*)(qword_140C79DE8 + 4i64 * v102) + 1);
								LOWORD(v107) = *(_DWORD*)(qword_140C79DE8 + 4i64 * v102) + 1;
							}
							else
							{
								*v101 = v106 + v104 + v56 * (v107 + 1);
								v101[1] = v106 + v104 + v56 * *(_DWORD*)(qword_140C79DE8 + 4i64 * v102);
								v101[2] = v106 + v104 + v56 * (*(_DWORD*)(qword_140C79DE8 + 4i64 * v102) + 1) + 1;
								v101[3] = v106 + v104 + v56 * (*(_DWORD*)(qword_140C79DE8 + 4i64 * v102) + 1) + 1;
								v101[4] = v106 + v104 + v56 * *(_WORD*)(qword_140C79DE8 + 4i64 * v102);
								v107 = *(_DWORD*)(qword_140C79DE8 + 4i64 * v102);
							}
							++v106;
							v101 += 6;
							*(v101 - 1) = v104 + v56 * v107 + v106;
						} while (v106 < (v56 >> 1) - 1);
					}
					v104 += v56 >> 1;
					--v105;
				} while (v105);
				++v102;
			} while (v102 < *(_DWORD*)(a1 + 1328) + 1);
		}
	}
	else
	{
		v108 = 3 * (v56 - 1) * (v98 + 1);
		v109 = *(_QWORD*)qword_140C65670;
		v170 = 2 * v108;
		result = (_BYTE*)(*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(v109 + 240))(
			qword_140C65670,
			(unsigned int)(4 * v108),
			0i64);
		v101 = result;
		if (!result)
			return result;
		v110 = 0;
		v111 = 1 - (*(_DWORD*)(a1 + 1320) & 1);
		if (*(_DWORD*)(a1 + 1328) != -1)
		{
			do
			{
				v112 = v56 * *(_DWORD*)(qword_140C79DE8 + 4i64 * v110);
				if (v56 != 1)
				{
					v113 = v56 + 1 + v112;
					v114 = v56 - 1;
					do
					{
						if ((((_BYTE)v110 - ((_BYTE)v56 + 1) - (_BYTE)v112 + (_BYTE)v113) & 1) == v111)
						{
							*v101 = v113 - (v56 + 1);
							v101[1] = v113 - 1;
							v101[2] = v113 - v56;
							v101[3] = v113 - v56;
							v101[4] = v113 - 1;
							v101[5] = v113;
						}
						else
						{
							*v101 = v113 - 1;
							v101[1] = v113 - (v56 + 1);
							v101[2] = v113;
							v101[3] = v113;
							v101[4] = v113 - (v56 + 1);
							v101[5] = v113 - v56;
						}
						v101 += 6;
						++v113;
						--v114;
					} while (v114);
				}
				++v110;
			} while (v110 < *(_DWORD*)(a1 + 1328) + 1);
		}
	}
	(*(void(__fastcall**)(__int64, _WORD*))(*(_QWORD*)qword_140C65670 + 248i64))(qword_140C65670, v101);
	v115 = *(_QWORD*)(a1 + 1256);
	if ((*(_BYTE*)(v115 + 40) & 1) != 0)
	{
		v116 = *(float*)(a1 + 1396);
		v117 = *(float*)(*(_QWORD*)(a1 + 1416) + 12i64) - *(float*)(a1 + 1296);
		if (v116 <= v117)
		{
			if (v116 < (float)(v117 * -1.0))
				*(float*)(a1 + 1396) = v116 + v117;
		}
		else
		{
			*(float*)(a1 + 1396) = v116 - v117;
		}
		goto LABEL_114;
	}
	v118 = *(float*)(a1 + 1396);
	if (v118 > 1.0)
	{
		v119 = v118 - 1.0;
	LABEL_113:
		*(float*)(a1 + 1396) = v119;
		goto LABEL_114;
	}
	if (v118 < -1.0)
	{
		v119 = v118 + 1.0;
		goto LABEL_113;
	}
LABEL_114:
	v120 = *(unsigned __int16*)(v115 + 964);
	v121 = *(_QWORD*)(a1 + 40);
	if ((unsigned int)v120 >= *(_DWORD*)(*(_QWORD*)(v121 + 64) + 448i64))
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			0i64,
			0i64,
			0i64,
			0i64);
	else
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 360i64))(
			qword_140C65670,
			0i64,
			*(_QWORD*)(*(_QWORD*)(v121 + 1056) + 24 * v120 + 16),
			0i64);
	v122 = *(_QWORD*)(a1 + 40);
	v123 = *(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 988i64);
	if ((unsigned int)v123 >= *(_DWORD*)(*(_QWORD*)(v122 + 64) + 448i64))
	{
		HIDWORD(v167) = 0;
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			1i64,
			0i64);
	}
	else
	{
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 360i64))(
			qword_140C65670,
			1i64,
			*(_QWORD*)(*(_QWORD*)(v122 + 1056) + 24 * v123 + 16));
	}
	v124 = *(_QWORD*)(a1 + 40);
	v125 = *(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 990i64);
	if ((unsigned int)v125 >= *(_DWORD*)(*(_QWORD*)(v124 + 64) + 448i64))
		(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			2i64,
			0i64,
			0i64,
			0i64);
	else
		(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 360i64))(
			qword_140C65670,
			2i64,
			*(_QWORD*)(*(_QWORD*)(v124 + 1056) + 24 * v125 + 16),
			0i64);
	v126 = *(_QWORD*)(a1 + 40);
	v127 = *(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 1030i64);
	if ((unsigned int)v127 >= *(_DWORD*)(*(_QWORD*)(v126 + 64) + 448i64))
	{
		HIDWORD(v167) = 0;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 352i64))(qword_140C65670, 4i64);
	}
	else
	{
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 360i64))(
			qword_140C65670,
			4i64,
			*(_QWORD*)(*(_QWORD*)(v126 + 1056) + 24 * v127 + 16));
	}
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
		qword_140C65670,
		*(unsigned int*)(a1 + 1360),
		*(unsigned int*)(a1 + 1364),
		*(unsigned int*)(a1 + 1368));
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 408i64))(
		qword_140C65670,
		*(unsigned int*)(*(_QWORD*)(a1 + 8) + 36i64));
	v128 = 7i64;
	if (*(_DWORD*)(*(_QWORD*)(a1 + 8) + 32i64))
		v128 = 1i64;
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, v128);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, 0i64);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 320i64))(
		qword_140C65670,
		*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) + 16i64) + 2104i64),
		(*(_DWORD*)(*(_QWORD*)(a1 + 1256) + 40i64) & 1)
		+ 2
		* ((*(_WORD*)(*(_QWORD*)(a1 + 8) + 24i64) == 2)
			+ 2 * (unsigned int)*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 1028i64)));
	LODWORD(v167) = 0;
	if ((*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 256i64))(
		qword_140C65670,
		256i64,
		0i64,
		0i64,
		v167))
	{
		v173.m128_u64[0] = (unsigned __int64)&v184;
		v173.m128_u64[1] = (unsigned __int64)a6;
		v229[1] = a6;
		v229[0] = &v184;
		sub_1401AFB10(v229, &v199);
		v130 = _mm_unpackhi_ps(v199, v200);
		v131 = _mm_unpackhi_ps(v201, v202);
		v132 = _mm_unpacklo_ps(v199, v200);
		v133 = _mm_unpacklo_ps(v201, v202);
		*(__m128*)v129 = _mm_shuffle_ps(v132, v133, 68);
		*(__m128*)(v129 + 16) = _mm_shuffle_ps(v132, v133, 238);
		*(__m128*)(v129 + 32) = _mm_shuffle_ps(v130, v131, 68);
		*(__m128*)(v129 + 48) = _mm_shuffle_ps(v130, v131, 238);
		v134 = _mm_unpackhi_ps(v184, v185);
		v135 = _mm_unpacklo_ps(v184, v185);
		v136 = _mm_unpacklo_ps(v186, v187);
		v137 = _mm_unpackhi_ps(v186, v187);
		*(__m128*)(v129 + 64) = _mm_shuffle_ps(v135, v136, 68);
		*(__m128*)(v129 + 80) = _mm_shuffle_ps(v135, v136, 238);
		*(__m128*)(v129 + 96) = _mm_shuffle_ps(v134, v137, 68);
		*(__m128*)(v129 + 112) = _mm_shuffle_ps(v134, v137, 238);
		*(_DWORD*)(v129 + 128) = *(_DWORD*)(a1 + 1296);
		*(_DWORD*)(v129 + 132) = *(_DWORD*)(a1 + 1300);
		*(_OWORD*)(v129 + 144) = *(_OWORD*)(a1 + 1264);
		*(_OWORD*)(v129 + 160) = *(_OWORD*)(a1 + 1280);
		v138 = *(_DWORD**)(a1 + 1256);
		v139 = v138[10];
		if ((v139 & 5) != 0 && (v139 & 0x200) != 0)
		{
			v140 = (__m128)(unsigned int)v138[251];
			v141 = v138[253];
			v142 = *(_DWORD*)(a1 + 1404);
			v143 = 0i64;
			v144 = 0i64;
			v145 = (__m128)(unsigned int)v138[252];
			v143.m128_f32[0] = (float)(int)(v142 & ((1 << v141) - 1)) * v140.m128_f32[0];
			v144.m128_f32[0] = (float)(int)(v142 >> v141) * v145.m128_f32[0];
			*(__m128*)(v129 + 176) = _mm_unpacklo_ps(_mm_unpacklo_ps(v143, v140), _mm_unpacklo_ps(v144, v145));
		}
		else
		{
			*(_QWORD*)&v172 = 0i64;
			*((_QWORD*)&v172 + 1) = 0x3F8000003F800000i64;
			*(_OWORD*)(v129 + 176) = v172;
		}
		v146 = (__int64)v174;
		v147 = (__int64)v174;
		*(__m128*)(v129 + 192) = v174[11];
		sub_140262750(v147, v129 + 208, v175);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
	}
	else
	{
		v146 = (__int64)v174;
	}
	v148 = *(_QWORD*)(a1 + 8);
	v149 = *(_QWORD*)(a1 + 1256);
	v150 = 0;
	if (!*(_DWORD*)(v148 + 20) || (v151 = 1, (**(_BYTE**)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) + 16i64) & 1) != 0))
		v151 = 0;
	LOBYTE(v150) = (a10 & 0x224) != 0;
	v152 = *(unsigned __int16*)(v148 + 24)
		+ 2 * (*(unsigned __int16*)(v149 + 1028) + 2 * v150 + v150)
		+ *(unsigned __int16*)(v149 + 1028)
		+ 2 * v150
		+ v150;
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) + 16i64) + 2112i64),
		*(_DWORD*)(v148 + 28)
		+ 4
		* (v151
			+ 2
			* (((a12 & 1) == 0)
				+ 2
				* ((*(float*)(v146 + 756) > 0.0)
					+ 2 * ((*(_DWORD*)(v148 + 32) != 0) + 2 * ((unsigned int)*(unsigned __int16*)(v149 + 972) + 4 * v152 + v152))))));
	v153 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670
		+ 272i64))(
			qword_140C65670,
			304i64,
			0i64,
			0i64,
			0);
	v154 = v153;
	if (v153)
	{
		v153->m128_i32[0] = *(_DWORD*)(*(_QWORD*)(a1 + 1256) + 976i64);
		v155 = *(float*)(*(_QWORD*)(a1 + 1256) + 980i64) - *(float*)(*(_QWORD*)(a1 + 1256) + 976i64);
		if (v155 == 0.0)
			v156 = 0.0;
		else
			v156 = 1.0 / v155;
		v153->m128_f32[1] = v156;
		v153->m128_i32[2] = *(_DWORD*)(*(_QWORD*)(a1 + 1256) + 1024i64);
		v153[1].m128_u64[0] = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) + 1360i64);
		v191 = _mm_mul_ps(*(__m128*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) + 1360i64), (__m128)xmmword_140B7AC50);
		v153[1].m128_u64[1] = v191.m128_u64[0];
		v157 = (__m128) * v180;
		v158 = (__m128)v180[1];
		v159 = v157;
		v157.m128_f32[0] = v157.m128_f32[0] - v158.m128_f32[0];
		v159.m128_f32[0] = v159.m128_f32[0] * v158.m128_f32[0];
		v153[2] = _mm_unpacklo_ps(_mm_unpacklo_ps(v159, v158), _mm_unpacklo_ps(v157, (__m128)0i64));
		v160 = *(_QWORD*)(a1 + 40);
		if (*(float*)(v160 + 268) == 0.0)
		{
			v162 = &v192;
			v192 = xmmword_140B7A740;
		}
		else
		{
			v161 = *(_OWORD*)(v160 + 256);
			v162 = &v193;
			v193 = v161;
		}
		v154[18] = _mm_mul_ps(
			*(__m128*)v162,
			_mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 96), (__m128) * (unsigned int*)(a1 + 96), 0));
		sub_140262D50((float*)v146, v154 + 3);
		v163 = v175;
		v154[10] = *(__m128*)(v146 + 176);
		v154[11].m128_i32[0] = *(_DWORD*)(v146 + 144);
		v154[11].m128_i32[1] = *(_DWORD*)(v146 + 148);
		v154[11].m128_i32[2] = *(_DWORD*)(v146 + 152);
		v154[11].m128_i32[3] = *(_DWORD*)(v146 + 692);
		v154[12].m128_i32[0] = *(_DWORD*)(v146 + 160);
		v154[12].m128_i32[1] = *(_DWORD*)(v146 + 164);
		v154[12].m128_i32[2] = *(_DWORD*)(v146 + 168);
		v154[12].m128_i32[3] = *(_DWORD*)(v146 + 688);
		sub_140262750(v164, (__int64)&v154[13], v163);
		v154[16] = *(__m128*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) + 1376i64);
		v154[17].m128_i32[0] = *(_DWORD*)(a11 + 44);
		v165 = *(float*)(*(_QWORD*)(a1 + 8) + 136i64);
		if (fabs(v165) > 0.0000099999997)
			v166 = 1.0 / v165;
		else
			v166 = 10000000.0;
		v154[17].m128_f32[1] = v166;
		v154[17].m128_i32[2] = *(_DWORD*)(*(_QWORD*)(a1 + 1256) + 984i64);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	return (_BYTE*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD, int, _DWORD, int))(*(_QWORD*)qword_140C65670 + 656i64))(
		qword_140C65670,
		3i64,
		0i64,
		v170,
		0,
		v171,
		0,
		1);
}
// 1403244B1: variable 'v168' is possibly undefined
// 140324F77: variable 'v167' is possibly undefined
// 140325004: variable 'v129' is possibly undefined
// 1403253FB: variable 'v164' is possibly undefined
// 140B7A700: using guessed type __int128 xmmword_140B7A700;
// 140B7A740: using guessed type __int128 xmmword_140B7A740;
// 140B7A8C0: using guessed type __int128 xmmword_140B7A8C0;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C42230: using guessed type __int64 (__fastcall **off_140C42230)();
// 140C42240: using guessed type int dword_140C42240;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C79DE8: using guessed type __int64 qword_140C79DE8;
// 140C79DF8: using guessed type __int64 qword_140C79DF8;
// 140323D50: using guessed type double var_520[8];
// 140323D50: using guessed type __m128 var_5A0[3];
// 140323D50: using guessed type double var_4E0[8];
// 140323D50: using guessed type __m128 var_560[3];
// 140323D50: using guessed type char var_190[32];
// 140323D50: using guessed type double var_4A0[8];

