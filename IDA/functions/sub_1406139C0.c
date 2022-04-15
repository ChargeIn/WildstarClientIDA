#include "../winhttp.h"

//----- (00000001406139C0) ----------------------------------------------------
__int64 __fastcall sub_1406139C0(__int64 a1, float a2)
{
	int v4; // eax
	_OWORD* v5; // rcx
	int v6; // ebx
	__int128 v7; // xmm1
	__int64 v8; // rax
	__int128 v9; // xmm2
	__int128 v10; // xmm3
	__int128 v11; // xmm4
	_OWORD* v12; // rax
	__m128 v13; // xmm6
	int v14; // eax
	int v15; // eax
	__int128* v16; // rdx
	__int64 v17; // rcx
	bool v18; // zf
	__int64 v19; // rax
	__m128* v20; // rax
	__m128 v21; // xmm0
	unsigned int v22; // eax
	int v23; // r14d
	int v24; // r12d
	__int64 v25; // rcx
	int v26; // edx
	__int64* v27; // rbx
	__int64 v28; // rdi
	unsigned int v29; // eax
	__int64 v30; // rcx
	__int64 v31; // rdx
	__int64 v32; // rax
	int v33; // r13d
	int v34; // eax
	int v35; // ebx
	int v36; // edx
	__int64 v37; // rcx
	unsigned int v38; // eax
	__int64 v39; // rdx
	__int64 v40; // r8
	int v41; // edx
	int v42; // ecx
	int* v43; // rbx
	int v44; // ecx
	__int64(__fastcall * v45)(__int64(__fastcall*)(__int64, _QWORD), __int64, unsigned int); // rax
	int v46; // eax
	unsigned __int64 i; // rdi
	__int64 v48; // rax
	__int64 v49; // rcx
	int v50; // r8d
	__int64 v51; // rcx
	int v52; // r8d
	__int64 v53; // rax
	__int64 v54; // r15
	__int64* v55; // rbx
	__int64 v56; // rdi
	unsigned int v57; // eax
	__int64 v58; // rax
	__int64* v59; // rbx
	__int64 v60; // rdi
	unsigned int v61; // eax
	__int64 v62; // rax
	int v63; // ecx
	__int64* v64; // rbx
	__int64 v65; // rdi
	unsigned int v66; // eax
	__int64 v67; // rax
	int v68; // ecx
	__int64* v69; // rbx
	__int64 v70; // rdi
	unsigned int v71; // eax
	__int64 v72; // rcx
	__int64 v73; // rdi
	unsigned __int64 v74; // r15
	_QWORD* v75; // rbx
	unsigned int* v76; // rbx
	__int64 v77; // rdx
	int v78; // eax
	unsigned int v79; // eax
	__int64 v80; // rax
	__int64 v81; // rcx
	__int128 v82; // xmm0
	__int64 v83; // r15
	unsigned __int64 v84; // r13
	__int64 v85; // rbx
	__int64 v86; // rax
	unsigned int v87; // ebx
	__int64 v88; // rax
	__int64 v89; // rdx
	int v90; // r8d
	int v91; // r9d
	__int128 v92; // xmm7
	int v93; // eax
	int v94; // r12d
	__int64 v95; // rbx
	__int64 v96; // rcx
	__int64 v97; // rax
	__int64 v98; // rax
	__int64 v99; // r15
	unsigned __int64 v100; // rdi
	_QWORD* v101; // rbx
	unsigned int* v102; // rbx
	__int64 v103; // rdx
	int v104; // eax
	int v105; // eax
	__int64 v106; // rax
	__m128 v107; // xmm1
	__int64 v108; // rax
	__m128* v109; // rax
	_QWORD* v110; // rdi
	__int64 v111; // r8
	unsigned __int64 v112; // r13
	__int64 v113; // rbx
	__int64 v114; // r12
	int* v115; // rax
	int* v116; // r15
	int* v117; // rdx
	__int64 v118; // rcx
	__int64 v119; // rdx
	unsigned __int64 v120; // rdi
	_QWORD* v121; // rbx
	unsigned int* v122; // rbx
	__int64 v123; // rdx
	int v124; // eax
	unsigned __int64 v125; // r13
	_QWORD* v126; // rdi
	__int64 v127; // rbx
	__int64 v128; // r12
	int* v129; // rax
	int* v130; // r15
	int* v131; // rdx
	__int64 v132; // rcx
	__int64 v133; // rdx
	unsigned __int64 v134; // r13
	_QWORD* v135; // rdi
	__int64 v136; // rbx
	__int64 v137; // r12
	int* v138; // rax
	int* v139; // r15
	int* v140; // rdx
	__int64 v141; // rcx
	__int64 v142; // rdx
	__int64 v143; // rcx
	__int64 v144; // rax
	unsigned int v145; // r12d
	__int64 v146; // rdi
	__int128 v147; // xmm0
	unsigned __int64 v148; // r15
	_QWORD* v149; // rbx
	unsigned int* v150; // rbx
	__int64 v151; // rdx
	int v152; // eax
	float v153; // xmm6_4
	int CurrentThreadId; // edx
	__int64 v155; // rcx
	__int64 v156; // rax
	_WORD* v157; // rcx
	__int64 v158; // rdx
	__int16 v159; // ax
	unsigned __int64 v160; // rax
	HANDLE EventW; // rcx
	__int64 v162; // rdi
	unsigned __int64 v163; // r15
	_QWORD* v164; // rbx
	unsigned int* v165; // rbx
	__int64 v166; // rdx
	unsigned int v167; // r13d
	__int64 v168; // rax
	int* v169; // rbx
	unsigned int v170; // ebx
	__int64 v171; // rax
	__int64 v172; // rdi
	int v173; // edx
	int v174; // ecx
	int v175; // eax
	__int64 v176; // rbx
	__int64 v177; // r12
	int* v178; // rax
	int* v179; // r15
	int* v180; // rdx
	__int64 v181; // rcx
	__int64 v182; // rdx
	unsigned int v183; // r13d
	__int64 v184; // rax
	_QWORD* v185; // rdi
	__int64 v186; // rbx
	__int64 v187; // r12
	int* v188; // rax
	int* v189; // r15
	int* v190; // rdx
	__int64 v191; // rcx
	__int64 v192; // rdx
	__int64 v193; // rax
	__int64 v194; // r9
	unsigned int* v195; // rdx
	__int64* v196; // r8
	__int64 v197; // rax
	__int64 v198; // rcx
	__int64 v199; // rcx
	unsigned int v200; // ecx
	unsigned int* v201; // rax
	__int64 v202; // rcx
	_DWORD* v203; // rcx
	unsigned int v204; // eax
	__int64 v205; // rcx
	__int64 v206; // rcx
	__int64 v207; // rcx
	unsigned int v208; // r8d
	__int64 v209; // rcx
	__int64 v210; // rcx
	unsigned int v211; // eax
	__int64 v212; // rbx
	unsigned int v213; // eax
	float v214; // xmm1_4
	float v215; // xmm0_4
	__m128* v216; // rax
	__m128 v217; // xmm2
	__m128 v218; // xmm3
	__m128 v219; // xmm2
	__m128 v220; // xmm1
	__int64 v221; // rax
	unsigned int v222; // eax
	unsigned int v223; // eax
	unsigned int v224; // eax
	__int64 v225; // rax
	int v226; // r8d
	__int64 v227; // rax
	__int64 v228; // rdi
	unsigned int v229; // eax
	unsigned int v230; // ebx
	__int64 v231; // rdx
	int v232; // r8d
	__int64 v233; // rax
	__int64* v235; // [rsp+28h] [rbp-E0h]
	int v236; // [rsp+48h] [rbp-C0h] BYREF
	int v237; // [rsp+4Ch] [rbp-BCh] BYREF
	int v238; // [rsp+50h] [rbp-B8h] BYREF
	int v239; // [rsp+54h] [rbp-B4h] BYREF
	__int64 v240; // [rsp+58h] [rbp-B0h] BYREF
	__int64 v241; // [rsp+60h] [rbp-A8h] BYREF
	int* v242; // [rsp+68h] [rbp-A0h] BYREF
	__int64 v243; // [rsp+70h] [rbp-98h]
	__int64 v244; // [rsp+78h] [rbp-90h] BYREF
	__int64 v245; // [rsp+80h] [rbp-88h]
	unsigned __int64 v246; // [rsp+88h] [rbp-80h]
	__int64 v247; // [rsp+90h] [rbp-78h]
	unsigned int v248; // [rsp+98h] [rbp-70h]
	__m128 v249; // [rsp+A8h] [rbp-60h] BYREF
	int v250[2]; // [rsp+B8h] [rbp-50h] BYREF
	__int64(__fastcall * v251)(__int64); // [rsp+C0h] [rbp-48h]
	__int64(__fastcall * v252)(__int64(__fastcall*)(__int64, _QWORD), __int64, unsigned int); // [rsp+C8h] [rbp-40h]
	__int64* v253; // [rsp+D0h] [rbp-38h]
	int v254; // [rsp+D8h] [rbp-30h]
	__int128 v255; // [rsp+E8h] [rbp-20h] BYREF
	__int128 v256; // [rsp+F8h] [rbp-10h]
	__int128 v257; // [rsp+108h] [rbp+0h]
	__int128 v258; // [rsp+118h] [rbp+10h]
	__int128 v259; // [rsp+128h] [rbp+20h]
	__int64(__fastcall * v260)(__int64); // [rsp+138h] [rbp+30h]
	__int64(__fastcall * v261)(__int64(__fastcall*)(__int64, _QWORD), __int64, unsigned int); // [rsp+140h] [rbp+38h]
	int v262[4]; // [rsp+148h] [rbp+40h] BYREF
	__int128 v263; // [rsp+158h] [rbp+50h] BYREF
	__int128 v264[4]; // [rsp+168h] [rbp+60h] BYREF
	__int128 v265; // [rsp+1A8h] [rbp+A0h] BYREF
	int v266; // [rsp+1B8h] [rbp+B0h]
	__int128 v267; // [rsp+1C8h] [rbp+C0h]
	__int128 v268; // [rsp+1D8h] [rbp+D0h]
	__m128 v269; // [rsp+1E8h] [rbp+E0h]
	__m128 v270; // [rsp+1F8h] [rbp+F0h]
	__m128 v271; // [rsp+208h] [rbp+100h]
	__m128 v272; // [rsp+218h] [rbp+110h]
	__int128 v273; // [rsp+228h] [rbp+120h]
	__int128 v274; // [rsp+238h] [rbp+130h]
	__int128 v275; // [rsp+248h] [rbp+140h]
	__int128 v276; // [rsp+258h] [rbp+150h]
	__m128 v277; // [rsp+268h] [rbp+160h]
	__int128 v278; // [rsp+278h] [rbp+170h]
	__int128 v279; // [rsp+288h] [rbp+180h]
	__int128 v280; // [rsp+298h] [rbp+190h]
	char v281[148]; // [rsp+2A8h] [rbp+1A0h] BYREF
	unsigned int v282; // [rsp+33Ch] [rbp+234h]
	int v283; // [rsp+388h] [rbp+280h]
	unsigned int v284; // [rsp+38Ch] [rbp+284h]
	int v285; // [rsp+390h] [rbp+288h]
	int v286; // [rsp+398h] [rbp+290h]
	unsigned int v287; // [rsp+39Ch] [rbp+294h]
	int v288; // [rsp+3A0h] [rbp+298h]
	int v289; // [rsp+3A8h] [rbp+2A0h]
	unsigned int v290; // [rsp+3ACh] [rbp+2A4h]
	int v291; // [rsp+3B0h] [rbp+2A8h]
	int v292; // [rsp+3B8h] [rbp+2B0h]
	unsigned int v293; // [rsp+3BCh] [rbp+2B4h]
	int v294; // [rsp+3C0h] [rbp+2B8h]
	unsigned int v295; // [rsp+3CCh] [rbp+2C4h]
	char v296[144]; // [rsp+3D8h] [rbp+2D0h] BYREF
	float v297; // [rsp+468h] [rbp+360h]

	v4 = sub_14018CDF0();
	v5 = *(_OWORD**)(a1 + 29096);
	v6 = v4;
	if (!v5)
		v5 = *(_OWORD**)(a1 + 29088);
	v7 = v5[10];
	v8 = *(_QWORD*)(a1 + 25744);
	v264[0] = v7;
	v9 = v5[11];
	v264[1] = v9;
	v10 = v5[12];
	v264[2] = v10;
	v11 = v5[13];
	v264[3] = v11;
	if (v8)
	{
		*(_OWORD*)(a1 + 31232) = *(_OWORD*)(v8 + 4384);
		v12 = *(_OWORD**)(a1 + 25744);
		v255 = v12[283];
		v256 = v12[284];
		v257 = v12[285];
		v258 = v12[286];
	}
	else
	{
		v255 = v7;
		v256 = v9;
		v267 = 0i64;
		*(_OWORD*)(a1 + 31232) = 0i64;
		v257 = v10;
		v258 = v11;
	}
	v13 = *(__m128*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65848 + 104i64))(qword_140C65848) + 32);
	v269 = v13;
	v14 = dword_140C4E440;
	if (*(_DWORD*)qword_140C63750 < dword_140C4E440)
		v14 = *(_DWORD*)qword_140C63750;
	if (byte_140C4E450[v14] || *(_DWORD*)(a1 + 31136))
	{
		v17 = qword_140C65848;
		v16 = v264;
		v19 = *(_QWORD*)qword_140C65848;
	LABEL_15:
		(*(void(__fastcall**)(__int64, __int128*))(v19 + 80))(v17, v16);
		goto LABEL_16;
	}
	v15 = dword_140C4E5A0;
	v16 = &v255;
	if (*(_DWORD*)qword_140C63750 < dword_140C4E5A0)
		v15 = *(_DWORD*)qword_140C63750;
	v17 = qword_140C65848;
	v18 = byte_140C4E5B0[v15] == 0;
	v19 = *(_QWORD*)qword_140C65848;
	if (v18)
		goto LABEL_15;
	(*(void(__fastcall**)(__int64, __int128*, __int128*))(v19 + 72))(qword_140C65848, &v255, v264);
LABEL_16:
	v276 = 0i64;
	v271 = _mm_sub_ps(
		v13,
		*(__m128*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65848 + 104i64))(qword_140C65848) + 32));
	if ((_mm_movemask_ps(_mm_cmpneq_ps((__m128)0i64, v271)) & 7) != 0
		|| (v20 = *(__m128**)(a1 + 120)) != 0i64
		&& (v21 = v20[274], v278 = 0i64, (_mm_movemask_ps(_mm_cmpneq_ps(v21, (__m128)0i64)) & 7) != 0))
	{
		*(_DWORD*)(a1 + 31184) = v6;
	}
	v22 = sub_1400518A0(qword_140C63628, 118, 2, 0);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v22);
	v23 = 0;
	v24 = 1;
	if (*(_QWORD*)(a1 + 26464))
	{
		if (*(_DWORD*)(a1 + 31196))
			goto LABEL_31;
		v25 = qword_140C63628;
		if (!*(_QWORD*)(qword_140C63628 + 720) || !*(_QWORD*)(qword_140C63628 + 744))
			goto LABEL_31;
		v26 = 112;
	}
	else
	{
		if (!*(_DWORD*)(a1 + 31196))
			goto LABEL_31;
		v25 = qword_140C63628;
		if (!*(_QWORD*)(qword_140C63628 + 720) || !*(_QWORD*)(qword_140C63628 + 744))
			goto LABEL_31;
		v26 = 114;
	}
	v27 = *(__int64**)(v25 + 720);
	v28 = *v27;
	v29 = sub_1400518A0(v25, v26, 1, 0);
	(*(void(__fastcall**)(__int64*, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v28 + 16))(
		v27,
		v29,
		0i64,
		0i64,
		0i64,
		0i64,
		0i64);
LABEL_31:
	v30 = *(_QWORD*)(a1 + 29256);
	*(_DWORD*)(a1 + 31196) = *(_QWORD*)(a1 + 26464) != 0i64;
	if (!v30)
		goto LABEL_38;
	v31 = *(_QWORD*)(a1 + 29096);
	if (!v31)
		v31 = *(_QWORD*)(a1 + 29088);
	if (!(*(unsigned int(__fastcall**)(__int64, __int64, char*, __int64, _QWORD))(*(_QWORD*)v30 + 440i64))(
		v30,
		v31 + 208,
		v296,
		1073741888i64,
		0i64))
		goto LABEL_38;
	v32 = *(_QWORD*)(a1 + 29096);
	if (!v32)
		v32 = *(_QWORD*)(a1 + 29088);
	v33 = 1;
	if (v297 <= *(float*)(v32 + 212))
		LABEL_38:
	v33 = 0;
	v237 = v33;
	v34 = *(_DWORD*)(a1 + 31192);
	v35 = 161 - (v33 != 0);
	if (v34 != 176 && v34 != v35)
	{
		v36 = 87;
		if (v35 != 161)
			v36 = 86;
		sub_140051AF0(2, v36);
	}
	v37 = qword_140C63628;
	*(_DWORD*)(a1 + 31192) = v35;
	sub_140051CC0(v37, 6, v35);
	v38 = sub_1400518A0(qword_140C63628, 111, 2, 0);
	v40 = v38;
	if (v38)
	{
		v248 = v38;
		v246 = 0i64;
		v41 = *(_DWORD*)qword_140C63750;
		v42 = dword_140C4E480;
		v245 = 0i64;
		v247 = 0i64;
		if (v41 < dword_140C4E480)
			v42 = v41;
		v43 = 0i64;
		v242 = 0i64;
		LODWORD(v244) = dword_140C4E490[v42];
		if ((*(int(__fastcall**)(__int64, __int64(__fastcall*)(__int64, __int64), __int64*))(*(_QWORD*)qword_140C65848
			+ 144i64))(
				qword_140C65848,
				sub_140615C30,
				&v244) >= 0)
		{
			v44 = 0;
			if (qword_140C63758)
				v44 = *(_DWORD*)(qword_140C63758 + 184);
			v254 = v44;
			v45 = sub_1401C8B60;
			v260 = sub_140615B80;
			v251 = sub_140615B80;
			if (!sub_140615B80)
				v45 = 0i64;
			v261 = v45;
			v252 = v45;
			v250[0] = 4;
			v253 = &v244;
			v250[1] = 8;
			v46 = sub_14019DCA0((__int64)v250, 0, 0i64, &v242);
			v43 = v242;
			if (v46 >= 0)
			{
				v262[0] = -1;
				(*(void(__fastcall**)(int*, int*))(*(_QWORD*)v242 + 32i64))(v242, v262);
			}
		}
		for (i = 0i64; i < v246; ++i)
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(*(_QWORD*)(v245 + 8 * i) + 16i64) + 80i64))(
				*(_QWORD*)(*(_QWORD*)(v245 + 8 * i) + 16i64),
				v248);
		if (v43)
			(*(void(__fastcall**)(int*))(*(_QWORD*)v43 + 8i64))(v43);
		if (v245)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v245 - 16) + 8i64))(v245 - 16);
	}
	v48 = qword_140C65898;
	v49 = *(_QWORD*)(qword_140C65898 + 7152);
	if (v49)
	{
		if ((*(unsigned int(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v49 + 24i64))(v49, v39, v40) == 167)
		{
			v50 = 140;
		LABEL_67:
			sub_140051CC0(qword_140C63628, 2, v50);
			goto LABEL_68;
		}
		v48 = qword_140C65898;
	}
	v51 = *(_QWORD*)(v48 + 7152);
	if (v51 && (*(unsigned int(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v51 + 24i64))(v51, v39, v40) == 166)
	{
		v50 = 139;
		goto LABEL_67;
	}
LABEL_68:
	v52 = 151;
	if (*(_DWORD*)(qword_140C635F0 + 5784))
		v52 = 150;
	sub_140051CC0(qword_140C63628, 3, v52);
	if (!*(_DWORD*)(a1 + 31200))
	{
		if (*(_QWORD*)(a1 + 29096))
		{
			v53 = *(_QWORD*)(a1 + 29080);
			if (v53)
			{
				if (!*(_DWORD*)(v53 + 80))
				{
					v54 = qword_140C63628;
					if (*(_QWORD*)(qword_140C63628 + 736) && *(_QWORD*)(qword_140C63628 + 744))
					{
						v55 = *(__int64**)(qword_140C63628 + 736);
						v56 = *v55;
						v57 = sub_1400518A0(qword_140C63628, 135, 1, 0);
						(*(void(__fastcall**)(__int64*, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v56 + 16))(
							v55,
							v57,
							0i64,
							0i64,
							0i64,
							0i64,
							0i64);
						v54 = qword_140C63628;
					}
					*(_DWORD*)(a1 + 31200) = 1;
					goto LABEL_87;
				}
			}
		}
	LABEL_86:
		v54 = qword_140C63628;
		goto LABEL_87;
	}
	if (*(_QWORD*)(a1 + 29096))
	{
		v58 = *(_QWORD*)(a1 + 29080);
		if (!v58 || !*(_DWORD*)(v58 + 80))
			goto LABEL_86;
	}
	v54 = qword_140C63628;
	if (*(_QWORD*)(qword_140C63628 + 736) && *(_QWORD*)(qword_140C63628 + 744))
	{
		v59 = *(__int64**)(qword_140C63628 + 736);
		v60 = *v59;
		v61 = sub_1400518A0(qword_140C63628, 136, 1, 0);
		(*(void(__fastcall**)(__int64*, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v60 + 16))(
			v59,
			v61,
			0i64,
			0i64,
			0i64,
			0i64,
			0i64);
		v54 = qword_140C63628;
	}
	*(_DWORD*)(a1 + 31200) = 0;
LABEL_87:
	if (*(_DWORD*)(a1 + 31204))
	{
		v67 = *(_QWORD*)(a1 + 29080);
		if (!v67 || (v68 = *(_DWORD*)(v67 + 120), (v68 & 0xFFFFFFFC) != 0) || v68 == 1 || *(_DWORD*)(v67 + 80))
		{
			if (*(_QWORD*)(v54 + 736) && *(_QWORD*)(v54 + 744))
			{
				v69 = *(__int64**)(v54 + 736);
				v70 = *v69;
				v71 = sub_1400518A0(v54, 134, 1, 0);
				(*(void(__fastcall**)(__int64*, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v70 + 16))(
					v69,
					v71,
					0i64,
					0i64,
					0i64,
					0i64,
					0i64);
				v54 = qword_140C63628;
			}
			*(_DWORD*)(a1 + 31204) = 0;
		}
	}
	else
	{
		v62 = *(_QWORD*)(a1 + 29080);
		if (v62)
		{
			v63 = *(_DWORD*)(v62 + 120);
			if ((v63 & 0xFFFFFFFC) == 0 && v63 != 1 && !*(_DWORD*)(v62 + 80))
			{
				if (*(_QWORD*)(v54 + 736) && *(_QWORD*)(v54 + 744))
				{
					v64 = *(__int64**)(v54 + 736);
					v65 = *v64;
					v66 = sub_1400518A0(v54, 133, 1, 0);
					(*(void(__fastcall**)(__int64*, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v65 + 16))(
						v64,
						v66,
						0i64,
						0i64,
						0i64,
						0i64,
						0i64);
					v54 = qword_140C63628;
				}
				*(_DWORD*)(a1 + 31204) = 1;
			}
		}
	}
	v72 = *(_QWORD*)(a1 + 29256);
	if (v72)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v72 + 104i64))(v72);
		v73 = qword_140C63628;
		LODWORD(v240) = 84;
		v74 = (*(__int64(__fastcall**)(__int64*))(qword_140C63628 + 664))(&v240);
		v75 = *(_QWORD**)(*(_QWORD*)(v73 + 656) + 8 * (v74 % *(_QWORD*)(v73 + 648)));
		if (!v75)
			goto LABEL_113;
		while (v74 != *v75 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(v73 + 672))(&v240, v75 + 2))
		{
			v75 = (_QWORD*)v75[1];
			if (!v75)
				goto LABEL_113;
		}
		v76 = (unsigned int*)v75 + 5;
		if (!v76 || (v77 = *v76, v287 = v76[1], v78 = v76[2], v286 = v77, v288 = v78, v78 != 2))
			LABEL_113:
		v77 = 0i64;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v77);
		if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 29256) + 104i64))(*(_QWORD*)(a1 + 29256)) < 0x4E20
			|| (v79 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 29256) + 104i64))(*(_QWORD*)(a1 + 29256)),
				v236 = 1,
				v79 > 0x12750))
		{
			v236 = 0;
		}
		v80 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65848 + 104i64))(qword_140C65848);
		v81 = *(_QWORD*)(a1 + 29256);
		v82 = *(_OWORD*)(v80 + 32);
		v266 = 1132462080;
		v265 = v82;
		v235 = &v241;
		if ((*(int(__fastcall**)(__int64, __int128*, __int64))(*(_QWORD*)v81 + 376i64))(v81, &v265, 4i64) >= 0)
		{
			v83 = 0i64;
			v84 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v241 + 16i64))(v241);
			if (v84)
			{
				while (1)
				{
					v85 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v241 + 24i64))(v241, v83);
					if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v85 + 24i64))(v85) != 2)
						goto LABEL_138;
					v86 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65848 + 104i64))(qword_140C65848);
					LODWORD(v235) = 1792;
					(*(void(__fastcall**)(__int64, __int128*, __int64, char*, __int64*))(*(_QWORD*)v85 + 144i64))(
						v85,
						&v263,
						v86 + 32,
						v281,
						v235);
					v87 = v282;
					if (qword_140C63840)
						break;
					if (dword_140C650C0)
					{
						v89 = 0i64;
					}
					else
					{
						if ((int)sub_14024CC60() >= 0)
						{
							v88 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C643C0 + 24i64))(
								qword_140C643C0,
								v87);
							goto LABEL_127;
						}
						v89 = 0i64;
					}
				LABEL_128:
					v90 = dword_140C4E4E0;
					v91 = *(_DWORD*)qword_140C63750;
					v92 = v263;
					v93 = dword_140C4E4E0;
					v280 = xmmword_140B7A4B0;
					v274 = xmmword_140B7A4B0;
					v275 = v263;
					if (v91 < dword_140C4E4E0)
						v93 = v91;
					if (dword_140C4E4F0[v93])
					{
						if (v91 < dword_140C4E4E0)
							v90 = v91;
						v94 = dword_140C4E4F0[v90];
						goto LABEL_136;
					}
					if (v89)
					{
						v94 = *(_DWORD*)(v89 + 24);
					LABEL_136:
						if (v94)
						{
							v95 = *(_QWORD*)(a1 + 31312);
							sub_14062E3E0((__int64*)(a1 + 31304), v95 + 1);
							v96 = 6 * v95;
							*(_DWORD*)(*(_QWORD*)(a1 + 31304) + 8 * v96) = v94;
							v97 = *(_QWORD*)(a1 + 31304);
							*(_OWORD*)(v97 + 8 * v96 + 16) = xmmword_140B7A4B0;
							*(_OWORD*)(v97 + 8 * v96 + 32) = v92;
						}
					}
				LABEL_138:
					if (++v83 >= v84)
						goto LABEL_139;
				}
				v88 = qword_140C63840(off_140A6E340, v282, qword_140C63858);
			LABEL_127:
				v89 = v88;
				goto LABEL_128;
			}
		LABEL_139:
			if (v241)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v241 + 8i64))(v241);
				v241 = 0i64;
			}
			v33 = v237;
		}
		v98 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65848 + 104i64))(qword_140C65848);
		(*(void(__fastcall**)(_QWORD, __int64, __m128*, __int64))(**(_QWORD**)(a1 + 29256) + 448i64))(
			*(_QWORD*)(a1 + 29256),
			v98 + 32,
			&v249,
			3i64);
		v99 = qword_140C63628;
		v237 = 130;
		v100 = (*(__int64(__fastcall**)(int*))(qword_140C63628 + 664))(&v237);
		v101 = *(_QWORD**)(*(_QWORD*)(v99 + 656) + 8 * (v100 % *(_QWORD*)(v99 + 648)));
		if (!v101)
			goto LABEL_149;
		while (v100 != *v101 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v99 + 672))(&v237, v101 + 2))
		{
			v101 = (_QWORD*)v101[1];
			if (!v101)
				goto LABEL_149;
		}
		v102 = (unsigned int*)v101 + 5;
		if (!v102 || (v103 = *v102, v284 = v102[1], v104 = v102[2], v283 = v103, v285 = v104, v104 != 2))
			LABEL_149:
		v103 = 0i64;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v103);
		v105 = dword_140C4E5E0;
		if (*(_DWORD*)qword_140C63750 < dword_140C4E5E0)
			v105 = *(_DWORD*)qword_140C63750;
		if (byte_140C4E5F0[v105])
		{
			v106 = *(_QWORD*)qword_140C65848;
			v273 = xmmword_140C77820;
			v279 = xmmword_140B7A4F0;
			v107 = *(__m128*)((*(__int64(__fastcall**)(__int64))(v106 + 104))(qword_140C65848) + 32);
			v108 = *(_QWORD*)qword_140C65848;
			v268 = xmmword_140B7A4F0;
			v277 = _mm_add_ps(v107, v249);
			v272 = _mm_add_ps((__m128)xmmword_140B7A4F0, v277);
			v270 = _mm_add_ps(
				*(__m128*)((*(__int64(__fastcall**)(__int64))(v108 + 104))(qword_140C65848) + 32),
				(__m128)xmmword_140B7A4F0);
		}
		v24 = v236;
	}
	else
	{
		v236 = 130;
		v120 = (*(__int64(__fastcall**)(int*))(v54 + 664))(&v236);
		v121 = *(_QWORD**)(*(_QWORD*)(v54 + 656) + 8 * (v120 % *(_QWORD*)(v54 + 648)));
		if (!v121)
			goto LABEL_177;
		while (v120 != *v121 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v54 + 672))(&v236, v121 + 2))
		{
			v121 = (_QWORD*)v121[1];
			if (!v121)
				goto LABEL_177;
		}
		v122 = (unsigned int*)v121 + 5;
		if (!v122 || (v123 = *v122, v293 = v122[1], v124 = v122[2], v292 = v123, v294 = v124, v124 != 2))
			LABEL_177:
		v123 = 0i64;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v123);
	}
	v109 = (__m128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65848 + 104i64))(qword_140C65848);
	sub_14062DDC0((__int64*)(a1 + 31304), v109);
	v110 = (_QWORD*)qword_140C63628;
	v111 = *(_QWORD*)(qword_140C63628 + 296);
	if (v111)
		sub_1407E4830(*(int**)(qword_140C63628 + 288), 0i64, 8 * v111);
	v238 = v24 == 0;
	if (v33)
		v238 = (v24 == 0) | 2;
	v112 = *(unsigned int*)(a1 + 31208);
	if ((dword_140C8CD58 & 2) == 0)
	{
		dword_140C8CD58 |= 2u;
		sub_1401AD620((__int64)&unk_140C8CE80, L"ZoneKit 1 HousingMusic");
	}
	sub_1401ADA40((__int64)&unk_140C8CE80, v112);
	if ((__int64)v110[37] <= 1)
	{
		do
		{
			v113 = v110[37];
			v114 = v113 + 1;
			v115 = sub_14018DB00(v110[36], v113 + 1, 8i64);
			v116 = v115;
			*(_QWORD*)&v115[2 * v113] = 0i64;
			v117 = (int*)v110[36];
			if (v117 != v115)
			{
				sub_1407DB590(v115, v117, 8i64 * v110[37]);
				v118 = v110[36];
				if (v118)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v118 - 16) + 8i64))(v118 - 16);
				v110[36] = v116;
			}
			v110[37] = v114;
		} while (v114 <= 1);
	}
	if ((_DWORD)v112 && v112 < v110[24])
		v119 = *(_QWORD*)(v110[23] + 8 * v112);
	else
		v119 = 0i64;
	*(_QWORD*)(v110[36] + 8i64) = v119;
	v125 = *(unsigned int*)(a1 + 31212);
	v126 = (_QWORD*)qword_140C63628;
	if ((dword_140C8CD58 & 4) == 0)
	{
		dword_140C8CD58 |= 4u;
		sub_1401AD620((__int64)&unk_140C8CFA0, L"ZoneKit 2 ClientEvent");
	}
	sub_1401ADA40((__int64)&unk_140C8CFA0, v125);
	if ((__int64)v126[37] <= 2)
	{
		do
		{
			v127 = v126[37];
			v128 = v127 + 1;
			v129 = sub_14018DB00(v126[36], v127 + 1, 8i64);
			v130 = v129;
			*(_QWORD*)&v129[2 * v127] = 0i64;
			v131 = (int*)v126[36];
			if (v131 != v129)
			{
				sub_1407DB590(v129, v131, 8i64 * v126[37]);
				v132 = v126[36];
				if (v132)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v132 - 16) + 8i64))(v132 - 16);
				v126[36] = v130;
			}
			v126[37] = v128;
		} while (v128 <= 2);
	}
	if ((_DWORD)v125 && v125 < v126[24])
		v133 = *(_QWORD*)(v126[23] + 8 * v125);
	else
		v133 = 0i64;
	*(_QWORD*)(v126[36] + 16i64) = v133;
	v134 = *(unsigned int*)(a1 + 31216);
	v135 = (_QWORD*)qword_140C63628;
	if ((dword_140C8CD58 & 0x10) == 0)
	{
		dword_140C8CD58 |= 0x10u;
		sub_1401AD620((__int64)&unk_140C8D1E0, L"ZoneKit 4 PlayerPath");
	}
	sub_1401ADA40((__int64)&unk_140C8D1E0, v134);
	if ((__int64)v135[37] <= 4)
	{
		do
		{
			v136 = v135[37];
			v137 = v136 + 1;
			v138 = sub_14018DB00(v135[36], v136 + 1, 8i64);
			v139 = v138;
			*(_QWORD*)&v138[2 * v136] = 0i64;
			v140 = (int*)v135[36];
			if (v140 != v138)
			{
				sub_1407DB590(v138, v140, 8i64 * v135[37]);
				v141 = v135[36];
				if (v141)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v141 - 16) + 8i64))(v141 - 16);
				v135[36] = v139;
			}
			v135[37] = v137;
		} while (v137 <= 4);
	}
	if ((_DWORD)v134 && v134 < v135[24])
		v142 = *(_QWORD*)(v135[23] + 8 * v134);
	else
		v142 = 0i64;
	*(_QWORD*)(v135[36] + 32i64) = v142;
	v143 = qword_140C63628;
	*(_DWORD*)(qword_140C63628 + 576) = v238;
	v144 = *(_QWORD*)(a1 + 25744);
	if (v144)
	{
		v145 = *(_DWORD*)(a1 + 29932);
		if (!v145 && *(_DWORD*)(a1 + 29940))
			v145 = *(_DWORD*)(v144 + 6120);
		if ((dword_140DC3AE0 & 1) == 0)
		{
			dword_140DC3AE0 |= 1u;
			sub_1401AD620((__int64)&unk_140DC3AF0, L"WorldZone Id");
		}
		sub_1401ADA40((__int64)&unk_140DC3AF0, v145);
		v146 = qword_140C63628;
		v147 = *(_OWORD*)(*(_QWORD*)(a1 + 25744) + 4576i64);
		v238 = 129;
		v259 = v147;
		v148 = (*(__int64(__fastcall**)(int*))(qword_140C63628 + 664))(&v238);
		v149 = *(_QWORD**)(*(_QWORD*)(v146 + 656) + 8 * (v148 % *(_QWORD*)(v146 + 648)));
		if (!v149)
			goto LABEL_217;
		while (v148 != *v149 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v146 + 672))(&v238, v149 + 2))
		{
			v149 = (_QWORD*)v149[1];
			if (!v149)
				goto LABEL_217;
		}
		v150 = (unsigned int*)v149 + 5;
		if (!v150 || (v151 = *v150, v290 = v150[1], v152 = v150[2], v289 = v151, v291 = v152, v152 != 2))
			LABEL_217:
		v151 = 0i64;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v151);
		v153 = *(float*)(*(_QWORD*)(a1 + 25744) + 6096i64) - *((float*)&v259 + 1);
		if ((dword_140DC3AE0 & 2) == 0)
		{
			dword_140DC3AE0 |= 2u;
			CurrentThreadId = GetCurrentThreadId();
			if ((_DWORD)qword_140C77840 == CurrentThreadId)
			{
				++qword_140C77848;
			}
			else
			{
				v155 = 0i64;
				while (_InterlockedCompareExchange64(&qword_140C77848, 1i64, 0i64))
				{
					_mm_pause();
					if ((unsigned __int64)++v155 >= 0x400)
					{
						sub_14019FB60((__int64)&qword_140C77840, CurrentThreadId);
						goto LABEL_226;
					}
				}
				LODWORD(qword_140C77840) = CurrentThreadId;
			}
		LABEL_226:
			v156 = qword_140C63768;
			v157 = &unk_140DC3CA0;
			qword_140C63768 = (__int64)&unk_140DC3C10;
			dword_140DC3C9C = 97;
			qword_140DC3C94 = 0i64;
			qword_140DC3D20 = v156;
			v158 = 64i64;
			while (v158 != -2147483582)
			{
				v159 = *(_WORD*)((char*)v157 + (char*)L"Water Depth" - (char*)&unk_140DC3CA0);
				if (!v159)
					break;
				*v157++ = v159;
				if (!--v158)
				{
					--v157;
					break;
				}
			}
			v160 = qword_140C77848;
			*v157 = 0;
			dword_140DC3C90 = 1;
			if (v160 <= 1)
			{
				LODWORD(qword_140C77840) = 0;
				_InterlockedExchange64(&qword_140C77848, 0i64);
				if (qword_140C77850)
				{
					if (!qword_140C77858)
					{
						EventW = CreateEventW(0i64, 0, 0, 0i64);
						if (_InterlockedCompareExchange64(
							(volatile signed __int64*)&qword_140C77858,
							(signed __int64)EventW,
							0i64))
						{
							CloseHandle(EventW);
						}
					}
					SetEvent(qword_140C77858);
				}
			}
			else
			{
				--qword_140C77848;
			}
		}
		sub_1401AD8F0((__int64)&unk_140DC3C10, v153);
		v162 = qword_140C63628;
		v239 = 89;
		v163 = (*(__int64(__fastcall**)(int*))(qword_140C63628 + 664))(&v239);
		v164 = *(_QWORD**)(*(_QWORD*)(v162 + 656) + 8 * (v163 % *(_QWORD*)(v162 + 648)));
		if (!v164)
			goto LABEL_245;
		while (v163 != *v164 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v162 + 672))(&v239, v164 + 2))
		{
			v164 = (_QWORD*)v164[1];
			if (!v164)
				goto LABEL_245;
		}
		v165 = (unsigned int*)v164 + 5;
		if (!v165 || (v166 = *v165, v295 = v165[1], v165[2] != 2))
			LABEL_245:
		v166 = 0i64;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v166);
		v167 = 0;
		if (qword_140C63840)
		{
			v168 = qword_140C63840(off_140A6E3E8, v145, qword_140C63858);
		}
		else
		{
			if (dword_140C64634 || (int)sub_14024D920() < 0)
			{
			LABEL_263:
				v172 = qword_140C63628;
				if (*(_DWORD*)(qword_140C63628 + 304) != v167)
				{
					v173 = dword_140C3BF70;
					if (*(_DWORD*)qword_140C63750 < dword_140C3BF70)
						v173 = *(_DWORD*)qword_140C63750;
					sub_14001A770((__int64)&off_140C3BF60, v173, 0);
					*(_DWORD*)(v172 + 304) = v167;
				}
				v174 = dword_140C3BF70;
				v175 = dword_140C3BF70;
				if (*(_DWORD*)qword_140C63750 < dword_140C3BF70)
					v175 = *(_DWORD*)qword_140C63750;
				if (*((_DWORD*)&off_140C3BF60 + v175 + 8))
				{
					if (*(_DWORD*)qword_140C63750 < dword_140C3BF70)
						v174 = *(_DWORD*)qword_140C63750;
					v167 = *((_DWORD*)&off_140C3BF60 + v174 + 8);
				}
				if ((dword_140C8CD58 & 1) == 0)
				{
					dword_140C8CD58 |= 1u;
					sub_1401AD620((__int64)&unk_140C8CD60, L"ZoneKit 0 World");
				}
				sub_1401ADA40((__int64)&unk_140C8CD60, v167);
				if (*(__int64*)(v172 + 296) <= 0)
				{
					do
					{
						v176 = *(_QWORD*)(v172 + 296);
						v177 = v176 + 1;
						v178 = sub_14018DB00(*(_QWORD*)(v172 + 288), v176 + 1, 8i64);
						v179 = v178;
						*(_QWORD*)&v178[2 * v176] = 0i64;
						v180 = *(int**)(v172 + 288);
						if (v180 != v178)
						{
							sub_1407DB590(v178, v180, 8i64 * *(_QWORD*)(v172 + 296));
							v181 = *(_QWORD*)(v172 + 288);
							if (v181)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v181 - 16) + 8i64))(v181 - 16);
							*(_QWORD*)(v172 + 288) = v179;
						}
						*(_QWORD*)(v172 + 296) = v177;
					} while (v177 <= 0);
				}
				if (v167 && (unsigned __int64)v167 < *(_QWORD*)(v172 + 192))
					v182 = *(_QWORD*)(*(_QWORD*)(v172 + 184) + 8i64 * v167);
				else
					v182 = 0i64;
				v183 = 0;
				**(_QWORD**)(v172 + 288) = v182;
				v184 = *(_QWORD*)(a1 + 31256);
				if (v184)
					v183 = *(_DWORD*)(v184 + 32);
				v185 = (_QWORD*)qword_140C63628;
				if ((dword_140C8CD58 & 0x40) == 0)
				{
					dword_140C8CD58 |= 0x40u;
					sub_1401AD620((__int64)&unk_140C8D420, L"ZoneKit 6 Visuals");
				}
				sub_1401ADA40((__int64)&unk_140C8D420, v183);
				if ((__int64)v185[37] <= 6)
				{
					do
					{
						v186 = v185[37];
						v187 = v186 + 1;
						v188 = sub_14018DB00(v185[36], v186 + 1, 8i64);
						v189 = v188;
						*(_QWORD*)&v188[2 * v186] = 0i64;
						v190 = (int*)v185[36];
						if (v190 != v188)
						{
							sub_1407DB590(v188, v190, 8i64 * v185[37]);
							v191 = v185[36];
							if (v191)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v191 - 16) + 8i64))(v191 - 16);
							v185[36] = v189;
						}
						v185[37] = v187;
					} while (v187 <= 6);
				}
				if (v183 && (unsigned __int64)v183 < v185[24])
					v192 = *(_QWORD*)(v185[23] + 8i64 * v183);
				else
					v192 = 0i64;
				v193 = v185[36];
				LODWORD(v243) = 0;
				*(_QWORD*)(v193 + 48) = v192;
				v194 = *(_QWORD*)(a1 + 31272);
				v195 = 0i64;
				if (v194)
				{
					v196 = *(__int64**)(a1 + 31280);
					do
					{
						v197 = *v196;
						if (*v196)
						{
							do
							{
								v198 = *(_QWORD*)(v197 + 8);
								if (*(_DWORD*)(v197 + 24) > (unsigned int)v195)
								{
									v243 = *(_QWORD*)(v197 + 20);
									v195 = (unsigned int*)HIDWORD(v243);
								}
								v197 = v198;
							} while (v198);
						}
						++v196;
						--v194;
					} while (v194);
					if ((_DWORD)v243)
						sub_1400BC580(qword_140C63628 + 16, 3, v243);
				}
				if (*(_QWORD*)(a1 + 25744) != *(_QWORD*)(a1 + 25736))
				{
					v199 = *(_QWORD*)(a1 + 31152);
					if (v199)
					{
						(*(void(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v199 + 8i64))(v199, v195);
						*(_QWORD*)(a1 + 31152) = 0i64;
					}
				}
				if (*(_QWORD*)(a1 + 31144))
				{
					if (!*(_QWORD*)(a1 + 31152))
					{
						v200 = *(_DWORD*)(*(_QWORD*)(a1 + 25744) + 216i64);
						if (v200)
						{
							v201 = (unsigned int*)sub_14022D500(v200);
							v195 = v201;
							if (v201)
							{
								v202 = *(_QWORD*)(a1 + 31144);
								if (*(_DWORD*)(*(_QWORD*)(a1 + 25744) + 52i64) == 1)
									(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)v202 + 32i64))(
										v202,
										a1 + 31152,
										v201[20],
										v201[22]);
								else
									(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)v202 + 32i64))(
										v202,
										a1 + 31152,
										v201[19],
										v201[21]);
							}
						}
					}
				}
				v203 = *(_DWORD**)(a1 + 120);
				if (!v203 || v203[148])
				{
					v209 = *(_QWORD*)(a1 + 31152);
					if (v209)
						(*(void(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v209 + 72i64))(v209, v195);
					if (*(_DWORD*)(a1 + 31188) != 1)
						sub_140051AF0(2, 81);
					v210 = qword_140C63628;
					*(_DWORD*)(a1 + 31188) = 1;
					v211 = sub_1400518A0(v210, 71, 2, 0);
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v211);
					v212 = qword_140C63628;
					v213 = sub_1400518A0(qword_140C63628, 97, 6, 0);
					v207 = v212 + 16;
					v208 = v213;
				}
				else
				{
					if ((*(unsigned int(__fastcall**)(_DWORD*, unsigned int*))(*(_QWORD*)v203 + 72i64))(v203, v195))
					{
						(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 120) + 72i64))(*(_QWORD*)(a1 + 120));
						(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 120) + 64i64))(*(_QWORD*)(a1 + 120));
					}
					v204 = sub_1400518A0(qword_140C63628, 71, 2, 0);
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v204);
					v205 = *(_QWORD*)(a1 + 31152);
					if (v205)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v205 + 64i64))(v205);
					if (*(_DWORD*)(a1 + 31188))
						sub_140051AF0(2, 82);
					v206 = qword_140C63628;
					*(_DWORD*)(a1 + 31188) = 0;
					v207 = v206 + 16;
					v208 = 0;
				}
				sub_1400BC580(v207, 5, v208);
				if (*(float*)(a1 + 31160) == -3.4028235e38)
					*(_OWORD*)(a1 + 31168) = *(_OWORD*)(*(_QWORD*)(a1 + 25744) + 4576i64);
				v214 = 0.0;
				v215 = *(float*)(a1 + 31160) - a2;
				*(float*)(a1 + 31160) = v215;
				if (v215 <= 0.0)
				{
					v216 = *(__m128**)(a1 + 25744);
					*(_DWORD*)(a1 + 31160) = 1036831949;
					v217 = *(__m128*)(a1 + 31168);
					v218 = v216[286];
					*(__m128*)(a1 + 31168) = v218;
					v219 = _mm_sub_ps(v217, v218);
					v220 = _mm_mul_ps(v219, v219);
					v214 = fsqrt(
						(float)(v220.m128_f32[0] + _mm_shuffle_ps(v220, v220, 85).m128_f32[0])
						+ _mm_shuffle_ps(v220, v220, 170).m128_f32[0])
						* 0.1;
				}
				sub_1400BC8B0(qword_140C63628 + 16, v214);
				v221 = *(_QWORD*)(a1 + 120);
				if (v221 && *(_DWORD*)(v221 + 684))
					sub_140051CC0(qword_140C63628, 0, 107);
				else
					sub_140051CC0(qword_140C63628, 0, 108);
				goto LABEL_343;
			}
			v168 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 24i64))(qword_140C64270, v145);
		}
		v169 = (int*)v168;
		if (v168)
		{
			while (!v169[5])
			{
				v170 = v169[2];
				if (qword_140C63840)
				{
					v171 = qword_140C63840(off_140A6E3E8, v170, qword_140C63858);
				}
				else
				{
					if (dword_140C64634 || (int)sub_14024D920() < 0)
						goto LABEL_263;
					v171 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 24i64))(
						qword_140C64270,
						v170);
				}
				v169 = (int*)v171;
				if (!v171)
					goto LABEL_263;
			}
			v167 = v169[5];
			if ((dword_140DC3AE0 & 4) == 0)
			{
				dword_140DC3AE0 |= 4u;
				sub_1401AD620((__int64)&unk_140DC3D30, L"WorldZone Id Used");
			}
			sub_1401ADA40((__int64)&unk_140DC3D30, *v169);
		}
		goto LABEL_263;
	}
	if (*(float*)(a1 + 31160) != -3.4028235e38)
	{
		sub_140615630(a1);
		v143 = qword_140C63628;
	}
	v222 = sub_1400518A0(v143, 89, 2, 0);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v222);
	v223 = sub_1400518A0(qword_140C63628, 123, 2, 0);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v223);
	sub_140051CC0(qword_140C63628, 0, 108);
	sub_1400BC8B0(qword_140C63628 + 16, 1.0);
LABEL_343:
	v224 = sub_1400518A0(qword_140C63628, 123, 2, 0);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v224);
	v225 = *(_QWORD*)(a1 + 25744);
	if (v225)
		v226 = *(_DWORD*)(v225 + 8);
	else
		v226 = 0;
	v227 = *(_QWORD*)(a1 + 120);
	if (v227)
		v23 = *(_DWORD*)(v227 + 8);
	sub_14062D5C0(a1 + 31080, v23, v226, a2);
	v228 = *(_QWORD*)(a1 + 29064);
	v229 = sub_1400518A0(qword_140C63628, 115, 2, 0);
	if (v228)
	{
		v230 = v229;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v228 + 56i64))(v228);
		v231 = v230;
	}
	else
	{
		v231 = v229;
	}
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65848 + 56i64))(qword_140C65848, v231);
	switch (*(_DWORD*)(a1 + 31248))
	{
	case 1:
	case 2:
		v232 = 153;
		break;
	case 3:
	case 4:
		v232 = 154;
		break;
	case 5:
	case 6:
		v232 = 155;
		break;
	case 7:
	case 8:
		v232 = 156;
		break;
	case 9:
		v232 = 157;
		break;
	default:
		v232 = 152;
		break;
	}
	sub_140051CC0(qword_140C63628, 4, v232);
	v233 = *(_QWORD*)(a1 + 25744);
	if (!v233 || !*(_DWORD*)(v233 + 684))
		*(_DWORD*)(a1 + 31248) = 10;
	return 0i64;
}
// 140613C39: conditional instruction was optimized away because rax.8!=0
// 14061402A: conditional instruction was optimized away because ecx.4==0
// 140614146: conditional instruction was optimized away because edx.4==0
// 140614C38: conditional instruction was optimized away because rdx.8!=0
// 140613F27: variable 'v39' is possibly undefined
// 140613F27: variable 'v40' is possibly undefined
// 14061438E: variable 'v235' is possibly undefined
// 140615104: variable 'v195' is possibly undefined
// 140A141F0: using guessed type wchar_t aZonekit2Client[22];
// 140A14220: using guessed type wchar_t aZonekit1Housin[23];
// 140A14250: using guessed type wchar_t aZonekit0World[16];
// 140A14280: using guessed type wchar_t aZonekit6Visual[18];
// 140A142C8: using guessed type wchar_t aZonekit4Player[21];
// 140A6E340: using guessed type wchar_t *off_140A6E340[2];
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140B27058: using guessed type wchar_t aWorldzoneIdUse[18];
// 140B27178: using guessed type wchar_t aWorldzoneId[13];
// 140B27198: using guessed type wchar_t aWaterDepth[12];
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7A4F0: using guessed type __int128 xmmword_140B7A4F0;
// 140C3BF60: using guessed type __int64 (__fastcall **off_140C3BF60)();
// 140C3BF70: using guessed type int dword_140C3BF70;
// 140C4E440: using guessed type int dword_140C4E440;
// 140C4E450: using guessed type _BYTE[32];
// 140C4E480: using guessed type int dword_140C4E480;
// 140C4E490: using guessed type int dword_140C4E490[14];
// 140C4E4E0: using guessed type int dword_140C4E4E0;
// 140C4E4F0: using guessed type int dword_140C4E4F0[14];
// 140C4E5A0: using guessed type int dword_140C4E5A0;
// 140C4E5B0: using guessed type _BYTE[32];
// 140C4E5E0: using guessed type int dword_140C4E5E0;
// 140C4E5F0: using guessed type _BYTE[32];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C63758: using guessed type __int64 qword_140C63758;
// 140C63768: using guessed type __int64 qword_140C63768;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C643C0: using guessed type __int64 qword_140C643C0;
// 140C64634: using guessed type int dword_140C64634;
// 140C650C0: using guessed type int dword_140C650C0;
// 140C65848: using guessed type __int64 qword_140C65848;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C77820: using guessed type __int128 xmmword_140C77820;
// 140C77840: using guessed type __int64 qword_140C77840;
// 140C77848: using guessed type __int64 qword_140C77848;
// 140C77850: using guessed type __int64 qword_140C77850;
// 140C8CD58: using guessed type int dword_140C8CD58;
// 140DC3AE0: using guessed type int dword_140DC3AE0;
// 140DC3C90: using guessed type int dword_140DC3C90;
// 140DC3C94: using guessed type __int64 qword_140DC3C94;
// 140DC3C9C: using guessed type int dword_140DC3C9C;
// 140DC3D20: using guessed type __int64 qword_140DC3D20;
// 1406139C0: using guessed type char var_160[144];
// 1406139C0: using guessed type int var_3F0[4];
// 1406139C0: using guessed type char var_290[148];

