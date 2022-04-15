#include "../winhttp.h"

//----- (000000014031BCA0) ----------------------------------------------------
__int64 __fastcall sub_14031BCA0(unsigned __int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
	__m128 v5; // xmm15
	__int64 v6; // rsi
	int v7; // ecx
	int v8; // r15d
	int v9; // eax
	float v11; // xmm13_4
	float v12; // xmm8_4
	__m128 v13; // xmm10
	int v14; // xmm8_4
	bool v15; // cf
	bool v16; // bl
	__int64 v17; // rcx
	__int64 v18; // rdx
	__m128* v19; // rbx
	__m128 v20; // xmm15
	__m128 v21; // xmm1
	__m128 v22; // xmm0
	unsigned __int16 v23; // cx
	__int64 v24; // r15
	unsigned int v25; // r10d
	__int64 v26; // r13
	int v27; // r8d
	__m128 v28; // xmm10
	unsigned int v29; // r14d
	__m128 v30; // xmm4
	float v31; // xmm5_4
	int v32; // r12d
	__int64 v33; // r9
	__int64 v34; // rbx
	unsigned int* v35; // rcx
	__int64 v36; // r11
	__int64 v37; // rax
	float v38; // xmm8_4
	float v39; // xmm7_4
	__m128 v40; // xmm3
	float v41; // xmm3_4
	float v42; // xmm0_4
	__m128 v43; // xmm2
	__m128 v44; // xmm4
	__m128 v45; // xmm3
	__m128 v46; // xmm0
	float v47; // xmm3_4
	__m128 v48; // xmm0
	__int64 v49; // rax
	int v50; // edx
	__m128* v51; // r8
	__int64 v52; // rcx
	__m128 v53; // xmm0
	float* v54; // rax
	float v55; // xmm6_4
	float v56; // xmm7_4
	__m128 v57; // xmm0
	float v58; // xmm13_4
	float v59; // xmm13_4
	__int64 v60; // rax
	__m128 v61; // xmm3
	__m128 v62; // xmm1
	__m128 v63; // xmm0
	float v64; // xmm1_4
	__int64 v65; // rcx
	__int64 result; // rax
	int v67; // ebx
	__int16 v68; // bx
	char v69; // al
	__int64 v70; // rbx
	__m128 v71; // xmm1
	__m128* v72; // rcx
	float v73; // xmm13_4
	__m128 v74; // xmm0
	__m128 v75; // xmm2
	__m128 v76; // xmm3
	__m128 v77; // xmm0
	__m128 v78; // xmm3
	__m128 v79; // xmm2
	double v80; // xmm6_8
	float v81; // xmm10_4
	float v82; // xmm0_4
	__m128 v83; // xmm6
	float v84; // xmm11_4
	float v85; // xmm8_4
	__m128 v86; // xmm0
	__m128 v87; // xmm9
	float v88; // xmm7_4
	__m128 v89; // xmm0
	__m128 v90; // xmm0
	__m128 v91; // xmm0
	__m128 v92; // xmm1
	__m128 v93; // xmm0
	__m128 v94; // xmm2
	__m128* v95; // rcx
	double v96; // xmm6_8
	float v97; // xmm11_4
	float v98; // xmm0_4
	double v99; // xmm6_8
	float v100; // xmm10_4
	float v101; // xmm8_4
	float v102; // xmm0_4
	__m128 v103; // xmm6
	float v104; // xmm9_4
	float v105; // xmm7_4
	float v106; // xmm0_4
	__m128 v107; // xmm0
	__m128 v108; // xmm0
	__m128 v109; // xmm1
	__m128 v110; // xmm0
	__m128 v111; // xmm2
	double v112; // xmm6_8
	float v113; // xmm7_4
	float v114; // xmm0_4
	__m128 v115; // xmm0
	__m128 v116; // xmm0
	__m128 v117; // xmm1
	__m128 v118; // xmm0
	__m128 v119; // xmm2
	__int64 v120; // rcx
	__int64 v121; // rax
	float* v122; // rcx
	unsigned int v123; // xmm0_4
	unsigned int v124; // xmm1_4
	unsigned __int16* v125; // rdx
	int v126; // ecx
	int v127; // ecx
	__m128* v128; // rbx
	int* v129; // rax
	int v130; // ecx
	int v131; // eax
	__m128 v132; // xmm2
	__m128 v133; // xmm7
	float v134; // xmm7_4
	float v135; // xmm6_4
	float v136; // xmm0_4
	unsigned int v137; // r14d
	__int64 v138; // rcx
	unsigned int v139; // [rsp+28h] [rbp-E0h]
	__m128 v140; // [rsp+38h] [rbp-D0h] BYREF
	float v141; // [rsp+48h] [rbp-C0h] BYREF
	int v142; // [rsp+4Ch] [rbp-BCh]
	unsigned __int32 v143; // [rsp+50h] [rbp-B8h]
	int v144; // [rsp+54h] [rbp-B4h]
	__int64 v145; // [rsp+58h] [rbp-B0h]
	_QWORD v146[3]; // [rsp+60h] [rbp-A8h] BYREF
	int v147[12]; // [rsp+78h] [rbp-90h] BYREF
	__int128 v148; // [rsp+A8h] [rbp-60h]
	int v149[12]; // [rsp+B8h] [rbp-50h] BYREF
	__int128 v150; // [rsp+E8h] [rbp-20h]
	int v151[12]; // [rsp+F8h] [rbp-10h] BYREF
	__int128 v152; // [rsp+128h] [rbp+20h]
	__m128 v153[3]; // [rsp+138h] [rbp+30h] BYREF
	__m128 v154; // [rsp+168h] [rbp+60h]
	__int128 v155[4]; // [rsp+178h] [rbp+70h] BYREF
	__m128* v156[10]; // [rsp+1B8h] [rbp+B0h] BYREF
	float v157; // [rsp+208h] [rbp+100h]
	float v158; // [rsp+20Ch] [rbp+104h]
	float v159; // [rsp+210h] [rbp+108h]
	__int128 v160[4]; // [rsp+218h] [rbp+110h] BYREF
	float v161; // [rsp+258h] [rbp+150h]
	float v162; // [rsp+25Ch] [rbp+154h]
	float v163; // [rsp+260h] [rbp+158h]
	__int128 v164[4]; // [rsp+268h] [rbp+160h] BYREF
	float v165; // [rsp+2A8h] [rbp+1A0h]
	float v166; // [rsp+2ACh] [rbp+1A4h]
	float v167; // [rsp+2B0h] [rbp+1A8h]
	__int128 v168[4]; // [rsp+2B8h] [rbp+1B0h] BYREF
	__m128* v169[2]; // [rsp+2F8h] [rbp+1F0h] BYREF
	__m128 v170[4]; // [rsp+308h] [rbp+200h] BYREF
	__m128* v171[2]; // [rsp+348h] [rbp+240h] BYREF
	__m128 v172[4]; // [rsp+358h] [rbp+250h] BYREF
	__m128* v173[2]; // [rsp+398h] [rbp+290h] BYREF
	__m128 v174[4]; // [rsp+3A8h] [rbp+2A0h] BYREF

	v6 = a1;
	v140.m128_u64[0] = a1;
	v7 = *(_DWORD*)(a2 + 92);
	v145 = a5;
	v8 = a3;
	v146[1] = a4;
	v9 = v7 - *(_DWORD*)(a2 + 88);
	v144 = a3;
	v11 = (float)a3 * 0.001;
	v13 = (__m128)COERCE_UNSIGNED_INT((float)v9);
	v12 = v13.m128_f32[0];
	v13.m128_f32[0] = v13.m128_f32[0] * 0.001;
	*(float*)&v14 = v12 / (float)v7;
	v143 = v13.m128_i32[0];
	v15 = *(float*)&v14 < *(float*)(v6 + 544);
	v142 = v14;
	v16 = !v15 && *(float*)&v14 <= *(float*)(v6 + 560);
	v17 = *(_QWORD*)(a2 + 80);
	if (v17)
	{
		if (*(_BYTE*)(a2 + 108))
		{
			if (v16)
			{
			LABEL_13:
				*(_BYTE*)(a2 + 108) = v16;
				goto LABEL_14;
			}
			v18 = 0i64;
		}
		else
		{
			if (!v16)
				goto LABEL_13;
			v18 = 1i64;
		}
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v17 + 1408i64))(v17, v18);
		goto LABEL_13;
	}
LABEL_14:
	sub_140318840(*(float*)&v14, v6 + 1352, v6 + 1272, &v141, *(unsigned __int16*)(*(_QWORD*)(v6 + 416) + 1520i64));
	v19 = (__m128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 144i64))(v6);
	v5.m128_f32[0] = v11;
	v20 = _mm_shuffle_ps(v5, v5, 0);
	v21 = _mm_mul_ps(_mm_add_ps(*v19, *(__m128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 104i64))(v6)), v20);
	v22 = _mm_add_ps(*(__m128*)(a2 + 16), v21);
	*(__m128*)(a2 + 16) = v22;
	v23 = *(_WORD*)(*(_QWORD*)(v6 + 8) + 104i64);
	if (v23)
	{
		v24 = *(_QWORD*)(v6 + 40);
		v25 = 0;
		v26 = *(_QWORD*)(v24 + 64);
		v27 = 1;
		v28 = 0i64;
		v29 = *(_DWORD*)(v26 + 776);
		if (v29)
		{
			v30 = v140;
			v31 = v141;
			v32 = v23;
			v33 = 0i64;
			v34 = 0i64;
			v35 = (unsigned int*)(v145 + 8);
			do
			{
				if ((v27 & v32) != 0)
				{
					v36 = *(_QWORD*)(v24 + 1416);
					v37 = *(_QWORD*)(v26 + 784);
					v38 = *(float*)(v36 + v33 + 28);
					v39 = *(float*)(v36 + v33 + 48) - v38;
					if (*(_WORD*)(v37 + v34 + 2))
					{
						if (*(_WORD*)(v37 + v34 + 2) == 1)
						{
							v40 = _mm_mul_ps(*(__m128*)a2, *(__m128*)(v145 + 16i64 * v25));
							v41 = (float)((float)(v40.m128_f32[0] + _mm_shuffle_ps(v40, v40, 85).m128_f32[0])
								+ _mm_shuffle_ps(v40, v40, 170).m128_f32[0])
								+ *(float*)(v145 + 16i64 * v25 + 12);
							v42 = fabs(v41);
							if (v39 == 0.0)
							{
								if (v42 >= v38)
									v31 = 0.0;
								else
									v31 = 1.0;
							}
							else
							{
								v31 = fmaxf(0.0, fminf((float)(*(float*)(v36 + v33 + 48) - v42) / v39, 1.0));
							}
							v22 = (__m128) * v35;
							v43 = _mm_unpacklo_ps((__m128) * (v35 - 1), (__m128)0i64);
							if (v41 >= 0.0)
								v30 = _mm_sub_ps((__m128)0i64, _mm_unpacklo_ps(_mm_unpacklo_ps((__m128) * (v35 - 2), v22), v43));
							else
								v30 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128) * (v35 - 2), v22), v43);
						}
					}
					else
					{
						v44 = _mm_sub_ps(*(__m128*)(v146[1] + 16i64 * v25), *(__m128*)a2);
						v45 = _mm_mul_ps(v44, v44);
						v46 = _mm_shuffle_ps(v45, v45, 85);
						v47 = fsqrt((float)(v45.m128_f32[0] + v46.m128_f32[0]) + _mm_shuffle_ps(v45, v45, 170).m128_f32[0]);
						if (v39 == 0.0)
						{
							if (v47 >= v38)
								v31 = 0.0;
							else
								v31 = 1.0;
						}
						else
						{
							v46 = (__m128)0x3F800000u;
							v31 = 1.0 - fmaxf(0.0, fminf((float)(v47 - v38) / v39, 1.0));
						}
						v46.m128_f32[0] = v47;
						v22 = _mm_shuffle_ps(v46, v46, 0);
						v30 = _mm_div_ps(v44, v22);
					}
					v22.m128_f32[0] = v31;
					v21 = _mm_mul_ps(v30, _mm_shuffle_ps(v22, v22, 0));
					v22 = v28;
					v28 = _mm_add_ps(
						_mm_mul_ps(
							_mm_mul_ps(
								_mm_shuffle_ps(
									(__m128) * (unsigned int*)(v36 + v33 + 8),
									(__m128) * (unsigned int*)(v36 + v33 + 8),
									0),
								v21),
							v20),
						v28);
				}
				v27 = __ROL4__(v27, 1);
				++v25;
				v34 += 80i64;
				v35 += 4;
				v33 += 72i64;
			} while (v25 < v29);
			v14 = v142;
			v6 = v140.m128_u64[0];
		}
		v8 = v144;
		v48 = _mm_add_ps(*(__m128*)(a2 + 16), v28);
		v13 = (__m128)v143;
		*(__m128*)(a2 + 16) = v48;
	}
	v49 = *(_QWORD*)(v6 + 8);
	if (*(float*)(v49 + 48) > 0.0)
	{
		v50 = *(_DWORD*)(v49 + 8);
		if (v50 == 2 || **(_BYTE**)(v6 + 416) == 2)
		{
			v51 = *(__m128**)(v6 + 40);
			v52 = *(_QWORD*)(v51[1].m128_u64[0] + 488);
			if (v52)
			{
				if (v50 == 2)
					v53 = *(__m128*)a2;
				else
					v53 = _mm_add_ps(v51[8], *(__m128*)a2);
				v140 = v53;
				(*(void(__fastcall**)(__int64, __m128*, _QWORD*, __int64))(*(_QWORD*)v52 + 448i64))(
					v52,
					&v140,
					&v146[1],
					3i64);
				v21 = _mm_mul_ps(
					_mm_shuffle_ps(
						(__m128) * (unsigned int*)(*(_QWORD*)(v6 + 8) + 48i64),
						(__m128) * (unsigned int*)(*(_QWORD*)(v6 + 8) + 48i64),
						0),
					_mm_mul_ps(*(__m128*) & v146[1], v20));
				*(__m128*)(a2 + 16) = _mm_add_ps(*(__m128*)(a2 + 16), v21);
			}
		}
	}
	v140 = *(__m128*)a2;
	v21.m128_f32[0] = v141 * v11;
	*(__m128*)a2 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), *(__m128*)(a2 + 16)), v140);
	if (*(_DWORD*)(*(_QWORD*)(v6 + 8) + 108i64)
		&& (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(v6 + 40) + 88i64))(*(_QWORD*)(v6 + 40)) > 0.0)
	{
		v54 = *(float**)(v6 + 8);
		v55 = v11 * v54[28];
		v56 = 1.0 - (float)((float)((float)(v54[30] - v54[29]) * *(float*)&v14) + v54[29]);
		if ((float)(1.0
			- (float)((float)(v55
				/ (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(v6 + 40) + 88i64))(*(_QWORD*)(v6 + 40)))
				* v56)) >= 0.0)
		{
			v58 = v11 * *(float*)(*(_QWORD*)(v6 + 8) + 112i64);
			v59 = v58 / (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(v6 + 40) + 88i64))(*(_QWORD*)(v6 + 40));
			v57 = (__m128)0x3F800000u;
			v57.m128_f32[0] = 1.0 - (float)(v59 * v56);
		}
		else
		{
			v57 = 0i64;
		}
		*(__m128*)a2 = _mm_add_ps(
			*(__m128*)a2,
			_mm_mul_ps(*(__m128*)(*(_QWORD*)(v6 + 40) + 176i64), _mm_shuffle_ps(v57, v57, 0)));
	}
	v60 = *(_QWORD*)(v6 + 8);
	if (*(_DWORD*)(v60 + 124))
	{
		v61 = *(__m128*)(v6 + 288);
		v62 = _mm_mul_ps(v61, v61);
		if ((float)((float)(v62.m128_f32[0] + _mm_shuffle_ps(v62, v62, 85).m128_f32[0])
			+ _mm_shuffle_ps(v62, v62, 170).m128_f32[0]) > 0.0)
		{
			v63 = (__m128) * (unsigned int*)(v60 + 128);
			v64 = (float)((float)(*(float*)(v60 + 132) - v63.m128_f32[0]) * *(float*)&v14) + v63.m128_f32[0];
			if (v64 < 0.0)
				v64 = 0.0;
			if (*(_DWORD*)(v60 + 8) == 2)
				v61 = _mm_sub_ps(v61, *(__m128*)(v6 + 192));
			v63.m128_f32[0] = v64;
			*(__m128*)a2 = _mm_add_ps(*(__m128*)a2, _mm_mul_ps(v61, _mm_shuffle_ps(v63, v63, 0)));
		}
	}
	v65 = *(_QWORD*)(v6 + 416);
	result = *(unsigned int*)(v65 + 2128);
	if ((_DWORD)result)
	{
		v67 = 0;
		if ((result & 1) != 0
			&& ((float)(*(float*)a2 * v140.m128_f32[0]) <= 0.0
				|| fabs(*(float*)a2 - *(float*)(v6 + 960)) <= *(float*)(v65 + 2132)))
		{
			v67 = 1;
		}
		if ((result & 2) != 0
			&& ((float)(*(float*)(a2 + 4) * v140.m128_f32[1]) <= 0.0
				|| fabs(*(float*)(a2 + 4) - *(float*)(v6 + 964)) <= *(float*)(v65 + 2132)))
		{
			++v67;
		}
		if ((result & 4) != 0
			&& ((float)(*(float*)(a2 + 8) * v140.m128_f32[2]) <= 0.0
				|| fabs(*(float*)(a2 + 8) - *(float*)(v6 + 968)) <= *(float*)(v65 + 2132)))
		{
			++v67;
		}
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 128i64))(v6);
		if (v67 == (_DWORD)result)
		{
			*(_DWORD*)(a2 + 88) = 0;
			return result;
		}
	}
	if (*(_QWORD*)(a2 + 80))
	{
		v68 = *(_WORD*)(a2 + 110);
		if (!*(_QWORD*)(v6 + 1432))
			sub_14031A280(v6);
		v69 = v68;
		v70 = *(_QWORD*)(v6 + 416);
		v71 = v13;
		v71.m128_f32[0] = v13.m128_f32[0] * 0.5;
		v139 = *(unsigned __int16*)(v70 + 1272);
		v72 = (__m128*)(*(_QWORD*)(v6 + 1432) + 48i64 * (v69 & 0x1F));
		v140 = _mm_add_ps(
			*v72,
			_mm_mul_ps(
				_mm_add_ps(v72[1], _mm_mul_ps(v72[2], _mm_shuffle_ps(v71, v71, 0))),
				_mm_shuffle_ps(v13, v13, 0)));
		sub_140318840(*(float*)&v14, v6 + 1192, v6 + 1112, &v141, v139);
		v73 = v141 * *(float*)(a2 + 96);
		v74 = (__m128) * (unsigned int*)(a2 + 56);
		v75 = _mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 52), (__m128)0i64);
		v155[0] = (__int128)_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 32), (__m128) * (unsigned int*)(a2 + 40)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 36), (__m128)0i64));
		v76 = _mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 48), v74);
		v77 = (__m128) * (unsigned int*)(a2 + 72);
		v78 = _mm_unpacklo_ps(v76, v75);
		v79 = _mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 68), (__m128)0i64);
		v155[1] = (__int128)v78;
		v155[2] = (__int128)_mm_unpacklo_ps(_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 64), v77), v79);
		v155[3] = (__int128)_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)0i64, _mm_shuffle_ps((__m128)0i64, (__m128)0i64, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps((__m128)0i64, (__m128)0i64, 85), (__m128)0x3F800000u));
		if (*(_WORD*)(v70 + 2052))
		{
			if (*(_WORD*)(v70 + 2052) == 1)
			{
				*(_QWORD*)&v96 = v140.m128_u32[0];
				v97 = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)v140.m128_u32[0]));
				v98 = sub_1408FC950(v96);
				*(_QWORD*)&v99 = v140.m128_u32[1];
				v100 = v98;
				v101 = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)v140.m128_u32[1]));
				v102 = sub_1408FC950(v99);
				v103 = (__m128)v140.m128_u32[2];
				v104 = v102;
				v105 = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)v140.m128_u32[2]));
				v106 = sub_1408FC950(*(double*)v103.m128_u64);
				v157 = v73;
				v158 = v73;
				v159 = v73;
				v149[3] = 0;
				v149[7] = 0;
				v149[11] = 0;
				*(float*)&v149[9] = -v97;
				*(float*)v149 = (float)((float)(v101 * v97) * v105) + (float)(v106 * v104);
				*(float*)&v149[1] = v105 * v100;
				*(float*)&v149[2] = (float)((float)(v104 * v97) * v105) - (float)(v106 * v101);
				v107 = v103;
				*(float*)&v149[4] = (float)((float)(v101 * v97) * v103.m128_f32[0]) - (float)(v105 * v104);
				*(float*)&v149[6] = (float)((float)(v104 * v97) * v103.m128_f32[0]) + (float)(v105 * v101);
				v150 = xmmword_140C78440;
				v160[3] = xmmword_140C78440;
				*(float*)&v149[5] = v103.m128_f32[0] * v100;
				v107.m128_f32[0] = v73;
				*(float*)&v149[8] = v101 * v100;
				v108 = _mm_shuffle_ps(v107, v107, 0);
				*(float*)&v149[10] = v104 * v100;
				v109 = _mm_mul_ps((__m128)xmmword_140C78410, v108);
				v108.m128_f32[0] = v73;
				v110 = _mm_shuffle_ps(v108, v108, 0);
				v160[0] = (__int128)v109;
				v111 = _mm_mul_ps((__m128)xmmword_140C78420, v110);
				v110.m128_f32[0] = v73;
				v160[1] = (__int128)v111;
				v160[2] = (__int128)_mm_mul_ps((__m128)xmmword_140C78430, _mm_shuffle_ps(v110, v110, 0));
				v140.m128_u64[0] = (unsigned __int64)v160;
				v140.m128_u64[1] = (unsigned __int64)v149;
				v169[0] = (__m128*)v160;
				v169[1] = (__m128*)v149;
				sub_1401AFB10(v169, v170);
				v95 = v170;
			}
			else
			{
				if (*(_WORD*)(v70 + 2052) != 2)
				{
					v153[0] = *(__m128*)ymmword_140C78390.m256_f32;
					v153[1] = *(__m128*) & ymmword_140C78390.m256_f32[4];
					v153[2] = (__m128)xmmword_140C783B0;
					v154 = (__m128)xmmword_140C783C0;
				LABEL_85:
					v120 = *(_QWORD*)(a2 + 80);
					v154.m128_u64[0] = *(_QWORD*)a2;
					v154.m128_i32[2] = *(_DWORD*)(a2 + 8);
					(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)v120 + 72i64))(v120, v153);
					v121 = *(_QWORD*)(v6 + 40);
					v122 = *(float**)(a2 + 80);
					v123 = *(_DWORD*)(v121 + 1068);
					*(float*)&v124 = *(float*)(v121 + 1072) * v122[37];
					v140.m128_i32[0] = *(_DWORD*)(v121 + 1064);
					*(unsigned __int64*)((char*)v140.m128_u64 + 4) = __PAIR64__(v124, v123);
					(*(void(__fastcall**)(float*, __m128*))(*(_QWORD*)v122 + 240i64))(v122, &v140);
					v125 = *(unsigned __int16**)(v6 + 8);
					v126 = *((_DWORD*)v125 + 2);
					if (v126)
					{
						v127 = v126 - 1;
						if (v127)
						{
							if (v127 == 1)
								v128 = (__m128*)(*(_QWORD*)(*(_QWORD*)(v6 + 40) + 16i64) + 240i64);
							else
								v128 = (__m128*)v140.m128_u64[0];
						}
						else
						{
							v128 = (__m128*)(*(_QWORD*)(v6 + 40) + 1264i64);
						}
					}
					else
					{
						v128 = (__m128*)(*(_QWORD*)(*(_QWORD*)(v6 + 40) + 824i64) + ((unsigned __int64)*v125 << 6));
					}
					v129 = (int*)qword_140C63750;
					*(_DWORD*)(a2 + 104) = 1065353216;
					v130 = *v129;
					v131 = dword_140C42500;
					if (v130 < dword_140C42500)
						v131 = v130;
					if (byte_140C42510[v131])
					{
						if (*(float*)(*(_QWORD*)(*(_QWORD*)(v6 + 40) + 16i64) + 1468i64) != 0.0)
						{
							v132 = _mm_add_ps(
								_mm_add_ps(
									_mm_add_ps(
										_mm_mul_ps(_mm_shuffle_ps(v154, v154, 85), v128[1]),
										_mm_mul_ps(_mm_shuffle_ps(v154, v154, 0), *v128)),
									_mm_mul_ps(_mm_shuffle_ps(v154, v154, 170), v128[2])),
								v128[3]);
							v133 = _mm_mul_ps(v132, v132);
							v134 = (float)(v133.m128_f32[0] + _mm_shuffle_ps(v133, v133, 85).m128_f32[0])
								+ _mm_shuffle_ps(v133, v133, 170).m128_f32[0];
							if (v134 > *(float*)&dword_140C42068)
							{
								v135 = 1.0 / fsqrt(v134);
								v136 = (float)((float)((float)(*(float*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 80)
									+ 1160i64))(*(_QWORD*)(a2 + 80))
									+ 48)
									* *(float*)(v6 + 916))
									* 2.0)
									* *(float*)(*(_QWORD*)(*(_QWORD*)(v6 + 40) + 16i64) + 1444i64))
									* (float)((float)((float)((float)(v134 * v135) * v135) - 3.0) * (float)(v135 * -0.5));
								if (v136 > 0.037500001)
								{
									if (v136 <= 0.050000001)
										*(float*)(a2 + 104) = (float)(v136 * 80.0) - 3.0;
								}
								else
								{
									*(_DWORD*)(a2 + 104) = 0;
								}
							}
						}
					}
					result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 80) + 112i64))(*(_QWORD*)(a2 + 80));
					if (*(float*)(a2 + 104) != 0.0)
					{
						v137 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v6 + 40) + 16i64) + 236i64);
						v138 = *(_QWORD*)(a2 + 80);
						if ((*(_BYTE*)(v138 + 48) & 1) != 0)
							sub_140300FD0(v138, v128, *(_QWORD*)(v6 + 1048), v137);
						result = sub_140305C20(*(__m128**)(a2 + 80), v137);
					}
					goto LABEL_105;
				}
				*(_QWORD*)&v80 = v140.m128_u32[0];
				v81 = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)v140.m128_u32[0]));
				v82 = sub_1408FC950(v80);
				v83 = (__m128)v140.m128_u32[1];
				v84 = v82;
				v85 = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)v140.m128_u32[1]));
				v86 = v83;
				v86.m128_f32[0] = sub_1408FC950(*(double*)v83.m128_u64);
				v83.m128_u64[0] = v140.m128_u32[2];
				v87 = v86;
				v88 = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)v140.m128_u32[2]));
				v86.m128_f32[0] = sub_1408FC950(*(double*)v83.m128_u64);
				*(float*)&v151[8] = v85;
				v161 = v73;
				v162 = v73;
				v151[3] = 0;
				v151[7] = 0;
				v151[11] = 0;
				v163 = v73;
				*(float*)v151 = v86.m128_f32[0] * v87.m128_f32[0];
				*(float*)&v151[2] = (float)(v88 * v81) - (float)((float)(v85 * v84) * v86.m128_f32[0]);
				v152 = xmmword_140C78440;
				*(float*)&v151[1] = (float)((float)(v85 * v81) * v86.m128_f32[0]) + (float)(v88 * v84);
				*(float*)&v151[4] = -(float)(v88 * v87.m128_f32[0]);
				*(float*)&v151[5] = (float)(v86.m128_f32[0] * v84) - (float)((float)(v85 * v81) * v88);
				*(float*)&v151[6] = (float)((float)(v85 * v84) * v88) + (float)(v86.m128_f32[0] * v81);
				v89 = v87;
				v89.m128_f32[0] = v87.m128_f32[0] * v81;
				*(float*)&v151[10] = v87.m128_f32[0] * v84;
				v90 = _mm_xor_ps(v89, (__m128)xmmword_140B7B530);
				v151[9] = v90.m128_i32[0];
				v90.m128_f32[0] = v73;
				v91 = _mm_shuffle_ps(v90, v90, 0);
				v92 = _mm_mul_ps((__m128)xmmword_140C78410, v91);
				v91.m128_f32[0] = v73;
				v93 = _mm_shuffle_ps(v91, v91, 0);
				v164[0] = (__int128)v92;
				v94 = _mm_mul_ps((__m128)xmmword_140C78420, v93);
				v93.m128_f32[0] = v73;
				v164[1] = (__int128)v94;
				v140.m128_u64[0] = (unsigned __int64)v164;
				v164[3] = xmmword_140C78440;
				v164[2] = (__int128)_mm_mul_ps((__m128)xmmword_140C78430, _mm_shuffle_ps(v93, v93, 0));
				v173[0] = (__m128*)v164;
				v140.m128_u64[1] = (unsigned __int64)v151;
				v173[1] = (__m128*)v151;
				sub_1401AFB10(v173, v174);
				v95 = v174;
			}
		}
		else
		{
			sub_1408FE3D0(0.0);
			sub_1408FC950(0.0);
			*(_QWORD*)&v112 = v140.m128_u32[2];
			v113 = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)v140.m128_u32[2]));
			v114 = sub_1408FC950(v112);
			v165 = v73;
			v166 = v73;
			v140.m128_u64[0] = (unsigned __int64)v168;
			v147[3] = 0;
			v167 = v73;
			v140.m128_u64[1] = (unsigned __int64)v147;
			v147[7] = 0;
			v147[11] = 0;
			*(float*)v147 = (float)((float)(0.0 * 0.0) * v113) + (float)(v114 * 0.0);
			*(float*)&v147[1] = v113 * 0.0;
			*(float*)&v147[2] = (float)((float)(0.0 * 0.0) * v113) - (float)(v114 * 0.0);
			*(float*)&v147[5] = *(float*)&v112 * 0.0;
			*(float*)&v147[4] = (float)((float)(0.0 * 0.0) * *(float*)&v112) - (float)(v113 * 0.0);
			*(float*)&v147[6] = (float)((float)(0.0 * 0.0) * *(float*)&v112) + (float)(v113 * 0.0);
			v115 = 0i64;
			v148 = xmmword_140C78440;
			v168[3] = xmmword_140C78440;
			*(float*)&v147[9] = -0.0;
			*(float*)&v147[8] = 0.0 * 0.0;
			v115.m128_f32[0] = v73;
			*(float*)&v147[10] = 0.0 * 0.0;
			v116 = _mm_shuffle_ps(v115, v115, 0);
			v117 = _mm_mul_ps((__m128)xmmword_140C78410, v116);
			v116.m128_f32[0] = v73;
			v118 = _mm_shuffle_ps(v116, v116, 0);
			v168[0] = (__int128)v117;
			v119 = _mm_mul_ps((__m128)xmmword_140C78420, v118);
			v118.m128_f32[0] = v73;
			v168[1] = (__int128)v119;
			v171[0] = (__m128*)v168;
			v168[2] = (__int128)_mm_mul_ps((__m128)xmmword_140C78430, _mm_shuffle_ps(v118, v118, 0));
			v171[1] = (__m128*)v147;
			sub_1401AFB10(v171, v172);
			v95 = v172;
		}
		v140.m128_u64[0] = (unsigned __int64)v95;
		v140.m128_u64[1] = (unsigned __int64)v155;
		v156[0] = v95;
		v156[1] = (__m128*)v155;
		sub_1401AFB10(v156, v153);
		goto LABEL_85;
	}
LABEL_105:
	*(_DWORD*)(a2 + 88) -= v8;
	return result;
}
// 14031BDA3: conditional instruction was optimized away because al.1==0
// 14031BE43: variable 'v5' is possibly undefined
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C42068: using guessed type int dword_140C42068;
// 140C42500: using guessed type int dword_140C42500;
// 140C42510: using guessed type _BYTE byte_140C42510[32];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 14031BCA0: using guessed type __m128 var_130[4];
// 14031BCA0: using guessed type __m128 var_1D0[4];
// 14031BCA0: using guessed type __m128 var_180[4];

