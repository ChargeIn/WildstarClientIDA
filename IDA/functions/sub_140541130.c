#include "../winhttp.h"

//----- (0000000140541130) ----------------------------------------------------
__int64* __fastcall sub_140541130(__int64 a1, int a2, __int64 a3)
{
	__int64 v3; // rax
	__int64 v4; // r14
	signed int v5; // r15d
	int v7; // r9d
	__int64* result; // rax
	__int64* v9; // rsi
	__int64 v10; // rcx
	__int64* v11; // rdi
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rbx
	const void*** v15; // r15
	const void** i; // rbx
	_QWORD* v17; // rcx
	_QWORD* v18; // rdx
	const void** v19; // rcx
	const void*** v20; // r14
	const void** j; // rdi
	_QWORD* v22; // rcx
	_QWORD* v23; // rdx
	const void** v24; // rcx
	__int64* v25; // rsi
	__int64* v26; // rcx
	__int64 v27; // rcx
	const void*** v28; // rax
	__int64 v29; // rbx
	__int64 v30; // rcx
	_QWORD* v31; // rdx
	unsigned int v32; // esi
	__int64 v33; // rax
	bool v34; // zf
	__int64 v35; // rax
	int v36; // r13d
	__int64 v37; // rcx
	BOOL v38; // eax
	unsigned int v39; // eax
	__int64 v40; // rdi
	_QWORD* v41; // rbx
	__int64 v42; // r8
	__int64 v43; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	__int64 v46; // rdx
	__int64 v47; // rax
	__int64 v48; // rax
	int v49; // r13d
	__int64 v50; // rdx
	_DWORD* v51; // rax
	unsigned int v52; // ecx
	int v53; // r8d
	BOOL v54; // ebx
	_BOOL8 v55; // rsi
	__int64 v56; // rdi
	_QWORD* v57; // rbx
	int v58; // r15d
	__int64 v59; // r8
	__int64 v60; // rcx
	int v61; // eax
	unsigned __int64 v62; // rcx
	unsigned int v63; // r9d
	_DWORD* v64; // rax
	__int64 v65; // rax
	_QWORD* n; // rax
	__int64 ii; // rax
	__int64 v68; // r13
	unsigned int v69; // r12d
	__int64 v70; // rcx
	_QWORD* v71; // rdi
	__int64 v72; // r15
	__int64 v73; // r14
	__int64 v74; // rax
	__int64 v75; // rbx
	__int64 v76; // rax
	__int64 jj; // rax
	__int64 kk; // rax
	unsigned __int64 v79; // rsi
	__int64 v80; // rbx
	__int64 v81; // rax
	__int64 v82; // rcx
	unsigned int v83; // r9d
	__int64 v84; // rax
	_QWORD* mm; // rax
	__int64 nn; // rax
	unsigned int v87; // r8d
	_QWORD* v88; // rdi
	__int64 v89; // rcx
	BOOL v90; // r9d
	__int64 v91; // r15
	__int64 v92; // rax
	unsigned int v93; // edx
	int v94; // edx
	int v95; // edx
	unsigned int v96; // eax
	int v97; // eax
	int v98; // eax
	int v99; // r12d
	__int64 v100; // r14
	__int64 v101; // rax
	__int64 v102; // rbx
	__int64 v103; // rax
	__int64 i1; // rax
	__int64 i2; // rax
	unsigned __int64 v106; // rsi
	__int64 v107; // rbx
	__int64 v108; // rax
	__int64 v109; // rcx
	unsigned int v110; // r9d
	__int64 v111; // rax
	_QWORD* i3; // rax
	__int64 i4; // rax
	unsigned int v114; // r8d
	__int64 v115; // r10
	__int64 v116; // rcx
	__int64 v117; // r11
	__int64 v118; // rax
	unsigned int v119; // edx
	int v120; // edx
	int v121; // edx
	unsigned int v122; // eax
	int v123; // eax
	int v124; // eax
	__int64 v125; // r15
	_QWORD* v126; // rdi
	__int64 v127; // r12
	__int64 v128; // r14
	__int64 v129; // rax
	__int64 v130; // rbx
	__int64 v131; // rax
	__int64 i5; // rax
	__int64 i6; // rax
	unsigned __int64 v134; // rsi
	__int64 v135; // rbx
	__int64 v136; // rax
	__int64 v137; // rcx
	unsigned int v138; // r9d
	__int64 v139; // rax
	_QWORD* i7; // rax
	__int64 i8; // rax
	__int64 v142; // rbx
	__int64 v143; // r10
	__int64 v144; // rcx
	unsigned int v145; // r8d
	__int64 v146; // r11
	__int64 v147; // rax
	unsigned int v148; // edx
	int v149; // edx
	signed int v150; // edx
	unsigned int v151; // eax
	int v152; // eax
	signed int v153; // eax
	int v154; // r14d
	int v155; // edi
	__int64 v156; // r10
	unsigned int v157; // r8d
	__int64 v158; // rcx
	__int64 v159; // r11
	__int64 v160; // rax
	unsigned int v161; // edx
	int v162; // edx
	int v163; // edx
	unsigned int v164; // eax
	int v165; // eax
	int v166; // eax
	__int64 v167; // rsi
	_QWORD* v168; // rbx
	__int64 v169; // r8
	__int64 v170; // rax
	_QWORD* i9; // rax
	__int64 i10; // rax
	__int64 v173; // rbx
	__int64 v174; // r10
	__int64 v175; // rcx
	unsigned int v176; // r8d
	__int64 v177; // r11
	__int64 v178; // rax
	unsigned int v179; // edx
	int v180; // edx
	signed int v181; // edx
	unsigned int v182; // eax
	int v183; // eax
	signed int v184; // eax
	__int64 v185; // rdi
	_QWORD* v186; // rbx
	__int64 v187; // rdx
	__int64 v188; // rax
	_QWORD* i11; // rax
	__int64 i12; // rax
	int v191; // r14d
	BOOL v192; // ecx
	int v193; // ecx
	__int64 v194; // rsi
	_QWORD* v195; // rbx
	__int64 v196; // rdi
	__int64 v197; // rax
	__int64 v198; // rax
	_QWORD* i13; // rax
	__int64 i14; // rax
	int v201; // r14d
	BOOL v202; // ecx
	int v203; // ecx
	__int64 v204; // rsi
	_QWORD* v205; // rbx
	__int64 v206; // rdi
	__int64 v207; // rax
	unsigned __int64 v208; // rdx
	unsigned __int64 v209; // rcx
	__int64 v210; // r8
	__int64 v211; // rax
	unsigned int v212; // r9d
	__int64 v213; // rax
	__m128i v214; // [rsp+50h] [rbp-59h] BYREF
	unsigned int v215; // [rsp+60h] [rbp-49h]
	BOOL v216; // [rsp+70h] [rbp-39h] BYREF
	int v217; // [rsp+74h] [rbp-35h]
	int v218; // [rsp+78h] [rbp-31h]
	int v219; // [rsp+7Ch] [rbp-2Dh]
	unsigned int v220; // [rsp+80h] [rbp-29h]
	__m128i v221; // [rsp+90h] [rbp-19h] BYREF
	const void** v222; // [rsp+A0h] [rbp-9h] BYREF
	int v223; // [rsp+A8h] [rbp-1h]
	int v224; // [rsp+ACh] [rbp+3h]
	__int64 v226; // [rsp+110h] [rbp+67h]
	__int64 v227; // [rsp+110h] [rbp+67h]
	const void** v230; // [rsp+128h] [rbp+7Fh] BYREF

	v3 = *(_QWORD*)(a1 + 312);
	v4 = a3;
	v5 = a2;
	if (*(_QWORD*)(v3 + 80) || (v7 = *(_DWORD*)(*(_QWORD*)(v3 + 112) + 24i64), v7 == 3) || v7 == 8)
	{
		v15 = (const void***)(a1 + 536);
		i = *(const void***)(a1 + 536);
		*(_QWORD*)(a1 + 536) = 0i64;
		v230 = i;
		if (i)
		{
			i[1] = &v230;
			for (i = v230; v230; i = v230)
			{
				v17 = i[1];
				if (v17)
					*v17 = i[2];
				v18 = i[2];
				v19 = i + 2;
				if (v18)
					v18[1] = i[1];
				*v19 = 0i64;
				i[1] = v15;
				*v19 = *v15;
				*v15 = i;
				if (*v19)
					*((_QWORD*)*v19 + 1) = v19;
				if (!*(_DWORD*)((*((__int64(__fastcall**)(const void**)) * i + 2))(i) + 4))
					(*((void(__fastcall**)(const void**)) * i + 4))(i);
			}
		}
		v20 = (const void***)(a1 + 552);
		j = *(const void***)(a1 + 552);
		*(_QWORD*)(a1 + 552) = 0i64;
		v222 = j;
		if (j)
		{
			j[1] = &v222;
			for (j = v222; v222; j = v222)
			{
				v22 = j[1];
				if (v22)
					*v22 = j[2];
				v23 = j[2];
				v24 = j + 2;
				if (v23)
					v23[1] = j[1];
				*v24 = 0i64;
				j[1] = v20;
				*v24 = *v20;
				*v20 = j;
				if (*v24)
					*((_QWORD*)*v24 + 1) = v24;
				if (!*(_DWORD*)((*((__int64(__fastcall**)(const void**)) * j + 2))(j) + 4))
					(*((void(__fastcall**)(const void**)) * j + 4))(j);
			}
			i = v230;
		}
		v25 = *(__int64**)(a1 + 544);
		if (v25)
		{
			do
			{
				v26 = v25;
				v25 = (__int64*)v25[5];
				if (!*v26 || !*(_DWORD*)(*v26 + 4))
					sub_140454090(v26);
			} while (v25);
			i = v230;
			j = v222;
		}
		v27 = *(_QWORD*)(a1 + 568);
		if (v27)
		{
			do
			{
				v28 = *(const void****)(v27 + 80);
				v29 = *(_QWORD*)(v27 + 32);
				if (v28 == v15 || v28 == v20)
					(**(void(__fastcall***)(__int64, __int64))v27)(v27, 1i64);
				v27 = v29;
			} while (v29);
			i = v230;
			j = v222;
		}
		result = *(__int64**)(a1 + 312);
		v30 = result[14];
		if (*(_DWORD*)(v30 + 24) != 8)
		{
			result = (__int64*)*(unsigned int*)(a1 + 416);
			if ((unsigned int)result > 1
				&& (*(_BYTE*)(v30 + 268) & 0x20) == 0
				&& *(_DWORD*)(a1 + 400) >= (unsigned int)result)
			{
				if (j)
				{
					result = (__int64*)sub_1401A4A00(&v222);
					i = v230;
				}
				if (i)
					return (__int64*)sub_1401A4A00(&v230);
				return result;
			}
		}
		if (j)
		{
			result = (__int64*)sub_1401A4A00(&v222);
			i = v230;
		}
		if (i)
			result = (__int64*)sub_1401A4A00(&v230);
		v5 = a2;
		v4 = a3;
	}
	else
	{
		for (result = *(__int64**)(a1 + 544); result; result = *(__int64**)(a1 + 544))
			sub_140454090(result);
		v9 = (__int64*)(a1 + 536);
		v10 = *(_QWORD*)(a1 + 536);
		if (v10)
		{
			do
			{
				result = (__int64*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 32i64))(v10);
				v10 = *v9;
			} while (*v9);
		}
		v11 = (__int64*)(a1 + 552);
		v12 = *(_QWORD*)(a1 + 552);
		if (v12)
		{
			do
			{
				result = (__int64*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 32i64))(v12);
				v12 = *v11;
			} while (*v11);
		}
		v13 = *(_QWORD*)(a1 + 568);
		if (v13)
		{
			do
			{
				result = *(__int64**)(v13 + 80);
				v14 = *(_QWORD*)(v13 + 32);
				if (result == v9 || result == v11)
					result = (__int64*)(**(__int64(__fastcall***)(__int64, __int64))v13)(v13, 1i64);
				v13 = v14;
			} while (v14);
		}
	}
	if (!*(_DWORD*)(a1 + 840))
		return result;
	v31 = *(_QWORD**)(a1 + 312);
	v32 = 0;
	v33 = v31[14];
	LODWORD(v230) = 0;
	if (*(_DWORD*)(v33 + 24) == 8)
	{
		v32 = *(unsigned __int8*)(v4 + 80);
		LODWORD(v230) = v32;
		if (!v31[11] || v32 >= *(_DWORD*)(a1 + 416))
		{
			v32 = 0;
			LODWORD(v230) = 0;
		}
	}
	v34 = *(_DWORD*)(v33 + 24) == 8;
	v35 = v31[1];
	v214.m128i_i32[0] = v34;
	*(__int64*)((char*)v214.m128i_i64 + 4) = *(unsigned int*)(v35 + 28);
	v214.m128i_i32[3] = v5;
	v215 = v32;
	sub_1405663F0(qword_140C65B70 + 1616, &v221, &v214);
	if (v221.m128i_i64[0] != v221.m128i_i64[1] || (v36 = 2, v5 != 4))
		v36 = v5;
	v37 = *(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64);
	v223 = v36;
	v38 = *(_DWORD*)(v37 + 24) == 8;
	v214.m128i_i32[3] = v36;
	v214.m128i_i32[0] = v38;
	v39 = *(_DWORD*)(a1 + 840);
	v215 = v32;
	*(__int64*)((char*)v214.m128i_i64 + 4) = v39;
	sub_1405663F0(qword_140C65B70 + 1616, &v221, &v214);
	if (v221.m128i_i64[0] != _mm_srli_si128(v221, 8).m128i_u64[0])
	{
		v40 = v221.m128i_i64[1];
		v41 = (_QWORD*)v221.m128i_i64[0];
		do
		{
			v42 = v41[7];
			if (v42 && !*(_DWORD*)(v42 + 132))
				sub_140543630(a1, 0, v42, *(_DWORD*)(a1 + 340), v36, 0, 0, 0i64, 0.0, 0);
			v43 = v41[3];
			if (v43)
			{
				v41 = (_QWORD*)v41[3];
				for (k = *(_QWORD**)(v43 + 16); k; k = (_QWORD*)k[2])
					v41 = k;
			}
			else
			{
				for (m = v41[1]; v41 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
					v41 = (_QWORD*)m;
				if (v41[3] != m)
					v41 = (_QWORD*)m;
			}
		} while (v41 != (_QWORD*)v40);
	}
	v46 = *(_QWORD*)(a1 + 312);
	v47 = *(_QWORD*)(v46 + 112);
	v218 = 1;
	v219 = v5;
	v34 = *(_DWORD*)(v47 + 24) == 8;
	v48 = *(_QWORD*)(v46 + 8);
	v220 = v32;
	v216 = v34;
	v217 = *(_DWORD*)(v48 + 28);
	sub_1405663F0(qword_140C65B70 + 1616, &v214, &v216);
	if (v214.m128i_i64[0] != v214.m128i_i64[1] || (v49 = 2, v5 != 4))
		v49 = v5;
	v50 = *(_QWORD*)(a1 + 312);
	v224 = v49;
	v51 = *(_DWORD**)(v50 + 112);
	v52 = v51[31];
	v54 = v52 <= 7 && (v53 = 133, _bittest(&v53, v52)) || v51[6] == 3 && !v51[39] && ((v52 - 4) & 0xFFFFFFFB) == 0;
	v34 = *(_DWORD*)(*(_QWORD*)(v50 + 112) + 24i64) == 8;
	v217 = *(_DWORD*)(a1 + 840);
	v218 = 1;
	v216 = v34;
	v219 = v49;
	v220 = v32;
	sub_1405663F0(qword_140C65B70 + 1616, &v214, &v216);
	v55 = v54;
	v221 = v214;
	if (v214.m128i_i64[0] != _mm_srli_si128(v214, 8).m128i_u64[0])
	{
		v56 = v221.m128i_i64[1];
		v57 = (_QWORD*)v221.m128i_i64[0];
		v58 = v223;
		do
		{
			v59 = v57[7];
			if (v59 && !*(_DWORD*)(v59 + 132))
			{
				v60 = *(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64);
				if (*(_DWORD*)(v60 + 24) == 3 || (v61 = *(_DWORD*)(v60 + 124), v61 == 4) || (unsigned int)(v61 - 7) <= 1)
				{
					sub_140543630(a1, 1, v59, *(_DWORD*)(a1 + 344), v49, 0, *(_DWORD*)(a1 + 340), 0i64, 0.0, 0);
				}
				else if (v55)
				{
					sub_140543630(a1, 0, v59, *(_DWORD*)(a1 + 340), v58, 0, 0, 0i64, 0.0, 0);
				}
				else if ((*(_DWORD*)(v59 + 16) & 0x200) != 0)
				{
					sub_140543630(a1, 1, v59, *(_DWORD*)(a1 + 344), v49, 0, *(_DWORD*)(a1 + 340), (_DWORD*)(v4 + 8), 0.0, 0);
				}
				else
				{
					v62 = 0i64;
					if (*(_BYTE*)(v4 + 20))
					{
						v63 = *(_DWORD*)(a1 + 344);
						v64 = *(_DWORD**)(v4 + 24);
						while (*v64 != v63)
						{
							++v62;
							v64 += 6;
							if (v62 >= *(unsigned __int8*)(v4 + 20))
								goto LABEL_114;
						}
						sub_140543630(a1, 1, v59, v63, v49, 0, *(_DWORD*)(a1 + 340), (_DWORD*)(v4 + 8), 0.0, 0);
					}
				}
			}
		LABEL_114:
			v65 = v57[3];
			if (v65)
			{
				v57 = (_QWORD*)v57[3];
				for (n = *(_QWORD**)(v65 + 16); n; n = (_QWORD*)n[2])
					v57 = n;
			}
			else
			{
				for (ii = v57[1]; v57 == *(_QWORD**)(ii + 24); ii = *(_QWORD*)(ii + 8))
					v57 = (_QWORD*)ii;
				if (v57[3] != ii)
					v57 = (_QWORD*)ii;
			}
		} while (v57 != (_QWORD*)v56);
		v5 = a2;
	}
	if (((v5 - 2) & 0xFFFFFFFD) != 0)
	{
		v68 = a1;
		v69 = (unsigned int)v230;
		v70 = *(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64);
		v218 = 2;
		v34 = *(_DWORD*)(v70 + 24) == 8;
		v219 = v5;
		v220 = (unsigned int)v230;
		v216 = v34;
		v217 = *(_DWORD*)(a1 + 840);
		sub_1405663F0(qword_140C65B70 + 1616, &v214, &v216);
		v221 = v214;
		if (v214.m128i_i64[0] != _mm_srli_si128(v214, 8).m128i_u64[0])
		{
			v72 = v221.m128i_i64[1];
			v71 = (_QWORD*)v221.m128i_i64[0];
			v226 = v221.m128i_i64[0];
			while (1)
			{
				v73 = v71[7];
				if (!v73 || *(_DWORD*)(v73 + 132))
					goto LABEL_155;
				if ((*(_DWORD*)(v73 + 16) & 0x200) != 0)
				{
					v74 = *(_QWORD*)(v68 + 856);
					v75 = *(_QWORD*)(v74 + 16);
					if (v75 != v74)
					{
						do
						{
							if ((*(_BYTE*)(v75 + 40) & 4) != 0)
								sub_140543630(
									v68,
									2,
									v73,
									*(_DWORD*)(v75 + 36),
									a2,
									0,
									*(_DWORD*)(v68 + 340),
									0i64,
									0.0,
									*(_DWORD*)(v75 + 60));
							v76 = *(_QWORD*)(v75 + 24);
							if (v76)
							{
								v75 = *(_QWORD*)(v75 + 24);
								for (jj = *(_QWORD*)(v76 + 16); jj; jj = *(_QWORD*)(jj + 16))
									v75 = jj;
							}
							else
							{
								for (kk = *(_QWORD*)(v75 + 8); v75 == *(_QWORD*)(kk + 24); kk = *(_QWORD*)(kk + 8))
									v75 = kk;
								if (*(_QWORD*)(v75 + 24) != kk)
									v75 = kk;
							}
						} while (v75 != *(_QWORD*)(v68 + 856));
					LABEL_154:
						v72 = v221.m128i_i64[1];
					}
				}
				else
				{
					v79 = 0i64;
					if (*(_BYTE*)(a3 + 20))
					{
						v80 = 0i64;
						do
						{
							v81 = *(_QWORD*)(v68 + 72);
							v82 = *(_QWORD*)(a3 + 24);
							if (v81)
							{
								v83 = *(_DWORD*)(v80 + v82);
								while (v83 != *(_DWORD*)(v81 + 64))
								{
									v81 = *(_QWORD*)(v81 + 40);
									if (!v81)
										goto LABEL_152;
								}
								if ((*(_BYTE*)(v80 + v82 + 5) & 4) != 0)
									sub_140543630(v68, 2, v73, v83, a2, 0, *(_DWORD*)(v68 + 340), 0i64, 0.0, 0);
							}
						LABEL_152:
							++v79;
							v80 += 24i64;
						} while (v79 < *(unsigned __int8*)(a3 + 20));
						v71 = (_QWORD*)v226;
						goto LABEL_154;
					}
				}
			LABEL_155:
				v84 = v71[3];
				if (v84)
				{
					v71 = (_QWORD*)v71[3];
					v226 = v84;
					for (mm = *(_QWORD**)(v84 + 16); mm; mm = (_QWORD*)mm[2])
					{
						v71 = mm;
						v226 = (__int64)mm;
					}
				}
				else
				{
					for (nn = v71[1]; v71 == *(_QWORD**)(nn + 24); nn = *(_QWORD*)(nn + 8))
						v71 = (_QWORD*)nn;
					if (v71[3] != nn)
						v71 = (_QWORD*)nn;
					v226 = (__int64)v71;
				}
				if (v71 == (_QWORD*)v72)
					goto LABEL_312;
			}
		}
		goto LABEL_313;
	}
	v87 = *(_DWORD*)(a1 + 840);
	v88 = *(_QWORD**)(qword_140C65B70 + 1624);
	v89 = v88[1];
	v90 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64) + 24i64) == 8;
	v91 = (__int64)v88;
	v214.m128i_i64[0] = (__int64)v88;
	v92 = v89;
	if (!v89)
		goto LABEL_197;
	do
	{
		if (v90)
		{
			if (!*(_DWORD*)(v92 + 32))
				goto LABEL_179;
		}
		else if (*(_DWORD*)(v92 + 32))
		{
			v91 = v92;
			v92 = *(_QWORD*)(v92 + 16);
			continue;
		}
		v93 = *(_DWORD*)(v92 + 36);
		if (v87 < v93
			|| v87 <= v93
			&& ((v94 = *(_DWORD*)(v92 + 40), v94 > 2)
				|| v94 >= 2 && ((v95 = *(_DWORD*)(v92 + 44), v95 > 4) || v95 >= 4 && (unsigned int)v230 < *(_DWORD*)(v92 + 48))))
		{
			v91 = v92;
			v92 = *(_QWORD*)(v92 + 16);
			continue;
		}
	LABEL_179:
		v92 = *(_QWORD*)(v92 + 24);
	} while (v92);
	v214.m128i_i64[0] = v91;
	do
	{
		if (*(_DWORD*)(v89 + 32))
		{
			if (!v90)
				goto LABEL_194;
		}
		else if (v90)
		{
			goto LABEL_193;
		}
		v96 = *(_DWORD*)(v89 + 36);
		if (v96 < v87
			|| v96 <= v87
			&& ((v97 = *(_DWORD*)(v89 + 40), v97 < 2)
				|| v97 <= 2 && ((v98 = *(_DWORD*)(v89 + 44), v98 < 4) || v98 <= 4 && *(_DWORD*)(v89 + 48) < (unsigned int)v230)))
		{
		LABEL_193:
			v89 = *(_QWORD*)(v89 + 24);
			continue;
		}
	LABEL_194:
		v88 = (_QWORD*)v89;
		v89 = *(_QWORD*)(v89 + 16);
	} while (v89);
	v49 = v224;
LABEL_197:
	v99 = v88 != (_QWORD*)v91;
	LODWORD(v222) = v99;
	if (v88 != (_QWORD*)v91)
	{
		while (2)
		{
			v100 = v88[7];
			if (v100 && !*(_DWORD*)(v100 + 132))
			{
				if ((*(_DWORD*)(v100 + 16) & 0x200) != 0 && a2 == 4)
				{
					v101 = *(_QWORD*)(a1 + 856);
					v102 = *(_QWORD*)(v101 + 16);
					if (v102 != v101)
					{
						do
						{
							if ((*(_BYTE*)(v102 + 40) & 4) != 0)
								sub_140543630(
									a1,
									2,
									v100,
									*(_DWORD*)(v102 + 36),
									v49,
									0,
									*(_DWORD*)(a1 + 340),
									0i64,
									0.0,
									*(_DWORD*)(v102 + 60));
							v103 = *(_QWORD*)(v102 + 24);
							if (v103)
							{
								v102 = *(_QWORD*)(v102 + 24);
								for (i1 = *(_QWORD*)(v103 + 16); i1; i1 = *(_QWORD*)(i1 + 16))
									v102 = i1;
							}
							else
							{
								for (i2 = *(_QWORD*)(v102 + 8); v102 == *(_QWORD*)(i2 + 24); i2 = *(_QWORD*)(i2 + 8))
									v102 = i2;
								if (*(_QWORD*)(v102 + 24) != i2)
									v102 = i2;
							}
						} while (v102 != *(_QWORD*)(a1 + 856));
						goto LABEL_227;
					}
				}
				else
				{
					v106 = 0i64;
					if (*(_BYTE*)(a3 + 20))
					{
						v107 = 0i64;
						do
						{
							v108 = *(_QWORD*)(a1 + 72);
							v109 = *(_QWORD*)(a3 + 24);
							if (v108)
							{
								v110 = *(_DWORD*)(v107 + v109);
								while (v110 != *(_DWORD*)(v108 + 64))
								{
									v108 = *(_QWORD*)(v108 + 40);
									if (!v108)
										goto LABEL_225;
								}
								if ((*(_BYTE*)(v107 + v109 + 5) & 4) != 0 && *(_DWORD*)(v107 + v109 + 8) == 1)
									sub_140543630(a1, 2, v100, v110, 4, 0, *(_DWORD*)(a1 + 340), 0i64, 0.0, 0);
							}
						LABEL_225:
							++v106;
							v107 += 24i64;
						} while (v106 < *(unsigned __int8*)(a3 + 20));
						v49 = v224;
					LABEL_227:
						v91 = v214.m128i_i64[0];
					}
				}
			}
			v111 = v88[3];
			if (v111)
			{
				v88 = (_QWORD*)v88[3];
				for (i3 = *(_QWORD**)(v111 + 16); i3; i3 = (_QWORD*)i3[2])
					v88 = i3;
			}
			else
			{
				for (i4 = v88[1]; v88 == *(_QWORD**)(i4 + 24); i4 = *(_QWORD*)(i4 + 8))
					v88 = (_QWORD*)i4;
				if (v88[3] != i4)
					v88 = (_QWORD*)i4;
			}
			if (v88 == (_QWORD*)v91)
			{
				v99 = (int)v222;
				break;
			}
			continue;
		}
	}
	v68 = a1;
	v114 = *(_DWORD*)(a1 + 840);
	v115 = *(_QWORD*)(qword_140C65B70 + 1624);
	v116 = *(_QWORD*)(v115 + 8);
	v117 = v115;
	v118 = v116;
	if (!v116)
		goto LABEL_269;
	while (2)
	{
		if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64) + 24i64) == 8)
		{
			if (*(_DWORD*)(v118 + 32))
				goto LABEL_243;
		}
		else
		{
			if (*(_DWORD*)(v118 + 32))
			{
				v117 = v118;
				v118 = *(_QWORD*)(v118 + 16);
				goto LABEL_252;
			}
		LABEL_243:
			v119 = *(_DWORD*)(v118 + 36);
			if (v114 < v119
				|| v114 <= v119
				&& ((v120 = *(_DWORD*)(v118 + 40), v120 > 2)
					|| v120 >= 2
					&& ((v121 = *(_DWORD*)(v118 + 44), v121 > 2) || v121 >= 2 && (unsigned int)v230 < *(_DWORD*)(v118 + 48))))
			{
				v117 = v118;
				v118 = *(_QWORD*)(v118 + 16);
				goto LABEL_252;
			}
		}
		v118 = *(_QWORD*)(v118 + 24);
	LABEL_252:
		if (v118)
			continue;
		break;
	}
	v99 = (int)v222;
	while (2)
	{
		if (*(_DWORD*)(v116 + 32))
		{
			if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64) + 24i64) == 8)
			{
			LABEL_258:
				v122 = *(_DWORD*)(v116 + 36);
				if (v122 < v114)
					goto LABEL_265;
				if (v122 <= v114)
				{
					v123 = *(_DWORD*)(v116 + 40);
					if (v123 < 2)
						goto LABEL_265;
					if (v123 <= 2)
					{
						v124 = *(_DWORD*)(v116 + 44);
						if (v124 < 2 || v124 <= 2 && *(_DWORD*)(v116 + 48) < (unsigned int)v230)
							goto LABEL_265;
					}
				}
			}
			v115 = v116;
			v116 = *(_QWORD*)(v116 + 16);
		}
		else
		{
			if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64) + 24i64) != 8)
				goto LABEL_258;
		LABEL_265:
			v116 = *(_QWORD*)(v116 + 24);
		}
		if (v116)
			continue;
		break;
	}
	v68 = a1;
LABEL_269:
	v214.m128i_i64[0] = v115;
	v214.m128i_i64[1] = v117;
	v125 = v99;
	if (v115 != v117)
	{
		v127 = v214.m128i_i64[1];
		v126 = (_QWORD*)v214.m128i_i64[0];
		v227 = v214.m128i_i64[0];
		do
		{
			v128 = v126[7];
			if (!v128 || *(_DWORD*)(v128 + 132))
				goto LABEL_302;
			if ((*(_DWORD*)(v128 + 16) & 0x200) != 0 && a2 == 2)
			{
				v129 = *(_QWORD*)(v68 + 856);
				v130 = *(_QWORD*)(v129 + 16);
				if (v130 != v129)
				{
					do
					{
						if ((*(_BYTE*)(v130 + 40) & 4) != 0)
							sub_140543630(
								v68,
								2,
								v128,
								*(_DWORD*)(v130 + 36),
								2,
								0,
								*(_DWORD*)(v68 + 340),
								0i64,
								0.0,
								*(_DWORD*)(v130 + 60));
						v131 = *(_QWORD*)(v130 + 24);
						if (v131)
						{
							v130 = *(_QWORD*)(v130 + 24);
							for (i5 = *(_QWORD*)(v131 + 16); i5; i5 = *(_QWORD*)(i5 + 16))
								v130 = i5;
						}
						else
						{
							for (i6 = *(_QWORD*)(v130 + 8); v130 == *(_QWORD*)(i6 + 24); i6 = *(_QWORD*)(i6 + 8))
								v130 = i6;
							if (*(_QWORD*)(v130 + 24) != i6)
								v130 = i6;
						}
					} while (v130 != *(_QWORD*)(v68 + 856));
				LABEL_301:
					v127 = v214.m128i_i64[1];
				}
			}
			else
			{
				v134 = 0i64;
				if (*(_BYTE*)(a3 + 20))
				{
					v135 = 0i64;
					do
					{
						v136 = *(_QWORD*)(v68 + 72);
						v137 = *(_QWORD*)(a3 + 24);
						if (v136)
						{
							v138 = *(_DWORD*)(v135 + v137);
							while (v138 != *(_DWORD*)(v136 + 64))
							{
								v136 = *(_QWORD*)(v136 + 40);
								if (!v136)
									goto LABEL_299;
							}
							if ((*(_BYTE*)(v135 + v137 + 5) & 4) != 0 && (!v125 || *(_DWORD*)(v135 + v137 + 8) != 1))
								sub_140543630(v68, 2, v128, v138, 2, 0, *(_DWORD*)(v68 + 340), 0i64, 0.0, 0);
						}
					LABEL_299:
						++v134;
						v135 += 24i64;
					} while (v134 < *(unsigned __int8*)(a3 + 20));
					v126 = (_QWORD*)v227;
					goto LABEL_301;
				}
			}
		LABEL_302:
			v139 = v126[3];
			if (v139)
			{
				v126 = (_QWORD*)v126[3];
				v227 = v139;
				for (i7 = *(_QWORD**)(v139 + 16); i7; i7 = (_QWORD*)i7[2])
				{
					v126 = i7;
					v227 = (__int64)i7;
				}
			}
			else
			{
				for (i8 = v126[1]; v126 == *(_QWORD**)(i8 + 24); i8 = *(_QWORD*)(i8 + 8))
					v126 = (_QWORD*)i8;
				if (v126[3] != i8)
					v126 = (_QWORD*)i8;
				v227 = (__int64)v126;
			}
		} while (v126 != (_QWORD*)v127);
	}
LABEL_312:
	v5 = a2;
	v69 = (unsigned int)v230;
LABEL_313:
	v142 = *(_QWORD*)(v68 + 312);
	v143 = *(_QWORD*)(qword_140C65B70 + 1624);
	v144 = *(_QWORD*)(v143 + 8);
	v145 = *(_DWORD*)(*(_QWORD*)(v142 + 8) + 28i64);
	v146 = v143;
	v147 = v144;
	if (v144)
	{
		while (1)
		{
			if (*(_DWORD*)(*(_QWORD*)(v142 + 112) + 24i64) == 8)
			{
				if (!*(_DWORD*)(v147 + 32))
					goto LABEL_326;
			}
			else if (*(_DWORD*)(v147 + 32))
			{
				v146 = v147;
				v147 = *(_QWORD*)(v147 + 16);
				goto LABEL_327;
			}
			v148 = *(_DWORD*)(v147 + 36);
			if (v145 >= v148)
			{
				if (v145 > v148
					|| (v149 = *(_DWORD*)(v147 + 40), v149 <= 3)
					&& (v149 < 3 || (v150 = *(_DWORD*)(v147 + 44), v5 >= v150) && (v5 > v150 || v69 >= *(_DWORD*)(v147 + 48))))
				{
				LABEL_326:
					v147 = *(_QWORD*)(v147 + 24);
					goto LABEL_327;
				}
			}
			v146 = v147;
			v147 = *(_QWORD*)(v147 + 16);
		LABEL_327:
			if (!v147)
			{
				while (1)
				{
					if (*(_DWORD*)(v144 + 32))
					{
						if (*(_DWORD*)(*(_QWORD*)(v142 + 112) + 24i64) != 8)
							goto LABEL_340;
					}
					else if (*(_DWORD*)(*(_QWORD*)(v142 + 112) + 24i64) == 8)
					{
						goto LABEL_339;
					}
					v151 = *(_DWORD*)(v144 + 36);
					if (v151 >= v145)
					{
						if (v151 > v145
							|| (v152 = *(_DWORD*)(v144 + 40), v152 >= 3)
							&& (v152 > 3 || (v153 = *(_DWORD*)(v144 + 44), v153 >= v5)
								&& (v153 > v5 || *(_DWORD*)(v144 + 48) >= v69)))
						{
						LABEL_340:
							v143 = v144;
							v144 = *(_QWORD*)(v144 + 16);
							goto LABEL_341;
						}
					}
				LABEL_339:
					v144 = *(_QWORD*)(v144 + 24);
				LABEL_341:
					if (!v144)
						goto LABEL_342;
				}
			}
		}
	}
LABEL_342:
	if (v143 == v146 && v5 == 4)
	{
		v154 = 2;
		v155 = 2;
	}
	else
	{
		v155 = v5;
		v154 = 2;
	}
	v156 = *(_QWORD*)(qword_140C65B70 + 1624);
	v157 = *(_DWORD*)(v68 + 840);
	v158 = *(_QWORD*)(v156 + 8);
	v159 = v156;
	v160 = v158;
	if (v158)
	{
		while (1)
		{
			if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v68 + 312) + 112i64) + 24i64) == 8)
			{
				if (!*(_DWORD*)(v160 + 32))
					goto LABEL_359;
			}
			else if (*(_DWORD*)(v160 + 32))
			{
				v159 = v160;
				v160 = *(_QWORD*)(v160 + 16);
				goto LABEL_360;
			}
			v161 = *(_DWORD*)(v160 + 36);
			if (v157 >= v161)
			{
				if (v157 > v161
					|| (v162 = *(_DWORD*)(v160 + 40), v162 <= 3)
					&& (v162 < 3 || (v163 = *(_DWORD*)(v160 + 44), v155 >= v163)
						&& (v155 > v163 || v69 >= *(_DWORD*)(v160 + 48))))
				{
				LABEL_359:
					v160 = *(_QWORD*)(v160 + 24);
					goto LABEL_360;
				}
			}
			v159 = v160;
			v160 = *(_QWORD*)(v160 + 16);
		LABEL_360:
			if (!v160)
			{
				while (1)
				{
					if (*(_DWORD*)(v158 + 32))
					{
						if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v68 + 312) + 112i64) + 24i64) != 8)
							goto LABEL_373;
					}
					else if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v68 + 312) + 112i64) + 24i64) == 8)
					{
						goto LABEL_372;
					}
					v164 = *(_DWORD*)(v158 + 36);
					if (v164 >= v157)
					{
						if (v164 > v157
							|| (v165 = *(_DWORD*)(v158 + 40), v165 >= 3)
							&& (v165 > 3
								|| (v166 = *(_DWORD*)(v158 + 44), v166 >= v155) && (v166 > v155 || *(_DWORD*)(v158 + 48) >= v69)))
						{
						LABEL_373:
							v156 = v158;
							v158 = *(_QWORD*)(v158 + 16);
							goto LABEL_374;
						}
					}
				LABEL_372:
					v158 = *(_QWORD*)(v158 + 24);
				LABEL_374:
					if (!v158)
						goto LABEL_375;
				}
			}
		}
	}
LABEL_375:
	v214.m128i_i64[0] = v156;
	v214.m128i_i64[1] = v159;
	v221 = v214;
	if (v156 != v159)
	{
		v167 = v221.m128i_i64[1];
		v168 = (_QWORD*)v221.m128i_i64[0];
		do
		{
			v169 = v168[7];
			if (v169 && !*(_DWORD*)(v169 + 132))
				sub_140543630(v68, 3, v169, *(_DWORD*)(v68 + 340), v155, 0, *(_DWORD*)(v68 + 340), 0i64, 0.0, 0);
			v170 = v168[3];
			if (v170)
			{
				v168 = (_QWORD*)v168[3];
				for (i9 = *(_QWORD**)(v170 + 16); i9; i9 = (_QWORD*)i9[2])
					v168 = i9;
			}
			else
			{
				for (i10 = v168[1]; v168 == *(_QWORD**)(i10 + 24); i10 = *(_QWORD*)(i10 + 8))
					v168 = (_QWORD*)i10;
				if (v168[3] != i10)
					v168 = (_QWORD*)i10;
			}
		} while (v168 != (_QWORD*)v167);
	}
	v173 = *(_QWORD*)(v68 + 312);
	v174 = *(_QWORD*)(qword_140C65B70 + 1624);
	v175 = *(_QWORD*)(v174 + 8);
	v176 = *(_DWORD*)(*(_QWORD*)(v173 + 8) + 28i64);
	v177 = v174;
	v178 = v175;
	if (v175)
	{
		while (1)
		{
			if (*(_DWORD*)(*(_QWORD*)(v173 + 112) + 24i64) == 8)
			{
				if (!*(_DWORD*)(v178 + 32))
					goto LABEL_402;
			}
			else if (*(_DWORD*)(v178 + 32))
			{
				v177 = v178;
				v178 = *(_QWORD*)(v178 + 16);
				goto LABEL_403;
			}
			v179 = *(_DWORD*)(v178 + 36);
			if (v176 >= v179)
			{
				if (v176 > v179
					|| (v180 = *(_DWORD*)(v178 + 40), v180 <= 4)
					&& (v180 < 4 || (v181 = *(_DWORD*)(v178 + 44), v5 >= v181) && (v5 > v181 || v69 >= *(_DWORD*)(v178 + 48))))
				{
				LABEL_402:
					v178 = *(_QWORD*)(v178 + 24);
					goto LABEL_403;
				}
			}
			v177 = v178;
			v178 = *(_QWORD*)(v178 + 16);
		LABEL_403:
			if (!v178)
			{
				while (1)
				{
					if (*(_DWORD*)(v175 + 32))
					{
						if (*(_DWORD*)(*(_QWORD*)(v173 + 112) + 24i64) != 8)
							goto LABEL_416;
					}
					else if (*(_DWORD*)(*(_QWORD*)(v173 + 112) + 24i64) == 8)
					{
						goto LABEL_415;
					}
					v182 = *(_DWORD*)(v175 + 36);
					if (v182 >= v176)
					{
						if (v182 > v176
							|| (v183 = *(_DWORD*)(v175 + 40), v183 >= 4)
							&& (v183 > 4 || (v184 = *(_DWORD*)(v175 + 44), v184 >= v5)
								&& (v184 > v5 || *(_DWORD*)(v175 + 48) >= v69)))
						{
						LABEL_416:
							v174 = v175;
							v175 = *(_QWORD*)(v175 + 16);
							goto LABEL_417;
						}
					}
				LABEL_415:
					v175 = *(_QWORD*)(v175 + 24);
				LABEL_417:
					if (!v175)
						goto LABEL_418;
				}
			}
		}
	}
LABEL_418:
	if (v174 != v177 || v5 != 4)
		v154 = v5;
	v34 = *(_DWORD*)(*(_QWORD*)(v173 + 112) + 24i64) == 8;
	v217 = *(_DWORD*)(v68 + 840);
	v218 = 4;
	v216 = v34;
	v219 = v154;
	v220 = v69;
	sub_1405663F0(qword_140C65B70 + 1616, &v214, &v216);
	v221 = v214;
	if (v214.m128i_i64[0] != _mm_srli_si128(v214, 8).m128i_u64[0])
	{
		v185 = v221.m128i_i64[1];
		v186 = (_QWORD*)v221.m128i_i64[0];
		do
		{
			v187 = v186[7];
			if (v187 && !*(_DWORD*)(v187 + 132))
				sub_1405428D0(v68, v187, v154);
			v188 = v186[3];
			if (v188)
			{
				v186 = (_QWORD*)v186[3];
				for (i11 = *(_QWORD**)(v188 + 16); i11; i11 = (_QWORD*)i11[2])
					v186 = i11;
			}
			else
			{
				for (i12 = v186[1]; v186 == *(_QWORD**)(i12 + 24); i12 = *(_QWORD*)(i12 + 8))
					v186 = (_QWORD*)i12;
				if (v186[3] != i12)
					v186 = (_QWORD*)i12;
			}
		} while (v186 != (_QWORD*)v185);
	}
	v191 = sub_1405410B0(v5, 5, *(_QWORD*)(v68 + 312), v69);
	v192 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v68 + 312) + 112i64) + 24i64) == 8;
	v218 = 5;
	v219 = v223;
	v216 = v192;
	v193 = *(_DWORD*)(v68 + 840);
	v220 = v69;
	v217 = v193;
	sub_1405663F0(qword_140C65B70 + 1616, &v214, &v216);
	v221 = v214;
	if (v214.m128i_i64[0] != _mm_srli_si128(v214, 8).m128i_u64[0])
	{
		v194 = v221.m128i_i64[1];
		v195 = (_QWORD*)v221.m128i_i64[0];
		do
		{
			v196 = v195[7];
			if (v196)
			{
				if (!*(_DWORD*)(v196 + 132))
				{
					v197 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v68 + 340));
					if (v197)
						sub_140543630(v68, 5, v196, *(_DWORD*)(v197 + 192), v191, 0, *(_DWORD*)(v68 + 340), 0i64, 0.0, 0);
				}
			}
			v198 = v195[3];
			if (v198)
			{
				v195 = (_QWORD*)v195[3];
				for (i13 = *(_QWORD**)(v198 + 16); i13; i13 = (_QWORD*)i13[2])
					v195 = i13;
			}
			else
			{
				for (i14 = v195[1]; v195 == *(_QWORD**)(i14 + 24); i14 = *(_QWORD*)(i14 + 8))
					v195 = (_QWORD*)i14;
				if (v195[3] != i14)
					v195 = (_QWORD*)i14;
			}
		} while (v195 != (_QWORD*)v194);
	}
	v201 = sub_1405410B0(v5, 6, *(_QWORD*)(v68 + 312), v69);
	v202 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v68 + 312) + 112i64) + 24i64) == 8;
	v218 = 6;
	v216 = v202;
	v203 = *(_DWORD*)(v68 + 840);
	v219 = v223;
	v217 = v203;
	v220 = v69;
	sub_1405663F0(qword_140C65B70 + 1616, &v214, &v216);
	v221 = v214;
	result = (__int64*)_mm_srli_si128(v214, 8).m128i_u64[0];
	if ((__int64*)v214.m128i_i64[0] != result)
	{
		v204 = v221.m128i_i64[1];
		v205 = (_QWORD*)v221.m128i_i64[0];
		do
		{
			v206 = v205[7];
			if (v206)
			{
				if (!*(_DWORD*)(v206 + 132))
				{
					v207 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v68 + 340));
					if (v207)
					{
						v208 = *(_QWORD*)(v207 + 408);
						v209 = 0i64;
						if (v208)
						{
							v210 = *(_QWORD*)(v207 + 400);
							v211 = v210;
							while (*(_DWORD*)v211 || *(_BYTE*)(v211 + 4))
							{
								++v209;
								v211 += 12i64;
								if (v209 >= v208)
									goto LABEL_460;
							}
							v212 = *(_DWORD*)(v210 + 12 * v209 + 8);
						}
						else
						{
						LABEL_460:
							v212 = 0;
						}
						sub_140543630(v68, 6, v206, v212, v201, 0, *(_DWORD*)(v68 + 340), 0i64, 0.0, 0);
					}
				}
			}
			v213 = v205[3];
			if (v213)
			{
				v205 = (_QWORD*)v205[3];
				for (result = *(__int64**)(v213 + 16); result; result = (__int64*)result[2])
					v205 = result;
			}
			else
			{
				for (result = (__int64*)v205[1]; v205 == (_QWORD*)result[3]; result = (__int64*)result[1])
					v205 = result;
				if ((__int64*)v205[3] != result)
					v205 = result;
			}
		} while (v205 != (_QWORD*)v204);
	}
	return result;
}
// 140541BEA: conditional instruction was optimized away because rcx.8!=0
// 140541F01: conditional instruction was optimized away because rcx.8!=0
// 140542215: conditional instruction was optimized away because rcx.8!=0
// 140542304: conditional instruction was optimized away because rcx.8!=0
// 1405424A5: conditional instruction was optimized away because rcx.8!=0
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

