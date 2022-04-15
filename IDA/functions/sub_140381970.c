#include "../winhttp.h"

//----- (0000000140381970) ----------------------------------------------------
__int64 __fastcall sub_140381970(__int64 a1)
{
	__m128 v1; // xmm0
	__int64 v3; // rdx
	__int64 v4; // rcx
	int* v5; // rax
	__int64 v6; // rbx
	float* v7; // rax
	__int64 v8; // r8
	int v9; // edx
	unsigned int v10; // edi
	__int64 v11; // rax
	unsigned int v12; // edx
	int v13; // ecx
	unsigned int v14; // r14d
	__m128 v15; // xmm6
	float v16; // xmm7_4
	float v17; // xmm10_4
	float v18; // xmm6_4
	float v19; // xmm12_4
	float v20; // xmm13_4
	__m128* v21; // rdx
	__int64 v22; // rcx
	float* v23; // rax
	__m128 v24; // xmm1
	__m128 v25; // xmm3
	__m128 v26; // xmm3
	__m128 v27; // xmm1
	__m128 v28; // xmm2
	__m128 v29; // xmm11
	__m128 v30; // xmm8
	__m128 v31; // xmm8
	__int64 v32; // r12
	__int64 v33; // rcx
	unsigned __int64 v34; // rsi
	unsigned int v35; // r9d
	__int64 v36; // rdx
	__int64 v37; // r8
	float v38; // xmm6_4
	_QWORD* v39; // rcx
	float v40; // xmm6_4
	float v41; // xmm6_4
	float v42; // xmm6_4
	unsigned __int64 v43; // rcx
	__int64 v44; // rsi
	__int64 v45; // rcx
	__int64 v46; // rcx
	__int64 v47; // r13
	__int64 v48; // r13
	__int64 v49; // rdi
	__int64* v50; // rcx
	__int64 v51; // rdi
	float* v52; // rax
	int v53; // xmm0_4
	float v54; // xmm1_4
	__m128 v55; // xmm0
	__m128* v56; // rcx
	__m128 v57; // xmm3
	__m128 v58; // xmm2
	__int128 v59; // xmm0
	__m128 v60; // xmm3
	float v61; // xmm0_4
	float v62; // xmm1_4
	float v63; // xmm0_4
	float v64; // xmm1_4
	__int32 v65; // xmm0_4
	__int64 v66; // r14
	__int64 v67; // rsi
	__int64 v68; // rax
	__int64 v69; // rcx
	int v70; // edi
	unsigned __int64 v71; // r14
	__int64* v72; // rdi
	int* v73; // rax
	int* v74; // rsi
	unsigned __int64 v75; // rdx
	__int64 v76; // rbx
	__int64* v77; // rax
	__int64 v78; // r12
	__int64 v79; // rcx
	_DWORD* v80; // rdx
	__int64 v81; // r15
	char* v82; // rax
	__int64 v83; // rcx
	__int64 v84; // rax
	unsigned int* v85; // r13
	__int64 v86; // rdi
	__int64 v87; // rax
	__m128* v88; // rdi
	__int64 v89; // r14
	__int64 v90; // rcx
	__int64 v91; // rcx
	double v92; // xmm10_8
	__int64 v93; // rsi
	float v94; // xmm7_4
	float v95; // xmm8_4
	float v96; // xmm6_4
	float v97; // xmm0_4
	float v98; // xmm4_4
	__m128 v99; // xmm3
	__m128 v100; // xmm6
	__int128 v101; // xmm0
	__m128 v102; // xmm4
	__m128 v103; // xmm4
	__m128 v104; // xmm5
	__m128 v105; // xmm1
	float v106; // xmm3_4
	float v107; // xmm0_4
	__m128i v108; // xmm4
	__m128i v109; // xmm2
	__m128 v110; // xmm0
	unsigned int v111; // ebx
	unsigned int* v112; // r9
	__m128 v113; // xmm0
	__m128 v114; // xmm2
	__m128 v115; // xmm3
	__m128 v116; // xmm0
	__m128 v117; // xmm3
	__m128 v118; // xmm2
	__m128 v119; // xmm3
	__m128 v120; // xmm0
	__m128 v121; // xmm3
	__m128 v122; // xmm2
	__int64 v123; // r10
	__int64 v124; // r10
	__int64 v125; // r10
	__int64 v126; // r9
	__m128i v127; // xmm1
	__m128 v128; // xmm0
	__m128i v129; // xmm1
	int v130; // r11d
	__int16 v131; // dx
	_WORD* v132; // r10
	__int64 v133; // r8
	__int64 v134; // rdx
	__int64 v135; // r9
	__int16 v136; // cx
	__int64 v137; // rax
	bool v138; // zf
	int v140; // [rsp+20h] [rbp-E0h] BYREF
	__int16 v141; // [rsp+24h] [rbp-DCh]
	unsigned int v142; // [rsp+28h] [rbp-D8h] BYREF
	__int16 v143; // [rsp+2Ch] [rbp-D4h]
	int v144; // [rsp+30h] [rbp-D0h] BYREF
	__int16 v145; // [rsp+34h] [rbp-CCh]
	unsigned int v146; // [rsp+38h] [rbp-C8h]
	_DWORD* v147; // [rsp+40h] [rbp-C0h]
	unsigned __int64 v148; // [rsp+48h] [rbp-B8h]
	__int64 v149; // [rsp+50h] [rbp-B0h]
	__m256 v150; // [rsp+60h] [rbp-A0h] BYREF
	__m128 v151; // [rsp+80h] [rbp-80h]
	__int128 v152; // [rsp+90h] [rbp-70h]
	__m128 v153; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v154; // [rsp+B0h] [rbp-50h]
	__int64 v155; // [rsp+B8h] [rbp-48h]
	float* v156; // [rsp+C0h] [rbp-40h]
	__m128 v157; // [rsp+D0h] [rbp-30h] BYREF
	__int64 v158; // [rsp+E0h] [rbp-20h]
	__int64 v159; // [rsp+E8h] [rbp-18h]
	__int64 v160; // [rsp+F0h] [rbp-10h]
	__m128 v161; // [rsp+100h] [rbp+0h]
	__int128 v162; // [rsp+110h] [rbp+10h]
	int v163[4]; // [rsp+120h] [rbp+20h] BYREF
	__m128 v164; // [rsp+130h] [rbp+30h] BYREF
	__m128i v165[2]; // [rsp+140h] [rbp+40h] BYREF
	__m128i v166; // [rsp+160h] [rbp+60h] BYREF
	__m128 v167; // [rsp+170h] [rbp+70h]
	__int128 v168[4]; // [rsp+180h] [rbp+80h] BYREF
	__m128* v169[4]; // [rsp+1C0h] [rbp+C0h] BYREF
	__m128 v170; // [rsp+1E0h] [rbp+E0h]
	__m128 v171; // [rsp+1F0h] [rbp+F0h]
	int v172; // [rsp+200h] [rbp+100h]
	char v173; // [rsp+230h] [rbp+130h]
	int v174[6]; // [rsp+238h] [rbp+138h]
	__m128 v175[2]; // [rsp+250h] [rbp+150h] BYREF
	int v176; // [rsp+270h] [rbp+170h]
	__int64 v177[2]; // [rsp+330h] [rbp+230h] BYREF

	v158 = a1;
	sub_140389E30((__int64*)(*(_QWORD*)(a1 + 880) + 16i64), 0i64);
	sub_1401CFD00(*(__int64**)(a1 + 880), 0i64);
	sub_140389F50((__int64*)(*(_QWORD*)(a1 + 880) + 104i64), 0i64);
	v3 = 4i64;
	v155 = 208i64;
	v4 = 208i64;
	v159 = 4i64;
	do
	{
		v4 += 16i64;
		*(_QWORD*)(v4 + *(_QWORD*)(a1 + 880) - 8) = 0i64;
		--v3;
	} while (v3);
	v5 = sub_14018B280(24i64, 0);
	if (v5)
	{
		v6 = sub_1401AE310((__int64)v5);
		v160 = v6;
	}
	else
	{
		v6 = 0i64;
		v160 = 0i64;
	}
	v7 = (float*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 40i64))(*(_QWORD*)(a1 + 16));
	v8 = *(_QWORD*)v6;
	v9 = *((_DWORD*)v7 + 1);
	v156 = v7;
	(*(void(__fastcall**)(__int64, _QWORD))(v8 + 16))(v6, (unsigned int)(*(_DWORD*)v7 + (v9 << 11)));
	v10 = 0;
	LODWORD(v147) = 0;
	LODWORD(v148) = 0;
	v11 = *(_QWORD*)(a1 + 880);
	v177[0] = 0i64;
	v177[1] = 0i64;
	LODWORD(v149) = 0;
	v12 = 16 * (int)*(float*)(v11 + 32);
	v13 = dword_140B65CC8[*(int*)(a1 + 872)];
	if (v12 > 0x1F40)
		v12 = 8000;
	v14 = 0;
	v142 = 0;
	v154 = v12 >> v13;
	if ((_DWORD)v154)
	{
		while (1)
		{
			*(double*)v1.m128_u64 = (*(double(__fastcall**)(__int64))(*(_QWORD*)v6 + 72i64))(v6);
			v15 = v1;
			*(double*)v1.m128_u64 = (*(double(__fastcall**)(__int64))(*(_QWORD*)v6 + 72i64))(v6);
			v1 = _mm_unpacklo_ps(_mm_unpacklo_ps(v1, (__m128)0i64), _mm_unpacklo_ps(v15, (__m128)0i64));
			v153 = v1;
			*(double*)v1.m128_u64 = (*(double(__fastcall**)(__int64))(*(_QWORD*)v6 + 56i64))(v6);
			v16 = v1.m128_f32[0];
			*(double*)v1.m128_u64 = (*(double(__fastcall**)(__int64))(*(_QWORD*)v6 + 56i64))(v6);
			v17 = v1.m128_f32[0];
			*(double*)v1.m128_u64 = (*(double(__fastcall**)(__int64))(*(_QWORD*)v6 + 56i64))(v6);
			v18 = v1.m128_f32[0];
			*(double*)v1.m128_u64 = (*(double(__fastcall**)(__int64))(*(_QWORD*)v6 + 56i64))(v6);
			v19 = v1.m128_f32[0];
			*(double*)v1.m128_u64 = (*(double(__fastcall**)(__int64))(*(_QWORD*)v6 + 56i64))(v6);
			v20 = v1.m128_f32[0];
			(*(void(__fastcall**)(_QWORD, __m128*, __m128**, __int64))(**(_QWORD**)(a1 + 16) + 192i64))(
				*(_QWORD*)(a1 + 16),
				&v153,
				v169,
				5137i64);
			if (v172 || (v173 & 0x20) != 0)
				goto LABEL_55;
			v21 = *(__m128**)(a1 + 880);
			v22 = 0i64;
			v23 = (float*)&v157;
			v24 = _mm_mul_ps((__m128)xmmword_140B7B240, v170);
			v25 = _mm_mul_ps(v21[12], v170);
			v26 = _mm_mul_ps(v25, v25);
			v27 = _mm_add_ps(v24, _mm_shuffle_ps(v24, v24, 78));
			v1 = _mm_shuffle_ps(v26, v26, 78);
			v28 = _mm_add_ps(v26, v1);
			v29 = _mm_add_ps(_mm_shuffle_ps(v27, v27, 177), v27);
			v30 = v29;
			v30.m128_f32[0] = v29.m128_f32[0] / (float)(_mm_shuffle_ps(v28, v28, 177).m128_f32[0] + v28.m128_f32[0]);
			v31 = _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), v26);
			v157 = v31;
			do
			{
				v16 = v16 - *v23;
				if (v16 <= 0.0)
					break;
				v22 = (unsigned int)(v22 + 1);
				++v23;
			} while ((unsigned int)v22 < 4);
			if ((_DWORD)v22 == 4)
				goto LABEL_55;
			v32 = (unsigned int)v22;
			if (v157.m128_f32[v22] < 0.25)
				goto LABEL_55;
			v33 = (unsigned int)(v174[v22] + 4 * v22);
			v1 = (__m128)v21[2].m128_u32[v33 + 1];
			if (v1.m128_f32[0] == 0.0)
				goto LABEL_55;
			v34 = (unsigned __int64)&v21[4 * (unsigned __int64)(unsigned int)v33 + 17];
			if (!*(_BYTE*)v34 || (float)(v17 * v21[2].m128_f32[0]) > *(float*)(v34 + 4))
				goto LABEL_55;
			v35 = *(_DWORD*)(v34 + 8);
			v36 = 0i64;
			v37 = 0i64;
			v38 = v18 * v1.m128_f32[0];
			if ((int)v35 < 4)
			{
			LABEL_26:
				if ((unsigned int)v36 >= v35)
					goto LABEL_33;
				v43 = v34 + 8 * (v37 + 2);
				while (1)
				{
					v38 = v38 - *(float*)(*(_QWORD*)v43 + 40i64);
					if (v38 <= 0.0)
						break;
					v36 = (unsigned int)(v36 + 1);
					v43 += 8i64;
					if ((unsigned int)v36 >= v35)
						goto LABEL_33;
				}
			}
			else
			{
				v39 = (_QWORD*)(v34 + 16);
				while (1)
				{
					v40 = v38 - *(float*)(*v39 + 40i64);
					if (v40 <= 0.0)
						break;
					v41 = v40 - *(float*)(v39[1] + 40i64);
					if (v41 <= 0.0)
					{
						v36 = (unsigned int)(v36 + 1);
						break;
					}
					v42 = v41 - *(float*)(v39[2] + 40i64);
					if (v42 <= 0.0)
					{
						v36 = (unsigned int)(v36 + 2);
						break;
					}
					v38 = v42 - *(float*)(v39[3] + 40i64);
					if (v38 <= 0.0)
					{
						v36 = (unsigned int)(v36 + 3);
						break;
					}
					v36 = (unsigned int)(v36 + 4);
					v37 += 4i64;
					v39 += 4;
					if ((unsigned int)v36 >= v35 - 3)
						goto LABEL_26;
				}
			}
			if ((unsigned int)v36 >= v35)
				LABEL_33:
			v36 = v35 - 1;
			v44 = *(_QWORD*)(v34 + 8 * v36 + 16);
			v163[0] = -1;
			v45 = *(_QWORD*)(v44 + 16);
			if (v45)
			{
				if ((*(unsigned int(__fastcall**)(__int64, int*, __int64))(*(_QWORD*)v45 + 32i64))(v45, v163, v37))
				{
					sub_140373540(v44);
					v46 = *(_QWORD*)(v44 + 16);
					if (v46)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v46 + 8i64))(v46);
						*(_QWORD*)(v44 + 16) = 0i64;
					}
				}
			}
			v47 = *(_QWORD*)(v44 + 80);
			if (v47)
			{
				v48 = *(_QWORD*)(v47 + 600);
				if ((unsigned int)(*(_DWORD*)(v48 + 24) + v148) > 0x4000 || v10 + *(_DWORD*)(v48 + 104) > 0x10000)
				{
				LABEL_56:
					if (v10)
					{
						v71 = v10;
						v72 = *(__int64**)(a1 + 880);
						if (v72[1] <= v71)
						{
							v73 = sub_14018DB00(*v72, (unsigned int)v71, 2i64);
							v74 = v73;
							if ((int*)*v72 != v73)
							{
								sub_1407DB590(v73, (int*)*v72, 2 * v72[1]);
								if (*v72)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v72 - 16) + 8i64))(*v72 - 16);
								*v72 = (__int64)v74;
							}
						}
						v75 = (unsigned int)v148;
						v72[1] = v71;
						v76 = a1;
						sub_140389E30((__int64*)(*(_QWORD*)(a1 + 880) + 16i64), v75);
						v77 = *(__int64**)(a1 + 880);
						v78 = 0i64;
						v79 = *v77;
						v80 = (_DWORD*)(a1 + 760);
						v154 = v77[2];
						v81 = 0i64;
						v82 = (char*)v177 - v76;
						v156 = (float*)v79;
						v149 = 0i64;
						v153.m128_u64[0] = (unsigned __int64)v177 - v76;
						v147 = (_DWORD*)(v76 + 760);
						do
						{
							v83 = *(unsigned int*)((char*)v80 + (_QWORD)v82 - 760);
							if ((_DWORD)v83)
							{
								v84 = *(_QWORD*)(v76 + 880);
								*(_QWORD*)&v162 = v81;
								v85 = *(unsigned int**)(v155 + v84);
								v161.m128_u64[0] = v78;
								v148 = (unsigned __int64)&v85[v83];
								if ((unsigned __int64)v85 < v148)
								{
									do
									{
										v86 = *v85;
										v87 = *(_QWORD*)(v76 + 880);
										++v85;
										v163[0] = -1;
										v88 = (__m128*)(*(_QWORD*)(v87 + 104) + (v86 << 7));
										v89 = v88[7].m128_i64[0];
										v90 = *(_QWORD*)(v89 + 16);
										if (v90)
										{
											if ((*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v90 + 32i64))(v90, v163))
											{
												sub_140373540(v89);
												v91 = *(_QWORD*)(v89 + 16);
												if (v91)
												{
													(*(void(__fastcall**)(__int64))(*(_QWORD*)v91 + 8i64))(v91);
													*(_QWORD*)(v89 + 16) = 0i64;
												}
											}
										}
										*(_QWORD*)&v92 = v88[6].m128_u32[2];
										v93 = *(_QWORD*)(*(_QWORD*)(v89 + 80) + 600i64);
										if (*(float*)&v92 == 0.0)
										{
											v99 = *(__m128*)ymmword_140C78390.m256_f32;
											v100 = *(__m128*) & ymmword_140C78390.m256_f32[4];
											v102 = (__m128)xmmword_140C783B0;
											v101 = xmmword_140C783C0;
											v150 = ymmword_140C78390;
											v151 = (__m128)xmmword_140C783B0;
										}
										else
										{
											v94 = sub_1408FE3D0(0.0);
											v95 = sub_1408FC950(0.0);
											v96 = sub_1408FE3D0(v92);
											v97 = sub_1408FC950(v92);
											v150.m256_f32[3] = 0.0;
											v150.m256_f32[7] = 0.0;
											v151.m128_i32[3] = 0;
											v150.m256_f32[2] = -v96;
											v150.m256_f32[0] = v95 * v97;
											v150.m256_f32[1] = v94 * v97;
											v98 = (float)(v94 * v96) * v95;
											v150.m256_f32[4] = (float)((float)(v95 * v96) * v94) - (float)(v94 * v95);
											v99 = *(__m128*)v150.m256_f32;
											v150.m256_f32[5] = (float)((float)(v94 * v96) * v94) + (float)(v95 * v95);
											v151.m128_f32[0] = (float)(v94 * v94) + (float)((float)(v95 * v96) * v95);
											v150.m256_f32[6] = v97 * v94;
											v151.m128_f32[2] = v97 * v95;
											v100 = *(__m128*) & v150.m256_f32[4];
											v101 = xmmword_140C78440;
											v151.m128_f32[1] = v98 - (float)(v95 * v94);
											v102 = v151;
										}
										v152 = v101;
										if ((*(_BYTE*)(v89 + 36) & 2) != 0)
										{
											v103 = (__m128)0x40400000u;
											*(_QWORD*)&v150.m256_f32[4] = v88[2].m128_u64[0];
											LODWORD(v150.m256_f32[6]) = v88[2].m128_i32[2];
											v100 = *(__m128*) & v150.m256_f32[4];
											v104 = _mm_sub_ps(
												_mm_mul_ps(
													_mm_shuffle_ps(*(__m128*) & v150.m256_f32[4], *(__m128*) & v150.m256_f32[4], 210),
													_mm_shuffle_ps(v99, v99, 201)),
												_mm_mul_ps(
													_mm_shuffle_ps(*(__m128*) & v150.m256_f32[4], *(__m128*) & v150.m256_f32[4], 201),
													_mm_shuffle_ps(v99, v99, 210)));
											v105 = _mm_mul_ps(v104, v104);
											v106 = (float)(v105.m128_f32[0] + _mm_shuffle_ps(v105, v105, 85).m128_f32[0])
												+ _mm_shuffle_ps(v105, v105, 170).m128_f32[0];
											v107 = fsqrt(v106);
											v103.m128_f32[0] = fmaxf(
												(float)((float)(3.0
													- (float)((float)(v106 * (float)(1.0 / v107))
														* (float)(1.0 / v107)))
													* 0.5)
												* (float)(1.0 / v107),
												0.0);
											v108 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v103, v103, 0), v104);
											v151.m128_u64[0] = v108.m128i_i64[0];
											v151.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v108, 8));
											v102 = v151;
											v109 = (__m128i)_mm_sub_ps(
												_mm_mul_ps(
													_mm_shuffle_ps(v151, v151, 210),
													_mm_shuffle_ps(
														*(__m128*) & v150.m256_f32[4],
														*(__m128*) & v150.m256_f32[4],
														201)),
												_mm_mul_ps(
													_mm_shuffle_ps(v151, v151, 201),
													_mm_shuffle_ps(
														*(__m128*) & v150.m256_f32[4],
														*(__m128*) & v150.m256_f32[4],
														210)));
											*(_QWORD*)v150.m256_f32 = v109.m128i_i64[0];
											LODWORD(v150.m256_f32[2]) = _mm_cvtsi128_si32(_mm_srli_si128(v109, 8));
											v99 = *(__m128*)v150.m256_f32;
										}
										v110 = (__m128)v88[6].m128_u32[1];
										v146 = 0;
										*(__m128*)v150.m256_f32 = _mm_mul_ps(v99, _mm_shuffle_ps(v110, v110, 0));
										*(__m128*)& v150.m256_f32[4] = _mm_mul_ps(
											v100,
											_mm_shuffle_ps(
												(__m128)v88[6].m128_u32[1],
												(__m128)v88[6].m128_u32[1],
												0));
										v151 = _mm_mul_ps(v102, _mm_shuffle_ps((__m128)v88[6].m128_u32[1], (__m128)v88[6].m128_u32[1], 0));
										*(float*)&v152 = *(float*)&v152 + v88[1].m128_f32[0];
										*((float*)&v152 + 1) = *((float*)&v152 + 1) + v88[1].m128_f32[1];
										*((float*)&v152 + 2) = *((float*)&v152 + 2) + v88[1].m128_f32[2];
										if (*(_DWORD*)(v93 + 24))
										{
											v111 = v146;
											v157.m128_u64[0] = (unsigned __int64)v168;
											v157.m128_u64[1] = (unsigned __int64)&v150;
											do
											{
												v169[0] = (__m128*)v168;
												v169[1] = (__m128*) & v150;
												v112 = (unsigned int*)(*(_QWORD*)(v89 + 312) + 76i64 * v111);
												v113 = (__m128)v112[8];
												v114 = _mm_unpacklo_ps((__m128)v112[7], (__m128)0i64);
												v168[0] = (__int128)_mm_unpacklo_ps(
													_mm_unpacklo_ps((__m128)v112[3], (__m128)v112[5]),
													_mm_unpacklo_ps((__m128)v112[4], (__m128)0i64));
												v115 = _mm_unpacklo_ps((__m128)v112[6], v113);
												v116 = (__m128)v112[11];
												v117 = _mm_unpacklo_ps(v115, v114);
												v118 = _mm_unpacklo_ps((__m128)v112[10], (__m128)0i64);
												v168[1] = (__int128)v117;
												v119 = _mm_unpacklo_ps((__m128)v112[9], v116);
												v120 = (__m128)v112[2];
												v121 = _mm_unpacklo_ps(v119, v118);
												v122 = _mm_unpacklo_ps((__m128)v112[1], (__m128)0x3F800000u);
												v168[2] = (__int128)v121;
												v168[3] = (__int128)_mm_unpacklo_ps(_mm_unpacklo_ps((__m128) * v112, v120), v122);
												sub_1401AFB10(v169, (__m128*)v165);
												*(_QWORD*)v123 = v167.m128_u64[0];
												*(_DWORD*)(v123 + 8) = v167.m128_i32[2];
												sub_1401C9800(&v144, v165);
												*(_DWORD*)(v124 + 12) = v144;
												*(_WORD*)(v124 + 16) = v145;
												*(_DWORD*)(v124 + 20) = v88[3].m128_i32[0];
												*(_WORD*)(v124 + 24) = v88[3].m128_i16[2];
												sub_1401C9800(&v142, &v166);
												*(_DWORD*)(v125 + 28) = v142;
												*(_WORD*)(v125 + 32) = v143;
												*(_DWORD*)(v125 + 36) = *(_DWORD*)(v126 + 64);
												*(_DWORD*)(v125 + 40) = v88->m128_i32[0];
												*(_DWORD*)(v125 + 44) = v88[6].m128_i32[0];
												v127 = _mm_shuffle_epi32(
													_mm_cvttps_epi32(
														_mm_add_ps(
															_mm_mul_ps(
																_mm_min_ps(
																	_mm_max_ps(
																		(__m128)0i64,
																		_mm_mul_ps(
																			v88[4],
																			_mm_mul_ps(
																				_mm_cvtepi32_ps(
																					_mm_shuffle_epi32(
																						_mm_unpacklo_epi16(
																							_mm_unpacklo_epi8(
																								_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v126 + 56)), 0),
																								(__m128i)0i64),
																							(__m128i)0i64),
																						198)),
																				(__m128)xmmword_140B7AB70))),
																	(__m128)xmmword_140B7B240),
																(__m128)xmmword_140B7B470),
															(__m128)xmmword_140B7AC50)),
													198);
												v128 = v167;
												v129 = _mm_packus_epi16(v127, v127);
												*(_DWORD*)(v125 + 48) = _mm_cvtsi128_si32(_mm_packus_epi16(v129, v129));
												*(_DWORD*)(v125 + 52) = v130 | (*(unsigned __int8*)(v126 + 72) << 24);
												v164 = _mm_sub_ps(v128, (__m128)v152);
												sub_1401C9800(&v140, (__m128i*) & v164);
												v131 = v140;
												v132[13] = HIWORD(v140);
												++v111;
												v132[17] = v141;
												v132[9] = v131;
											} while (v111 < *(_DWORD*)(v93 + 24));
											v78 = v149;
											v76 = v158;
										}
										v133 = *(_QWORD*)(v93 + 120);
										v134 = 0i64;
										if (*(_DWORD*)(v93 + 104))
										{
											v135 = (__int64)v156;
											do
											{
												v136 = *(_WORD*)(v133 + 2 * v134);
												v137 = (unsigned int)v134;
												v134 = (unsigned int)(v134 + 1);
												*(_WORD*)(v135 + 2 * (v78 + v137)) = v81 + v136;
											} while ((unsigned int)v134 < *(_DWORD*)(v93 + 104));
										}
										v81 += *(unsigned int*)(v93 + 24);
										v78 += *(unsigned int*)(v93 + 104);
										v149 = v78;
									} while ((unsigned __int64)v85 < v148);
									v80 = v147;
								}
								*(v80 - 6) = v81 - v162;
								*v80 = v78 - v161.m128_i32[0];
								v82 = (char*)v153.m128_u64[0];
							}
							v155 += 16i64;
							++v80;
							v138 = v159-- == 1;
							v147 = v80;
						} while (!v138);
						v6 = v160;
					}
					break;
				}
				sub_140387000(a1, &v153, v175, 3);
				v49 = (unsigned int)v147;
				v50 = (__int64*)(*(_QWORD*)(a1 + 880) + 104i64);
				v146 = (_DWORD)v147 + 1;
				sub_140389F50(v50, (unsigned int)((_DWORD)v147 + 1));
				v51 = *(_QWORD*)(*(_QWORD*)(a1 + 880) + 104i64) + (v49 << 7);
				sub_1401C95B0(&v140, (__m128i*) & v153);
				v52 = v156;
				v53 = v176;
				*(_DWORD*)v51 = v140;
				v54 = (float)((float)(v52[12] - v52[8]) * v153.m128_f32[0]) + v52[8];
				*(_DWORD*)(v51 + 20) = v53;
				v55 = v175[0];
				*(float*)(v51 + 16) = v54;
				*(float*)(v51 + 24) = (float)((float)(v52[14] - v52[10]) * v153.m128_f32[1]) + v52[10];
				*(__m128*)(v51 + 32) = v55;
				sub_1401C9800(&v144, (__m128i*)(v51 + 32));
				*(_DWORD*)(v51 + 48) = v144;
				*(_WORD*)(v51 + 52) = v145;
				(*(void(__fastcall**)(_QWORD, __m128*, __m128**, __int64))(**(_QWORD**)(a1 + 16) + 192i64))(
					*(_QWORD*)(a1 + 16),
					&v153,
					v169,
					32i64);
				if ((*(_BYTE*)(v44 + 36) & 4) != 0)
				{
					v56 = *(__m128**)(a1 + 880);
					v57 = (__m128)0x3F800000u;
					v58 = _mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v31, v31, 85), v56[9]),
						_mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v56[8]));
					v59 = (__int128)v56[v32 + 8];
					v162 = v59;
					v57.m128_f32[0] = (float)(1.0 - v29.m128_f32[0]) * 0.5;
					v60 = _mm_mul_ps(
						_mm_add_ps(
							_mm_shuffle_ps(v57, v57, 0),
							_mm_add_ps(
								_mm_add_ps(v58, _mm_mul_ps(_mm_shuffle_ps(v31, v31, 170), v56[10])),
								_mm_mul_ps(_mm_shuffle_ps(v31, v31, 255), v56[11]))),
						v171);
					v161 = v60;
					if (v60.m128_f32[0] >= *(float*)&v59)
					{
						*(_DWORD*)(v51 + 64) = 1065353216;
						*(float*)(v51 + 80) = v60.m128_f32[0] - *(float*)&v59;
					}
					else
					{
						*(_DWORD*)(v51 + 80) = 0;
						*(float*)(v51 + 64) = v60.m128_f32[0] / *(float*)&v59;
					}
					v61 = v161.m128_f32[1];
					v62 = *((float*)&v162 + 1);
					if (v161.m128_f32[1] >= *((float*)&v162 + 1))
					{
						*(_DWORD*)(v51 + 68) = 1065353216;
						*(float*)(v51 + 84) = v61 - v62;
					}
					else
					{
						*(_DWORD*)(v51 + 84) = 0;
						*(float*)(v51 + 68) = v61 / v62;
					}
					v63 = v161.m128_f32[2];
					v64 = *((float*)&v162 + 2);
					if (v161.m128_f32[2] >= *((float*)&v162 + 2))
					{
						*(_DWORD*)(v51 + 72) = 1065353216;
						*(_DWORD*)(v51 + 76) = 1065353216;
						*(float*)(v51 + 88) = v63 - v64;
						*(_DWORD*)(v51 + 92) = 0;
					}
					else
					{
						*(_DWORD*)(v51 + 88) = 0;
						*(_DWORD*)(v51 + 76) = 1065353216;
						*(_DWORD*)(v51 + 92) = 0;
						*(float*)(v51 + 72) = v63 / v64;
					}
				}
				else
				{
					*(_QWORD*)(v51 + 64) = v171.m128_u64[0];
					v65 = v171.m128_i32[2];
					*(_DWORD*)(v51 + 76) = 1065353216;
					*(_DWORD*)(v51 + 72) = v65;
					*(_OWORD*)(v51 + 80) = 0i64;
				}
				v66 = *((unsigned int*)v177 + v32);
				*(_DWORD*)(v51 + 96) = *(_DWORD*)(v44 + 56);
				*(float*)(v51 + 100) = (float)((float)(1.0 - *(float*)(v44 + 44)) * v19) + *(float*)(v44 + 44);
				v1 = (__m128) * (unsigned int*)(v44 + 52);
				v1.m128_f32[0] = (float)((float)(v1.m128_f32[0] - *(float*)(v44 + 48)) * v20) + *(float*)(v44 + 48);
				*(_QWORD*)(v51 + 112) = v44;
				v67 = 16 * (v32 + 13);
				*(_DWORD*)(v51 + 104) = v1.m128_i32[0];
				sub_140052360((__int64*)(v67 + *(_QWORD*)(a1 + 880)), (unsigned int)(v66 + 1));
				v68 = *(_QWORD*)(a1 + 880);
				*((_DWORD*)v177 + v32) = v66 + 1;
				v69 = *(_QWORD*)(v67 + v68);
				LODWORD(v67) = v146;
				v70 = v149;
				*(_DWORD*)(v69 + 4 * v66) = (_DWORD)v147;
				v14 = v142;
				LODWORD(v147) = v67;
				LODWORD(v67) = *(_DWORD*)(v48 + 24) + v148;
				v10 = *(_DWORD*)(v48 + 104) + v70;
				LODWORD(v149) = v10;
				LODWORD(v148) = v67;
			}
		LABEL_55:
			v142 = ++v14;
			if (v14 >= (unsigned int)v154)
				goto LABEL_56;
		}
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
	return 0i64;
}
// 140381B4F: variable 'v1' is possibly undefined
// 14038265F: variable 'v123' is possibly undefined
// 140382682: variable 'v124' is possibly undefined
// 1403826B2: variable 'v125' is possibly undefined
// 1403826C0: variable 'v126' is possibly undefined
// 140382739: variable 'v130' is possibly undefined
// 140382757: variable 'v132' is possibly undefined
// 140B65CC8: using guessed type _DWORD dword_140B65CC8[4];
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 140381970: using guessed type int var_1D8[6];
// 140381970: using guessed type __m128 var_1C0[2];
// 140381970: using guessed type __m128i var_2D0[2];

