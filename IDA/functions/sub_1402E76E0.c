#include "../winhttp.h"

//----- (00000001402E76E0) ----------------------------------------------------
void __fastcall sub_1402E76E0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // r12
	char* v11; // rdi
	_DWORD* v12; // rax
	int v13; // ecx
	_DWORD* v14; // r11
	int v15; // r10d
	unsigned __int32 v16; // r9d
	signed __int64 v17; // rdi
	unsigned __int64 v18; // rdx
	int v19; // r8d
	unsigned int v20; // ecx
	_DWORD* v21; // rax
	__int64 v22; // rax
	_DWORD* v23; // rcx
	__int64 v24; // rax
	__int64* v25; // rcx
	__int64 v26; // r10
	__int64 v27; // rax
	__int64 v28; // rdx
	__int64 v29; // rax
	__int64* v30; // rcx
	__int64 v31; // r10
	__int64 v32; // r12
	__int64 v33; // rax
	__int64 v34; // rdx
	__int64 v35; // rax
	__int64* v36; // rcx
	__int64 v37; // r8
	__int64 v38; // rbx
	__int64 v39; // rax
	__int64* v40; // rcx
	__int64 v41; // rdx
	__int64 v42; // rcx
	__int64 v43; // rax
	__int64* v44; // rcx
	__int64 v45; // r10
	__int64 v46; // rax
	__int64* v47; // rcx
	__int64 v48; // r8
	__m128 v49; // xmm15
	__m128 v50; // xmm7
	__m128 v51; // xmm6
	__m128 v52; // xmm8
	unsigned int v53; // r10d
	__m128 v54; // xmm9
	unsigned int v55; // r9d
	__m128 v56; // xmm5
	__int64 v57; // rdi
	unsigned __int16 v58; // ax
	__m128 v59; // xmm2
	__m128 v60; // xmm3
	__m128 v61; // xmm2
	__m128 v62; // xmm3
	__m128 v63; // xmm4
	__m128 v64; // xmm1
	__m128 v65; // xmm0
	unsigned int v66; // edx
	__m128 v67; // xmm1
	__int64 v68; // r8
	__m128* v69; // rcx
	__m128 v70; // xmm2
	__m128 v71; // xmm3
	__m128 v72; // xmm2
	__m128 v73; // xmm3
	__m128 v74; // xmm4
	__m128 v75; // xmm1
	__m128 v76; // xmm0
	unsigned int v77; // edx
	__m128 v78; // xmm1
	__int128* v79; // rcx
	__int64 v80; // r8
	__m128 v81; // xmm2
	__m128 v82; // xmm3
	__m128 v83; // xmm2
	__m128 v84; // xmm3
	__m128 v85; // xmm4
	__m128 v86; // xmm1
	__m128 v87; // xmm0
	unsigned int v88; // edx
	__m128 v89; // xmm1
	__int64 v90; // r8
	__m128* v91; // rcx
	__m128 v92; // xmm2
	__m128 v93; // xmm3
	__m128 v94; // xmm2
	__m128 v95; // xmm3
	__m128 v96; // xmm4
	__m128 v97; // xmm1
	__m128 v98; // xmm0
	__int64 v99; // rdx
	__m128 v100; // xmm1
	__int128* v101; // rcx
	__int64 v102; // r8
	int v103; // r14d
	int v104; // ecx
	__int64 v105; // rbx
	int v106; // eax
	int v107; // r12d
	__int64 v108; // r13
	unsigned int v109; // edi
	__int64 v110; // r11
	__int64 v111; // r8
	__int64 v112; // r9
	__int64 v113; // r10
	__int64 v114; // rsi
	unsigned __int64 v115; // rbx
	__int64 v116; // r15
	float v117; // xmm4_4
	__m128 v118; // xmm1
	__m128 v119; // xmm5
	__m128 v120; // xmm0
	__m128 v121; // xmm3
	__m128 v122; // xmm1
	bool v123; // zf
	__m128 v124; // xmm1
	__int64 v125; // r11
	unsigned __int8 v126; // r10
	unsigned __int8 v127; // dl
	char v128; // r10
	char v129; // r10
	unsigned __int8 v130; // dl
	char v131; // r10
	char v132; // r10
	unsigned __int8 v133; // dl
	char v134; // r10
	char v135; // r10
	__m128 v136; // xmm1
	__int64 v137; // r14
	unsigned __int64 i; // rax
	__int128 v139; // xmm0
	unsigned int* v140; // rbx
	__m128 v141; // xmm4
	__m128 v142; // xmm1
	__m128 v143; // xmm5
	__m128 v144; // xmm4
	__m128 v145; // xmm5
	__m128 v146; // xmm2
	__m128 v147; // xmm1
	__m128 v148; // xmm0
	unsigned int v149; // edx
	__m128 v150; // xmm1
	__int128* v151; // rcx
	__int64 v152; // r8
	unsigned __int64 j; // rax
	__m128 v154; // xmm1
	__m128 v155; // xmm3
	unsigned __int64 k; // rax
	__int128 v157; // xmm0
	unsigned int v158; // [rsp+30h] [rbp-D0h]
	unsigned int v159; // [rsp+34h] [rbp-CCh]
	__int64 v160; // [rsp+38h] [rbp-C8h]
	__int64 v161; // [rsp+40h] [rbp-C0h]
	__int64 v162; // [rsp+48h] [rbp-B8h] BYREF
	__int64 v163; // [rsp+50h] [rbp-B0h]
	__m128 v164; // [rsp+60h] [rbp-A0h]
	__int64 v165; // [rsp+70h] [rbp-90h] BYREF
	__int64 v166; // [rsp+78h] [rbp-88h] BYREF
	__int64 v167; // [rsp+80h] [rbp-80h] BYREF
	__int64 v168; // [rsp+88h] [rbp-78h]
	__int64* v169; // [rsp+90h] [rbp-70h] BYREF
	__int64* v170; // [rsp+98h] [rbp-68h] BYREF
	__int64 v171; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v172; // [rsp+A8h] [rbp-58h]
	__int64 v173; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v174; // [rsp+B8h] [rbp-48h] BYREF
	__int64 v175; // [rsp+C0h] [rbp-40h]
	__int64 v176; // [rsp+C8h] [rbp-38h]
	__int64 v177; // [rsp+D0h] [rbp-30h]
	__int64 v178; // [rsp+D8h] [rbp-28h]
	__m128 v179; // [rsp+E0h] [rbp-20h]
	__int64 v180; // [rsp+F0h] [rbp-10h]
	__m128 v181; // [rsp+100h] [rbp+0h]
	__int64 v182; // [rsp+110h] [rbp+10h]
	__int64 v183; // [rsp+118h] [rbp+18h]
	__int64 v184; // [rsp+120h] [rbp+20h]
	__int64 v185; // [rsp+128h] [rbp+28h]
	__int64 v186; // [rsp+130h] [rbp+30h]
	__int64 v187; // [rsp+138h] [rbp+38h]
	__int64 v188; // [rsp+140h] [rbp+40h]
	__m128 v189; // [rsp+150h] [rbp+50h]
	__int64 v190; // [rsp+160h] [rbp+60h]
	__int64 v191; // [rsp+168h] [rbp+68h]
	__int64 v192; // [rsp+170h] [rbp+70h]
	__int64 v193; // [rsp+178h] [rbp+78h]
	__int64 v194; // [rsp+180h] [rbp+80h]
	__int64 v195; // [rsp+188h] [rbp+88h]
	__int64 v196; // [rsp+190h] [rbp+90h]
	__int64 v197; // [rsp+198h] [rbp+98h]
	__m128 v198; // [rsp+1A0h] [rbp+A0h]
	__m128 v199; // [rsp+1B0h] [rbp+B0h]
	_BYTE v200[256]; // [rsp+1C0h] [rbp+C0h] BYREF
	_BYTE v201[256]; // [rsp+2C0h] [rbp+1C0h] BYREF
	__int128 v202[16]; // [rsp+3C0h] [rbp+2C0h] BYREF
	__int128 v203[16]; // [rsp+4C0h] [rbp+3C0h] BYREF

	v183 = a1;
	v2 = *(_QWORD*)(a1 + 64);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 64) = 0i64;
	}
	v3 = *(_QWORD*)(a1 + 192);
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		*(_QWORD*)(a1 + 192) = 0i64;
	}
	v4 = *(_QWORD*)(a1 + 200);
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		*(_QWORD*)(a1 + 200) = 0i64;
	}
	v5 = *(_QWORD*)(a1 + 272);
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		*(_QWORD*)(a1 + 272) = 0i64;
	}
	if (*(_QWORD*)(a1 + 264))
	{
		v6 = *(_QWORD*)(a1 + 32);
		if (*(float*)(v6 + 96) != 0.0
			&& (*(_BYTE*)(v6 + 56) & 2) != 0
			&& !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 40) + 64i64))(*(_QWORD*)(a1 + 40), 1i64)
			&& (!(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 40) + 64i64))(
				*(_QWORD*)(a1 + 40),
				17i64)
				|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 40) + 64i64))(
					*(_QWORD*)(a1 + 40),
					27i64)))
		{
			v7 = *(_QWORD*)(a1 + 40);
			v165 = 0i64;
			(*(void(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)v7 + 72i64))(v7, 1i64, &v165);
			v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v165 + 24i64))(v165);
			v9 = *(_QWORD*)(a1 + 24);
			v166 = 0i64;
			v10 = v8;
			(*(void(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)v9 + 72i64))(v9, 1i64, &v166);
			v11 = (char*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v166 + 24i64))(v166);
			sub_1402DDAC0(1, (int**)(a1 + 64));
			v12 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 64) + 24i64))(*(_QWORD*)(a1 + 64));
			*v12 = *(_DWORD*)v11;
			v13 = *((_DWORD*)v11 + 1);
			v14 = v12;
			v164 = 0i64;
			v189 = 0i64;
			v12[1] = v13;
			v15 = 0;
			v12[2] = *((_DWORD*)v11 + 2);
			v16 = 0;
			v12[3] = *((_DWORD*)v11 + 3);
			v196 = 0i64;
			v197 = 0i64;
			v194 = 0i64;
			v195 = 0i64;
			v162 = qword_140C79778;
			v163 = qword_140C79780;
			v160 = qword_140C79778;
			v17 = v11 - (char*)&v162;
			v161 = qword_140C79780;
			v18 = 0i64;
			do
			{
				if (*(_DWORD*)((char*)&v162 + v18 + v17))
				{
					*(_DWORD*)((char*)&v162 + v18) = v15;
					v164.m128_i32[v18 / 4] = 1065353216;
					*(_DWORD*)((char*)&v196 + v18) = v16;
					*(_DWORD*)((char*)&v194 + v18) = 3;
				}
				v19 = *(_DWORD*)(v18 + v10);
				if (v19)
				{
					v20 = 0;
					v21 = v14;
					do
					{
						if (*v21 == v19)
						{
							*((_DWORD*)&v160 + v20) = v15;
							v189.m128_i32[v20] = 1065353216;
							v199.m128_i32[v20] = v16;
							v198.m128_i32[v20] = 3;
							goto LABEL_29;
						}
						++v20;
						++v21;
					} while (v20 < 4);
					v22 = 0i64;
					v23 = v14;
					while (*v23)
					{
						v22 = (unsigned int)(v22 + 1);
						++v23;
						if ((unsigned int)v22 >= 4)
							goto LABEL_29;
					}
					v14[v22] = v19;
					*((_DWORD*)&v160 + v22) = v15;
					v189.m128_i32[v22] = 1065353216;
					v199.m128_i32[v22] = v16;
					v198.m128_i32[v22] = 3;
				}
			LABEL_29:
				v16 += 2;
				++v15;
				v18 += 4i64;
			} while (v16 < 8);
			v24 = (*(__int64(__fastcall**)(_QWORD, unsigned __int64))(**(_QWORD**)(a1 + 264) + 24i64))(
				*(_QWORD*)(a1 + 264),
				v18);
			v25 = *(__int64**)(a1 + 40);
			v173 = 0i64;
			v169 = 0i64;
			v26 = *v25;
			v190 = v24;
			(*(void(__fastcall**)(__int64*, __int64, __int64*))(v26 + 72))(v25, 17i64, &v173);
			(*(void(__fastcall**)(_QWORD, __int64, __int64**))(**(_QWORD**)(a1 + 40) + 72i64))(
				*(_QWORD*)(a1 + 40),
				18i64,
				&v169);
			v27 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v173 + 24i64))(v173);
			v28 = *v169;
			v185 = v27;
			v29 = (*(__int64(__fastcall**)(__int64*))(v28 + 24))(v169);
			v30 = *(__int64**)(a1 + 24);
			v171 = 0i64;
			v170 = 0i64;
			v31 = *v30;
			v32 = v29;
			v180 = v29;
			(*(void(__fastcall**)(__int64*, __int64, __int64*))(v31 + 72))(v30, 17i64, &v171);
			(*(void(__fastcall**)(_QWORD, __int64, __int64**))(**(_QWORD**)(a1 + 24) + 72i64))(
				*(_QWORD*)(a1 + 24),
				18i64,
				&v170);
			v33 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v171 + 24i64))(v171);
			v34 = *v170;
			v192 = v33;
			v35 = (*(__int64(__fastcall**)(__int64*))(v34 + 24))(v170);
			v36 = *(__int64**)(a1 + 40);
			v37 = *v36;
			v175 = 0i64;
			v38 = v35;
			v177 = v35;
			v176 = 0i64;
			if (!(*(unsigned int(__fastcall**)(__int64*, __int64))(v37 + 64))(v36, 17i64))
			{
				sub_1402DDAC0(17, (int**)(a1 + 192));
				sub_1402DDAC0(18, (int**)(a1 + 200));
				v39 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 192) + 24i64))(*(_QWORD*)(a1 + 192));
				v40 = *(__int64**)(a1 + 200);
				v41 = *v40;
				v175 = v39;
				v176 = (*(__int64(__fastcall**)(__int64*))(v41 + 24))(v40);
			}
			v42 = *(_QWORD*)(a1 + 40);
			v167 = 0i64;
			(*(void(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)v42 + 72i64))(v42, 27i64, &v167);
			v43 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v167 + 24i64))(v167);
			v44 = *(__int64**)(a1 + 24);
			v174 = 0i64;
			v45 = *v44;
			v182 = v43;
			(*(void(__fastcall**)(__int64*, __int64, __int64*))(v45 + 72))(v44, 27i64, &v174);
			v46 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v174 + 24i64))(v174);
			v47 = *(__int64**)(a1 + 40);
			v48 = *v47;
			v187 = v46;
			v168 = 0i64;
			if (!(*(unsigned int(__fastcall**)(__int64*, __int64))(v48 + 64))(v47, 27i64))
			{
				sub_1402DDAC0(27, (int**)(a1 + 272));
				v168 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 272) + 24i64))(*(_QWORD*)(a1 + 272));
			}
			v49 = v164;
			v50 = (__m128)xmmword_140C58780;
			v51 = (__m128)xmmword_140B608C0;
			v52 = (__m128)xmmword_140B60D90;
			v53 = 0;
			v159 = 0;
			v54 = (__m128)xmmword_140B60DE0;
			do
			{
				v55 = 0;
				v158 = 0;
				do
				{
					v56 = _mm_andnot_ps(v51, (__m128)xmmword_140B60900);
					v57 = (int)(dword_140C41724 * v53 + dword_140C41720 * v55);
					v58 = *(_WORD*)(v57 + v185 + 2);
					v188 = v57;
					v59 = _mm_mul_ps(
						_mm_mul_ps(
							_mm_cvtepi32_ps((__m128i)_mm_and_ps(
								_mm_shuffle_ps(
									(__m128) * (unsigned int*)(v57 + v185),
									(__m128) * (unsigned int*)(v57 + v185),
									0),
								v52)),
							v54),
						v50);
					v60 = _mm_mul_ps(
						_mm_mul_ps(
							_mm_cvtepi32_ps((__m128i)_mm_and_ps(
								_mm_shuffle_ps(
									(__m128) * (unsigned int*)(v57 + v185 + 2),
									(__m128) * (unsigned int*)(v57 + v185 + 2),
									0),
								v52)),
							v54),
						v50);
					v61 = _mm_or_ps(_mm_and_ps(_mm_shuffle_ps(v59, v59, 198), v51), v56);
					v62 = _mm_or_ps(_mm_and_ps(_mm_shuffle_ps(v60, v60, 198), v51), v56);
					if (*(_WORD*)(v57 + v185) > v58)
					{
						v65 = _mm_sub_ps(v62, v61);
						v64 = _mm_mul_ps((__m128)xmmword_140B7AC10, v65);
						v63 = _mm_add_ps(_mm_mul_ps((__m128)xmmword_140B7AC70, v65), v61);
					}
					else
					{
						v63 = 0i64;
						v64 = _mm_mul_ps(_mm_sub_ps(v62, v61), (__m128)xmmword_140B7AC50);
					}
					v66 = *(_DWORD*)(v57 + v185 + 4);
					v67 = _mm_add_ps(v64, v61);
					v68 = 16i64;
					v69 = (__m128*)v200;
					do
					{
						if ((v66 & 3) != 0)
						{
							if ((v66 & 3) == 1)
							{
								*v69 = v62;
							}
							else if ((v66 & 3) == 2)
							{
								*v69 = v67;
							}
							else
							{
								*v69 = v63;
							}
						}
						else
						{
							*v69 = v61;
						}
						++v69;
						v66 >>= 2;
						--v68;
					} while (v68);
					v70 = _mm_mul_ps(
						_mm_mul_ps(
							_mm_cvtepi32_ps((__m128i)_mm_and_ps(
								_mm_shuffle_ps(
									(__m128) * (unsigned int*)(v57 + v32),
									(__m128) * (unsigned int*)(v57 + v32),
									0),
								v52)),
							v54),
						v50);
					v71 = _mm_mul_ps(
						_mm_mul_ps(
							_mm_cvtepi32_ps((__m128i)_mm_and_ps(
								_mm_shuffle_ps(
									(__m128) * (unsigned int*)(v57 + v32 + 2),
									(__m128) * (unsigned int*)(v57 + v32 + 2),
									0),
								v52)),
							v54),
						v50);
					v72 = _mm_or_ps(_mm_and_ps(_mm_shuffle_ps(v70, v70, 198), v51), v56);
					v73 = _mm_or_ps(_mm_and_ps(_mm_shuffle_ps(v71, v71, 198), v51), v56);
					if (*(_WORD*)(v57 + v32) > *(_WORD*)(v57 + v32 + 2))
					{
						v76 = _mm_sub_ps(v73, v72);
						v75 = _mm_mul_ps((__m128)xmmword_140B7AC10, v76);
						v74 = _mm_add_ps(_mm_mul_ps((__m128)xmmword_140B7AC70, v76), v72);
					}
					else
					{
						v74 = 0i64;
						v75 = _mm_mul_ps(_mm_sub_ps(v73, v72), (__m128)xmmword_140B7AC50);
					}
					v77 = *(_DWORD*)(v57 + v32 + 4);
					v78 = _mm_add_ps(v75, v72);
					v79 = v202;
					v80 = 16i64;
					do
					{
						if ((v77 & 3) != 0)
						{
							if ((v77 & 3) == 1)
							{
								*v79 = (__int128)v73;
							}
							else if ((v77 & 3) == 2)
							{
								*v79 = (__int128)v78;
							}
							else
							{
								*v79 = (__int128)v74;
							}
						}
						else
						{
							*v79 = (__int128)v72;
						}
						++v79;
						v77 >>= 2;
						--v80;
					} while (v80);
					v81 = _mm_mul_ps(
						_mm_mul_ps(
							_mm_cvtepi32_ps((__m128i)_mm_and_ps(
								_mm_shuffle_ps(
									(__m128) * (unsigned int*)(v57 + v192),
									(__m128) * (unsigned int*)(v57 + v192),
									0),
								v52)),
							v54),
						v50);
					v82 = _mm_mul_ps(
						_mm_mul_ps(
							_mm_cvtepi32_ps((__m128i)_mm_and_ps(
								_mm_shuffle_ps(
									(__m128) * (unsigned int*)(v57 + v192 + 2),
									(__m128) * (unsigned int*)(v57 + v192 + 2),
									0),
								v52)),
							v54),
						v50);
					v83 = _mm_or_ps(_mm_and_ps(_mm_shuffle_ps(v81, v81, 198), v51), v56);
					v84 = _mm_or_ps(_mm_and_ps(_mm_shuffle_ps(v82, v82, 198), v51), v56);
					if (*(_WORD*)(v57 + v192) > *(_WORD*)(v57 + v192 + 2))
					{
						v87 = _mm_sub_ps(v84, v83);
						v86 = _mm_mul_ps((__m128)xmmword_140B7AC10, v87);
						v85 = _mm_add_ps(_mm_mul_ps((__m128)xmmword_140B7AC70, v87), v83);
					}
					else
					{
						v85 = 0i64;
						v86 = _mm_mul_ps(_mm_sub_ps(v84, v83), (__m128)xmmword_140B7AC50);
					}
					v88 = *(_DWORD*)(v57 + v192 + 4);
					v89 = _mm_add_ps(v86, v83);
					v90 = 16i64;
					v91 = (__m128*)v201;
					do
					{
						if ((v88 & 3) != 0)
						{
							if ((v88 & 3) == 1)
							{
								*v91 = v84;
							}
							else if ((v88 & 3) == 2)
							{
								*v91 = v89;
							}
							else
							{
								*v91 = v85;
							}
						}
						else
						{
							*v91 = v83;
						}
						++v91;
						v88 >>= 2;
						--v90;
					} while (v90);
					v92 = _mm_mul_ps(
						_mm_mul_ps(
							_mm_cvtepi32_ps((__m128i)_mm_and_ps(
								_mm_shuffle_ps(
									(__m128) * (unsigned int*)(v57 + v38),
									(__m128) * (unsigned int*)(v57 + v38),
									0),
								v52)),
							v54),
						v50);
					v93 = _mm_mul_ps(
						_mm_mul_ps(
							_mm_cvtepi32_ps((__m128i)_mm_and_ps(
								_mm_shuffle_ps(
									(__m128) * (unsigned int*)(v57 + v38 + 2),
									(__m128) * (unsigned int*)(v57 + v38 + 2),
									0),
								v52)),
							v54),
						v50);
					v94 = _mm_or_ps(_mm_and_ps(_mm_shuffle_ps(v92, v92, 198), v51), v56);
					v95 = _mm_or_ps(_mm_and_ps(_mm_shuffle_ps(v93, v93, 198), v51), v56);
					if (*(_WORD*)(v57 + v38) > *(_WORD*)(v57 + v38 + 2))
					{
						v98 = _mm_sub_ps(v95, v94);
						v97 = _mm_mul_ps((__m128)xmmword_140B7AC10, v98);
						v96 = _mm_add_ps(_mm_mul_ps((__m128)xmmword_140B7AC70, v98), v94);
					}
					else
					{
						v96 = 0i64;
						v97 = _mm_mul_ps(_mm_sub_ps(v95, v94), (__m128)xmmword_140B7AC50);
					}
					LODWORD(v99) = *(_DWORD*)(v57 + v38 + 4);
					v100 = _mm_add_ps(v97, v94);
					v101 = v203;
					v102 = 16i64;
					do
					{
						if ((v99 & 3) != 0)
						{
							if ((v99 & 3) == 1)
							{
								*v101 = (__int128)v95;
							}
							else if ((v99 & 3) == 2)
							{
								*v101 = (__int128)v100;
							}
							else
							{
								*v101 = (__int128)v96;
							}
						}
						else
						{
							*v101 = (__int128)v94;
						}
						++v101;
						v99 = (unsigned int)v99 >> 2;
						--v102;
					} while (v102);
					v103 = 4 * v53;
					v104 = 4 * v55;
					v105 = 0i64;
					v106 = 4 * v53 + 4;
					v107 = 4 * v55 + 4;
					v164.m128_i32[0] = 4 * v55;
					v164.m128_i32[1] = 4 * v53;
					v172 = 0i64;
					v164.m128_u64[1] = __PAIR64__(v106, v107);
					if (!__OFSUB__(4 * v53, v106))
					{
						v108 = v103;
						do
						{
							v109 = v104;
							if (v104 < v107)
							{
								v110 = (int)v160;
								v99 = (int)v162;
								v111 = SHIDWORD(v162);
								v112 = (int)v163;
								v113 = SHIDWORD(v163);
								v114 = 16 * v105;
								v191 = (int)v160;
								v178 = (int)v162;
								v184 = SHIDWORD(v162);
								v172 += (unsigned int)(v107 - v104);
								v193 = (int)v163;
								v186 = SHIDWORD(v163);
								v115 = 16 * v105;
								v116 = v104;
								do
								{
									v117 = 0.0;
									if ((unsigned int)v103 <= 0x40 && v109 <= 0x40)
									{
										v99 = v178;
										v117 = (float)((float)*(unsigned __int8*)(v108 * dword_140C4191C + v190 + v116 * dword_140C41918 + 1)
											* 0.0039215689)
											* *(float*)(*(_QWORD*)(v183 + 32) + 96i64);
									}
									v118 = *(__m128*) & v200[v115];
									if (_mm_shuffle_ps(v118, v118, 255).m128_f32[0] >= 0.5)
									{
										v198 = _mm_sub_ps(
											_mm_add_ps(_mm_mul_ps((__m128)xmmword_140B7A790, (__m128)v202[v115 / 0x10]), v118),
											(__m128)xmmword_140B7B240);
										v198.m128_f32[3] = (float)((float)(1.0 - v198.m128_f32[0])
											- _mm_shuffle_ps(v198, v198, 85).m128_f32[0])
											- _mm_shuffle_ps(v198, v198, 170).m128_f32[0];
										v179 = _mm_min_ps(_mm_max_ps((__m128)0i64, v198), (__m128)xmmword_140B7B240);
									}
									else
									{
										v179 = 0i64;
									}
									v119 = (__m128)v203[v115 / 0x10];
									v120 = (__m128)v179.m128_u32[(int)v161];
									v121 = _mm_unpacklo_ps((__m128)v179.m128_u32[v110], v120);
									v120.m128_f32[0] = v117;
									v122 = *(__m128*) & v201[v115];
									*(__m128*)& v200[v115] = _mm_mul_ps(
										_mm_min_ps(
											_mm_unpacklo_ps(
												v121,
												_mm_unpacklo_ps(
													(__m128)v179.m128_u32[SHIDWORD(v160)],
													(__m128)v179.m128_u32[SHIDWORD(v161)])),
											v189),
										_mm_shuffle_ps(v120, v120, 0));
									if (_mm_shuffle_ps(v122, v122, 255).m128_f32[0] >= 0.5)
									{
										v199 = _mm_sub_ps(
											_mm_add_ps(_mm_mul_ps((__m128)xmmword_140B7A790, v119), v122),
											(__m128)xmmword_140B7B240);
										v199.m128_f32[3] = (float)((float)(1.0 - v199.m128_f32[0])
											- _mm_shuffle_ps(v199, v199, 85).m128_f32[0])
											- _mm_shuffle_ps(v199, v199, 170).m128_f32[0];
										v181 = _mm_min_ps(_mm_max_ps((__m128)0i64, v199), (__m128)xmmword_140B7B240);
									}
									else
									{
										v181 = 0i64;
									}
									v123 = v168 == 0;
									v124 = (__m128)0x3F800000u;
									v124.m128_f32[0] = 1.0 - v117;
									*(__m128*)& v201[v115] = _mm_mul_ps(
										_mm_shuffle_ps(v124, v124, 0),
										_mm_min_ps(
											_mm_unpacklo_ps(
												_mm_unpacklo_ps(
													(__m128)v181.m128_u32[v99],
													(__m128)v181.m128_u32[v112]),
												_mm_unpacklo_ps(
													(__m128)v181.m128_u32[v111],
													(__m128)v181.m128_u32[v113])),
											v49));
									if (!v123 && (unsigned int)v103 < 0x40 && v109 < 0x40)
									{
										v125 = (int)(dword_140C41954 * v103 + v109 * dword_140C41950);
										v126 = *(_BYTE*)(v125 + v187);
										v127 = v126;
										if (*(float*)&v201[v114 + 12] < *(float*)&v200[v114 + 12])
											v126 = *(_BYTE*)(v125 + v182);
										v128 = 4 * (BYTE4(v195) & (v126 >> SBYTE4(v197)));
										if (*(float*)&v201[v114 + 8] < *(float*)&v200[v114 + 8])
											v127 = *(_BYTE*)(v125 + v182);
										v129 = v195 & (v127 >> v197) | v128;
										v130 = *(_BYTE*)(v125 + v187);
										v131 = 4 * v129;
										if (*(float*)&v201[v114 + 4] < *(float*)&v200[v114 + 4])
											v130 = *(_BYTE*)(v125 + v182);
										v132 = BYTE4(v194) & (v130 >> SBYTE4(v196)) | v131;
										v133 = *(_BYTE*)(v125 + v187);
										v111 = v184;
										v134 = 4 * v132;
										if (*(float*)&v201[v114] < *(float*)&v200[v114])
											v133 = *(_BYTE*)(v125 + v182);
										v112 = v193;
										v135 = v194 & (v133 >> v196) | v134;
										v99 = v178;
										*(_BYTE*)(v125 + v168) = v135;
										v113 = v186;
										v110 = v191;
									}
									v136 = _mm_add_ps(*(__m128*) & v201[v115], *(__m128*) & v200[v115]);
									*(__m128*)& v200[v115] = v136;
									if (_mm_movemask_ps(_mm_cmpneq_ps(v136, (__m128)0i64)))
										*(_DWORD*)&v200[v115 + 12] = 1065353216;
									++v109;
									v114 += 16i64;
									v115 += 16i64;
									++v116;
								} while ((int)v109 < v107);
								v104 = v164.m128_i32[0];
								v105 = v172;
								v106 = v164.m128_i32[3];
							}
							++v103;
							++v108;
						} while (v103 < v106);
						v50 = (__m128)xmmword_140C58780;
						v51 = (__m128)xmmword_140B608C0;
						v52 = (__m128)xmmword_140B60D90;
						v53 = v159;
						v55 = v158;
						v57 = v188;
						v54 = (__m128)xmmword_140B60DE0;
					}
					v137 = v175;
					if (v175)
					{
						for (i = 0i64; i < 16; v202[i + 15] = v139)
						{
							v139 = *(_OWORD*)&v200[i * 16];
							++i;
						}
						v140 = (unsigned int*)(v57 + v137);
						sub_140267380((_QWORD*)(v57 + v137), (__int64)v203, 1, 0.5, 0x40000);
						v141 = _mm_mul_ps(
							_mm_mul_ps(
								_mm_cvtepi32_ps((__m128i)_mm_and_ps(
									_mm_shuffle_ps((__m128) * v140, (__m128) * v140, 0),
									(__m128)xmmword_140B60D90)),
								(__m128)xmmword_140B60DE0),
							(__m128)xmmword_140C58780);
						v142 = _mm_andnot_ps((__m128)xmmword_140B608C0, (__m128)xmmword_140B60900);
						v143 = _mm_mul_ps(
							_mm_mul_ps(
								_mm_cvtepi32_ps((__m128i)_mm_and_ps(
									_mm_shuffle_ps(
										(__m128) * (unsigned int*)((char*)v140 + 2),
										(__m128) * (unsigned int*)((char*)v140 + 2),
										0),
									(__m128)xmmword_140B60D90)),
								(__m128)xmmword_140B60DE0),
							(__m128)xmmword_140C58780);
						v144 = _mm_or_ps(_mm_and_ps(_mm_shuffle_ps(v141, v141, 198), (__m128)xmmword_140B608C0), v142);
						v145 = _mm_or_ps(_mm_and_ps(_mm_shuffle_ps(v143, v143, 198), (__m128)xmmword_140B608C0), v142);
						if (*(_WORD*)v140 > *((_WORD*)v140 + 1))
						{
							v148 = _mm_sub_ps(v145, v144);
							v147 = _mm_mul_ps((__m128)xmmword_140B7AC10, v148);
							v146 = _mm_add_ps(_mm_mul_ps((__m128)xmmword_140B7AC70, v148), v144);
						}
						else
						{
							v146 = 0i64;
							v147 = _mm_mul_ps(_mm_sub_ps(v145, v144), (__m128)xmmword_140B7AC50);
						}
						v149 = v140[1];
						v150 = _mm_add_ps(v147, v144);
						v151 = v202;
						v152 = 16i64;
						do
						{
							if ((v149 & 3) != 0)
							{
								if ((v149 & 3) == 1)
								{
									*v151 = (__int128)v145;
								}
								else if ((v149 & 3) == 2)
								{
									*v151 = (__int128)v150;
								}
								else
								{
									*v151 = (__int128)v146;
								}
							}
							else
							{
								*v151 = (__int128)v144;
							}
							++v151;
							v149 >>= 2;
							--v152;
						} while (v152);
						for (j = 0i64;
							j < 0x100;
							*(__m128*) & v201[j + 240] = _mm_mul_ps(
								_mm_unpacklo_ps(
									_mm_unpacklo_ps(v155, _mm_shuffle_ps(v155, v155, 170)),
									_mm_unpacklo_ps(_mm_shuffle_ps(v155, v155, 85), (__m128)0x3F800000u)),
								(__m128)xmmword_140B7B1B0))
						{
							v154 = *(__m128*) & v200[j];
							j += 16i64;
							v155 = _mm_add_ps(
								(__m128)xmmword_140B7AC50,
								_mm_mul_ps(_mm_sub_ps(v154, *(__m128*) & v201[j + 240]), (__m128)xmmword_140B7AC50));
						}
						for (k = 0i64; k < 16; v202[k + 15] = v157)
							v157 = v202[k++];
						sub_140267380((_QWORD*)(v57 + v176), (__int64)v203, 1, 0.0, 0x40000);
						v53 = v159;
						v55 = v158;
						v50 = (__m128)xmmword_140C58780;
						v51 = (__m128)xmmword_140B608C0;
						v52 = (__m128)xmmword_140B60D90;
						v54 = (__m128)xmmword_140B60DE0;
					}
					v38 = v177;
					v32 = v180;
					v158 = ++v55;
				} while (v55 <= 0x10);
				v159 = ++v53;
			} while (v53 <= 0x10);
			if (v174)
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v174 + 8i64))(v174, v99);
			if (v167)
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v167 + 8i64))(v167, v99);
			if (v170)
				(*(void(__fastcall**)(__int64*, __int64))(*v170 + 8))(v170, v99);
			if (v171)
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v171 + 8i64))(v171, v99);
			if (v169)
				(*(void(__fastcall**)(__int64*, __int64))(*v169 + 8))(v169, v99);
			if (v173)
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v173 + 8i64))(v173, v99);
			if (v166)
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v166 + 8i64))(v166, v99);
			if (v165)
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v165 + 8i64))(v165, v99);
		}
	}
}
// 1402E79C7: conditional instruction was optimized away because ecx.4<4u
// 1402E85D5: variable 'v99' is possibly undefined
// 140B608C0: using guessed type __int128 xmmword_140B608C0;
// 140B60900: using guessed type __int128 xmmword_140B60900;
// 140B60D90: using guessed type __int128 xmmword_140B60D90;
// 140B60DE0: using guessed type __int128 xmmword_140B60DE0;
// 140B7A790: using guessed type __int128 xmmword_140B7A790;
// 140B7AC10: using guessed type __int128 xmmword_140B7AC10;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7AC70: using guessed type __int128 xmmword_140B7AC70;
// 140B7B1B0: using guessed type __int128 xmmword_140B7B1B0;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C41720: using guessed type int dword_140C41720;
// 140C41724: using guessed type int dword_140C41724;
// 140C41918: using guessed type int dword_140C41918;
// 140C4191C: using guessed type int dword_140C4191C;
// 140C41950: using guessed type int dword_140C41950;
// 140C41954: using guessed type int dword_140C41954;
// 140C58780: using guessed type __int128 xmmword_140C58780;
// 140C79778: using guessed type __int64 qword_140C79778;
// 140C79780: using guessed type __int64 qword_140C79780;

