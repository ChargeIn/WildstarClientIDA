#include "../winhttp.h"

//----- (000000014034EA90) ----------------------------------------------------
void __fastcall sub_14034EA90(__int64 a1)
{
	__int64 v1; // rsi
	_DWORD* v2; // rax
	__m128 v3; // xmm6
	_DWORD* v4; // r9
	__m128i v5; // xmm1
	_DWORD* v6; // r9
	__m128i v7; // xmm1
	_DWORD* v8; // r9
	__m128i v9; // xmm1
	__int64 v10; // r9
	__int64 v11; // rax
	__int64 v12; // rbx
	__m128 v13; // xmm6
	__int64 v14; // r11
	int v15; // edi
	__m128 v16; // xmm8
	__m128 v17; // xmm7
	unsigned int v18; // r10d
	int v19; // eax
	__m128 v20; // xmm1
	__m128 v21; // xmm4
	float v22; // xmm0_4
	__m128 v23; // xmm9
	int v24; // r11d
	__m128 v25; // xmm9
	__m128 v26; // xmm7
	unsigned int v27; // r10d
	__m128 v28; // xmm1
	int v29; // eax
	__m128 v30; // xmm1
	float v31; // xmm0_4
	__int64 v32; // r10
	unsigned int i; // edi
	unsigned int v34; // r11d
	__int16 v35; // r8
	_QWORD* v36; // rax
	__int64 v37; // rdx
	_QWORD* v38; // rcx
	int v39; // xmm3_4
	float v40; // xmm1_4
	_QWORD* v41; // rcx
	int v42; // r8d
	_QWORD* v43; // rcx
	unsigned int v44; // edx
	int v45; // eax
	_QWORD* v46; // rcx
	unsigned int v47; // edx
	int v48; // eax
	__int64 v49; // rcx
	unsigned int v50; // esi
	_WORD* v51; // rbx
	__int16 v52; // cx
	__int64 v53; // r10
	__int16 v54; // r13
	__int16 v55; // r12
	__int16 v56; // dx
	__int16 v57; // ax
	__int16 v58; // r8
	__int16 v59; // dx
	__int16 v60; // ax
	__int16 v61; // dx
	__int16 v62; // ax
	__int16 v63; // cx
	__int64 v64; // r10
	__int16 v65; // r14
	__int16 v66; // r15
	__int16 v67; // ax
	__int16 v68; // dx
	__int16 v69; // r8
	__int16 v70; // ax
	__int16 v71; // dx
	__int16 v72; // dx
	__int16 v73; // ax
	int v74; // edx
	int v75; // ecx
	__int64 v76; // r11
	int v77; // r14d
	int v78; // r15d
	int v79; // r12d
	__int16 v80; // r13
	__int16 v81; // r9
	__int16 v82; // di
	__int16 v83; // ax
	__int16 v84; // r8
	__int16 v85; // ax
	bool v86; // zf
	__int16 v87; // cx
	__int64 v88; // r10
	__int16 v89; // r14
	__int16 v90; // r15
	__int16 v91; // ax
	__int16 v92; // dx
	__int16 v93; // r8
	__int16 v94; // ax
	__int16 v95; // dx
	__int16 v96; // dx
	__int16 v97; // ax
	__int16 v98; // cx
	__int64 v99; // r10
	__int16 v100; // dx
	__int16 v101; // r13
	__int16 v102; // r12
	__int16 v103; // ax
	__int16 v104; // r8
	__int16 v105; // dx
	__int16 v106; // ax
	__int16 v107; // dx
	__int16 v108; // ax
	__int16 v109; // ax
	__int16 v110; // cx
	__int16 v111; // r8
	__int16 v112; // ax
	__int16 v113; // cx
	__int16 v114; // dx
	__int16 v115; // ax
	__int16 v116; // cx
	__int16 v117; // cx
	__int16 v118; // ax
	__int64 v119; // rcx
	__int64 v120; // rax
	__int64 v121; // rax
	_QWORD* v122; // rax
	_DWORD* v123; // rax
	_DWORD* v124; // rax
	_DWORD* v125; // rax
	_DWORD* v126; // rax
	_DWORD* v127; // rbx
	float* v128; // rbx
	float v129; // xmm10_4
	int v130; // edi
	float v131; // xmm10_4
	double v132; // xmm6_8
	float v133; // xmm7_4
	float v134; // xmm0_4
	_WORD* v135; // rdx
	unsigned int v136; // r8d
	unsigned int v137; // eax
	char v138; // cl
	char v139; // al
	__int64 v140; // rax
	__int64 v141; // rdx
	_WORD* v142; // r8
	__int16 v143; // cx
	__int16 v144; // ax
	__int64 v145; // rbx
	__int64 v146; // rax
	__int64 v147; // r8
	__int64 j; // rdx
	unsigned int k; // ecx
	int v150; // eax
	__int64 v151; // r10
	unsigned int m; // edi
	unsigned int v153; // r11d
	__int16 v154; // r8
	_QWORD* v155; // rbx
	__int64 v156; // rdi
	__int64 n; // rbx
	__int16 v158; // [rsp+40h] [rbp-C8h]
	__int16 v159; // [rsp+44h] [rbp-C4h]
	__int16 v160; // [rsp+64h] [rbp-A4h]
	__int16 v161; // [rsp+80h] [rbp-88h]
	__int16 v162; // [rsp+ACh] [rbp-5Ch]
	__int16 v163; // [rsp+D0h] [rbp-38h]
	__int128 v164; // [rsp+E8h] [rbp-20h] BYREF
	__int64 v165; // [rsp+F8h] [rbp-10h]
	__int64 v166; // [rsp+1D8h] [rbp+D0h] BYREF
	__int64 v167; // [rsp+1E0h] [rbp+D8h] BYREF
	__int64 v168; // [rsp+1E8h] [rbp+E0h]
	__int64 v169; // [rsp+1F0h] [rbp+E8h]

	v166 = a1;
	v1 = a1;
	if ((*(_BYTE*)(a1 + 16) & 0x10) != 0)
	{
		v2 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 216) + 56i64))(
			*(_QWORD*)(a1 + 216),
			0i64,
			0i64,
			2i64);
		if (v2)
		{
			*v2 = _mm_cvtsi128_si32((__m128i)xmmword_140B7A620);
			v2[1] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)xmmword_140B7A620, 4));
			v2[2] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)xmmword_140B7A620, 8));
			v164 = 0i64;
			sub_1401C95B0(&v167, (__m128i*) & v164);
			v3 = (__m128)(unsigned int)dword_140C43E4C;
			v4[3] = v167;
			v5 = (__m128i)_mm_unpacklo_ps(_mm_unpacklo_ps((__m128)0i64, v3), (__m128)xmmword_140B7A3E0);
			v4[4] = _mm_cvtsi128_si32(v5);
			v4[5] = _mm_cvtsi128_si32(_mm_srli_si128(v5, 4));
			v4[6] = _mm_cvtsi128_si32(_mm_srli_si128(v5, 8));
			v164 = xmmword_140B7A4B0;
			sub_1401C95B0(&v167, (__m128i*) & v164);
			v6[7] = v167;
			v7 = (__m128i)_mm_unpacklo_ps(_mm_unpacklo_ps(v3, (__m128)0i64), (__m128)xmmword_140B7A3E0);
			v6[8] = _mm_cvtsi128_si32(v7);
			v6[9] = _mm_cvtsi128_si32(_mm_srli_si128(v7, 4));
			v6[10] = _mm_cvtsi128_si32(_mm_srli_si128(v7, 8));
			v164 = xmmword_140B7A330;
			sub_1401C95B0(&v167, (__m128i*) & v164);
			v8[11] = v167;
			v9 = (__m128i)_mm_unpacklo_ps(_mm_unpacklo_ps(v3, v3), (__m128)xmmword_140B7A3E0);
			v8[12] = _mm_cvtsi128_si32(v9);
			v8[13] = _mm_cvtsi128_si32(_mm_srli_si128(v9, 4));
			v8[14] = _mm_cvtsi128_si32(_mm_srli_si128(v9, 8));
			v164 = xmmword_140B7A4C0;
			sub_1401C95B0(&v167, (__m128i*) & v164);
			*(_DWORD*)(v10 + 60) = v167;
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v1 + 216) + 64i64))(*(_QWORD*)(v1 + 216));
		}
	}
	if ((*(_BYTE*)(v1 + 16) & 4) != 0)
	{
		v11 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(v1 + 120) + 56i64))(
			*(_QWORD*)(v1 + 120),
			0i64,
			0i64,
			2i64);
		v12 = v11;
		if (v11)
		{
			v13 = (__m128)(unsigned int)dword_140C43E84;
			v14 = v11;
			v15 = 0;
			v16 = _mm_shuffle_ps((__m128)(unsigned int)dword_140C43E4C, (__m128)(unsigned int)dword_140C43E4C, 0);
			do
			{
				v17 = 0i64;
				v18 = 0;
				do
				{
					v19 = v18;
					v20 = 0i64;
					++v18;
					v14 += 4i64;
					v17.m128_f32[0] = (float)v15 * v13.m128_f32[0];
					v20.m128_f32[0] = (float)v19 * v13.m128_f32[0];
					v21 = _mm_div_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(v20, (__m128)0i64), _mm_unpacklo_ps(v17, (__m128)0i64)), v16);
					v22 = _mm_shuffle_ps(v21, v21, 85).m128_f32[0];
					*(_DWORD*)(v14 - 4) = (unsigned __int8)(int)(float)(v22 * 65535.0)
						+ ((unsigned __int8)((unsigned __int16)(int)(float)(v21.m128_f32[0] * 65535.0) >> 8) << 8)
						+ ((unsigned __int8)(int)(float)(v21.m128_f32[0] * 65535.0) << 16)
						+ ((unsigned __int8)((unsigned __int16)(int)(float)(v22 * 65535.0) >> 8) << 24);
				} while (v18 <= 0x10);
				++v15;
				v14 += 64i64;
			} while ((unsigned int)v15 <= 0x10);
			v23 = v13;
			v24 = 0;
			v23.m128_f32[0] = v13.m128_f32[0] * 0.5;
			v25 = _mm_shuffle_ps(v23, v23, 0);
			do
			{
				v26 = 0i64;
				v12 += 68i64;
				v27 = 0;
				do
				{
					v28 = 0i64;
					v29 = v27++;
					v12 += 4i64;
					v28.m128_f32[0] = (float)v29 * v13.m128_f32[0];
					v26.m128_f32[0] = (float)v24 * v13.m128_f32[0];
					v30 = _mm_div_ps(
						_mm_add_ps(
							v25,
							_mm_unpacklo_ps(_mm_unpacklo_ps(v28, (__m128)0i64), _mm_unpacklo_ps(v26, (__m128)0i64))),
						v16);
					v31 = _mm_shuffle_ps(v30, v30, 85).m128_f32[0] * 65535.0;
					*(_DWORD*)(v12 - 4) = (unsigned __int8)(int)v31
						+ ((unsigned __int8)((unsigned __int16)(int)(float)(v30.m128_f32[0] * 65535.0) >> 8) << 8)
						+ ((unsigned __int8)(int)(float)(v30.m128_f32[0] * 65535.0) << 16)
						+ ((unsigned __int8)((unsigned __int16)(int)v31 >> 8) << 24);
				} while (v27 < 0x10);
				++v24;
			} while ((unsigned int)v24 < 0x10);
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v1 + 120) + 64i64))(*(_QWORD*)(v1 + 120));
		}
	}
	if ((*(_BYTE*)(v1 + 16) & 1) != 0 && (*(_BYTE*)(v1 + 20) & 8) != 0)
	{
		v32 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(v1 + 240) + 56i64))(
			*(_QWORD*)(v1 + 240),
			0i64,
			0i64,
			2i64);
		if (v32)
		{
			for (i = 0; i < 0x10; ++i)
			{
				v34 = 0;
				do
				{
					v35 = 33 * i + v34++;
					v32 += 24i64;
					*(_WORD*)(v32 - 22) = v35;
					*(_WORD*)(v32 - 14) = v35;
					*(_WORD*)(v32 - 16) = v35 + 1;
					*(_WORD*)(v32 - 2) = v35 + 1;
					*(_WORD*)(v32 - 24) = v35 + 17;
					*(_WORD*)(v32 - 18) = v35 + 17;
					*(_WORD*)(v32 - 12) = v35 + 17;
					*(_WORD*)(v32 - 6) = v35 + 17;
					*(_WORD*)(v32 - 20) = v35 + 33;
					*(_WORD*)(v32 - 10) = v35 + 33;
					*(_WORD*)(v32 - 8) = v35 + 34;
					*(_WORD*)(v32 - 4) = v35 + 34;
				} while (v34 < 0x10);
			}
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v1 + 240) + 64i64))(*(_QWORD*)(v1 + 240));
		}
	}
	if ((*(_BYTE*)(v1 + 16) & 9) == 9)
	{
		v36 = (_QWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(v1 + 280) + 56i64))(
			*(_QWORD*)(v1 + 280),
			0i64,
			0i64,
			2i64);
		if (v36)
		{
			v37 = 33i64;
			*v36 = qword_140C67480;
			v38 = v36 + 1;
			do
			{
				*v38++ = qword_140C67480;
				--v37;
			} while (v37);
			v39 = dword_140C43EBC;
			v40 = *(float*)&dword_140C43EC0;
			v41 = v38 + 1;
			v42 = 0;
			v167 = (unsigned int)dword_140C43EBC;
			LODWORD(v169) = dword_140C43EBC;
			*(v41 - 1) = (unsigned int)dword_140C43EBC;
			LODWORD(v167) = 0;
			do
			{
				v43 = v41 + 1;
				v44 = 0;
				*((float*)&v167 + 1) = (float)v42 * v40;
				*((float*)&v168 + 1) = *((float*)&v167 + 1);
				*(v43 - 1) = v167;
				do
				{
					v45 = v44++;
					++v43;
					*(float*)&v168 = (float)v45 * v40;
					*(v43 - 1) = v168;
				} while (v44 <= 0x20);
				*((float*)&v169 + 1) = (float)v42++ * v40;
				*v43 = v169;
				v41 = v43 + 1;
			} while ((unsigned int)v42 <= 0x20);
			LODWORD(v167) = 0;
			*v41 = __PAIR64__(v39, 0);
			v46 = v41 + 1;
			HIDWORD(v167) = v39;
			v47 = 0;
			do
			{
				v48 = v47++;
				++v46;
				*(float*)&v167 = (float)v48 * v40;
				*(v46 - 1) = v167;
			} while (v47 <= 0x20);
			LODWORD(v167) = v39;
			HIDWORD(v167) = v39;
			*v46 = v167;
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v1 + 280) + 64i64))(*(_QWORD*)(v1 + 280));
		}
		v49 = 0i64;
		v50 = 0;
		v165 = 0i64;
		do
		{
			v51 = (_WORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(v166 + 8 * v49 + 288)
				+ 56i64))(
					*(_QWORD*)(v166 + 8 * v49 + 288),
					0i64,
					0i64,
					2i64);
			if (v51)
			{
				v52 = 2;
				v53 = 32i64;
				do
				{
					if (v50)
					{
						if (v50 == 1)
						{
							v55 = 34;
							v54 = v52 - 1;
						}
						else if (v50 == 2)
						{
							v55 = 0;
							v54 = 35 - v52;
						}
						else
						{
							v54 = 34;
							v55 = 35 - v52;
						}
					}
					else
					{
						v55 = v52 - 1;
						v54 = 0;
					}
					if (v50)
					{
						if (v50 == 1)
						{
							v57 = 34;
							v56 = v52;
						}
						else if (v50 == 2)
						{
							v57 = 0;
							v56 = 34 - v52;
						}
						else
						{
							v56 = 34;
							v57 = 34 - v52;
						}
					}
					else
					{
						v56 = 0;
						v57 = v52;
					}
					v58 = v57 + 35 * v56;
					if (v50)
					{
						if (v50 == 1)
						{
							v59 = v52 - 1;
							v60 = 33;
						}
						else if (v50 == 2)
						{
							v60 = 1;
							v59 = 35 - v52;
						}
						else
						{
							v59 = 33;
							v60 = 35 - v52;
						}
					}
					else
					{
						v60 = v52 - 1;
						v59 = 1;
					}
					v61 = v60 + 35 * v59;
					if (v50)
					{
						if (v50 == 1)
						{
							v159 = 33;
							v62 = v52;
						}
						else if (v50 == 2)
						{
							v159 = 1;
							v62 = 34 - v52;
						}
						else
						{
							v159 = 34 - v52;
							v62 = 33;
						}
					}
					else
					{
						v62 = 1;
						v159 = v52;
					}
					*v51 = v55 + 35 * v54;
					v51[1] = v61;
					v51[2] = v58;
					v51[3] = v58;
					v51[4] = v61;
					v51[5] = v159 + 35 * v62;
					v51 += 6;
					++v52;
					--v53;
				} while (v53);
				v63 = 2;
				v64 = 32i64;
				do
				{
					if (v50)
					{
						if (v50 == 1)
						{
							v66 = 0;
							v65 = 35 - v63;
						}
						else if (v50 == 2)
						{
							v65 = v63 - 1;
							v66 = 34;
						}
						else
						{
							v65 = 34;
							v66 = 35 - v63;
						}
					}
					else
					{
						v65 = 0;
						v66 = v63 - 1;
					}
					if (v50)
					{
						if (v50 == 1)
						{
							v68 = 1;
							v67 = 35 - v63;
						}
						else if (v50 == 2)
						{
							v67 = v63 - 1;
							v68 = 33;
						}
						else
						{
							v67 = 33;
							v68 = 35 - v63;
						}
					}
					else
					{
						v68 = v63 - 1;
						v67 = 1;
					}
					v69 = v67 + 35 * v68;
					if (v50)
					{
						if (v50 == 1)
						{
							v71 = 0;
							v70 = 34 - v63;
						}
						else if (v50 == 2)
						{
							v71 = 34;
							v70 = v63;
						}
						else
						{
							v70 = 34;
							v71 = 34 - v63;
						}
					}
					else
					{
						v70 = 0;
						v71 = v63;
					}
					v72 = v70 + 35 * v71;
					if (v50)
					{
						if (v50 == 1)
						{
							v160 = 34 - v63;
							v73 = 1;
						}
						else if (v50 == 2)
						{
							v73 = 33;
							v160 = v63;
						}
						else
						{
							v160 = 33;
							v73 = 34 - v63;
						}
					}
					else
					{
						v160 = 1;
						v73 = v63;
					}
					*v51 = v65 + 35 * v66;
					v51[1] = v72;
					v51[2] = v69;
					v51[3] = v69;
					v51[4] = v72;
					v51[5] = v160 + 35 * v73;
					v51 += 6;
					++v63;
					--v64;
				} while (v64);
				v74 = 2;
				*(_QWORD*)&v164 = 32i64;
				do
				{
					v75 = 2;
					v76 = 32i64;
					do
					{
						if (v50)
						{
							if (v50 == 1)
							{
								v78 = v75 - 1;
								v77 = 35 - v74;
							}
							else if (v50 == 2)
							{
								v77 = v74 - 1;
								v78 = 35 - v75;
							}
							else
							{
								v77 = 35 - v75;
								v78 = 35 - v74;
							}
						}
						else
						{
							v77 = v75 - 1;
							v78 = v74 - 1;
						}
						if (v50)
						{
							if (v50 == 1)
							{
								v80 = v75;
								v79 = 35 - v74;
							}
							else if (v50 == 2)
							{
								v79 = v74 - 1;
								v80 = 34 - v75;
							}
							else
							{
								v79 = 34 - v75;
								v80 = 35 - v74;
							}
						}
						else
						{
							v79 = v75;
							v80 = v74 - 1;
						}
						v81 = v79 + 35 * v80;
						if (v50)
						{
							if (v50 == 1)
							{
								v83 = v75 - 1;
								v82 = 34 - v74;
							}
							else if (v50 == 2)
							{
								v82 = v74;
								v83 = 35 - v75;
							}
							else
							{
								v82 = 35 - v75;
								v83 = 34 - v74;
							}
						}
						else
						{
							v82 = v75 - 1;
							v83 = v74;
						}
						v84 = v82 + 35 * v83;
						if (v50)
						{
							if (v50 == 1)
							{
								v162 = 34 - v74;
								v85 = v75;
							}
							else if (v50 == 2)
							{
								v162 = v74;
								v85 = 34 - v75;
							}
							else
							{
								v162 = 34 - v75;
								v85 = 34 - v74;
							}
						}
						else
						{
							v162 = v75;
							v85 = v74;
						}
						*v51 = v77 + 35 * v78;
						v51[1] = v84;
						v51[2] = v81;
						v51[3] = v81;
						v51[4] = v84;
						v51[5] = v162 + 35 * v85;
						v51 += 6;
						++v75;
						--v76;
					} while (v76);
					++v74;
					v86 = (_QWORD)v164 == 1i64;
					*(_QWORD*)&v164 = v164 - 1;
					LODWORD(v169) = v79;
					LODWORD(v168) = v78;
					LODWORD(v167) = v77;
				} while (!v86);
				v87 = 2;
				v88 = 32i64;
				do
				{
					if (v50)
					{
						if (v50 == 1)
						{
							v90 = 33;
							v89 = 35 - v87;
						}
						else if (v50 == 2)
						{
							v89 = v87 - 1;
							v90 = 1;
						}
						else
						{
							v89 = 1;
							v90 = 35 - v87;
						}
					}
					else
					{
						v89 = 33;
						v90 = v87 - 1;
					}
					if (v50)
					{
						if (v50 == 1)
						{
							v92 = 34;
							v91 = 35 - v87;
						}
						else if (v50 == 2)
						{
							v91 = v87 - 1;
							v92 = 0;
						}
						else
						{
							v91 = 0;
							v92 = 35 - v87;
						}
					}
					else
					{
						v92 = v87 - 1;
						v91 = 34;
					}
					v93 = v91 + 35 * v92;
					if (v50)
					{
						if (v50 == 1)
						{
							v95 = 33;
							v94 = 34 - v87;
						}
						else if (v50 == 2)
						{
							v95 = 1;
							v94 = v87;
						}
						else
						{
							v94 = 1;
							v95 = 34 - v87;
						}
					}
					else
					{
						v94 = 33;
						v95 = v87;
					}
					v96 = v94 + 35 * v95;
					if (v50)
					{
						if (v50 == 1)
						{
							v158 = 34 - v87;
							v97 = 34;
						}
						else if (v50 == 2)
						{
							v97 = 0;
							v158 = v87;
						}
						else
						{
							v158 = 0;
							v97 = 34 - v87;
						}
					}
					else
					{
						v158 = 34;
						v97 = v87;
					}
					*v51 = v89 + 35 * v90;
					v51[1] = v96;
					v51[2] = v93;
					v51[3] = v93;
					v51[4] = v96;
					v51[5] = v158 + 35 * v97;
					v51 += 6;
					++v87;
					--v88;
				} while (v88);
				v98 = 2;
				v99 = 32i64;
				do
				{
					v100 = 33;
					if (v50)
					{
						if (v50 == 1)
						{
							v102 = 1;
							v101 = v98 - 1;
						}
						else if (v50 == 2)
						{
							v102 = 33;
							v101 = 35 - v98;
						}
						else
						{
							v101 = 1;
							v102 = 35 - v98;
						}
					}
					else
					{
						v102 = v98 - 1;
						v101 = 33;
					}
					if (v50)
					{
						if (v50 == 1)
						{
							v103 = 1;
							v100 = v98;
						}
						else if (v50 == 2)
						{
							v103 = 33;
							v100 = 34 - v98;
						}
						else
						{
							v100 = 1;
							v103 = 34 - v98;
						}
					}
					else
					{
						v103 = v98;
					}
					v104 = v103 + 35 * v100;
					if (v50)
					{
						if (v50 == 1)
						{
							v105 = v98 - 1;
							v106 = 0;
						}
						else if (v50 == 2)
						{
							v106 = 34;
							v105 = 35 - v98;
						}
						else
						{
							v105 = 0;
							v106 = 35 - v98;
						}
					}
					else
					{
						v106 = v98 - 1;
						v105 = 34;
					}
					v107 = v106 + 35 * v105;
					if (v50)
					{
						if (v50 == 1)
						{
							v161 = 0;
							v108 = v98;
						}
						else if (v50 == 2)
						{
							v161 = 34;
							v108 = 34 - v98;
						}
						else
						{
							v161 = 34 - v98;
							v108 = 0;
						}
					}
					else
					{
						v108 = 34;
						v161 = v98;
					}
					*v51 = v102 + 35 * v101;
					v51[1] = v107;
					v51[2] = v104;
					v51[3] = v104;
					v51[4] = v107;
					v51[5] = v161 + 35 * v108;
					v51 += 6;
					++v98;
					--v99;
				} while (v99);
				if (v50)
				{
					if (v50 == 1)
					{
						v109 = 34;
						v110 = 0;
					}
					else
					{
						if (v50 == 2)
							v109 = 0;
						else
							v109 = 34;
						v110 = 34;
					}
				}
				else
				{
					v109 = 0;
					v110 = 0;
				}
				v111 = v109 + 35 * v110;
				if (v50)
				{
					if (v50 == 1)
					{
						v112 = 34;
						v113 = 34;
					}
					else
					{
						v112 = 0;
						if (v50 == 2)
							v113 = 0;
						else
							v113 = 34;
					}
				}
				else
				{
					v112 = 34;
					v113 = 0;
				}
				v114 = v112 + 35 * v113;
				if (v50)
				{
					if (v50 == 1)
					{
						v115 = 0;
						v116 = 0;
					}
					else
					{
						v115 = 34;
						if (v50 == 2)
							v116 = 34;
						else
							v116 = 0;
					}
				}
				else
				{
					v115 = 0;
					v116 = 34;
				}
				v117 = v115 + 35 * v116;
				if (v50)
				{
					if (v50 == 1)
					{
						v118 = 34;
						v163 = 0;
					}
					else
					{
						v118 = 0;
						if (v50 == 2)
							v163 = 34;
						else
							v163 = 0;
					}
				}
				else
				{
					v118 = 34;
					v163 = 34;
				}
				v51[1] = v117;
				v51[4] = v117;
				v119 = v165;
				*v51 = v111;
				v51[5] = v163 + 35 * v118;
				v120 = v166;
				v51[2] = v114;
				v51[3] = v114;
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v120 + 8 * v119 + 288) + 64i64))(*(_QWORD*)(v120 + 8 * v119 + 288));
			}
			++v50;
			v49 = ++v165;
		} while (v50 < 4);
		v1 = v166;
	}
	v121 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(v1 + 344) + 56i64))(
		*(_QWORD*)(v1 + 344),
		0i64,
		0i64,
		2i64);
	if (v121)
	{
		*(_OWORD*)v121 = xmmword_140B65790;
		*(_OWORD*)(v121 + 16) = xmmword_140B657A0;
		*(_OWORD*)(v121 + 32) = xmmword_140B657B0;
		*(_OWORD*)(v121 + 48) = xmmword_140B657C0;
		*(_QWORD*)(v121 + 64) = 0x2000300060007i64;
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v1 + 344) + 64i64))(*(_QWORD*)(v1 + 344));
	}
	v122 = (_QWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(v1 + 352) + 56i64))(
		*(_QWORD*)(v1 + 352),
		0i64,
		0i64,
		2i64);
	if (v122)
	{
		*v122 = 0x3000100010000i64;
		v122[1] = 0x200020003i64;
		v122[2] = 0x7000500050004i64;
		v122[3] = 0x4000600060007i64;
		v122[4] = 0x5000100040000i64;
		v122[5] = 0x7000300060002i64;
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v1 + 352) + 64i64))(*(_QWORD*)(v1 + 352));
	}
	v123 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*, __int64))(**(_QWORD**)(v1 + 360) + 72i64))(
		*(_QWORD*)(v1 + 360),
		0i64,
		&v166,
		2i64);
	if (v123)
	{
		*v123 = 0;
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v1 + 360) + 80i64))(*(_QWORD*)(v1 + 360), 0i64);
	}
	v124 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*, __int64))(**(_QWORD**)(v1 + 368) + 72i64))(
		*(_QWORD*)(v1 + 368),
		0i64,
		&v166,
		2i64);
	if (v124)
	{
		*v124 = 2139062143;
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v1 + 368) + 80i64))(*(_QWORD*)(v1 + 368), 0i64);
	}
	v125 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*, __int64))(**(_QWORD**)(v1 + 376) + 72i64))(
		*(_QWORD*)(v1 + 376),
		0i64,
		&v166,
		2i64);
	if (v125)
	{
		*v125 = -1;
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v1 + 376) + 80i64))(*(_QWORD*)(v1 + 376), 0i64);
	}
	v126 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(v1 + 416) + 56i64))(
		*(_QWORD*)(v1 + 416),
		0i64,
		0i64,
		2i64);
	v127 = v126;
	if (v126)
	{
		*v126 = 0;
		v126[1] = 1133903872;
		v126[2] = 0;
		sub_1401C96D0(&v166, 0.0);
		sub_1401C96D0((_WORD*)&v166 + 1, 300.0);
		sub_1401C96D0((_WORD*)&v166 + 2, 0.0);
		v127[3] = v166;
		*((_WORD*)v127 + 8) = WORD2(v166);
		sub_1401C96D0(&v166, *(float*)&qword_140C67480);
		sub_1401C96D0((_WORD*)&v166 + 1, *((float*)&qword_140C67480 + 1));
		v128 = (float*)(v127 + 6);
		v129 = *(float*)&dword_140C43EC4;
		*((_DWORD*)v128 - 1) = v166;
		v130 = 0;
		v131 = v129 * -2.0;
		do
		{
			HIDWORD(v132) = 0;
			*(float*)&v132 = (float)((float)v130 * v131) * 0.03125;
			v133 = sub_1408FC950(v132) * 3.0;
			v134 = sub_1408FE3D0(v132);
			*v128 = v133;
			v128[1] = -5.0;
			v128[2] = v134 * 3.0;
			sub_1401C96D0(&v167, 0.0);
			sub_1401C96D0((_WORD*)&v167 + 1, -5.0);
			sub_1401C96D0((_WORD*)&v167 + 2, 0.0);
			*((_DWORD*)v128 + 3) = v167;
			*((_WORD*)v128 + 8) = WORD2(v167);
			sub_1401C96D0(&v166, 1.0);
			sub_1401C96D0((_WORD*)&v166 + 1, 0.0);
			++v130;
			*((_DWORD*)v128 + 5) = v166;
			v128 += 6;
		} while ((unsigned int)v130 < 0x20);
		*v128 = 0.0;
		v128[1] = -305.0;
		v128[2] = 0.0;
		sub_1401C96D0(&v166, 0.0);
		sub_1401C96D0((_WORD*)&v166 + 1, -305.0);
		sub_1401C96D0((_WORD*)&v166 + 2, 0.0);
		*((_DWORD*)v128 + 3) = v166;
		*((_WORD*)v128 + 8) = WORD2(v166);
		sub_1401C96D0(&v166, 1.0);
		sub_1401C96D0((_WORD*)&v166 + 1, 0.0);
		*((_DWORD*)v128 + 5) = v166;
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v1 + 416) + 64i64))(*(_QWORD*)(v1 + 416));
	}
	v135 = (_WORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(v1 + 432) + 56i64))(
		*(_QWORD*)(v1 + 432),
		0i64,
		0i64,
		2i64);
	if (v135)
	{
		v136 = 1;
		v137 = 1;
		do
		{
			v138 = v137;
			v135[2] = v137++;
			*v135 = 0;
			v135 += 3;
			*(v135 - 2) = (v138 & 0x1F) + 1;
		} while (v137 <= 0x20);
		do
		{
			v139 = v136;
			v135[2] = v136++;
			v135[1] = 33;
			v135 += 3;
			*(v135 - 3) = (v139 & 0x1F) + 1;
		} while (v136 <= 0x20);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v1 + 432) + 64i64))(*(_QWORD*)(v1 + 432));
	}
	if ((*(_DWORD*)(v1 + 16) & 0x4800) != 0)
	{
		v140 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(v1 + 456) + 56i64))(
			*(_QWORD*)(v1 + 456),
			0i64,
			0i64,
			2i64);
		if (v140)
		{
			v141 = 2i64;
			v142 = (_WORD*)(v140 + 4);
			do
			{
				v143 = v141 - 1;
				*v142 = v141;
				*(v142 - 1) = v141 - 2;
				v144 = v141 + 1;
				v142[1] = v141;
				LOWORD(v141) = v141 + 4;
				*(v142 - 2) = v143;
				v142[3] = v143;
				v142[2] = v144;
				v142 += 6;
			} while ((unsigned __int16)v141 < 0xFA2u);
			(*(void(__fastcall**)(_QWORD, __int64, _WORD*, __int64))(**(_QWORD**)(v1 + 456) + 64i64))(
				*(_QWORD*)(v1 + 456),
				v141,
				v142,
				4002i64);
		}
	}
	if ((*(_DWORD*)(v1 + 20) & 0x1800000) != 0)
	{
		v145 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*, __int64))(**(_QWORD**)(v1 + 496) + 72i64))(
			*(_QWORD*)(v1 + 496),
			0i64,
			&v166,
			2i64);
		if (v145)
		{
			v146 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v1 + 496) + 24i64))(*(_QWORD*)(v1 + 496));
			v147 = 0i64;
			for (j = v146; (unsigned int)v147 < *(_DWORD*)(j + 8); v145 += (unsigned int)v166)
			{
				for (k = 0; k < *(_DWORD*)(j + 4); ++k)
				{
					v150 = k & 0x18;
					if ((k & 0x18) != 0)
					{
						switch (v150)
						{
						case 8:
							*(_DWORD*)(v145 + 4i64 * k) = 65280;
							break;
						case 16:
							*(_DWORD*)(v145 + 4i64 * k) = 255;
							break;
						case 24:
							*(_DWORD*)(v145 + 4i64 * k) = -16777216;
							break;
						}
					}
					else
					{
						*(_DWORD*)(v145 + 4i64 * k) = 16711680;
					}
				}
				v147 = (unsigned int)(v147 + 1);
			}
			(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(v1 + 496) + 80i64))(
				*(_QWORD*)(v1 + 496),
				0i64,
				v147);
		}
	}
	if ((*(_DWORD*)(v1 + 20) & 0x100000) != 0)
	{
		v151 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(v1 + 504) + 56i64))(
			*(_QWORD*)(v1 + 504),
			0i64,
			0i64,
			2i64);
		if (v151)
		{
			for (m = 0; m < 0x10; ++m)
			{
				v153 = 0;
				do
				{
					v154 = 33 * m + v153++;
					v151 += 24i64;
					*(_WORD*)(v151 - 22) = v154;
					*(_WORD*)(v151 - 14) = v154;
					*(_WORD*)(v151 - 16) = v154 + 1;
					*(_WORD*)(v151 - 2) = v154 + 1;
					*(_WORD*)(v151 - 24) = v154 + 17;
					*(_WORD*)(v151 - 18) = v154 + 17;
					*(_WORD*)(v151 - 12) = v154 + 17;
					*(_WORD*)(v151 - 6) = v154 + 17;
					*(_WORD*)(v151 - 20) = v154 + 33;
					*(_WORD*)(v151 - 10) = v154 + 33;
					*(_WORD*)(v151 - 8) = v154 + 34;
					*(_WORD*)(v151 - 4) = v154 + 34;
				} while (v153 < 0x10);
			}
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v1 + 504) + 64i64))(*(_QWORD*)(v1 + 504));
		}
	}
	v155 = (_QWORD*)(v1 + 688);
	v156 = 11i64;
	do
	{
		if (*v155)
		{
			(*(void(__fastcall**)(_QWORD, _WORD*))(*(_QWORD*)*v155 + 8i64))(*v155, v135);
			*v155 = 0i64;
		}
		++v155;
		--v156;
	} while (v156);
	for (n = *(_QWORD*)(v1 + 560); n; n = *(_QWORD*)(n + 120))
		sub_140366CD0(n);
}
// 14034F130: conditional instruction was optimized away because esi.4==3
// 14034F161: conditional instruction was optimized away because esi.4==3
// 14034F1F6: conditional instruction was optimized away because esi.4==3
// 14034F25C: conditional instruction was optimized away because esi.4==3
// 14034F323: conditional instruction was optimized away because esi.4==3
// 14034F372: conditional instruction was optimized away because esi.4==3
// 14034F3DE: conditional instruction was optimized away because esi.4==3
// 14034F441: conditional instruction was optimized away because esi.4==3
// 14034F520: conditional instruction was optimized away because esi.4==3
// 14034F579: conditional instruction was optimized away because esi.4==3
// 14034F5D0: conditional instruction was optimized away because esi.4==3
// 14034F62C: conditional instruction was optimized away because esi.4==3
// 14034F755: conditional instruction was optimized away because esi.4==3
// 14034F7A9: conditional instruction was optimized away because esi.4==3
// 14034F81D: conditional instruction was optimized away because esi.4==3
// 14034F886: conditional instruction was optimized away because esi.4==3
// 14034F955: conditional instruction was optimized away because esi.4==3
// 14034F9A0: conditional instruction was optimized away because esi.4==3
// 14034FA07: conditional instruction was optimized away because esi.4==3
// 14034FA74: conditional instruction was optimized away because esi.4==3
// 14034FB21: conditional instruction was optimized away because esi.4==3
// 14034FB83: conditional instruction was optimized away because esi.4==3
// 14034FBE2: conditional instruction was optimized away because esi.4==3
// 14034FC3E: conditional instruction was optimized away because esi.4==3
// 14034EB41: variable 'v4' is possibly undefined
// 14034EB9B: variable 'v6' is possibly undefined
// 14034EBF0: variable 'v8' is possibly undefined
// 14034EC42: variable 'v10' is possibly undefined
// 1403503AB: variable 'v135' is possibly undefined
// 140B65790: using guessed type __int128 xmmword_140B65790;
// 140B657A0: using guessed type __int128 xmmword_140B657A0;
// 140B657B0: using guessed type __int128 xmmword_140B657B0;
// 140B657C0: using guessed type __int128 xmmword_140B657C0;
// 140B7A330: using guessed type __int128 xmmword_140B7A330;
// 140B7A3E0: using guessed type __int128 xmmword_140B7A3E0;
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7A4C0: using guessed type __int128 xmmword_140B7A4C0;
// 140B7A620: using guessed type __int128 xmmword_140B7A620;
// 140C43E4C: using guessed type int dword_140C43E4C;
// 140C43E84: using guessed type int dword_140C43E84;
// 140C43EBC: using guessed type int dword_140C43EBC;
// 140C43EC0: using guessed type int dword_140C43EC0;
// 140C43EC4: using guessed type int dword_140C43EC4;
// 140C67480: using guessed type __int64 qword_140C67480;

