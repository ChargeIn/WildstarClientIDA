#include "../winhttp.h"

//----- (0000000140124E00) ----------------------------------------------------
__int64 __fastcall sub_140124E00(__int64 a1, __int64 a2, int a3, int a4)
{
	_OWORD* v8; // rax
	__int64 v9; // r14
	__int64 v10; // rdi
	void(__fastcall * **v11)(_QWORD); // rdi
	__int64 v12; // r8
	unsigned int* v14; // rdi
	unsigned __int64 v15; // rbx
	__int64 v16; // r8
	__int64 v17; // rdx
	__int64 v18; // rcx
	int v19; // r9d
	int* v20; // rax
	__int64 v21; // rax
	__int64* v22; // rcx
	__int64 v23; // rdx
	__int64 v24; // rcx
	__int64 v25; // rbx
	_QWORD* v26; // rax
	_QWORD* v27; // rdi
	int* v28; // r10
	char* v29; // rdx
	__int64 v30; // rcx
	int v31; // eax
	__int64 v32; // rdx
	__int64 v33; // rbx
	int* v34; // rax
	__int64 v35; // rax
	__int64* v36; // rcx
	__int64 v37; // rdx
	int* v38; // r10
	char* v39; // rdx
	__int64 v40; // rcx
	int v41; // eax
	__int64 v42; // rdx
	__int64 v43; // rbx
	int* v44; // rax
	__int64 v45; // rax
	__int64* v46; // rcx
	__int64 v47; // rdx
	int* v48; // r10
	char* v49; // rdx
	__int64 v50; // rcx
	int v51; // eax
	__int64 v52; // rdx
	__int64 v53; // rbx
	int* v54; // rax
	__int64 v55; // rax
	__int64* v56; // rcx
	__int64 v57; // rdx
	int* v58; // r10
	char* v59; // rdx
	__int64 v60; // rcx
	int v61; // eax
	__int64 v62; // rdx
	__int64 v63; // rbx
	int* v64; // rax
	__int64 v65; // rax
	__int64* v66; // rcx
	__int64 v67; // rdx
	int* v68; // r10
	char* v69; // rdx
	__int64 v70; // rcx
	int v71; // eax
	__int64 v72; // rdx
	__int64 v73; // rbx
	int* v74; // rax
	__int64 v75; // rax
	__int64* v76; // rcx
	__int64 v77; // rdx
	int v78; // ebx
	int v79; // edi
	int v80; // esi
	int v81; // r12d
	int* v82; // rax
	__int64 v83; // rcx
	__int64 v84; // r10
	char* v85; // rdx
	int v86; // eax
	__int64 v87; // rdx
	_QWORD* v88; // rax
	int v89; // edi
	int v90; // r12d
	unsigned int v91; // ebx
	unsigned int v92; // esi
	int* v93; // r10
	__int64 v94; // rcx
	char* v95; // rdx
	int v96; // eax
	__int64 v97; // rdx
	_QWORD* v98; // rax
	int v99; // edi
	int v100; // r12d
	unsigned int v101; // ebx
	unsigned int v102; // esi
	int* v103; // r10
	__int64 v104; // rcx
	char* v105; // rdx
	int v106; // eax
	__int64 v107; // rdx
	_QWORD* v108; // rax
	unsigned int v109; // edi
	unsigned int v110; // r12d
	unsigned int v111; // ebx
	unsigned int v112; // esi
	int* v113; // r10
	__int64 v114; // rcx
	char* v115; // rdx
	int v116; // eax
	__int64 v117; // rdx
	_QWORD* v118; // rax
	unsigned int v119; // edi
	unsigned int v120; // r12d
	unsigned int v121; // ebx
	unsigned int v122; // esi
	int* v123; // r10
	__int64 v124; // rcx
	char* v125; // rdx
	int v126; // eax
	__int64 v127; // rdx
	_QWORD* v128; // rax
	unsigned int v129; // edi
	unsigned int v130; // r12d
	unsigned int v131; // ebx
	unsigned int v132; // esi
	int* v133; // r10
	__int64 v134; // rcx
	char* v135; // rdx
	int v136; // eax
	__int64 v137; // rdx
	_QWORD* v138; // rax
	unsigned int v139; // edi
	unsigned int v140; // r12d
	unsigned int v141; // ebx
	unsigned int v142; // esi
	int* v143; // r10
	__int64 v144; // rcx
	char* v145; // rdx
	int v146; // eax
	__int64 v147; // rdx
	_QWORD* v148; // rax
	int v149; // edi
	int v150; // esi
	int v151; // r12d
	int v152; // r13d
	int* v153; // r10
	char* v154; // rdx
	__int64 v155; // rcx
	int v156; // eax
	__int64 v157; // rdx
	_DWORD* v158; // rax
	int v159; // esi
	int v160; // r13d
	unsigned int v161; // edi
	unsigned int v162; // r12d
	int* v163; // r10
	char* v164; // rdx
	__int64 v165; // rcx
	int v166; // eax
	__int64 v167; // rdx
	_DWORD* v168; // rax
	int v169; // esi
	int v170; // r13d
	unsigned int v171; // edi
	unsigned int v172; // r12d
	int* v173; // r10
	char* v174; // rdx
	__int64 v175; // rcx
	int v176; // eax
	__int64 v177; // rdx
	_DWORD* v178; // rax
	unsigned int v179; // esi
	unsigned int v180; // r13d
	unsigned int v181; // edi
	unsigned int v182; // r12d
	__int64 v183; // rbx
	_OWORD* v184; // rax
	_DWORD* v185; // rax
	unsigned int v186; // esi
	unsigned int v187; // r13d
	unsigned int v188; // edi
	unsigned int v189; // r12d
	__int64 v190; // rbx
	_OWORD* v191; // rax
	_DWORD* v192; // rax
	unsigned int v193; // esi
	unsigned int v194; // r13d
	unsigned int v195; // edi
	unsigned int v196; // r12d
	__int64 v197; // rbx
	_OWORD* v198; // rax
	_DWORD* v199; // rax
	int* v200; // rdi
	__int64 v201; // rbx
	_OWORD* v202; // rax
	_QWORD* v203; // r12
	_DWORD* v204; // rax
	int* v205; // rsi
	__int64 v206; // rdi
	__int64 v207; // rbx
	_OWORD* v208; // rax
	__int64 v209; // rcx
	int* v210; // rsi
	__int64 v211; // rdi
	__int64 v212; // rbx
	_OWORD* v213; // rax
	int v215; // [rsp+28h] [rbp-A1h]
	int v216; // [rsp+30h] [rbp-99h]
	_QWORD* v217; // [rsp+60h] [rbp-69h] BYREF
	__m128 v218; // [rsp+70h] [rbp-59h] BYREF
	int* v219; // [rsp+80h] [rbp-49h]
	__int128 v220; // [rsp+90h] [rbp-39h] BYREF
	char v221[32]; // [rsp+A0h] [rbp-29h] BYREF
	__int128 v222; // [rsp+C0h] [rbp-9h]
	__m128i si128; // [rsp+D0h] [rbp+7h]
	int v224; // [rsp+E0h] [rbp+17h]

	v8 = (_OWORD*)sub_1401223B0((__int64)&v220, (int*)&unk_140C3C418);
	v9 = 0i64;
	sub_1400C5920(a1, a2, 0i64, 0i64, v8, 24i64, 0i64);
	*(_QWORD*)(a1 + 1024) = 0i64;
	*(_QWORD*)a1 = off_140B57900;
	*(_DWORD*)(a1 + 1032) = a3;
	*(_DWORD*)(a1 + 1036) = a4;
	*(_QWORD*)(a1 + 1044) = 0i64;
	*(_QWORD*)(a1 + 1052) = 0i64;
	*(_WORD*)(a1 + 1060) = 0;
	sub_1401095E0(a1 + 1120);
	*(_QWORD*)(a1 + 432) |= 0x800ui64;
	(*(void(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD, int, _DWORD, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		256i64,
		256i64,
		1i64,
		0,
		1,
		0,
		256,
		0,
		a1 + 1064);
	v216 = 0;
	v215 = 1;
	(*(void(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		16i64,
		256i64,
		1i64,
		0);
	v10 = *(_QWORD*)(a1 + 32);
	if (v10 && (!*(_QWORD*)(a1 + 1120) || !sub_14002C740(a1 + 1136, L"DashedLine")))
	{
		v11 = (void(__fastcall***)(_QWORD))sub_140108E80(v10 + 240, (const __m128i*)L"DashedLine");
		if (v11)
		{
			v12 = 0i64;
			while (aDashedline[++v12] != 0)
				;
			sub_14001C480(a1 + 1136, (int*)L"DashedLine", (int*)&aDashedline[v12]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1120), v11);
	}
	v218 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B690), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v14 = (unsigned int*)(a1 + 712);
	v15 = (unsigned int)sub_140141F10(qword_140C63678, &v218);
	if ((_QWORD**)(a1 + 712) == &v217)
	{
		v16 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v14);
		v16 = qword_140C63678;
		*v14 = v15;
		if (v15 < *(_QWORD*)(v16 + 48))
		{
			v17 = *(_QWORD*)(v16 + 40);
			v18 = 32i64 * (unsigned int)v15;
			v19 = *(_DWORD*)(v18 + v17 + 16);
			if ((unsigned int)(v19 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v18 + v17 + 16) = v19 + 1;
		}
	}
	sub_1401429A0(v16, v15);
	if (!*(_QWORD*)(a1 + 792))
	{
		v20 = sub_14018B280(48i64, 0);
		if (v20)
			v21 = sub_1401095E0((__int64)v20);
		else
			v21 = 0i64;
		*(_QWORD*)(a1 + 792) = v21;
	}
	v22 = *(__int64**)(a1 + 792);
	if (v22)
	{
		v23 = *(_QWORD*)(a1 + 32);
		if (v23)
			sub_140109710(v22, v23 + 240, (__m128i*)L"WhiteFill", 0);
		*(_DWORD*)(*(_QWORD*)(a1 + 792) + 8i64) = dword_140C63664;
	}
	v24 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 368i64);
	v25 = *(_QWORD*)(v24 + 24);
	v26 = sub_14010E2E0(*(_QWORD**)(v24 + 16), v25, L"Control");
	if (v26 == (_QWORD*)v25)
		v27 = 0i64;
	else
		v27 = (_QWORD*)*v26;
	v217 = v27;
	v28 = sub_14018B280(1024i64, 0);
	if (v28)
	{
		v224 = 0;
		v29 = v221;
		v30 = 0i64;
		do
		{
			v31 = *(_DWORD*)((char*)&unk_140A14E90 + v30 * 4);
			si128.m128i_i32[v30++] = 0;
			*(_DWORD*)&v221[v30 * 4 + 28] = v31;
			*(_QWORD*)v29 = 0i64;
			v29 += 8;
		} while (v30 < 4);
		v32 = *(_QWORD*)(a1 + 32);
		v224 |= 0x300u;
		si128 = _mm_load_si128((const __m128i*) & xmmword_140B7A980);
		v222 = 0i64;
		v33 = sub_1400C5920((__int64)v28, v32, a1, v27, &v220, 280i64, 0i64);
	}
	else
	{
		v33 = 0i64;
	}
	*(_QWORD*)(a1 + 1080) = v33;
	if (!*(_QWORD*)(v33 + 792))
	{
		v34 = sub_14018B280(48i64, 0);
		if (v34)
			v35 = sub_1401095E0((__int64)v34);
		else
			v35 = 0i64;
		*(_QWORD*)(v33 + 792) = v35;
	}
	v36 = *(__int64**)(v33 + 792);
	if (v36)
	{
		v37 = *(_QWORD*)(v33 + 32);
		if (v37)
			sub_140109710(v36, v37 + 240, (__m128i*)L"WhiteFill", 0);
		*(_DWORD*)(*(_QWORD*)(v33 + 792) + 8i64) = dword_140C63664;
	}
	v38 = sub_14018B280(1024i64, 0);
	if (v38)
	{
		v224 = 0;
		v39 = v221;
		v40 = 0i64;
		do
		{
			v41 = *(_DWORD*)((char*)&unk_140A14E90 + v40 * 4);
			si128.m128i_i32[v40++] = 0;
			*(_DWORD*)&v221[v40 * 4 + 28] = v41;
			*(_QWORD*)v39 = 0i64;
			v39 += 8;
		} while (v40 < 4);
		v42 = *(_QWORD*)(a1 + 32);
		v224 |= 0x300u;
		si128 = _mm_load_si128((const __m128i*) & xmmword_140B7A9A0);
		v222 = 0i64;
		v43 = sub_1400C5920((__int64)v38, v42, a1, v27, &v220, 280i64, 0i64);
	}
	else
	{
		v43 = 0i64;
	}
	*(_QWORD*)(a1 + 1088) = v43;
	if (!*(_QWORD*)(v43 + 792))
	{
		v44 = sub_14018B280(48i64, 0);
		if (v44)
			v45 = sub_1401095E0((__int64)v44);
		else
			v45 = 0i64;
		*(_QWORD*)(v43 + 792) = v45;
	}
	v46 = *(__int64**)(v43 + 792);
	if (v46)
	{
		v47 = *(_QWORD*)(v43 + 32);
		if (v47)
			sub_140109710(v46, v47 + 240, (__m128i*)L"WhiteFill", 0);
		*(_DWORD*)(*(_QWORD*)(v43 + 792) + 8i64) = dword_140C63664;
	}
	v48 = sub_14018B280(1024i64, 0);
	if (v48)
	{
		v224 = 0;
		v49 = v221;
		v50 = 0i64;
		do
		{
			v51 = *(_DWORD*)((char*)&unk_140A14E90 + v50 * 4);
			si128.m128i_i32[v50++] = 0;
			*(_DWORD*)&v221[v50 * 4 + 28] = v51;
			*(_QWORD*)v49 = 0i64;
			v49 += 8;
		} while (v50 < 4);
		v52 = *(_QWORD*)(a1 + 32);
		v224 |= 0x300u;
		si128 = _mm_load_si128((const __m128i*) & xmmword_140B7A9B0);
		v222 = 0i64;
		v53 = sub_1400C5920((__int64)v48, v52, a1, v27, &v220, 280i64, 0i64);
	}
	else
	{
		v53 = 0i64;
	}
	*(_QWORD*)(a1 + 1112) = v53;
	if (!*(_QWORD*)(v53 + 792))
	{
		v54 = sub_14018B280(48i64, 0);
		if (v54)
			v55 = sub_1401095E0((__int64)v54);
		else
			v55 = 0i64;
		*(_QWORD*)(v53 + 792) = v55;
	}
	v56 = *(__int64**)(v53 + 792);
	if (v56)
	{
		v57 = *(_QWORD*)(v53 + 32);
		if (v57)
			sub_140109710(v56, v57 + 240, (__m128i*)L"DashedLine", 0);
		*(_DWORD*)(*(_QWORD*)(v53 + 792) + 8i64) = dword_140C63664;
	}
	v58 = sub_14018B280(1024i64, 0);
	if (v58)
	{
		v224 = 0;
		v59 = v221;
		v60 = 0i64;
		do
		{
			v61 = *(_DWORD*)((char*)&unk_140A14E90 + v60 * 4);
			si128.m128i_i32[v60++] = 0;
			*(_DWORD*)&v221[v60 * 4 + 28] = v61;
			*(_QWORD*)v59 = 0i64;
			v59 += 8;
		} while (v60 < 4);
		v62 = *(_QWORD*)(a1 + 32);
		v224 |= 0x300u;
		si128 = _mm_load_si128((const __m128i*) & xmmword_140B7A990);
		v222 = 0i64;
		v63 = sub_1400C5920((__int64)v58, v62, a1, v27, &v220, 280i64, 0i64);
	}
	else
	{
		v63 = 0i64;
	}
	*(_QWORD*)(a1 + 1096) = v63;
	if (!*(_QWORD*)(v63 + 792))
	{
		v64 = sub_14018B280(48i64, 0);
		if (v64)
			v65 = sub_1401095E0((__int64)v64);
		else
			v65 = 0i64;
		*(_QWORD*)(v63 + 792) = v65;
	}
	v66 = *(__int64**)(v63 + 792);
	if (v66)
	{
		v67 = *(_QWORD*)(v63 + 32);
		if (v67)
			sub_140109710(v66, v67 + 240, (__m128i*)L"WhiteFill", 0);
		*(_DWORD*)(*(_QWORD*)(v63 + 792) + 8i64) = dword_140C63664;
	}
	v68 = sub_14018B280(1024i64, 0);
	if (v68)
	{
		v224 = 0;
		v69 = v221;
		v70 = 0i64;
		do
		{
			v71 = *(_DWORD*)((char*)&unk_140A14E90 + v70 * 4);
			si128.m128i_i32[v70++] = 0;
			*(_DWORD*)&v221[v70 * 4 + 28] = v71;
			*(_QWORD*)v69 = 0i64;
			v69 += 8;
		} while (v70 < 4);
		v72 = *(_QWORD*)(a1 + 32);
		v224 |= 0x300u;
		si128 = _mm_load_si128((const __m128i*) & xmmword_140B7A9C0);
		v222 = 0i64;
		v73 = sub_1400C5920((__int64)v68, v72, a1, v27, &v220, 280i64, 0i64);
	}
	else
	{
		v73 = 0i64;
	}
	*(_QWORD*)(a1 + 1104) = v73;
	if (!*(_QWORD*)(v73 + 792))
	{
		v74 = sub_14018B280(48i64, 0);
		if (v74)
			v75 = sub_1401095E0((__int64)v74);
		else
			v75 = 0i64;
		*(_QWORD*)(v73 + 792) = v75;
	}
	v76 = *(__int64**)(v73 + 792);
	if (v76)
	{
		v77 = *(_QWORD*)(v73 + 32);
		if (v77)
			sub_140109710(v76, v77 + 240, (__m128i*)L"WhiteFill", 0);
		*(_DWORD*)(*(_QWORD*)(v73 + 792) + 8i64) = dword_140C63664;
	}
	v78 = dword_140C3D4D8;
	v79 = dword_140C3D4DC;
	v80 = dword_140C3D4E0;
	v81 = dword_140C3D4E4;
	v82 = sub_14018B280(1568i64, 0);
	v83 = 0i64;
	v84 = (__int64)v82;
	if (v82)
	{
		v224 = 0;
		v85 = v221;
		do
		{
			v86 = *(_DWORD*)((char*)&unk_140A14E90 + v83);
			*(__int32*)((char*)si128.m128i_i32 + v83) = 0;
			v83 += 4i64;
			*(_DWORD*)&v221[v83 + 28] = v86;
			*(_QWORD*)v85 = 0i64;
			v85 += 8;
		} while (v83 < 16);
		v87 = *(_QWORD*)(a1 + 32);
		v224 |= 0x300u;
		v88 = *(_QWORD**)(v87 + 2928);
		v222 = 0i64;
		si128.m128i_i64[0] = __PAIR64__(v79, v78);
		si128.m128i_i64[1] = __PAIR64__(v81, v80);
		v83 = sub_14012F720(v84, v87, a1, (__int64)(v88 + 81), 1, v215, v216, v88, &v220, 256i64);
	}
	*(_QWORD*)(a1 + 1168) = v83;
	(*(void(__fastcall**)(__int64, const wchar_t*))(*(_QWORD*)v83 + 80i64))(v83, L"R");
	*(_DWORD*)(*(_QWORD*)(a1 + 1168) + 704i64) = 5;
	*(_DWORD*)(*(_QWORD*)(a1 + 1168) + 676i64) = 0;
	sub_1400CCD40(*(__int64**)(a1 + 1168), L"Lock the slider to the red component");
	v89 = HIDWORD(qword_140C3C4B8) + v79;
	v90 = HIDWORD(qword_140C3C4B8) + v81;
	v91 = qword_140C3C4B8 + v78;
	v92 = qword_140C3C4B8 + v80;
	v93 = sub_14018B280(1568i64, 0);
	v94 = 0i64;
	if (v93)
	{
		v224 = 0;
		v95 = v221;
		do
		{
			v96 = *(_DWORD*)((char*)&unk_140A14E90 + v94);
			*(__int32*)((char*)si128.m128i_i32 + v94) = 0;
			v94 += 4i64;
			*(_DWORD*)&v221[v94 + 28] = v96;
			*(_QWORD*)v95 = 0i64;
			v95 += 8;
		} while (v94 < 16);
		v97 = *(_QWORD*)(a1 + 32);
		v224 |= 0x300u;
		v98 = *(_QWORD**)(v97 + 2928);
		v222 = 0i64;
		si128.m128i_i64[0] = __PAIR64__(v89, v91);
		si128.m128i_i64[1] = __PAIR64__(v90, v92);
		v94 = sub_14012F720((__int64)v93, v97, a1, (__int64)(v98 + 81), 1, v215, v216, v98, &v220, 256i64);
	}
	*(_QWORD*)(a1 + 1176) = v94;
	(*(void(__fastcall**)(__int64, const wchar_t*))(*(_QWORD*)v94 + 80i64))(v94, L"G");
	*(_DWORD*)(*(_QWORD*)(a1 + 1176) + 704i64) = 5;
	*(_DWORD*)(*(_QWORD*)(a1 + 1176) + 676i64) = 0;
	sub_1400CCD40(*(__int64**)(a1 + 1176), L"Lock the slider to the green component");
	v99 = HIDWORD(qword_140C3C4B8) + v89;
	v100 = HIDWORD(qword_140C3C4B8) + v90;
	v101 = qword_140C3C4B8 + v91;
	v102 = qword_140C3C4B8 + v92;
	v103 = sub_14018B280(1568i64, 0);
	v104 = 0i64;
	if (v103)
	{
		v224 = 0;
		v105 = v221;
		do
		{
			v106 = *(_DWORD*)((char*)&unk_140A14E90 + v104);
			*(__int32*)((char*)si128.m128i_i32 + v104) = 0;
			v104 += 4i64;
			*(_DWORD*)&v221[v104 + 28] = v106;
			*(_QWORD*)v105 = 0i64;
			v105 += 8;
		} while (v104 < 16);
		v107 = *(_QWORD*)(a1 + 32);
		v224 |= 0x300u;
		v108 = *(_QWORD**)(v107 + 2928);
		v222 = 0i64;
		si128.m128i_i64[0] = __PAIR64__(v99, v101);
		si128.m128i_i64[1] = __PAIR64__(v100, v102);
		v104 = sub_14012F720((__int64)v103, v107, a1, (__int64)(v108 + 81), 1, v215, v216, v108, &v220, 256i64);
	}
	*(_QWORD*)(a1 + 1184) = v104;
	(*(void(__fastcall**)(__int64, const wchar_t*))(*(_QWORD*)v104 + 80i64))(v104, L"B");
	*(_DWORD*)(*(_QWORD*)(a1 + 1184) + 704i64) = 5;
	*(_DWORD*)(*(_QWORD*)(a1 + 1184) + 676i64) = 0;
	sub_1400CCD40(*(__int64**)(a1 + 1184), L"Lock the slider to the blue component");
	v109 = HIDWORD(qword_140C3C4B8) + v99;
	v110 = HIDWORD(qword_140C3C4B8) + v100;
	v111 = qword_140C3C4B8 + v101;
	v112 = qword_140C3C4B8 + v102;
	v113 = sub_14018B280(1568i64, 0);
	v114 = 0i64;
	if (v113)
	{
		v224 = 0;
		v115 = v221;
		do
		{
			v116 = *(_DWORD*)((char*)&unk_140A14E90 + v114);
			*(__int32*)((char*)si128.m128i_i32 + v114) = 0;
			v114 += 4i64;
			*(_DWORD*)&v221[v114 + 28] = v116;
			*(_QWORD*)v115 = 0i64;
			v115 += 8;
		} while (v114 < 16);
		v117 = *(_QWORD*)(a1 + 32);
		v224 |= 0x300u;
		v118 = *(_QWORD**)(v117 + 2928);
		v222 = 0i64;
		si128.m128i_i64[0] = __PAIR64__(v109, v111);
		si128.m128i_i64[1] = __PAIR64__(v110, v112);
		v114 = sub_14012F720((__int64)v113, v117, a1, (__int64)(v118 + 81), 1, v215, v216, v118, &v220, 256i64);
	}
	*(_QWORD*)(a1 + 1192) = v114;
	(*(void(__fastcall**)(__int64, const wchar_t*))(*(_QWORD*)v114 + 80i64))(v114, L"H");
	*(_DWORD*)(*(_QWORD*)(a1 + 1192) + 704i64) = 5;
	*(_DWORD*)(*(_QWORD*)(a1 + 1192) + 676i64) = 0;
	sub_1400CCD40(*(__int64**)(a1 + 1192), L"Lock the slider to the hue component");
	v119 = HIDWORD(qword_140C3C4B8) + v109;
	v120 = HIDWORD(qword_140C3C4B8) + v110;
	v121 = qword_140C3C4B8 + v111;
	v122 = qword_140C3C4B8 + v112;
	v123 = sub_14018B280(1568i64, 0);
	v124 = 0i64;
	if (v123)
	{
		v224 = 0;
		v125 = v221;
		do
		{
			v126 = *(_DWORD*)((char*)&unk_140A14E90 + v124);
			*(__int32*)((char*)si128.m128i_i32 + v124) = 0;
			v124 += 4i64;
			*(_DWORD*)&v221[v124 + 28] = v126;
			*(_QWORD*)v125 = 0i64;
			v125 += 8;
		} while (v124 < 16);
		v127 = *(_QWORD*)(a1 + 32);
		v224 |= 0x300u;
		v128 = *(_QWORD**)(v127 + 2928);
		v222 = 0i64;
		si128.m128i_i64[0] = __PAIR64__(v119, v121);
		si128.m128i_i64[1] = __PAIR64__(v120, v122);
		v124 = sub_14012F720((__int64)v123, v127, a1, (__int64)(v128 + 81), 1, v215, v216, v128, &v220, 256i64);
	}
	*(_QWORD*)(a1 + 1200) = v124;
	(*(void(__fastcall**)(__int64, const wchar_t*))(*(_QWORD*)v124 + 80i64))(v124, L"S");
	*(_DWORD*)(*(_QWORD*)(a1 + 1200) + 704i64) = 5;
	*(_DWORD*)(*(_QWORD*)(a1 + 1200) + 676i64) = 0;
	sub_1400CCD40(*(__int64**)(a1 + 1200), L"Lock the slider to the saturtion component");
	v129 = HIDWORD(qword_140C3C4B8) + v119;
	v130 = HIDWORD(qword_140C3C4B8) + v120;
	v131 = qword_140C3C4B8 + v121;
	v132 = qword_140C3C4B8 + v122;
	v133 = sub_14018B280(1568i64, 0);
	v134 = 0i64;
	if (v133)
	{
		v224 = 0;
		v135 = v221;
		do
		{
			v136 = *(_DWORD*)((char*)&unk_140A14E90 + v134);
			*(__int32*)((char*)si128.m128i_i32 + v134) = 0;
			v134 += 4i64;
			*(_DWORD*)&v221[v134 + 28] = v136;
			*(_QWORD*)v135 = 0i64;
			v135 += 8;
		} while (v134 < 16);
		v137 = *(_QWORD*)(a1 + 32);
		v224 |= 0x300u;
		v138 = *(_QWORD**)(v137 + 2928);
		v222 = 0i64;
		si128.m128i_i64[0] = __PAIR64__(v129, v131);
		si128.m128i_i64[1] = __PAIR64__(v130, v132);
		v134 = sub_14012F720((__int64)v133, v137, a1, (__int64)(v138 + 81), 1, v215, v216, v138, &v220, 256i64);
	}
	*(_QWORD*)(a1 + 1208) = v134;
	(*(void(__fastcall**)(__int64, const wchar_t*))(*(_QWORD*)v134 + 80i64))(v134, L"B");
	*(_DWORD*)(*(_QWORD*)(a1 + 1208) + 704i64) = 5;
	*(_DWORD*)(*(_QWORD*)(a1 + 1208) + 676i64) = 0;
	sub_1400CCD40(*(__int64**)(a1 + 1208), L"Lock the slider to the brightness component");
	v139 = HIDWORD(qword_140C3C4B8) + v129;
	v140 = HIDWORD(qword_140C3C4B8) + v130;
	v141 = qword_140C3C4B8 + v131;
	v142 = qword_140C3C4B8 + v132;
	v143 = sub_14018B280(1568i64, 0);
	v144 = 0i64;
	if (v143)
	{
		v224 = 0;
		v145 = v221;
		do
		{
			v146 = *(_DWORD*)((char*)&unk_140A14E90 + v144);
			*(__int32*)((char*)si128.m128i_i32 + v144) = 0;
			v144 += 4i64;
			*(_DWORD*)&v221[v144 + 28] = v146;
			*(_QWORD*)v145 = 0i64;
			v145 += 8;
		} while (v144 < 16);
		v147 = *(_QWORD*)(a1 + 32);
		v224 |= 0x300u;
		v148 = *(_QWORD**)(v147 + 2928);
		v222 = 0i64;
		si128.m128i_i64[0] = __PAIR64__(v139, v141);
		si128.m128i_i64[1] = __PAIR64__(v140, v142);
		v144 = sub_14012F720((__int64)v143, v147, a1, (__int64)(v148 + 81), 1, v215, v216, v148, &v220, 256i64);
	}
	*(_QWORD*)(a1 + 1216) = v144;
	(*(void(__fastcall**)(__int64, const char*))(*(_QWORD*)v144 + 80i64))(v144, "A");
	*(_DWORD*)(*(_QWORD*)(a1 + 1216) + 704i64) = 5;
	*(_DWORD*)(*(_QWORD*)(a1 + 1216) + 676i64) = 0;
	sub_1400CCD40(*(__int64**)(a1 + 1216), L"Use the alpha channel");
	v149 = dword_140C3D4E8;
	v150 = dword_140C3D4EC;
	v151 = dword_140C3D4F0;
	v152 = dword_140C3D4F4;
	v153 = sub_14018B280(1152i64, 0);
	if (v153)
	{
		v224 = 0;
		v154 = v221;
		v155 = 0i64;
		do
		{
			v156 = *(_DWORD*)((char*)&unk_140A14E90 + v155 * 4);
			si128.m128i_i32[v155++] = 0;
			*(_DWORD*)&v221[v155 * 4 + 28] = v156;
			*(_QWORD*)v154 = 0i64;
			v154 += 8;
		} while (v155 < 4);
		v157 = *(_QWORD*)(a1 + 32);
		v224 |= 0x300u;
		v222 = 0i64;
		si128.m128i_i64[0] = __PAIR64__(v150, v149);
		si128.m128i_i64[1] = __PAIR64__(v152, v151);
		v158 = (_DWORD*)sub_140173180((__int64)v153, v157, a1, v217, &v220, 264i64);
	}
	else
	{
		v158 = 0i64;
	}
	*(_QWORD*)(a1 + 1240) = v158;
	v158[263] = 0;
	v158[264] = 1132396544;
	v158[262] = 0;
	v159 = HIDWORD(qword_140C3C4B8) + v150;
	v160 = HIDWORD(qword_140C3C4B8) + v152;
	v161 = qword_140C3C4B8 + v149;
	v162 = qword_140C3C4B8 + v151;
	v163 = sub_14018B280(1152i64, 0);
	if (v163)
	{
		v224 = 0;
		v164 = v221;
		v165 = 0i64;
		do
		{
			v166 = *(_DWORD*)((char*)&unk_140A14E90 + v165 * 4);
			si128.m128i_i32[v165++] = 0;
			*(_DWORD*)&v221[v165 * 4 + 28] = v166;
			*(_QWORD*)v164 = 0i64;
			v164 += 8;
		} while (v165 < 4);
		v167 = *(_QWORD*)(a1 + 32);
		v224 |= 0x300u;
		v222 = 0i64;
		si128.m128i_i64[0] = __PAIR64__(v159, v161);
		si128.m128i_i64[1] = __PAIR64__(v160, v162);
		v168 = (_DWORD*)sub_140173180((__int64)v163, v167, a1, v217, &v220, 264i64);
	}
	else
	{
		v168 = 0i64;
	}
	*(_QWORD*)(a1 + 1248) = v168;
	v168[263] = 0;
	v168[264] = 1132396544;
	v168[262] = 0;
	v169 = HIDWORD(qword_140C3C4B8) + v159;
	v170 = HIDWORD(qword_140C3C4B8) + v160;
	v171 = qword_140C3C4B8 + v161;
	v172 = qword_140C3C4B8 + v162;
	v173 = sub_14018B280(1152i64, 0);
	if (v173)
	{
		v224 = 0;
		v174 = v221;
		v175 = 0i64;
		do
		{
			v176 = *(_DWORD*)((char*)&unk_140A14E90 + v175 * 4);
			si128.m128i_i32[v175++] = 0;
			*(_DWORD*)&v221[v175 * 4 + 28] = v176;
			*(_QWORD*)v174 = 0i64;
			v174 += 8;
		} while (v175 < 4);
		v177 = *(_QWORD*)(a1 + 32);
		v224 |= 0x300u;
		v222 = 0i64;
		si128.m128i_i64[0] = __PAIR64__(v169, v171);
		si128.m128i_i64[1] = __PAIR64__(v170, v172);
		v178 = (_DWORD*)sub_140173180((__int64)v173, v177, a1, v217, &v220, 264i64);
	}
	else
	{
		v178 = 0i64;
	}
	*(_QWORD*)(a1 + 1256) = v178;
	v178[263] = 0;
	v178[264] = 1132396544;
	v178[262] = 0;
	v179 = HIDWORD(qword_140C3C4B8) + v169;
	v180 = HIDWORD(qword_140C3C4B8) + v170;
	v181 = qword_140C3C4B8 + v171;
	v182 = qword_140C3C4B8 + v172;
	v218.m128_u64[0] = __PAIR64__(v179, v181);
	v218.m128_u64[1] = __PAIR64__(v180, v182);
	v219 = sub_14018B280(1152i64, 0);
	if (v219)
	{
		v183 = *(_QWORD*)(a1 + 32);
		v184 = (_OWORD*)sub_1400C31A0((__int64)&v220, &v218);
		v185 = (_DWORD*)sub_140173180((__int64)v219, v183, a1, v217, v184, 264i64);
	}
	else
	{
		v185 = 0i64;
	}
	*(_QWORD*)(a1 + 1264) = v185;
	v185[263] = 0;
	v185[264] = 1135837184;
	v185[262] = 0;
	v186 = HIDWORD(qword_140C3C4B8) + v179;
	v187 = HIDWORD(qword_140C3C4B8) + v180;
	v188 = qword_140C3C4B8 + v181;
	v189 = qword_140C3C4B8 + v182;
	v218.m128_u64[0] = __PAIR64__(v186, v188);
	v218.m128_u64[1] = __PAIR64__(v187, v189);
	v219 = sub_14018B280(1152i64, 0);
	if (v219)
	{
		v190 = *(_QWORD*)(a1 + 32);
		v191 = (_OWORD*)sub_1400C31A0((__int64)&v220, &v218);
		v192 = (_DWORD*)sub_140173180((__int64)v219, v190, a1, v217, v191, 264i64);
	}
	else
	{
		v192 = 0i64;
	}
	*(_QWORD*)(a1 + 1272) = v192;
	v192[263] = 0;
	v192[264] = 1120403456;
	v192[262] = 1;
	v193 = HIDWORD(qword_140C3C4B8) + v186;
	v194 = HIDWORD(qword_140C3C4B8) + v187;
	v195 = qword_140C3C4B8 + v188;
	v196 = qword_140C3C4B8 + v189;
	v218.m128_u64[0] = __PAIR64__(v193, v195);
	v218.m128_u64[1] = __PAIR64__(v194, v196);
	v219 = sub_14018B280(1152i64, 0);
	if (v219)
	{
		v197 = *(_QWORD*)(a1 + 32);
		v198 = (_OWORD*)sub_1400C31A0((__int64)&v220, &v218);
		v199 = (_DWORD*)sub_140173180((__int64)v219, v197, a1, v217, v198, 264i64);
	}
	else
	{
		v199 = 0i64;
	}
	*(_QWORD*)(a1 + 1280) = v199;
	v199[263] = 0;
	v199[264] = 1120403456;
	v199[262] = 1;
	v218.m128_i32[1] = HIDWORD(qword_140C3C4B8) + v193;
	v218.m128_i32[0] = qword_140C3C4B8 + v195;
	v218.m128_i32[2] = qword_140C3C4B8 + v196;
	v218.m128_i32[3] = HIDWORD(qword_140C3C4B8) + v194;
	v200 = sub_14018B280(1152i64, 0);
	if (v200)
	{
		v201 = *(_QWORD*)(a1 + 32);
		v202 = (_OWORD*)sub_1400C31A0((__int64)&v220, &v218);
		v203 = v217;
		v204 = (_DWORD*)sub_140173180((__int64)v200, v201, a1, v217, v202, 264i64);
	}
	else
	{
		v203 = v217;
		v204 = 0i64;
	}
	*(_QWORD*)(a1 + 1288) = v204;
	v204[263] = 0;
	v204[264] = 1132396544;
	v204[262] = 1;
	v205 = sub_14018B280(1568i64, 0);
	if (v205)
	{
		v206 = *(_QWORD*)(a1 + 32);
		v207 = *(_QWORD*)(v206 + 2928);
		v208 = (_OWORD*)sub_1400C31A0((__int64)&v220, dword_140C3D4F8);
		v209 = sub_14012F720((__int64)v205, v206, a1, v207 + 648, 0, v215, v216, v203, v208, 256i64);
	}
	else
	{
		v209 = 0i64;
	}
	*(_QWORD*)(a1 + 1224) = v209;
	(*(void(__fastcall**)(__int64, const wchar_t*))(*(_QWORD*)v209 + 80i64))(v209, L"Ok");
	v210 = sub_14018B280(1568i64, 0);
	if (v210)
	{
		v211 = *(_QWORD*)(a1 + 32);
		v212 = *(_QWORD*)(v211 + 2928);
		v213 = (_OWORD*)sub_1400C31A0((__int64)&v220, dword_140C3D508);
		v9 = sub_14012F720((__int64)v210, v211, a1, v212 + 648, 0, v215, v216, v203, v213, 256i64);
	}
	*(_QWORD*)(a1 + 1232) = v9;
	(*(void(__fastcall**)(__int64, const wchar_t*))(*(_QWORD*)v9 + 80i64))(v9, L"Cancel");
	return a1;
}
// 1401256B0: variable 'v215' is possibly undefined
// 1401256B0: variable 'v216' is possibly undefined
// 1409D7CA4: using guessed type wchar_t aR_6[2];
// 1409D7CDC: using guessed type wchar_t aG_4[2];
// 1409D7CFC: using guessed type wchar_t aS_47[2];
// 1409D7D1C: using guessed type wchar_t aB_13[2];
// 1409D7D7C: using guessed type wchar_t aB_14[2];
// 1409D7D9C: using guessed type wchar_t asc_1409D7D9C[2];
// 1409D864C: using guessed type wchar_t aOk[3];
// 140A1F8F8: using guessed type wchar_t aDashedline[11];
// 140A1F910: using guessed type wchar_t aWhitefill_7[10];
// 140A1F928: using guessed type wchar_t aControl_0[8];
// 140A1F938: using guessed type wchar_t aWhitefill_8[10];
// 140A1F9D0: using guessed type wchar_t aLockTheSliderT[37];
// 140A1FA20: using guessed type wchar_t aLockTheSliderT_0[39];
// 140A1FA70: using guessed type wchar_t aWhitefill_9[10];
// 140A1FA88: using guessed type wchar_t aDashedline_0[11];
// 140A1FAA0: using guessed type wchar_t aWhitefill_10[10];
// 140A1FAB8: using guessed type wchar_t aWhitefill_11[10];
// 140A1FAD0: using guessed type wchar_t aLockTheSliderT_3[43];
// 140A1FB30: using guessed type wchar_t aLockTheSliderT_4[44];
// 140A1FBA0: using guessed type wchar_t aLockTheSliderT_1[38];
// 140A1FBF0: using guessed type wchar_t aLockTheSliderT_2[37];
// 140A1FC40: using guessed type wchar_t aUseTheAlphaCha[22];
// 140A1FC70: using guessed type wchar_t aCancel[7];
// 140B57900: using guessed type __int64 (__fastcall *off_140B57900[25])();
// 140B7A980: using guessed type __int128 xmmword_140B7A980;
// 140B7A990: using guessed type __int128 xmmword_140B7A990;
// 140B7A9A0: using guessed type __int128 xmmword_140B7A9A0;
// 140B7A9B0: using guessed type __int128 xmmword_140B7A9B0;
// 140B7A9C0: using guessed type __int128 xmmword_140B7A9C0;
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B690: using guessed type __int128 xmmword_140B7B690;
// 140C3C4B8: using guessed type __int64 qword_140C3C4B8;
// 140C3D4D8: using guessed type int dword_140C3D4D8;
// 140C3D4DC: using guessed type int dword_140C3D4DC;
// 140C3D4E0: using guessed type int dword_140C3D4E0;
// 140C3D4E4: using guessed type int dword_140C3D4E4;
// 140C3D4E8: using guessed type int dword_140C3D4E8;
// 140C3D4EC: using guessed type int dword_140C3D4EC;
// 140C3D4F0: using guessed type int dword_140C3D4F0;
// 140C3D4F4: using guessed type int dword_140C3D4F4;
// 140C3D4F8: using guessed type _DWORD dword_140C3D4F8[4];
// 140C3D508: using guessed type _DWORD dword_140C3D508[14];
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65670: using guessed type __int64 qword_140C65670;

