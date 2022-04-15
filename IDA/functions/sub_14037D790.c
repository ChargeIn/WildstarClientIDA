//----- (000000014037D790) ----------------------------------------------------
__int64 __fastcall sub_14037D790(__int64 a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	float* v4; // r10
	float v5; // xmm1_4
	float v6; // xmm2_4
	__int64 v7; // r11
	__int64 v8; // r9
	float* v9; // rcx
	__int64 v10; // rdx
	__int64 v11; // r8
	__int16 v12; // ax
	float* v13; // rcx
	__int16* v14; // rdx
	__int64 v15; // r8
	__int16 v16; // ax
	char* v17; // rdi
	char* v18; // rax
	__int64 v19; // rsi
	char* v20; // r9
	char* v21; // r10
	float* v22; // rdx
	float* v23; // r11
	signed __int64 v24; // r8
	__int64 v25; // rax
	float v26; // xmm0_4
	float v27; // xmm1_4
	float v28; // xmm4_4
	float v29; // xmm7_4
	float v30; // xmm6_4
	float v31; // xmm0_4
	float v32; // xmm1_4
	float v33; // xmm2_4
	float v34; // xmm7_4
	float v35; // xmm0_4
	float v36; // xmm6_4
	float v37; // xmm0_4
	float v38; // xmm1_4
	float v39; // xmm4_4
	float v40; // xmm2_4
	float v41; // xmm7_4
	float v42; // xmm6_4
	float v43; // xmm0_4
	float v44; // xmm1_4
	float v45; // xmm2_4
	float v46; // xmm7_4
	float v47; // xmm0_4
	float v48; // xmm6_4
	float v49; // xmm0_4
	float v50; // xmm1_4
	float v51; // xmm2_4
	float v52; // xmm7_4
	float v53; // xmm0_4
	float v54; // xmm6_4
	float v55; // xmm0_4
	float v56; // xmm1_4
	float v57; // xmm7_4
	float v58; // xmm0_4
	float v59; // xmm6_4
	float v60; // xmm0_4
	float v61; // xmm1_4
	float v62; // xmm4_4
	float v63; // xmm2_4
	float v64; // xmm7_4
	float v65; // xmm6_4
	float v66; // xmm0_4
	float v67; // xmm6_4
	float v68; // xmm0_4
	float v69; // xmm1_4
	float v70; // xmm2_4
	float v71; // xmm7_4
	float v72; // xmm0_4
	float v73; // xmm6_4
	float v74; // xmm0_4
	float v75; // xmm1_4
	__int64 v76; // r8
	char* v77; // r11
	__int64 v78; // rbp
	__m128 v79; // xmm5
	float* v80; // rdx
	__int64 v81; // r10
	signed __int64 v82; // r9
	__m128 v83; // xmm3
	float v84; // xmm0_4
	__m128 v85; // xmm2
	__m128 v86; // xmm4
	__m128 v87; // xmm2
	__m128i v88; // xmm2
	__int64 v89; // rdx
	__int64 v90; // r9
	__int64 v91; // r8
	__int64 v92; // rcx
	float v93; // xmm1_4
	float v94; // xmm0_4
	__m128 v95; // xmm2
	__m128 v96; // xmm3
	float v97; // xmm5_4
	__m128 v98; // xmm0
	__m128 v99; // xmm4
	__m128 v100; // xmm3
	__m128 v101; // xmm2
	__m128i v102; // xmm2
	__int64 result; // rax
	__m128 v104; // xmm3
	__m128 v105; // xmm2
	__m128 v106; // xmm2
	float v107; // xmm9_4
	__m128 v108; // xmm3
	__m128 v109; // xmm2
	__m128 v110; // xmm2
	__m128 v111; // xmm3
	__m128 v112; // xmm0
	__m128 v113; // xmm2
	__m128 v114; // xmm2
	__int64 v115; // [rsp+B0h] [rbp+8h]
	__int64 v116; // [rsp+B8h] [rbp+10h] BYREF
	unsigned __int64 v117; // [rsp+C0h] [rbp+18h]

	(*(void(__fastcall**)(_QWORD, _QWORD, __int64*, __int64))(**(_QWORD**)(a1 + 16) + 72i64))(
		*(_QWORD*)(a1 + 16),
		0i64,
		&v116,
		1i64);
	v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v116 + 16i64))(v116);
	v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v116 + 24i64))(v116);
	v4 = (float*)&unk_140DC16B0;
	v5 = *(float*)&dword_140C41B9C;
	v6 = *(float*)&dword_140C41B94;
	v7 = 19i64;
	v8 = v3 - *(int*)(v2 + 40) - *(int*)(v2 + 44);
	do
	{
		v9 = v4 - 14;
		v10 = v8 + 4;
		v11 = 2i64;
		do
		{
			v12 = *(_WORD*)(v10 - 4);
			v9 += 8;
			v10 += 16i64;
			*(v9 - 10) = (float)((float)(v12 & 0x7FFF) * v5) - v6;
			*(v9 - 9) = (float)((float)(*(_WORD*)(v10 - 18) & 0x7FFF) * v5) - v6;
			*(v9 - 8) = (float)((float)(*(_WORD*)(v10 - 16) & 0x7FFF) * v5) - v6;
			*(v9 - 7) = (float)((float)(*(_WORD*)(v10 - 14) & 0x7FFF) * v5) - v6;
			*(v9 - 6) = (float)((float)(*(_WORD*)(v10 - 12) & 0x7FFF) * v5) - v6;
			*(v9 - 5) = (float)((float)(*(_WORD*)(v10 - 10) & 0x7FFF) * v5) - v6;
			*(v9 - 4) = (float)((float)(*(_WORD*)(v10 - 8) & 0x7FFF) * v5) - v6;
			*(v9 - 3) = (float)((float)(*(_WORD*)(v10 - 6) & 0x7FFF) * v5) - v6;
			--v11;
		} while (v11);
		v13 = v4;
		v14 = (__int16*)(v8 + 32);
		v15 = 3i64;
		do
		{
			v16 = *v14;
			++v13;
			++v14;
			*(v13 - 1) = (float)((float)(v16 & 0x7FFF) * v5) - v6;
			--v15;
		} while (v15);
		v4 += 19;
		v8 += *(int*)(v2 + 44);
		--v7;
	} while (v7);
	v17 = (char*)&unk_140DC1C20;
	v18 = (char*)&unk_140DC1670;
	v19 = 18i64;
	v20 = (char*)&unk_140DC1C20;
	do
	{
		v21 = v18 + 76;
		v22 = (float*)(v18 + 4);
		v23 = (float*)(v18 + 4);
		v24 = v20 - v18;
		v25 = 2i64;
		do
		{
			v26 = *(v22 - 1);
			v27 = *v23 - v22[18];
			v28 = 1.0 / (float)((float)((float)(v26 - v23[19]) * (float)(v26 - v23[19])) + 1.0);
			v29 = (float)((float)((float)(*v23 + v22[18]) * (float)(1.0 / (float)((float)(v27 * v27) + 1.0)))
				+ (float)((float)(v26 + v23[19]) * v28))
				* (float)(0.5 / (float)((float)(1.0 / (float)((float)(v27 * v27) + 1.0)) + v28));
			v30 = *v22 + v23[20];
			v31 = *v22 - v23[20];
			*(float*)((char*)v22 + v24 - 4) = v29;
			v32 = v23[1];
			v33 = 1.0 / (float)((float)((float)(v32 - v22[19]) * (float)(v32 - v22[19])) + 1.0);
			v34 = (float)((float)((float)(v32 + v22[19]) * v33)
				+ (float)(v30 * (float)(1.0 / (float)((float)(v31 * v31) + 1.0))))
				* (float)(0.5 / (float)(v33 + (float)(1.0 / (float)((float)(v31 * v31) + 1.0))));
			v35 = v22[1];
			v36 = v35 + v23[21];
			v37 = v35 - v23[21];
			*(float*)((char*)v22 + v24) = v34;
			v38 = v23[2];
			v39 = 1.0 / (float)((float)(v37 * v37) + 1.0);
			v40 = 1.0 / (float)((float)((float)(v38 - v22[20]) * (float)(v38 - v22[20])) + 1.0);
			v41 = (float)((float)(v38 + v22[20]) * v40) + (float)(v36 * v39);
			v42 = v22[2];
			v43 = v42 - v23[22];
			*(float*)((char*)v22 + v24 + 4) = v41 * (float)(0.5 / (float)(v40 + v39));
			v44 = v23[3];
			v45 = 1.0 / (float)((float)((float)(v44 - v22[21]) * (float)(v44 - v22[21])) + 1.0);
			v46 = (float)((float)((float)(v44 + v22[21]) * v45)
				+ (float)((float)(v42 + v23[22]) * (float)(1.0 / (float)((float)(v43 * v43) + 1.0))))
				* (float)(0.5 / (float)(v45 + (float)(1.0 / (float)((float)(v43 * v43) + 1.0))));
			v47 = v22[3];
			v48 = v47 + v23[23];
			v49 = v47 - v23[23];
			*(float*)((char*)v22 + v24 + 8) = v46;
			v50 = v23[4];
			v51 = 1.0 / (float)((float)((float)(v50 - v22[22]) * (float)(v50 - v22[22])) + 1.0);
			v52 = (float)((float)((float)(v50 + v22[22]) * v51)
				+ (float)(v48 * (float)(1.0 / (float)((float)(v49 * v49) + 1.0))))
				* (float)(0.5 / (float)(v51 + (float)(1.0 / (float)((float)(v49 * v49) + 1.0))));
			v53 = v22[4];
			v54 = v53 + v23[24];
			v55 = v53 - v23[24];
			*(float*)((char*)v22 + v24 + 12) = v52;
			v56 = v23[5] - v22[23];
			v57 = (float)((float)((float)(v23[5] + v22[23]) * (float)(1.0 / (float)((float)(v56 * v56) + 1.0)))
				+ (float)(v54 * (float)(1.0 / (float)((float)(v55 * v55) + 1.0))))
				* (float)(0.5
					/ (float)((float)(1.0 / (float)((float)(v56 * v56) + 1.0))
						+ (float)(1.0 / (float)((float)(v55 * v55) + 1.0))));
			v58 = v22[5];
			v59 = v58 + v23[25];
			v60 = v58 - v23[25];
			*(float*)((char*)v22 + v24 + 16) = v57;
			v61 = v23[6] - v22[24];
			v62 = 1.0 / (float)((float)(v60 * v60) + 1.0);
			v63 = 1.0 / (float)((float)(v61 * v61) + 1.0);
			v64 = (float)((float)(v23[6] + v22[24]) * v63) + (float)(v59 * v62);
			v65 = v22[6];
			v22 += 9;
			v23 += 9;
			v66 = v65;
			v67 = v65 + v23[17];
			v68 = v66 - v23[17];
			*(float*)((char*)v22 + v24 - 16) = v64 * (float)(0.5 / (float)(v63 + v62));
			v69 = *(v23 - 2);
			v70 = 1.0 / (float)((float)((float)(v69 - v22[16]) * (float)(v69 - v22[16])) + 1.0);
			v71 = (float)((float)((float)(v69 + v22[16]) * v70)
				+ (float)(v67 * (float)(1.0 / (float)((float)(v68 * v68) + 1.0))))
				* (float)(0.5 / (float)(v70 + (float)(1.0 / (float)((float)(v68 * v68) + 1.0))));
			v72 = *(v22 - 2);
			v73 = v72 + v23[18];
			v74 = v72 - v23[18];
			*(float*)((char*)v22 + v24 - 12) = v71;
			v75 = (float)((float)(*(v23 - 1) - v22[17]) * (float)(*(v23 - 1) - v22[17])) + 1.0;
			*(float*)((char*)v22 + v24 - 8) = (float)((float)((float)(*(v23 - 1) + v22[17]) * (float)(1.0 / v75))
				+ (float)(v73 * (float)(1.0 / (float)((float)(v74 * v74) + 1.0))))
				* (float)(0.5
					/ (float)((float)(1.0 / v75)
						+ (float)(1.0 / (float)((float)(v74 * v74) + 1.0))));
			--v25;
		} while (v25);
		v20 += 72;
		v18 = v21;
		--v19;
	} while (v19);
	if (!*(_QWORD*)(a1 + 152))
		*(_QWORD*)(a1 + 152) = sub_14018B280(8720i64, 0);
	v76 = *(_QWORD*)(a1 + 152);
	v77 = (char*)&unk_140DC16C0;
	v78 = 17i64;
	v79 = (__m128)(unsigned int)dword_140C44574;
	v115 = qword_140C79888;
	do
	{
		v80 = (float*)(v17 + 72);
		v81 = 17i64;
		v82 = v77 - v17;
		do
		{
			v83 = (__m128) * ((unsigned int*)v80 + 1);
			v76 += 16i64;
			v83.m128_f32[0] = v83.m128_f32[0] + *(++v80 - 18);
			v117 = __PAIR64__(
				COERCE_UNSIGNED_INT(fmaxf(*((float*)&v115 + 1), *(float*)((char*)v80 + v82 - 76))),
				COERCE_UNSIGNED_INT(fminf(*(float*)&v115, *(float*)((char*)v80 + v82 - 76))));
			v115 = v117;
			v84 = *(v80 - 1) + *(v80 - 19);
			*(_DWORD*)(v76 - 12) = v79.m128_i32[0];
			v83.m128_f32[0] = (float)(v83.m128_f32[0] - v84) * -0.5;
			*(_DWORD*)(v76 - 16) = v83.m128_i32[0];
			v85 = (__m128) * (unsigned int*)v80;
			v85.m128_f32[0] = (float)((float)(v85.m128_f32[0] + *(v80 - 1)) - (float)(*(v80 - 18) + *(v80 - 19))) * -0.5;
			*(_DWORD*)(v76 - 8) = v85.m128_i32[0];
			*(float*)(v76 - 4) = *(float*)((char*)v80 + v82 - 76);
			v86 = _mm_unpacklo_ps(_mm_unpacklo_ps(v83, v85), _mm_unpacklo_ps(v79, (__m128)0i64));
			v87 = _mm_mul_ps(v86, v86);
			v87.m128_f32[0] = 1.0
				/ fsqrt(
					(float)(v87.m128_f32[0] + _mm_shuffle_ps(v87, v87, 85).m128_f32[0])
					+ _mm_shuffle_ps(v87, v87, 170).m128_f32[0]);
			v88 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v87, v87, 0), v86);
			*(_DWORD*)(v76 - 16) = _mm_cvtsi128_si32(v88);
			*(_DWORD*)(v76 - 12) = _mm_cvtsi128_si32(_mm_srli_si128(v88, 4));
			*(_DWORD*)(v76 - 8) = _mm_cvtsi128_si32(_mm_srli_si128(v88, 8));
			--v81;
		} while (v81);
		v76 += 256i64;
		v77 += 76;
		v17 += 72;
		--v78;
	} while (v78);
	v89 = *(_QWORD*)(a1 + 152);
	v90 = 16i64;
	do
	{
		v89 += 272i64;
		v91 = 16i64;
		v92 = v89 + 284;
		do
		{
			v93 = *(float*)(v92 - 528);
			v94 = *(float*)(v92 - 544);
			v95 = (__m128)0x3F800000u;
			v96 = (__m128)0x3F000000u;
			v89 += 16i64;
			v92 += 16i64;
			v95.m128_f32[0] = 1.0
				/ (float)((float)((float)(v93 - *(float*)(v92 - 32)) * (float)(v93 - *(float*)(v92 - 32))) + 1.0);
			v97 = 1.0 / (float)((float)((float)(v94 - *(float*)(v92 - 16)) * (float)(v94 - *(float*)(v92 - 16))) + 1.0);
			v98 = v95;
			v96.m128_f32[0] = 0.5 / (float)(v95.m128_f32[0] + v97);
			v99 = v96;
			v99.m128_f32[0] = v96.m128_f32[0] * v95.m128_f32[0];
			v98.m128_f32[0] = v96.m128_f32[0] * v97;
			*(__m128*)(v89 - 16) = _mm_add_ps(
				_mm_mul_ps(
					_mm_shuffle_ps(v99, v99, 0),
					_mm_add_ps(*(__m128*)(v92 - 556), *(__m128*)(v92 - 44))),
				_mm_mul_ps(
					_mm_shuffle_ps(v98, v98, 0),
					_mm_add_ps(*(__m128*)(v92 - 572), *(__m128*)(v92 - 28))));
			v100 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128) * (unsigned int*)(v89 - 16), (__m128) * (unsigned int*)(v92 - 292)),
				_mm_unpacklo_ps((__m128) * (unsigned int*)(v92 - 296), (__m128)0i64));
			v101 = _mm_mul_ps(v100, v100);
			v101.m128_f32[0] = 1.0
				/ fsqrt(
					(float)(v101.m128_f32[0] + _mm_shuffle_ps(v101, v101, 85).m128_f32[0])
					+ _mm_shuffle_ps(v101, v101, 170).m128_f32[0]);
			v102 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v101, v101, 0), v100);
			*(_DWORD*)(v89 - 16) = _mm_cvtsi128_si32(v102);
			*(_DWORD*)(v89 - 12) = _mm_cvtsi128_si32(_mm_srli_si128(v102, 4));
			*(_DWORD*)(v89 - 8) = _mm_cvtsi128_si32(_mm_srli_si128(v102, 8));
			--v91;
		} while (v91);
		--v90;
	} while (v90);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v116 + 8i64))(v116);
	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 40i64))(*(_QWORD*)(a1 + 16));
	*(_OWORD*)(a1 + 192) = *(_OWORD*)(result + 32);
	*(_OWORD*)(a1 + 208) = *(_OWORD*)(result + 48);
	*(_DWORD*)(a1 + 212) = HIDWORD(v115);
	*(_DWORD*)(a1 + 196) = v115;
	v104 = *(__m128*)(a1 + 192);
	v105 = _mm_sub_ps(*(__m128*)(a1 + 208), v104);
	v106 = _mm_mul_ps(v105, v105);
	*(__m128*)(a1 + 224) = _mm_mul_ps(_mm_add_ps(v104, *(__m128*)(a1 + 208)), (__m128)xmmword_140B7AC50);
	*(float*)(a1 + 240) = fsqrt(
		(float)(v106.m128_f32[0] + _mm_shuffle_ps(v106, v106, 85).m128_f32[0])
		+ _mm_shuffle_ps(v106, v106, 170).m128_f32[0])
		* 0.5;
	*(_OWORD*)(a1 + 256) = *(_OWORD*)(a1 + 192);
	*(_OWORD*)(a1 + 272) = *(_OWORD*)(a1 + 208);
	v107 = fmaxf(*(float*)(a1 + 212), *(float*)(a1 + 1024));
	*(float*)(a1 + 260) = fminf(*(float*)(a1 + 196), *(float*)(a1 + 1020));
	*(float*)(a1 + 276) = v107;
	v108 = *(__m128*)(a1 + 256);
	v109 = _mm_sub_ps(*(__m128*)(a1 + 272), v108);
	v110 = _mm_mul_ps(v109, v109);
	*(__m128*)(a1 + 288) = _mm_mul_ps(_mm_add_ps(v108, *(__m128*)(a1 + 272)), (__m128)xmmword_140B7AC50);
	*(float*)(a1 + 304) = fsqrt(
		(float)(v110.m128_f32[0] + _mm_shuffle_ps(v110, v110, 85).m128_f32[0])
		+ _mm_shuffle_ps(v110, v110, 170).m128_f32[0])
		* 0.5;
	*(_OWORD*)(a1 + 800) = *(_OWORD*)(a1 + 192);
	*(_OWORD*)(a1 + 816) = *(_OWORD*)(a1 + 208);
	*(__m128*)(a1 + 800) = _mm_sub_ps(*(__m128*)(a1 + 800), (__m128)xmmword_140B7B240);
	v111 = _mm_add_ps(*(__m128*)(a1 + 816), (__m128)xmmword_140B7B240);
	*(__m128*)(a1 + 816) = v111;
	v112 = *(__m128*)(a1 + 800);
	v113 = _mm_sub_ps(v111, v112);
	v114 = _mm_mul_ps(v113, v113);
	*(__m128*)(a1 + 832) = _mm_mul_ps(_mm_add_ps(v111, v112), (__m128)xmmword_140B7AC50);
	*(float*)(a1 + 848) = fsqrt(
		(float)(v114.m128_f32[0] + _mm_shuffle_ps(v114, v114, 85).m128_f32[0])
		+ _mm_shuffle_ps(v114, v114, 170).m128_f32[0])
		* 0.5;
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C41B94: using guessed type int dword_140C41B94;
// 140C41B9C: using guessed type int dword_140C41B9C;
// 140C44574: using guessed type int dword_140C44574;
// 140C79888: using guessed type __int64 qword_140C79888;

