#include "../winhttp.h"

//----- (0000000140163D90) ----------------------------------------------------
__int64 __fastcall sub_140163D90(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, __int64 a5)
{
	__int64 v8; // rsi
	unsigned __int64 i; // rbx
	wchar_t* v10; // rdx
	__int64 v11; // rax
	wchar_t* v12; // rax
	char* v13; // rbx
	int j; // edi
	__int64 v15; // rcx
	int v16; // ebx
	int* v17; // rax
	__int64 v18; // rdi
	__int64 v19; // rax
	__m128i* v20; // rax
	__int64 v21; // rdx
	__int64 v22; // rax
	__m128i* v23; // rax
	__m128i si128; // xmm7
	__m128 v25; // xmm6
	unsigned int* v26; // rsi
	unsigned __int64 v27; // rbx
	__int64 v28; // r8
	__int64 v29; // rdx
	__int64 v30; // rcx
	int v31; // r9d
	unsigned int* v32; // rsi
	unsigned __int64 v33; // rbx
	__int64 v34; // r8
	__int64 v35; // rdx
	__int64 v36; // rcx
	int v37; // r9d
	unsigned int* v38; // r12
	unsigned __int64 v39; // rbx
	__int64 v40; // r8
	__int64 v41; // rdx
	__int64 v42; // rcx
	int v43; // r9d
	unsigned int* v44; // rsi
	unsigned __int64 v45; // rbx
	__int64 v46; // r8
	__int64 v47; // rdx
	__int64 v48; // rcx
	int v49; // r9d
	unsigned int* v50; // r15
	unsigned __int64 v51; // rbx
	__int64 v52; // r8
	__int64 v53; // rdx
	__int64 v54; // rcx
	int v55; // r9d
	unsigned int* v56; // rsi
	unsigned __int64 v57; // rbx
	__int64 v58; // r8
	__int64 v59; // rdx
	__int64 v60; // rcx
	int v61; // r9d
	unsigned int* v62; // rsi
	unsigned __int64 v63; // rbx
	__int64 v64; // r8
	__int64 v65; // rdx
	__int64 v66; // rcx
	int v67; // r9d
	unsigned int* v68; // r13
	unsigned __int64 v69; // rbx
	__int64 v70; // r8
	__int64 v71; // rdx
	__int64 v72; // rcx
	int v73; // r9d
	unsigned __int64 v74; // rbx
	__int64 v75; // r8
	__int64 v76; // rdx
	__int64 v77; // rcx
	int v78; // r9d
	unsigned __int64 v79; // rbx
	__int64 v80; // r8
	__int64 v81; // rdx
	__int64 v82; // rcx
	int v83; // r9d
	__int64 v84; // rdx
	__m128i v85; // xmm9
	unsigned int* v86; // rsi
	unsigned __int64 v87; // rbx
	__int64 v88; // r8
	__int64 v89; // rdx
	__int64 v90; // rcx
	int v91; // r9d
	__m128i v92; // xmm7
	unsigned int* v93; // rsi
	unsigned __int64 v94; // rbx
	__int64 v95; // r8
	__int64 v96; // rdx
	__int64 v97; // rcx
	int v98; // r9d
	__m128i v99; // xmm10
	unsigned __int64 v100; // rbx
	__int64 v101; // r8
	__int64 v102; // rdx
	__int64 v103; // rcx
	int v104; // r9d
	unsigned int* v105; // rsi
	unsigned __int64 v106; // rbx
	__int64 v107; // r8
	__int64 v108; // rdx
	__int64 v109; // rcx
	int v110; // r9d
	unsigned __int64 v111; // rbx
	__int64 v112; // r8
	__int64 v113; // rdx
	__int64 v114; // rcx
	int v115; // r9d
	__m128i v116; // xmm7
	unsigned int* v117; // rsi
	unsigned __int64 v118; // rbx
	__int64 v119; // r8
	__int64 v120; // rdx
	__int64 v121; // rcx
	int v122; // r9d
	unsigned __int64 v123; // rbx
	__int64 v124; // r8
	__int64 v125; // rdx
	__int64 v126; // rcx
	int v127; // r9d
	__int64 v128; // rdx
	__int64 v129; // rcx
	int v130; // r9d
	unsigned int* v131; // rbx
	unsigned __int64 v132; // rax
	__m128* v133; // rax
	__m128i v134; // xmm1
	__m128i v135; // xmm1
	__int64 v136; // r8
	unsigned __int64 v137; // rax
	__int64 v138; // rdx
	__int64 v139; // rcx
	int v140; // r9d
	unsigned __int64 v141; // rax
	__m128* v142; // rax
	__m128i v143; // xmm1
	__m128i v144; // xmm1
	unsigned int* v145; // rbx
	unsigned __int64 v146; // rax
	__int64 v147; // r8
	__int64 v148; // rdx
	__int64 v149; // rcx
	int v150; // r9d
	unsigned __int64 v151; // rax
	__m128* v152; // rax
	__m128i v153; // xmm1
	__m128i v154; // xmm1
	unsigned int* v155; // rbx
	unsigned __int64 v156; // rax
	__int64 v157; // r8
	__int64 v158; // rdx
	__int64 v159; // rcx
	int v160; // r9d
	unsigned __int64 v161; // rax
	__m128* v162; // rax
	__m128i v163; // xmm1
	__m128i v164; // xmm1
	unsigned int* v165; // rbx
	unsigned __int64 v166; // rax
	__int64 v167; // r8
	__int64 v168; // rdx
	__int64 v169; // rcx
	int v170; // r9d
	unsigned int* v171; // rbx
	unsigned __int64 v172; // rax
	__m128* v173; // rax
	__m128i v174; // xmm1
	__m128i v175; // xmm1
	unsigned int* v176; // rsi
	unsigned __int64 v177; // rax
	__int64 v178; // r8
	__int64 v179; // rdx
	__int64 v180; // rcx
	int v181; // r9d
	unsigned int* v182; // rsi
	unsigned __int64 v183; // rax
	__m128* v184; // rax
	__m128i v185; // xmm1
	__m128i v186; // xmm1
	unsigned int* v187; // rbx
	unsigned __int64 v188; // rax
	__int64 v189; // r8
	__int64 v190; // rdx
	__int64 v191; // rcx
	int v192; // r9d
	unsigned int* v193; // rsi
	unsigned __int64 v194; // rax
	__m128* v195; // rax
	__m128i v196; // xmm1
	__m128i v197; // xmm1
	unsigned int* v198; // rbx
	unsigned __int64 v199; // rax
	__int64 v200; // r8
	__int64 v201; // rdx
	__int64 v202; // rcx
	int v203; // r9d
	unsigned int* v204; // rbx
	unsigned __int64 v205; // rax
	__m128* v206; // rax
	__m128i v207; // xmm1
	__m128i v208; // xmm1
	unsigned int* v209; // rsi
	unsigned __int64 v210; // rax
	__int64 v211; // r8
	__int64 v212; // rdx
	__int64 v213; // rcx
	int v214; // r9d
	unsigned __int64 v215; // rax
	__m128* v216; // rax
	__m128i v217; // xmm1
	__m128i v218; // xmm1
	unsigned int* v219; // rbx
	unsigned __int64 v220; // rax
	__int64 v221; // r8
	__int64 v222; // rdx
	__int64 v223; // rcx
	int v224; // r9d
	unsigned int* v225; // rbx
	unsigned __int64 v226; // rax
	__m128* v227; // rax
	__m128i v228; // xmm1
	__m128i v229; // xmm1
	unsigned int* v230; // rsi
	unsigned __int64 v231; // rax
	__int64 v232; // r8
	__int64 v233; // rdx
	__int64 v234; // rcx
	int v235; // r9d
	__int64 v236; // rax
	_WORD* v237; // rax
	__int64 v238; // rax
	_WORD* v239; // rax
	__int64 v240; // rax
	int* v241; // rax
	__int64 v242; // rax
	_WORD* v243; // rax
	__int64 v244; // rax
	_WORD* v245; // rax
	__int64 v246; // rax
	_WORD* v247; // rax
	__int64 v248; // rax
	_WORD* v249; // rax
	__int64* v250; // rbx
	int k; // edi
	unsigned int v252; // edx
	__int64 v253; // rcx
	unsigned int v255; // [rsp+58h] [rbp-B0h] BYREF
	bool v256; // [rsp+5Ch] [rbp-ACh] BYREF
	__m128 v257; // [rsp+68h] [rbp-A0h] BYREF
	int v258; // [rsp+78h] [rbp-90h] BYREF
	int v259; // [rsp+7Ch] [rbp-8Ch] BYREF
	int v260; // [rsp+80h] [rbp-88h] BYREF
	__int64 v261; // [rsp+88h] [rbp-80h]
	__int128 v262; // [rsp+98h] [rbp-70h] BYREF
	__int128 v263; // [rsp+A8h] [rbp-60h]
	__int128 v264; // [rsp+B8h] [rbp-50h]
	__int128 v265; // [rsp+C8h] [rbp-40h]
	__int64 v266; // [rsp+D8h] [rbp-30h]
	char v267[2816]; // [rsp+F8h] [rbp-10h] BYREF
	__int128 v268; // [rsp+C20h] [rbp+B18h] BYREF

	v261 = a4;
	sub_1400D45E0((__int64)&v262, a1, a2, a5, 0i64);
	v8 = 0i64;
	for (i = 0i64; i < 9; ++i)
	{
		v10 = off_140A32F40[i];
		v256 = 0;
		v11 = sub_1401A6B80(a5, v10);
		if (v11)
		{
			v12 = (wchar_t*)sub_1401A4F40(v11 + 32);
			sub_1401A52E0(v12, &v256);
			if (v256)
				v8 |= 1i64 << i;
		}
	}
	v13 = v267;
	for (j = 31; j >= 0; --j)
	{
		sub_14015CBE0((__int64)v13);
		v13 += 88;
	}
	v16 = sub_1401635C0(v15, a5, (__int64)v267);
	v17 = sub_14018B280(2240i64, 0);
	if (v17)
		v18 = sub_14015D7F0((__int64)v17, a1, a2, (__int64)v267, v16, a3, &v262, v261, v8);
	else
		v18 = 0i64;
	v261 = v18;
	v19 = sub_1401A6B80(a5, L"HeaderBG");
	if (v19)
	{
		v20 = (__m128i*)sub_1401A4F40(v19 + 32);
		if (v20)
		{
			v21 = *(_QWORD*)(v18 + 32);
			v263 = 0i64;
			v264 = 0i64;
			v265 = 0i64;
			*(_QWORD*)&v262 = 0i64;
			BYTE8(v262) = 0;
			v266 = 0i64;
			sub_14010B330(&v262, v21, v20, 0i64);
			sub_1400C3730(v18 + 1208, (__int64)&v262);
		}
	}
	v22 = sub_1401A6B80(a5, L"CellBGBase");
	if (v22)
	{
		v23 = (__m128i*)sub_1401A4F40(v22 + 32);
		if (v23)
		{
			sub_14015EF90(v18, v23);
			si128 = _mm_load_si128((const __m128i*) & xmmword_140B7B6F0);
			v25 = 0i64;
			v257 = _mm_mul_ps(
				_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(_mm_unpacklo_epi8(si128, (__m128i)0i64), (__m128i)0i64), 198)),
				(__m128)xmmword_140B7AB70);
			v26 = (unsigned int*)(v18 + 2188);
			v27 = (unsigned int)sub_140141F10(qword_140C63678, &v257);
			if ((unsigned int*)(v18 + 2188) == &v255)
			{
				v28 = qword_140C63678;
			}
			else
			{
				sub_1401429A0(qword_140C63678, *v26);
				v28 = qword_140C63678;
				*v26 = v27;
				if (v27 < *(_QWORD*)(v28 + 48))
				{
					v29 = *(_QWORD*)(v28 + 40);
					v30 = 32i64 * (unsigned int)v27;
					v31 = *(_DWORD*)(v29 + v30 + 16);
					if ((unsigned int)(v31 - 1) <= 0xFFFFFFFD)
						*(_DWORD*)(v29 + v30 + 16) = v31 + 1;
				}
			}
			sub_1401429A0(v28, v27);
			v257 = _mm_mul_ps(
				_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(_mm_unpacklo_epi8(si128, (__m128i)0i64), (__m128i)0i64), 198)),
				(__m128)xmmword_140B7AB70);
			v32 = (unsigned int*)(v18 + 2208);
			v33 = (unsigned int)sub_140141F10(qword_140C63678, &v257);
			if ((unsigned int*)(v18 + 2208) == &v255)
			{
				v34 = qword_140C63678;
			}
			else
			{
				sub_1401429A0(qword_140C63678, *v32);
				v34 = qword_140C63678;
				*v32 = v33;
				if (v33 < *(_QWORD*)(v34 + 48))
				{
					v35 = *(_QWORD*)(v34 + 40);
					v36 = 32i64 * (unsigned int)v33;
					v37 = *(_DWORD*)(v35 + v36 + 16);
					if ((unsigned int)(v37 - 1) <= 0xFFFFFFFD)
						*(_DWORD*)(v35 + v36 + 16) = v37 + 1;
				}
			}
			sub_1401429A0(v34, v33);
			v257 = _mm_mul_ps(
				_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(_mm_unpacklo_epi8(si128, (__m128i)0i64), (__m128i)0i64), 198)),
				(__m128)xmmword_140B7AB70);
			v38 = (unsigned int*)(v18 + 2196);
			v39 = (unsigned int)sub_140141F10(qword_140C63678, &v257);
			if ((unsigned int*)(v18 + 2196) == &v255)
			{
				v40 = qword_140C63678;
			}
			else
			{
				sub_1401429A0(qword_140C63678, *v38);
				v40 = qword_140C63678;
				*v38 = v39;
				if (v39 < *(_QWORD*)(v40 + 48))
				{
					v41 = *(_QWORD*)(v40 + 40);
					v42 = 32i64 * (unsigned int)v39;
					v43 = *(_DWORD*)(v41 + v42 + 16);
					if ((unsigned int)(v43 - 1) <= 0xFFFFFFFD)
						*(_DWORD*)(v41 + v42 + 16) = v43 + 1;
				}
			}
			sub_1401429A0(v40, v39);
			v257 = _mm_mul_ps(
				_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(_mm_unpacklo_epi8(si128, (__m128i)0i64), (__m128i)0i64), 198)),
				(__m128)xmmword_140B7AB70);
			v44 = (unsigned int*)(v18 + 2212);
			v45 = (unsigned int)sub_140141F10(qword_140C63678, &v257);
			if ((unsigned int*)(v18 + 2212) == &v255)
			{
				v46 = qword_140C63678;
			}
			else
			{
				sub_1401429A0(qword_140C63678, *v44);
				v46 = qword_140C63678;
				*v44 = v45;
				if (v45 < *(_QWORD*)(v46 + 48))
				{
					v47 = *(_QWORD*)(v46 + 40);
					v48 = 32i64 * (unsigned int)v45;
					v49 = *(_DWORD*)(v47 + v48 + 16);
					if ((unsigned int)(v49 - 1) <= 0xFFFFFFFD)
						*(_DWORD*)(v47 + v48 + 16) = v49 + 1;
				}
			}
			sub_1401429A0(v46, v45);
			v257 = _mm_mul_ps(
				_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(_mm_unpacklo_epi8(si128, (__m128i)0i64), (__m128i)0i64), 198)),
				(__m128)xmmword_140B7AB70);
			v50 = (unsigned int*)(v18 + 2192);
			v51 = (unsigned int)sub_140141F10(qword_140C63678, &v257);
			if ((unsigned int*)(v18 + 2192) == &v255)
			{
				v52 = qword_140C63678;
			}
			else
			{
				sub_1401429A0(qword_140C63678, *v50);
				v52 = qword_140C63678;
				*v50 = v51;
				if (v51 < *(_QWORD*)(v52 + 48))
				{
					v53 = *(_QWORD*)(v52 + 40);
					v54 = 32i64 * (unsigned int)v51;
					v55 = *(_DWORD*)(v53 + v54 + 16);
					if ((unsigned int)(v55 - 1) <= 0xFFFFFFFD)
						*(_DWORD*)(v53 + v54 + 16) = v55 + 1;
				}
			}
			sub_1401429A0(v52, v51);
			v257 = _mm_mul_ps(
				_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(_mm_unpacklo_epi8(si128, (__m128i)0i64), (__m128i)0i64), 198)),
				(__m128)xmmword_140B7AB70);
			v56 = (unsigned int*)(v18 + 2216);
			v57 = (unsigned int)sub_140141F10(qword_140C63678, &v257);
			if ((unsigned int*)(v18 + 2216) == &v255)
			{
				v58 = qword_140C63678;
			}
			else
			{
				sub_1401429A0(qword_140C63678, *v56);
				v58 = qword_140C63678;
				*v56 = v57;
				if (v57 < *(_QWORD*)(v58 + 48))
				{
					v59 = *(_QWORD*)(v58 + 40);
					v60 = 32i64 * (unsigned int)v57;
					v61 = *(_DWORD*)(v60 + v59 + 16);
					if ((unsigned int)(v61 - 1) <= 0xFFFFFFFD)
						*(_DWORD*)(v60 + v59 + 16) = v61 + 1;
				}
			}
			sub_1401429A0(v58, v57);
			v257 = _mm_mul_ps(
				_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(_mm_unpacklo_epi8(si128, (__m128i)0i64), (__m128i)0i64), 198)),
				(__m128)xmmword_140B7AB70);
			v62 = (unsigned int*)(v18 + 2200);
			v63 = (unsigned int)sub_140141F10(qword_140C63678, &v257);
			if ((unsigned int*)(v18 + 2200) == &v255)
			{
				v64 = qword_140C63678;
			}
			else
			{
				sub_1401429A0(qword_140C63678, *v62);
				v64 = qword_140C63678;
				*v62 = v63;
				if (v63 < *(_QWORD*)(v64 + 48))
				{
					v65 = *(_QWORD*)(v64 + 40);
					v66 = 32i64 * (unsigned int)v63;
					v67 = *(_DWORD*)(v66 + v65 + 16);
					if ((unsigned int)(v67 - 1) <= 0xFFFFFFFD)
						*(_DWORD*)(v66 + v65 + 16) = v67 + 1;
				}
			}
			sub_1401429A0(v64, v63);
			v257 = _mm_mul_ps(
				_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(_mm_unpacklo_epi8(si128, (__m128i)0i64), (__m128i)0i64), 198)),
				(__m128)xmmword_140B7AB70);
			v68 = (unsigned int*)(v18 + 2220);
			v69 = (unsigned int)sub_140141F10(qword_140C63678, &v257);
			if ((unsigned int*)(v18 + 2220) == &v255)
			{
				v70 = qword_140C63678;
			}
			else
			{
				sub_1401429A0(qword_140C63678, *v68);
				v70 = qword_140C63678;
				*v68 = v69;
				if (v69 < *(_QWORD*)(v70 + 48))
				{
					v71 = *(_QWORD*)(v70 + 40);
					v72 = 32i64 * (unsigned int)v69;
					v73 = *(_DWORD*)(v72 + v71 + 16);
					if ((unsigned int)(v73 - 1) <= 0xFFFFFFFD)
						*(_DWORD*)(v72 + v71 + 16) = v73 + 1;
				}
			}
			sub_1401429A0(v70, v69);
			v257 = _mm_mul_ps(
				_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(_mm_unpacklo_epi8(si128, (__m128i)0i64), (__m128i)0i64), 198)),
				(__m128)xmmword_140B7AB70);
			v74 = (unsigned int)sub_140141F10(qword_140C63678, &v257);
			if ((unsigned int*)(v18 + 2204) == &v255)
			{
				v75 = qword_140C63678;
			}
			else
			{
				sub_1401429A0(qword_140C63678, *(_DWORD*)(v18 + 2204));
				v75 = qword_140C63678;
				*(_DWORD*)(v18 + 2204) = v74;
				if (v74 < *(_QWORD*)(v75 + 48))
				{
					v76 = *(_QWORD*)(v75 + 40);
					v77 = 32i64 * (unsigned int)v74;
					v78 = *(_DWORD*)(v77 + v76 + 16);
					if ((unsigned int)(v78 - 1) <= 0xFFFFFFFD)
						*(_DWORD*)(v77 + v76 + 16) = v78 + 1;
				}
			}
			sub_1401429A0(v75, v74);
			v257 = _mm_mul_ps(
				_mm_cvtepi32_ps(
					_mm_shuffle_epi32(
						_mm_unpacklo_epi16(
							_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B6A0), (__m128i)0i64),
							(__m128i)0i64),
						198)),
				(__m128)xmmword_140B7AB70);
			v79 = (unsigned int)sub_140141F10(qword_140C63678, &v257);
			if ((unsigned int*)(v18 + 2224) != &v255)
			{
				sub_1401429A0(qword_140C63678, *(_DWORD*)(v18 + 2224));
				v80 = qword_140C63678;
				*(_DWORD*)(v18 + 2224) = v79;
				if (v79 < *(_QWORD*)(v80 + 48))
				{
					v81 = *(_QWORD*)(v80 + 40);
					v82 = 32i64 * (unsigned int)v79;
					v83 = *(_DWORD*)(v82 + v81 + 16);
					if ((unsigned int)(v83 - 1) <= 0xFFFFFFFD)
						*(_DWORD*)(v82 + v81 + 16) = v83 + 1;
				}
				goto LABEL_105;
			}
		LABEL_104:
			v80 = qword_140C63678;
			goto LABEL_105;
		}
	}
	v84 = *(_QWORD*)(v18 + 32);
	v263 = 0i64;
	v264 = 0i64;
	v265 = 0i64;
	*(_QWORD*)&v262 = 0i64;
	BYTE8(v262) = 0;
	v266 = 0i64;
	sub_14010B330(&v262, v84, (__m128i*)L"WhiteFill", 0i64);
	sub_1400C3730(v18 + 1624, (__int64)&v262);
	v85 = _mm_load_si128((const __m128i*) & xmmword_140B7B610);
	v25 = 0i64;
	v257 = _mm_mul_ps(
		_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(_mm_unpacklo_epi8(v85, (__m128i)0i64), (__m128i)0i64), 198)),
		(__m128)xmmword_140B7AB70);
	v86 = (unsigned int*)(v18 + 2188);
	v87 = (unsigned int)sub_140141F10(qword_140C63678, &v257);
	if ((unsigned int*)(v18 + 2188) == &v255)
	{
		v88 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v86);
		v88 = qword_140C63678;
		*v86 = v87;
		if (v87 < *(_QWORD*)(v88 + 48))
		{
			v89 = *(_QWORD*)(v88 + 40);
			v90 = 32i64 * (unsigned int)v87;
			v91 = *(_DWORD*)(v90 + v89 + 16);
			if ((unsigned int)(v91 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v90 + v89 + 16) = v91 + 1;
		}
	}
	sub_1401429A0(v88, v87);
	v92 = _mm_load_si128((const __m128i*) & xmmword_140B7B6F0);
	v257 = _mm_mul_ps(
		_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(_mm_unpacklo_epi8(v92, (__m128i)0i64), (__m128i)0i64), 198)),
		(__m128)xmmword_140B7AB70);
	v93 = (unsigned int*)(v18 + 2208);
	v94 = (unsigned int)sub_140141F10(qword_140C63678, &v257);
	if ((unsigned int*)(v18 + 2208) == &v255)
	{
		v95 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v93);
		v95 = qword_140C63678;
		*v93 = v94;
		if (v94 < *(_QWORD*)(v95 + 48))
		{
			v96 = *(_QWORD*)(v95 + 40);
			v97 = 32i64 * (unsigned int)v94;
			v98 = *(_DWORD*)(v97 + v96 + 16);
			if ((unsigned int)(v98 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v97 + v96 + 16) = v98 + 1;
		}
	}
	sub_1401429A0(v95, v94);
	v99 = _mm_load_si128((const __m128i*) & xmmword_140B7B6C0);
	v257 = _mm_mul_ps(
		_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(_mm_unpacklo_epi8(v99, (__m128i)0i64), (__m128i)0i64), 198)),
		(__m128)xmmword_140B7AB70);
	v38 = (unsigned int*)(v18 + 2196);
	v100 = (unsigned int)sub_140141F10(qword_140C63678, &v257);
	if ((unsigned int*)(v18 + 2196) == &v255)
	{
		v101 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v38);
		v101 = qword_140C63678;
		*v38 = v100;
		if (v100 < *(_QWORD*)(v101 + 48))
		{
			v102 = *(_QWORD*)(v101 + 40);
			v103 = 32i64 * (unsigned int)v100;
			v104 = *(_DWORD*)(v103 + v102 + 16);
			if ((unsigned int)(v104 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v103 + v102 + 16) = v104 + 1;
		}
	}
	sub_1401429A0(v101, v100);
	v257 = _mm_mul_ps(
		_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(_mm_unpacklo_epi8(v92, (__m128i)0i64), (__m128i)0i64), 198)),
		(__m128)xmmword_140B7AB70);
	v105 = (unsigned int*)(v18 + 2212);
	v106 = (unsigned int)sub_140141F10(qword_140C63678, &v257);
	if ((unsigned int*)(v18 + 2212) == &v255)
	{
		v107 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v105);
		v107 = qword_140C63678;
		*v105 = v106;
		if (v106 < *(_QWORD*)(v107 + 48))
		{
			v108 = *(_QWORD*)(v107 + 40);
			v109 = 32i64 * (unsigned int)v106;
			v110 = *(_DWORD*)(v109 + v108 + 16);
			if ((unsigned int)(v110 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v109 + v108 + 16) = v110 + 1;
		}
	}
	sub_1401429A0(v107, v106);
	v257 = _mm_mul_ps(
		_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(_mm_unpacklo_epi8(v85, (__m128i)0i64), (__m128i)0i64), 198)),
		(__m128)xmmword_140B7AB70);
	v50 = (unsigned int*)(v18 + 2192);
	v111 = (unsigned int)sub_140141F10(qword_140C63678, &v257);
	if ((unsigned int*)(v18 + 2192) == &v255)
	{
		v112 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v50);
		v112 = qword_140C63678;
		*v50 = v111;
		if (v111 < *(_QWORD*)(v112 + 48))
		{
			v113 = *(_QWORD*)(v112 + 40);
			v114 = 32i64 * (unsigned int)v111;
			v115 = *(_DWORD*)(v114 + v113 + 16);
			if ((unsigned int)(v115 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v114 + v113 + 16) = v115 + 1;
		}
	}
	sub_1401429A0(v112, v111);
	v116 = _mm_load_si128((const __m128i*) & xmmword_140B7B6E0);
	v257 = _mm_mul_ps(
		_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(_mm_unpacklo_epi8(v116, (__m128i)0i64), (__m128i)0i64), 198)),
		(__m128)xmmword_140B7AB70);
	v117 = (unsigned int*)(v18 + 2216);
	v118 = (unsigned int)sub_140141F10(qword_140C63678, &v257);
	if ((unsigned int*)(v18 + 2216) == &v255)
	{
		v119 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v117);
		v119 = qword_140C63678;
		*v117 = v118;
		if (v118 < *(_QWORD*)(v119 + 48))
		{
			v120 = *(_QWORD*)(v119 + 40);
			v121 = 32i64 * (unsigned int)v118;
			v122 = *(_DWORD*)(v121 + v120 + 16);
			if ((unsigned int)(v122 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v121 + v120 + 16) = v122 + 1;
		}
	}
	sub_1401429A0(v119, v118);
	v257 = _mm_mul_ps(
		_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(_mm_unpacklo_epi8(v99, (__m128i)0i64), (__m128i)0i64), 198)),
		(__m128)xmmword_140B7AB70);
	v123 = (unsigned int)sub_140141F10(qword_140C63678, &v257);
	v62 = (unsigned int*)(v18 + 2200);
	if ((unsigned int*)(v18 + 2200) == &v255)
	{
		v124 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v62);
		v124 = qword_140C63678;
		*v62 = v123;
		if (v123 < *(_QWORD*)(v124 + 48))
		{
			v125 = *(_QWORD*)(v124 + 40);
			v126 = 32i64 * (unsigned int)v123;
			v127 = *(_DWORD*)(v126 + v125 + 16);
			if ((unsigned int)(v127 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v126 + v125 + 16) = v127 + 1;
		}
	}
	sub_1401429A0(v124, v123);
	v257 = _mm_mul_ps(
		_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(_mm_unpacklo_epi8(v116, (__m128i)0i64), (__m128i)0i64), 198)),
		(__m128)xmmword_140B7AB70);
	v68 = (unsigned int*)(v18 + 2220);
	v79 = (unsigned int)sub_140141F10(qword_140C63678, &v257);
	if ((unsigned int*)(v18 + 2220) == &v255)
		goto LABEL_104;
	sub_1401429A0(qword_140C63678, *v68);
	v80 = qword_140C63678;
	*v68 = v79;
	if (v79 < *(_QWORD*)(v80 + 48))
	{
		v128 = *(_QWORD*)(v80 + 40);
		v129 = 32i64 * (unsigned int)v79;
		v130 = *(_DWORD*)(v129 + v128 + 16);
		if ((unsigned int)(v130 - 1) <= 0xFFFFFFFD)
			*(_DWORD*)(v129 + v128 + 16) = v130 + 1;
	}
LABEL_105:
	sub_1401429A0(v80, v79);
	v131 = (unsigned int*)(v18 + 2188);
	v132 = *(unsigned int*)(v18 + 2188);
	if (v132 >= *(_QWORD*)(qword_140C63678 + 48))
		v133 = *(__m128**)(qword_140C63678 + 40);
	else
		v133 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v132);
	v134 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(_mm_min_ps(_mm_max_ps(v25, *v133), (__m128)xmmword_140B7B240), (__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v135 = _mm_packus_epi16(v134, v134);
	v257.m128_u64[0] = (unsigned __int64)sub_1400F66F0(
		&v255,
		a5,
		L"CellBGNormalColor",
		_mm_cvtsi128_si32(_mm_packus_epi16(v135, v135)));
	if (v131 == (unsigned int*)v257.m128_u64[0])
	{
		v136 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v131);
		v136 = qword_140C63678;
		v137 = *(unsigned int*)v257.m128_u64[0];
		*v131 = v137;
		if (v137 < *(_QWORD*)(v136 + 48))
		{
			v138 = *(_QWORD*)(v136 + 40);
			v139 = 32i64 * (unsigned int)v137;
			v140 = *(_DWORD*)(v139 + v138 + 16);
			if ((unsigned int)(v140 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v139 + v138 + 16) = v140 + 1;
		}
	}
	sub_1401429A0(v136, v255);
	v141 = *v38;
	if (v141 >= *(_QWORD*)(qword_140C63678 + 48))
		v142 = *(__m128**)(qword_140C63678 + 40);
	else
		v142 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v141);
	v143 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(_mm_min_ps(_mm_max_ps(v25, *v142), (__m128)xmmword_140B7B240), (__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v144 = _mm_packus_epi16(v143, v143);
	v145 = sub_1400F66F0(&v255, a5, L"CellBGSelectedColor", _mm_cvtsi128_si32(_mm_packus_epi16(v144, v144)));
	if (v38 == v145)
	{
		v147 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v38);
		v146 = *v145;
		v147 = qword_140C63678;
		*v38 = v146;
		if (v146 < *(_QWORD*)(v147 + 48))
		{
			v148 = *(_QWORD*)(v147 + 40);
			v149 = 32i64 * (unsigned int)v146;
			v150 = *(_DWORD*)(v149 + v148 + 16);
			if ((unsigned int)(v150 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v149 + v148 + 16) = v150 + 1;
		}
	}
	sub_1401429A0(v147, v255);
	v151 = *v50;
	if (v151 >= *(_QWORD*)(qword_140C63678 + 48))
		v152 = *(__m128**)(qword_140C63678 + 40);
	else
		v152 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v151);
	v153 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(_mm_min_ps(_mm_max_ps(v25, *v152), (__m128)xmmword_140B7B240), (__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v154 = _mm_packus_epi16(v153, v153);
	v155 = sub_1400F66F0(&v255, a5, L"CellBGNormalFocusColor", _mm_cvtsi128_si32(_mm_packus_epi16(v154, v154)));
	if (v50 == v155)
	{
		v157 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v50);
		v156 = *v155;
		v157 = qword_140C63678;
		*v50 = v156;
		if (v156 < *(_QWORD*)(v157 + 48))
		{
			v158 = *(_QWORD*)(v157 + 40);
			v159 = 32i64 * (unsigned int)v156;
			v160 = *(_DWORD*)(v158 + v159 + 16);
			if ((unsigned int)(v160 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v158 + v159 + 16) = v160 + 1;
		}
	}
	sub_1401429A0(v157, v255);
	v161 = *v62;
	if (v161 >= *(_QWORD*)(qword_140C63678 + 48))
		v162 = *(__m128**)(qword_140C63678 + 40);
	else
		v162 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v161);
	v163 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(_mm_min_ps(_mm_max_ps(v25, *v162), (__m128)xmmword_140B7B240), (__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v164 = _mm_packus_epi16(v163, v163);
	v165 = sub_1400F66F0(&v255, a5, L"CellBGSelectedFocusColor", _mm_cvtsi128_si32(_mm_packus_epi16(v164, v164)));
	if (v62 == v165)
	{
		v167 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v62);
		v166 = *v165;
		v167 = qword_140C63678;
		*v62 = v166;
		if (v166 < *(_QWORD*)(v167 + 48))
		{
			v168 = *(_QWORD*)(v167 + 40);
			v169 = 32i64 * (unsigned int)v166;
			v170 = *(_DWORD*)(v168 + v169 + 16);
			if ((unsigned int)(v170 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v168 + v169 + 16) = v170 + 1;
		}
	}
	sub_1401429A0(v167, v255);
	v171 = (unsigned int*)(v18 + 2204);
	v172 = *(unsigned int*)(v18 + 2204);
	if (v172 >= *(_QWORD*)(qword_140C63678 + 48))
		v173 = *(__m128**)(qword_140C63678 + 40);
	else
		v173 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v172);
	v174 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(_mm_min_ps(_mm_max_ps(v25, *v173), (__m128)xmmword_140B7B240), (__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v175 = _mm_packus_epi16(v174, v174);
	v176 = sub_1400F66F0(&v255, a5, L"CellBGDisabledColor", _mm_cvtsi128_si32(_mm_packus_epi16(v175, v175)));
	if (v171 == v176)
	{
		v178 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v171);
		v177 = *v176;
		v178 = qword_140C63678;
		*v171 = v177;
		if (v177 < *(_QWORD*)(v178 + 48))
		{
			v179 = *(_QWORD*)(v178 + 40);
			v180 = 32i64 * (unsigned int)v177;
			v181 = *(_DWORD*)(v179 + v180 + 16);
			if ((unsigned int)(v181 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v179 + v180 + 16) = v181 + 1;
		}
	}
	sub_1401429A0(v178, v255);
	v182 = (unsigned int*)(v18 + 2208);
	v183 = *(unsigned int*)(v18 + 2208);
	if (v183 >= *(_QWORD*)(qword_140C63678 + 48))
		v184 = *(__m128**)(qword_140C63678 + 40);
	else
		v184 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v183);
	v185 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(_mm_min_ps(_mm_max_ps(v25, *v184), (__m128)xmmword_140B7B240), (__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v186 = _mm_packus_epi16(v185, v185);
	v187 = sub_1400F66F0(&v255, a5, L"TextNormalColor", _mm_cvtsi128_si32(_mm_packus_epi16(v186, v186)));
	if (v182 == v187)
	{
		v189 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v182);
		v188 = *v187;
		v189 = qword_140C63678;
		*v182 = v188;
		if (v188 < *(_QWORD*)(v189 + 48))
		{
			v190 = *(_QWORD*)(v189 + 40);
			v191 = 32i64 * (unsigned int)v188;
			v192 = *(_DWORD*)(v190 + v191 + 16);
			if ((unsigned int)(v192 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v190 + v191 + 16) = v192 + 1;
		}
	}
	sub_1401429A0(v189, v255);
	v193 = (unsigned int*)(v18 + 2212);
	v194 = *(unsigned int*)(v18 + 2212);
	if (v194 >= *(_QWORD*)(qword_140C63678 + 48))
		v195 = *(__m128**)(qword_140C63678 + 40);
	else
		v195 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v194);
	v196 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(_mm_min_ps(_mm_max_ps(v25, *v195), (__m128)xmmword_140B7B240), (__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v197 = _mm_packus_epi16(v196, v196);
	v198 = sub_1400F66F0(&v255, a5, L"TextSelectedColor", _mm_cvtsi128_si32(_mm_packus_epi16(v197, v197)));
	if (v193 == v198)
	{
		v200 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v193);
		v199 = *v198;
		v200 = qword_140C63678;
		*v193 = v199;
		if (v199 < *(_QWORD*)(v200 + 48))
		{
			v201 = *(_QWORD*)(v200 + 40);
			v202 = 32i64 * (unsigned int)v199;
			v203 = *(_DWORD*)(v201 + v202 + 16);
			if ((unsigned int)(v203 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v201 + v202 + 16) = v203 + 1;
		}
	}
	sub_1401429A0(v200, v255);
	v204 = (unsigned int*)(v18 + 2216);
	v205 = *(unsigned int*)(v18 + 2216);
	if (v205 >= *(_QWORD*)(qword_140C63678 + 48))
		v206 = *(__m128**)(qword_140C63678 + 40);
	else
		v206 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v205);
	v207 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(_mm_min_ps(_mm_max_ps(v25, *v206), (__m128)xmmword_140B7B240), (__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v208 = _mm_packus_epi16(v207, v207);
	v209 = sub_1400F66F0(&v255, a5, L"TextNormalFocusColor", _mm_cvtsi128_si32(_mm_packus_epi16(v208, v208)));
	if (v204 == v209)
	{
		v211 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v204);
		v210 = *v209;
		v211 = qword_140C63678;
		*v204 = v210;
		if (v210 < *(_QWORD*)(v211 + 48))
		{
			v212 = *(_QWORD*)(v211 + 40);
			v213 = 32i64 * (unsigned int)v210;
			v214 = *(_DWORD*)(v212 + v213 + 16);
			if ((unsigned int)(v214 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v212 + v213 + 16) = v214 + 1;
		}
	}
	sub_1401429A0(v211, v255);
	v215 = *v68;
	if (v215 >= *(_QWORD*)(qword_140C63678 + 48))
		v216 = *(__m128**)(qword_140C63678 + 40);
	else
		v216 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v215);
	v217 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(_mm_min_ps(_mm_max_ps(v25, *v216), (__m128)xmmword_140B7B240), (__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v218 = _mm_packus_epi16(v217, v217);
	v219 = sub_1400F66F0(&v255, a5, L"TextSelectedFocusColor", _mm_cvtsi128_si32(_mm_packus_epi16(v218, v218)));
	if (v68 == v219)
	{
		v221 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v68);
		v220 = *v219;
		v221 = qword_140C63678;
		*v68 = v220;
		if (v220 < *(_QWORD*)(v221 + 48))
		{
			v222 = *(_QWORD*)(v221 + 40);
			v223 = 32i64 * (unsigned int)v220;
			v224 = *(_DWORD*)(v222 + v223 + 16);
			if ((unsigned int)(v224 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v222 + v223 + 16) = v224 + 1;
		}
	}
	sub_1401429A0(v221, v255);
	v225 = (unsigned int*)(v18 + 2224);
	v226 = *(unsigned int*)(v18 + 2224);
	if (v226 >= *(_QWORD*)(qword_140C63678 + 48))
		v227 = *(__m128**)(qword_140C63678 + 40);
	else
		v227 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v226);
	v228 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(_mm_min_ps(_mm_max_ps(v25, *v227), (__m128)xmmword_140B7B240), (__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v229 = _mm_packus_epi16(v228, v228);
	v230 = sub_1400F66F0(&v255, a5, L"TextDisabledColor", _mm_cvtsi128_si32(_mm_packus_epi16(v229, v229)));
	if (v225 == v230)
	{
		v232 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v225);
		v231 = *v230;
		v232 = qword_140C63678;
		*v225 = v231;
		if (v231 < *(_QWORD*)(v232 + 48))
		{
			v233 = *(_QWORD*)(v232 + 40);
			v234 = 32i64 * (unsigned int)v231;
			v235 = *(_DWORD*)(v234 + v233 + 16);
			if ((unsigned int)(v235 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v234 + v233 + 16) = v235 + 1;
		}
	}
	sub_1401429A0(v232, v255);
	v260 = *(_DWORD*)(v18 + 1028);
	v236 = sub_1401A6B80(a5, L"RowHeight");
	if (v236)
	{
		v237 = (_WORD*)sub_1401A4F40(v236 + 32);
		if ((unsigned int)sub_1407DF428(v237, (__int64)L"%d", &v260) == 1)
			*(_DWORD*)(v18 + 1028) = v260;
	}
	v259 = *(_DWORD*)(v18 + 1024);
	v238 = sub_1401A6B80(a5, L"HeaderHeight");
	if (v238)
	{
		v239 = (_WORD*)sub_1401A4F40(v238 + 32);
		if ((unsigned int)sub_1407DF428(v239, (__int64)L"%d", &v259) == 1)
			*(_DWORD*)(v18 + 1024) = v259;
	}
	v240 = sub_1401A6B80(a5, L"HeaderFont");
	if (v240)
	{
		v241 = (int*)sub_1401A4F40(v240 + 32);
		if (v241)
			sub_140167F50(v18, v241);
	}
	v258 = 0;
	v242 = sub_1401A6B80(a5, L"HorzRowMargin");
	if (v242)
	{
		v243 = (_WORD*)sub_1401A4F40(v242 + 32);
		if ((unsigned int)sub_1407DF428(v243, (__int64)L"%d", &v258) == 1)
			*(_DWORD*)(v18 + 1084) = v258;
	}
	v244 = sub_1401A6B80(a5, L"HorzCellMargin");
	if (v244)
	{
		v245 = (_WORD*)sub_1401A4F40(v244 + 32);
		if ((unsigned int)sub_1407DF428(v245, (__int64)L"%d", &v258) == 1)
			*(_DWORD*)(v18 + 1092) = v258;
	}
	v246 = sub_1401A6B80(a5, L"VertRowMargin");
	if (v246)
	{
		v247 = (_WORD*)sub_1401A4F40(v246 + 32);
		if ((unsigned int)sub_1407DF428(v247, (__int64)L"%d", &v258) == 1)
			*(_DWORD*)(v18 + 1088) = v258;
	}
	v248 = sub_1401A6B80(a5, L"ImageTextSpacing");
	if (v248)
	{
		v249 = (_WORD*)sub_1401A4F40(v248 + 32);
		if ((unsigned int)sub_1407DF428(v249, (__int64)L"%d", &v258) == 1)
			*(_DWORD*)(v18 + 1096) = v258;
	}
	sub_14015F180(v18);
	v250 = (__int64*)&v268;
	for (k = 31; k >= 0; --k)
	{
		v252 = *((_DWORD*)v250 - 11);
		v250 -= 11;
		sub_1401429A0(qword_140C63678, v252);
		if (*v250)
			sub_14018B900(*v250, 0);
		v253 = *(v250 - 4);
		if (v253)
			sub_14018B900(v253, 0);
	}
	return v261;
}
// 140163E8A: variable 'v15' is possibly undefined
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140A31B88: using guessed type wchar_t aHeaderbg[9];
// 140A31F00: using guessed type wchar_t aTextselectedco[18];
// 140A31F28: using guessed type wchar_t aTextnormalcolo[16];
// 140A31F48: using guessed type wchar_t aTextselectedfo[23];
// 140A31F78: using guessed type wchar_t aTextnormalfocu[21];
// 140A32018: using guessed type wchar_t aImagetextspaci[17];
// 140A32040: using guessed type wchar_t aVertrowmargin[14];
// 140A32060: using guessed type wchar_t aCellbgnormalfo[23];
// 140A32090: using guessed type wchar_t aCellbgnormalco[18];
// 140A320B8: using guessed type wchar_t aCellbgbase[11];
// 140A320D0: using guessed type wchar_t aTextdisabledco[18];
// 140A320F8: using guessed type wchar_t aHorzcellmargin[15];
// 140A32118: using guessed type wchar_t aHorzrowmargin[14];
// 140A32138: using guessed type wchar_t aRowheight[10];
// 140A32150: using guessed type wchar_t aHeaderfont[11];
// 140A32198: using guessed type wchar_t aCellbgselected_0[25];
// 140A321D0: using guessed type wchar_t aCellbgselected[20];
// 140A321F8: using guessed type wchar_t aHeaderheight[13];
// 140A32218: using guessed type wchar_t aCellbgdisabled[20];
// 140A32F40: using guessed type wchar_t *off_140A32F40[38];
// 140A36420: using guessed type wchar_t aWhitefill_21[10];
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140B7B610: using guessed type __int128 xmmword_140B7B610;
// 140B7B6A0: using guessed type __int128 xmmword_140B7B6A0;
// 140B7B6C0: using guessed type __int128 xmmword_140B7B6C0;
// 140B7B6E0: using guessed type __int128 xmmword_140B7B6E0;
// 140B7B6F0: using guessed type __int128 xmmword_140B7B6F0;
// 140C63678: using guessed type __int64 qword_140C63678;

