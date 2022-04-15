#include "../winhttp.h"

//----- (00000001406E3490) ----------------------------------------------------
__int64 __fastcall sub_1406E3490(__int64 a1)
{
	__int64 v2; // rbx
	__m128i v3; // xmm1
	__m128i v4; // xmm3
	unsigned int v5; // edi
	__int64 v6; // rax
	__int64 v7; // rdx
	__m128 v8; // xmm2
	unsigned __int64 v9; // rdi
	unsigned __int64 i; // rbx
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // r9
	int v14; // edx
	__m128 v15; // xmm1
	int v16; // r8d
	int v17; // eax
	__m128 v18; // xmm1
	float v19; // xmm0_4
	_QWORD* v20; // rcx
	_QWORD* v21; // rcx
	int v22; // edx
	int v23; // r8d
	__int64 v24; // rax
	__int64 v25; // r9
	int v26; // eax
	float v27; // xmm1_4
	int v28; // eax
	float v29; // xmm1_4
	_QWORD* v30; // rcx
	unsigned __int64 v31; // r12
	unsigned __int64 j; // r14
	__int64 v33; // rcx
	__int64 v34; // rax
	float v35; // xmm3_4
	float v36; // xmm2_4
	int v37; // edx
	int v38; // edx
	_QWORD* v39; // rcx
	__m128* v40; // r8
	int v41; // xmm0_4
	unsigned __int64 v42; // rdi
	unsigned __int64 v43; // r15
	__int64* v44; // rbx
	__int64 v45; // rdx
	__int64 v46; // rax
	__int32 v47; // xmm1_4
	_DWORD* v48; // rax
	__int32 v49; // xmm0_4
	__int64 v50; // rax
	__int32 v51; // xmm1_4
	__int64 v52; // rcx
	__int64 v53; // rax
	__int32 v54; // xmm1_4
	__int64 v55; // rax
	__int32 v56; // xmm1_4
	__int64 v57; // rax
	__int64 v58; // rcx
	__int64 v59; // rax
	__int64 v60; // rax
	__int64 v61; // rdx
	_QWORD* v62; // rcx
	int v63; // edx
	__m128 v64; // xmm4
	int v65; // eax
	int v66; // eax
	__m128 v67; // xmm0
	__m128 v68; // xmm0
	int v69; // eax
	__m128 v70; // xmm1
	__m128 v71; // xmm2
	int v72; // eax
	int v73; // eax
	__int64 v74; // rax
	_QWORD* v75; // rcx
	unsigned __int64 v76; // rbx
	_QWORD* v77; // rcx
	unsigned __int64 k; // rbx
	_QWORD* v79; // rcx
	unsigned __int64 v80; // r14
	unsigned __int64 m; // rdi
	__m128* v82; // rdx
	__m128 v83; // xmm2
	_QWORD* v84; // rcx
	__int64 v85; // rax
	char v86; // cl
	__int64 v87; // rdx
	char v88; // r8
	bool v89; // cl
	__int64 v90; // rax
	_QWORD* v91; // rcx
	_BYTE* v92; // rdx
	__int64 v93; // rax
	__m128* v94; // r8
	__int64 v95; // rax
	_QWORD* v96; // rcx
	int v97; // eax
	_DWORD* v98; // rcx
	__m128i v99; // xmm2
	__m128 v100; // xmm4
	__m128 v101; // xmm0
	_QWORD* v102; // rcx
	unsigned __int8* v103; // rdx
	__int64 v104; // rax
	unsigned int v105; // r9d
	int v106; // eax
	char* v107; // rbx
	_DWORD* v108; // rdx
	int v109; // r8d
	int v110; // r8d
	int v111; // r8d
	int v112; // r8d
	int v113; // eax
	__int64 v114; // rbx
	char* v115; // rax
	int v116; // eax
	unsigned __int64 v117; // rbx
	char* v119; // [rsp+38h] [rbp-D0h]
	__m128 v120; // [rsp+48h] [rbp-C0h] BYREF
	__m128 v121; // [rsp+58h] [rbp-B0h]
	__m128 v122; // [rsp+68h] [rbp-A0h] BYREF
	__m128 v123; // [rsp+78h] [rbp-90h]
	__int128 v124; // [rsp+88h] [rbp-80h] BYREF
	__int128 v125; // [rsp+98h] [rbp-70h] BYREF
	__m128 v126; // [rsp+A8h] [rbp-60h]
	__int128 v127; // [rsp+B8h] [rbp-50h] BYREF
	__int128 v128; // [rsp+C8h] [rbp-40h] BYREF
	__int128 v129; // [rsp+D8h] [rbp-30h] BYREF
	__int128 v130[6]; // [rsp+E8h] [rbp-20h] BYREF
	__m128 v131; // [rsp+148h] [rbp+40h] BYREF
	__m128 v132; // [rsp+158h] [rbp+50h]
	__m128 v133; // [rsp+168h] [rbp+60h]

	if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 3816) + 48i64))(*(_QWORD*)(a1 + 3816)))
	{
		v2 = *(_QWORD*)(a1 + 3816);
		v3 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 720));
		v4 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 716)), _mm_cvtsi32_si128(0));
		v123 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 724)), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 728)), _mm_cvtsi32_si128(0))));
		v122 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(v4, _mm_unpacklo_epi32(v3, _mm_cvtsi32_si128(0))));
		v5 = *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 24i64))(v2) + 8);
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 24i64))(v2);
		v7 = *(_QWORD*)(a1 + 3816);
		v8 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v6 + 4)), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), _mm_cvtsi32_si128(0))));
		v124 = xmmword_140B7B240;
		v121 = v8;
		v120 = _mm_cvtepi32_ps((__m128i)0i64);
		(*(void(__fastcall**)(__int64, __int64, __m128*, __m128*, __int128*, int))(*(_QWORD*)qword_140C65680 + 240i64))(
			qword_140C65680,
			v7,
			&v120,
			&v122,
			&v124,
			1);
	}
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 1i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 88i64))(qword_140C65680, a1 + 1040);
	v9 = *(_QWORD*)(a1 + 2576);
	for (i = 0i64; i < v9; ++i)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 1i64);
		v11 = *(_QWORD*)(a1 + 2568);
		v122.m128_i32[0] = 1065353216;
		v12 = *(_QWORD*)(v11 + 8 * i);
		v122.m128_u64[1] = 0i64;
		v123.m128_i32[0] = *(_DWORD*)(v12 + 16);
		v123.m128_u64[1] = *(_QWORD*)v12 + 16i64;
		v130[0] = v122.m128_u64[0];
		v130[1] = (__int128)v123;
		sub_1401B0840((int*)v130, (__int64)&v131);
		(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 88i64))(qword_140C65680, &v131);
		v13 = *(_QWORD*)(a1 + 2568);
		v14 = dword_140C53CA0;
		v15 = _mm_sub_ps(
			*(__m128*)(**(_QWORD**)(v13 + 8 * i) + 16i64),
			*(__m128*)(*(_QWORD*)(*(_QWORD*)(v13 + 8 * i) + 8i64) + 16i64));
		v16 = *(_DWORD*)qword_140C63750;
		v17 = dword_140C53CA0;
		v120.m128_i32[0] = 0;
		v18 = _mm_mul_ps(v15, v15);
		if (v16 < dword_140C53CA0)
			v17 = v16;
		if (v16 < dword_140C53CA0)
			v14 = v16;
		v19 = dword_140C53CB0[v17] * -0.5;
		v121.m128_i32[0] = COERCE_UNSIGNED_INT(fsqrt(v18.m128_f32[0] + _mm_shuffle_ps(v18, v18, 85).m128_f32[0])) & 0x7FFFFFFF;
		v120.m128_f32[1] = v19;
		v121.m128_f32[1] = dword_140C53CB0[v14] * 0.5;
		if (*(_DWORD*)(*(_QWORD*)(v13 + 8 * i) + 24i64))
		{
			v20 = *(_QWORD**)(a1 + 1384);
			v124 = xmmword_140B7B240;
			if (v20)
				sub_140103E60(
					v20,
					&v120,
					(__m128*) & v124,
					0,
					COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1392)) * *(float*)(a1 + 1396)));
		}
		else
		{
			v21 = *(_QWORD**)(a1 + 1336);
			v127 = xmmword_140B7B240;
			if (v21)
				sub_140103E60(
					v21,
					&v120,
					(__m128*) & v127,
					0,
					COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1344)) * *(float*)(a1 + 1348)));
			if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 2568) + 8 * i) + 36i64))
			{
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 2i64);
				v22 = dword_140C53D00;
				v23 = *(_DWORD*)qword_140C63750;
				v24 = *(_QWORD*)(a1 + 2568);
				v125 = (__int128)v120;
				v126 = v121;
				v25 = *(_QWORD*)(v24 + 8 * i);
				v26 = dword_140C53D00;
				if (v23 < dword_140C53D00)
					v26 = v23;
				v27 = (float)dword_140C53D10[v26];
				if (v23 < dword_140C53D00)
					v22 = v23;
				v28 = *(_DWORD*)(v25 + 28);
				v29 = (float)(v27 - (float)(*(_DWORD*)(v25 + 36) - dword_140C636A8)) / (float)dword_140C53D10[v22];
				if (v28)
				{
					if (v28 == 1)
						*(float*)&v125 = (float)(1.0 - v29) * v126.m128_f32[0];
				}
				else
				{
					v126.m128_f32[0] = v126.m128_f32[0] * v29;
				}
				(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)qword_140C65680 + 104i64))(qword_140C65680, &v125);
				v30 = *(_QWORD**)(a1 + 1384);
				v128 = xmmword_140B7B240;
				if (v30)
					sub_140103E60(
						v30,
						&v120,
						(__m128*) & v128,
						0,
						COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1392)) * *(float*)(a1 + 1396)));
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
			}
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
	}
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
	v31 = *(_QWORD*)(a1 + 2560);
	for (j = 0i64; j < v31; ++j)
	{
		v33 = *(_QWORD*)(a1 + 2552);
		v34 = *(_QWORD*)(v33 + 8 * j);
		v35 = *(float*)(v34 + 20);
		v36 = *(float*)(v34 + 16);
		v123.m128_f32[1] = v35 + 166.27686;
		v123.m128_f32[0] = (float)(*(float*)&dword_140C4B068 * 3.0) + v36;
		v122.m128_f32[1] = v35 - 166.27686;
		v122.m128_f32[0] = v36 - (float)(*(float*)&dword_140C4B068 * 3.0);
		v37 = *(_DWORD*)(*(_QWORD*)(v33 + 8 * j) + 64i64);
		if (v37)
		{
			v38 = v37 - 1;
			if (v38)
			{
				if (v38 != 1)
					goto LABEL_37;
				v39 = *(_QWORD**)(a1 + 1240);
				v128 = xmmword_140B7B240;
				if (!v39)
					goto LABEL_37;
				v40 = (__m128*) & v128;
				*(float*)&v41 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1248)) * *(float*)(a1 + 1252);
			}
			else
			{
				v39 = *(_QWORD**)(a1 + 1192);
				v127 = xmmword_140B7B240;
				if (!v39)
					goto LABEL_37;
				v40 = (__m128*) & v127;
				*(float*)&v41 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1200)) * *(float*)(a1 + 1204);
			}
		}
		else
		{
			v39 = *(_QWORD**)(a1 + 1144);
			v124 = xmmword_140B7B240;
			if (!v39)
				goto LABEL_37;
			v40 = (__m128*) & v124;
			*(float*)&v41 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1152)) * *(float*)(a1 + 1156);
		}
		sub_140103E60(v39, &v122, v40, 0, v41);
	LABEL_37:
		if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 2552) + 8 * j) + 64i64) != 2)
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
			v42 = 0i64;
			v43 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 2552) + 8 * j) + 80i64);
			if (v43)
			{
				do
				{
					v44 = *(__int64**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 2552) + 8 * j) + 72i64) + 8 * v42);
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 1i64);
					v45 = *((int*)v44 + 5);
					switch ((int)v45)
					{
					case 0:
						v60 = *v44;
						v120.m128_i32[0] = *(_DWORD*)(*v44 + 16);
						v51 = *(_DWORD*)(v60 + 36);
						goto LABEL_46;
					case 1:
						v50 = *v44;
						v120.m128_i32[0] = *(_DWORD*)(*v44 + 16);
						v51 = *(_DWORD*)(v50 + 20);
					LABEL_46:
						v48 = (_DWORD*)v44[1];
						v120.m128_i32[1] = v51;
						v49 = v48[12];
						goto LABEL_47;
					case 2:
						v52 = *v44;
						v53 = v44[1];
						v120.m128_i32[0] = *(_DWORD*)(*v44 + 16);
						v120.m128_i32[1] = *(_DWORD*)(v53 + 20);
						v121.m128_i32[0] = *(_DWORD*)(v53 + 48);
						v54 = *(_DWORD*)(v52 + 52);
						goto LABEL_48;
					case 3:
						v55 = *v44;
						v120.m128_i32[0] = *(_DWORD*)(*v44 + 32);
						v56 = *(_DWORD*)(v55 + 20);
						v57 = v44[1];
						v120.m128_i32[1] = v56;
						v121.m128_i32[0] = *(_DWORD*)(v57 + 16);
						v54 = *(_DWORD*)(v57 + 52);
						goto LABEL_48;
					case 4:
						v46 = *v44;
						v120.m128_i32[0] = *(_DWORD*)(*v44 + 32);
						v47 = *(_DWORD*)(v46 + 20);
						v48 = (_DWORD*)v44[1];
						v120.m128_i32[1] = v47;
						v49 = v48[4];
					LABEL_47:
						v121.m128_i32[0] = v49;
						v54 = v48[5];
						goto LABEL_48;
					case 5:
						v58 = *v44;
						v59 = v44[1];
						v120.m128_i32[0] = *(_DWORD*)(*v44 + 32);
						v120.m128_i32[1] = *(_DWORD*)(v59 + 36);
						v121.m128_i32[0] = *(_DWORD*)(v59 + 16);
						v54 = *(_DWORD*)(v58 + 20);
					LABEL_48:
						v121.m128_i32[1] = v54;
						break;
					default:
						break;
					}
					if (*((_DWORD*)v44 + 6))
					{
						v61 = 6 * v45;
						v129 = xmmword_140B7B240;
						v62 = *(_QWORD**)(a1 + 8 * v61 + 1432);
						if (v62)
							sub_140103E60(
								v62,
								&v120,
								(__m128*) & v129,
								0,
								COERCE_INT(
									(float)(*(float*)&dword_140C63664 - *(float*)(a1 + 8 * v61 + 1440))
									* *(float*)(a1 + 8 * v61 + 1444)));
					}
					else if (*((_DWORD*)v44 + 9))
					{
						(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
						(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 2i64);
						v63 = dword_140C53D00;
						v64 = 0i64;
						v65 = dword_140C53D00;
						if (*(_DWORD*)qword_140C63750 < dword_140C53D00)
							v65 = *(_DWORD*)qword_140C63750;
						if (*(_DWORD*)qword_140C63750 < dword_140C53D00)
							v63 = *(_DWORD*)qword_140C63750;
						v64.m128_f32[0] = (float)((float)dword_140C53D10[v65] - (float)(*((_DWORD*)v44 + 9) - dword_140C636A8))
							/ (float)dword_140C53D10[v63];
						switch (*((_DWORD*)v44 + 5))
						{
						case 0:
							v131.m128_u64[0] = v120.m128_u64[0];
							v133.m128_u64[0] = v121.m128_u64[0];
							v132.m128_u64[0] = __PAIR64__(v121.m128_u32[1], v120.m128_u32[0]);
							goto LABEL_76;
						case 1:
							v66 = *((_DWORD*)v44 + 7);
							v131.m128_i32[0] = v120.m128_i32[0];
							v132.m128_i32[0] = v121.m128_i32[0];
							v133.m128_i32[0] = v121.m128_i32[0];
							v133.m128_f32[1] = v120.m128_f32[1] - 55.425621;
							v67 = _mm_mul_ps(_mm_add_ps(v121, v120), (__m128)xmmword_140B7AC50);
							v131.m128_i32[1] = _mm_shuffle_ps(v67, v67, 85).m128_u32[0];
							v68 = _mm_shuffle_ps(v121, v121, 85);
							v132.m128_f32[1] = v68.m128_f32[0] + 55.425621;
							if (!v66)
							{
								v68.m128_f32[0] = v64.m128_f32[0];
								goto LABEL_72;
							}
							if (v66 != 1)
								goto LABEL_81;
							v68.m128_f32[0] = v64.m128_f32[0];
							goto LABEL_62;
						case 2:
							v72 = *((_DWORD*)v44 + 7);
							v131.m128_u64[0] = v120.m128_u64[0];
							v132.m128_u64[0] = __PAIR64__(v121.m128_u32[1], v120.m128_u32[0]);
							v133.m128_u64[0] = __PAIR64__(v120.m128_u32[1], v121.m128_u32[0]);
							if (v72)
							{
								if (v72 == 1)
								{
									v68 = v64;
								LABEL_72:
									v132 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v132, v133), _mm_shuffle_ps(v68, v68, 0)), v133);
								}
							}
							else
							{
								v68 = v64;
							LABEL_62:
								v133 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v133, v132), _mm_shuffle_ps(v68, v68, 0)), v132);
							}
							goto LABEL_81;
						case 3:
							v69 = *((_DWORD*)v44 + 7);
							v131.m128_u64[0] = v120.m128_u64[0];
							v132.m128_u64[0] = v121.m128_u64[0];
							v133.m128_u64[0] = __PAIR64__(v120.m128_u32[1], v121.m128_u32[0]);
							if (!v69)
								goto LABEL_64;
							goto LABEL_65;
						case 4:
							v69 = *((_DWORD*)v44 + 7);
							v131.m128_i32[0] = v120.m128_i32[0];
							v70 = _mm_mul_ps(_mm_add_ps(v121, v120), (__m128)xmmword_140B7AC50);
							v131.m128_f32[1] = v120.m128_f32[1] - 55.425621;
							v132.m128_i32[0] = v120.m128_i32[0];
							v133.m128_i32[1] = _mm_shuffle_ps(v70, v70, 85).m128_u32[0];
							v132.m128_f32[1] = v121.m128_f32[1] + 55.425621;
							v133.m128_i32[0] = v121.m128_i32[0];
							if (!v69)
							{
							LABEL_64:
								v132 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v132, v131), _mm_shuffle_ps(v64, v64, 0)), v131);
								goto LABEL_81;
							}
						LABEL_65:
							if (v69 != 1)
								goto LABEL_81;
							v71 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v131, v132), _mm_shuffle_ps(v64, v64, 0)), v132);
							goto LABEL_80;
						case 5:
							v131.m128_u64[0] = __PAIR64__(v121.m128_u32[1], v120.m128_u32[0]);
							v132.m128_u64[0] = v121.m128_u64[0];
							v133.m128_u64[0] = __PAIR64__(v120.m128_u32[1], v121.m128_u32[0]);
						LABEL_76:
							v73 = *((_DWORD*)v44 + 7);
							if (v73)
							{
								if (v73 == 1)
								{
									v71 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v131, v133), _mm_shuffle_ps(v64, v64, 0)), v133);
								LABEL_80:
									v131 = v71;
								}
							}
							else
							{
								v133 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v133, v131), _mm_shuffle_ps(v64, v64, 0)), v131);
							}
						LABEL_81:
							(*(void(__fastcall**)(__int64, __m128*, __int64))(*(_QWORD*)qword_140C65680 + 120i64))(
								qword_140C65680,
								&v131,
								3i64);
							v74 = *((int*)v44 + 5);
							v125 = xmmword_140B7B240;
							v75 = *(_QWORD**)(a1 + 48 * v74 + 1432);
							if (v75)
								sub_140103E60(
									v75,
									&v120,
									(__m128*) & v125,
									0,
									COERCE_INT(
										(float)(*(float*)&dword_140C63664 - *(float*)(a1 + 48 * v74 + 1440))
										* *(float*)(a1 + 48 * v74 + 1444)));
							(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
							break;
						default:
							goto LABEL_81;
						}
					}
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
					++v42;
				} while (v42 < v43);
			}
		}
	}
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
	if (*(_QWORD*)(a1 + 2672))
	{
		v76 = 0i64;
		do
		{
			v77 = *(_QWORD**)(a1 + 2592);
			v125 = xmmword_140B7B240;
			if (v77)
				sub_140103E60(
					v77,
					(__m128*)(*(_QWORD*)(*(_QWORD*)(a1 + 2664) + 8 * v76) + 32i64),
					(__m128*) & v125,
					0,
					COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2600)) * *(float*)(a1 + 2604)));
			++v76;
		} while (v76 < *(_QWORD*)(a1 + 2672));
	}
	else if (*(_QWORD*)(a1 + 2640))
	{
		for (k = 0i64; k < *(_QWORD*)(a1 + 2656); ++k)
		{
			v79 = *(_QWORD**)(a1 + 2592);
			v125 = xmmword_140B7B240;
			if (v79)
				sub_140103E60(
					v79,
					(__m128*)(*(_QWORD*)(*(_QWORD*)(a1 + 2648) + 8 * k) + 32i64),
					(__m128*) & v125,
					0,
					COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2600)) * *(float*)(a1 + 2604)));
		}
	}
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
	v80 = *(_QWORD*)(a1 + 2464);
	for (m = 0i64; m < v80; ++m)
	{
		v82 = *(__m128**)(*(_QWORD*)(a1 + 2456) + 8 * m);
		if (v82[31].m128_u64[0])
		{
			v83 = v82[1];
			v125 = xmmword_140B7B240;
			v122 = _mm_sub_ps(v83, (__m128)xmmword_140B7B400);
			v123 = _mm_add_ps(v83, (__m128)xmmword_140B7B400);
			v84 = (_QWORD*)v82[31].m128_u64[0];
			if (v84)
				sub_140103E60(
					v84,
					&v122,
					(__m128*) & v125,
					0,
					COERCE_INT((float)(*(float*)&dword_140C63664 - v82[31].m128_f32[2]) * v82[31].m128_f32[3]));
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		}
		v85 = *(_QWORD*)(a1 + 2456);
		v86 = *(_BYTE*)(a1 + 28);
		v129 = xmmword_140B7B240;
		v87 = *(_QWORD*)(v85 + 8 * m);
		v88 = *(_BYTE*)(v87 + 484);
		v89 = (v86 & 8) != 0;
		if ((v88 & 0x10) != 0)
		{
			if (v88 >= 0)
			{
				if ((v88 & 0x40) == 0)
				{
				LABEL_109:
					if (v88 >= 0)
						v90 = (*(_BYTE*)(v87 + 486) & 1) != 0 ? 5 : 0;
					else
						v90 = 2i64;
					goto LABEL_112;
				}
				v90 = 1i64;
			}
			else
			{
				if ((v88 & 0x40) == 0)
					goto LABEL_109;
				v90 = 3i64;
			}
		}
		else
		{
			v90 = 4i64;
		}
	LABEL_112:
		if (!v89)
			v90 = 4i64;
		v91 = *(_QWORD**)(48 * v90 + v87 + 72);
		if (v91)
			sub_140103CF0(
				v91,
				(unsigned int*)(v87 + 424),
				(__m128*) & v129,
				0,
				COERCE_INT(
					(float)(*(float*)&dword_140C63664 - *(float*)(48 * v90 + v87 + 424 - 344))
					* *(float*)(48 * v90 + v87 + 424 - 340)));
		v92 = *(_BYTE**)(*(_QWORD*)(a1 + 2456) + 8 * m);
		if (v92[68] != *(_BYTE*)(*(_QWORD*)v92 + 64i64))
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
			v93 = *(_QWORD*)(a1 + 2456);
			v128 = xmmword_140B7B240;
			v94 = *(__m128**)(v93 + 8 * m);
			v95 = v94[30].m128_i32[2];
			v96 = *(_QWORD**)(a1 + 48 * v95 + 2128);
			if (v96)
				sub_140103E60(
					v96,
					v94 + 2,
					(__m128*) & v128,
					0,
					COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 48 * v95 + 2136)) * *(float*)(a1 + 48 * v95 + 2140)));
		}
		v97 = dword_140C53C40;
		if (*(_DWORD*)qword_140C63750 < dword_140C53C40)
			v97 = *(_DWORD*)qword_140C63750;
		if (*(float*)(a1 + 1136) >= dword_140C53C50[v97])
		{
			v98 = *(_DWORD**)(*(_QWORD*)(a1 + 2456) + 8 * m);
			v99 = _mm_cvtsi32_si128(0);
			v100 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(v98[112]), v99),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(v98[113]), v99)));
			v101 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(v98[110]), v99),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(v98[111]), v99)));
			if (v98[16])
			{
				v120 = v101;
				v121 = _mm_add_ps(v100, (__m128)xmmword_140B7B5D0);
				v120.m128_f32[1] = _mm_shuffle_ps(v100, v100, 85).m128_f32[0] - 28.0;
				v120 = _mm_sub_ps(v120, (__m128)xmmword_140B7B5D0);
				v120.m128_f32[0] = (float)((float)(v121.m128_f32[0] + v120.m128_f32[0]) * 0.5) - 10.0;
				v121.m128_f32[0] = v120.m128_f32[0] + 20.0;
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
				v102 = *(_QWORD**)(a1 + 1912);
				v127 = xmmword_140B7B240;
				if (v102)
					sub_140103E60(
						v102,
						&v120,
						(__m128*) & v127,
						0,
						COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1920)) * *(float*)(a1 + 1924)));
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
				v103 = *(unsigned __int8**)(*(_QWORD*)(a1 + 2456) + 8 * m);
				v104 = *(_QWORD*)v103;
				v105 = v103[68];
				if (v105 == *(_DWORD*)(**(_QWORD**)v103 + 20i64))
				{
					v106 = dword_140C53FE0;
					if (*(_DWORD*)qword_140C63750 < dword_140C53FE0)
						v106 = *(_DWORD*)qword_140C63750;
					v107 = (char*)&unk_140C53FF0 + 16 * v106;
				}
				else
				{
					if (!qword_140C65898
						|| (v108 = *(_DWORD**)v104, (v109 = *(_DWORD*)(*(_QWORD*)v104 + 24i64)) != 0)
						&& (unsigned __int64)(unsigned int)(v109 + *(_DWORD*)(a1 + 2704)) > *(_QWORD*)(qword_140C65898 + 5704)
						|| (v110 = v108[8]) != 0
						&& (unsigned __int64)(unsigned int)(v110 + *(_DWORD*)(a1 + 2708)) > *(_QWORD*)(qword_140C65898 + 5720)
						|| (v111 = v108[7]) != 0
						&& (unsigned __int64)(unsigned int)(v111 + *(_DWORD*)(a1 + 2712)) > *(_QWORD*)(qword_140C65898 + 5712)
						|| (v112 = v108[9]) != 0
						&& (unsigned __int64)(unsigned int)(v112 + *(_DWORD*)(a1 + 2716)) > *(_QWORD*)(qword_140C65898 + 5728))
					{
						v116 = dword_140C53F20;
						if (*(_DWORD*)qword_140C63750 < dword_140C53F20)
							v116 = *(_DWORD*)qword_140C63750;
						v114 = v116;
						v115 = (char*)&unk_140C53F30;
					}
					else
					{
						v113 = dword_140C53E60;
						if (*(_DWORD*)qword_140C63750 < dword_140C53E60)
							v113 = *(_DWORD*)qword_140C63750;
						v114 = v113;
						v115 = (char*)&unk_140C53E70;
					}
					v107 = &v115[16 * v114];
				}
				sub_14018D540(&v124, (__int64)L"%i", v105);
				v119 = v107;
				v117 = v124;
				(*(void(__fastcall**)(__int64, _QWORD, unsigned __int64, __int64, __m128*, int, char*, int))(*(_QWORD*)qword_140C65680 + 264i64))(
					qword_140C65680,
					*(_QWORD*)(*(_QWORD*)(a1 + 1960) + 96i64),
					v124,
					-1i64,
					&v120,
					5,
					v119,
					1);
				if (v117)
					(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)(v117 - 16) + 8i64))(v117 - 16);
			}
		}
	}
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
}
// 140B3E2B4: using guessed type wchar_t aI_17[3];
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B400: using guessed type __int128 xmmword_140B7B400;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B5D0: using guessed type __int128 xmmword_140B7B5D0;
// 140C4B068: using guessed type int dword_140C4B068;
// 140C53C40: using guessed type int dword_140C53C40;
// 140C53C50: using guessed type float dword_140C53C50[14];
// 140C53CA0: using guessed type int dword_140C53CA0;
// 140C53CB0: using guessed type float dword_140C53CB0[14];
// 140C53D00: using guessed type int dword_140C53D00;
// 140C53D10: using guessed type int dword_140C53D10[14];
// 140C53E60: using guessed type int dword_140C53E60;
// 140C53F20: using guessed type int dword_140C53F20;
// 140C53FE0: using guessed type int dword_140C53FE0;
// 140C63664: using guessed type int dword_140C63664;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C65898: using guessed type __int64 qword_140C65898;
// 1406E3490: using guessed type __m128 var_A0;

