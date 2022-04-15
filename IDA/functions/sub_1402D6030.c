#include "../winhttp.h"

//----- (00000001402D6030) ----------------------------------------------------
__m128* __fastcall sub_1402D6030(__int64 a1, unsigned __int64 a2)
{
	__int64 v4; // rax
	__m128* v5; // r10
	__int32 v6; // eax
	__int32 v7; // eax
	__int64 v8; // r8
	__int32 v9; // eax
	float v10; // xmm1_4
	__int64 v11; // rdx
	float v12; // xmm0_4
	__int64 v13; // r8
	float v14; // xmm1_4
	__int64 v15; // rdx
	float v16; // xmm0_4
	__int64 v17; // r8
	__m128 v18; // xmm1
	bool v19; // cc
	float v20; // xmm1_4
	__int64 v21; // rdx
	__m128 v22; // xmm0
	__m128 v23; // xmm1
	__m128 v24; // xmm4
	__m128 v25; // xmm6
	__m128 v26; // xmm4
	__m128 v27; // xmm0
	__m128 v28; // xmm2
	__m128 v29; // xmm0
	__m128 v30; // xmm3
	__m128 v31; // xmm6
	__m128 v32; // xmm2
	__m128* result; // rax
	__m128 v34; // xmm3
	__m128 v35; // xmm0
	float v36; // xmm4_4
	float v37; // xmm3_4
	float v38; // xmm0_4
	float v39; // xmm1_4
	float v40; // xmm6_4
	float v41; // xmm0_4
	float v42; // xmm3_4
	float v43; // xmm2_4
	float v44; // xmm0_4
	float v45; // xmm1_4
	float v46; // xmm3_4
	float v47; // xmm1_4
	float v48; // xmm2_4
	float v49; // xmm2_4
	float v50; // xmm0_4
	float v51; // xmm3_4
	float v52; // xmm0_4
	float v53; // xmm1_4
	float v54; // xmm11_4
	float v55; // xmm0_4
	float v56; // xmm3_4
	float v57; // xmm2_4
	float v58; // xmm0_4
	float v59; // xmm1_4
	float v60; // xmm1_4
	float v61; // xmm0_4
	float v62; // xmm11_4
	float v63; // xmm3_4
	float v64; // xmm2_4
	float v65; // xmm0_4
	float v66; // xmm1_4
	float v67; // xmm2_4
	float v68; // xmm0_4
	float v69; // xmm4_4
	float v70; // xmm5_4
	float v71; // xmm1_4
	float v72; // xmm2_4
	float v73; // xmm3_4
	float v74; // xmm0_4
	float v75; // xmm3_4
	float v76; // xmm2_4
	float v77; // xmm3_4
	float v78; // xmm1_4
	float v79; // xmm0_4
	float v80; // xmm3_4
	__m128 v81; // xmm1
	__m128* v82; // r10
	__int64 v83; // r11
	__int64 v84; // r8
	__int32 v85; // xmm0_4
	__int32 v86; // xmm0_4
	float v87; // xmm1_4
	__int64 v88; // rdx
	__m128 v89; // xmm2
	__int64 v90; // r8
	float v91; // xmm1_4
	__int64 v92; // rdx
	float v93; // xmm0_4
	float v94; // xmm2_4
	__int64 v95; // rbx
	float v96; // xmm0_4
	__int64 v97; // rax
	__m128 v98; // xmm6
	__int64 v99; // rcx
	__m128 v100; // xmm7
	__m128* v101; // rax
	__m128 v102; // xmm1
	__m128 v103; // xmm2
	__m128 v104; // xmm7
	__int64 v105; // rax
	__m128 v106; // xmm3
	__m128 v107; // xmm4
	float v108; // xmm0_4
	__m128 v109; // xmm5
	__m128 v110; // xmm2
	__m128 v111; // [rsp+28h] [rbp-E0h] BYREF
	__m128 v112; // [rsp+38h] [rbp-D0h] BYREF
	__m128 v113; // [rsp+48h] [rbp-C0h] BYREF
	__m128 v114; // [rsp+58h] [rbp-B0h]
	__m128 v115[2]; // [rsp+68h] [rbp-A0h]
	int v116[16]; // [rsp+88h] [rbp-80h] BYREF
	__m256 v117; // [rsp+C8h] [rbp-40h] BYREF
	__int128 v118; // [rsp+E8h] [rbp-20h]
	float v119; // [rsp+F8h] [rbp-10h]
	float v120; // [rsp+FCh] [rbp-Ch]
	__int64 v121; // [rsp+100h] [rbp-8h]
	__m128 v122; // [rsp+108h] [rbp+0h] BYREF
	__m128 v123; // [rsp+118h] [rbp+10h]
	__m128 v124; // [rsp+128h] [rbp+20h]
	__int128 v125; // [rsp+138h] [rbp+30h]
	__m128* v126; // [rsp+158h] [rbp+50h] BYREF
	int* v127; // [rsp+160h] [rbp+58h]

	v4 = sub_1402CF690((__int64)&v117, *(_QWORD*)(a1 + 16) + 16i64);
	v113.m128_u64[1] = a2;
	v122.m128_u64[1] = a2;
	v113.m128_u64[0] = v4;
	v122.m128_u64[0] = v4;
	sub_1401AFB10((__m128**) & v122, (__m128*)(a1 + 112));
	*(_DWORD*)(a1 + 176) = v5->m128_i32[0];
	*(_DWORD*)(a1 + 180) = v5[1].m128_i32[0];
	v6 = v5[2].m128_i32[0];
	*(_DWORD*)(a1 + 188) = 0;
	*(_DWORD*)(a1 + 184) = v6;
	*(_DWORD*)(a1 + 192) = v5->m128_i32[1];
	*(_DWORD*)(a1 + 196) = v5[1].m128_i32[1];
	v7 = v5[2].m128_i32[1];
	*(_DWORD*)(a1 + 204) = 0;
	*(_DWORD*)(a1 + 200) = v7;
	v8 = 0i64;
	*(_DWORD*)(a1 + 208) = v5->m128_i32[2];
	*(_DWORD*)(a1 + 212) = v5[1].m128_i32[2];
	v9 = v5[2].m128_i32[2];
	*(_DWORD*)(a1 + 220) = 0;
	*(_DWORD*)(a1 + 216) = v9;
	v113 = _mm_mul_ps(*v5, v5[3]);
	LODWORD(v10) = _mm_shuffle_ps(v113, v113, 170).m128_u32[0];
	if (_mm_shuffle_ps(v113, v113, 85).m128_f32[0] > v113.m128_f32[0])
		v8 = 1i64;
	v11 = 1 - v8;
	if (v10 > v113.m128_f32[v8])
		v8 = 2i64;
	v12 = (float)(v113.m128_f32[-v11 + 3 - v8] + v113.m128_f32[v11]) + v113.m128_f32[v8];
	v13 = 0i64;
	*(float*)(a1 + 224) = -v12;
	v113 = _mm_mul_ps(v5[3], v5[1]);
	LODWORD(v14) = _mm_shuffle_ps(v113, v113, 170).m128_u32[0];
	if (_mm_shuffle_ps(v113, v113, 85).m128_f32[0] > v113.m128_f32[0])
		v13 = 1i64;
	v15 = 1 - v13;
	if (v14 > v113.m128_f32[v13])
		v13 = 2i64;
	v16 = (float)(v113.m128_f32[-v15 + 3 - v13] + v113.m128_f32[v15]) + v113.m128_f32[v13];
	v17 = 0i64;
	*(float*)(a1 + 228) = -v16;
	v18 = _mm_mul_ps(v5[3], v5[2]);
	*(_DWORD*)(a1 + 236) = 1065353216;
	v113 = v18;
	v19 = _mm_shuffle_ps(v18, v18, 85).m128_f32[0] <= v18.m128_f32[0];
	LODWORD(v20) = _mm_shuffle_ps(v18, v18, 170).m128_u32[0];
	if (!v19)
		v17 = 1i64;
	v21 = 1 - v17;
	if (v20 > v113.m128_f32[v17])
		v17 = 2i64;
	*(float*)(a1 + 232) = -(float)((float)(v113.m128_f32[-v21 + 3 - v17] + v113.m128_f32[v21]) + v113.m128_f32[v17]);
	v22 = *(__m128*)(a1 + 192);
	v23 = *(__m128*)(a1 + 224);
	v24 = *(__m128*)(a1 + 176);
	v25 = _mm_unpackhi_ps(v24, v22);
	v26 = _mm_unpacklo_ps(v24, v22);
	v27 = *(__m128*)(a1 + 208);
	v28 = _mm_unpackhi_ps(v27, v23);
	v29 = _mm_unpacklo_ps(v27, v23);
	v30 = _mm_shuffle_ps(v25, v28, 68);
	v31 = _mm_shuffle_ps(v25, v28, 238);
	v32 = *(__m128*)(*(_QWORD*)(a1 + 16) + 128i64);
	*(__m128*)(a1 + 64) = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v32, v32, 85), _mm_shuffle_ps(v26, v29, 238)),
				_mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), _mm_shuffle_ps(v26, v29, 68))),
			_mm_mul_ps(_mm_shuffle_ps(v32, v32, 170), v30)),
		_mm_mul_ps(_mm_shuffle_ps(v32, v32, 255), v31));
	result = *(__m128**)(a1 + 16);
	v34 = (__m128)v5[3].m128_u32[0];
	v35 = _mm_sub_ps(result[6], (__m128)xmmword_140B7AB90);
	v114 = _mm_add_ps(result[7], (__m128)xmmword_140B7AB90);
	v113 = v35;
	v36 = v35.m128_f32[0];
	v112 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v34, (__m128)v5[3].m128_u32[2]),
		_mm_unpacklo_ps((__m128)v5[3].m128_u32[1], (__m128)0i64));
	v111 = v112;
	v37 = v5->m128_f32[0];
	if (v5->m128_f32[0] <= 0.0)
	{
		v38 = v114.m128_f32[0];
		v39 = v113.m128_f32[0];
	}
	else
	{
		v38 = v113.m128_f32[0];
		v39 = v114.m128_f32[0];
	}
	v40 = v5[1].m128_f32[0];
	v41 = v38 * v37;
	v42 = v111.m128_f32[0] + (float)(v39 * v37);
	v43 = v112.m128_f32[0] + v41;
	if (v40 <= 0.0)
	{
		v44 = v114.m128_f32[1];
		v45 = v113.m128_f32[1];
	}
	else
	{
		v44 = v113.m128_f32[1];
		v45 = v114.m128_f32[1];
	}
	v46 = v42 + (float)(v45 * v40);
	v47 = v5[2].m128_f32[0];
	v48 = v43 + (float)(v44 * v40);
	if (v47 <= 0.0)
	{
		v49 = v48 + (float)(v114.m128_f32[2] * v47);
		v50 = v113.m128_f32[2];
	}
	else
	{
		v49 = v48 + (float)(v113.m128_f32[2] * v47);
		v50 = v114.m128_f32[2];
	}
	v112.m128_f32[0] = v49;
	v111.m128_f32[0] = v46 + (float)(v50 * v47);
	v51 = v5->m128_f32[1];
	if (v51 <= 0.0)
	{
		v52 = v114.m128_f32[0];
		v53 = v113.m128_f32[0];
	}
	else
	{
		v52 = v113.m128_f32[0];
		v53 = v114.m128_f32[0];
	}
	v54 = v5[1].m128_f32[1];
	v55 = v52 * v51;
	v56 = v111.m128_f32[1] + (float)(v53 * v51);
	v57 = v112.m128_f32[1] + v55;
	if (v54 <= 0.0)
	{
		v58 = v114.m128_f32[1];
		v59 = v113.m128_f32[1];
	}
	else
	{
		v58 = v113.m128_f32[1];
		v59 = v114.m128_f32[1];
	}
	v60 = v59 * v54;
	v61 = v58 * v54;
	v62 = v5[2].m128_f32[1];
	v63 = v56 + v60;
	v64 = v57 + v61;
	if (v62 <= 0.0)
	{
		v65 = v114.m128_f32[2];
		v66 = v113.m128_f32[2];
	}
	else
	{
		v65 = v113.m128_f32[2];
		v66 = v114.m128_f32[2];
	}
	v67 = v64 + (float)(v65 * v62);
	v68 = v5->m128_f32[2];
	v69 = v36 * v68;
	v70 = v114.m128_f32[0] * v68;
	v112.m128_f32[1] = v67;
	v111.m128_f32[1] = v63 + (float)(v66 * v62);
	if (v68 <= 0.0)
	{
		v71 = v112.m128_f32[2] + v70;
		v72 = v111.m128_f32[2] + v69;
	}
	else
	{
		v71 = v112.m128_f32[2] + v69;
		v72 = v111.m128_f32[2] + v70;
	}
	v73 = v5[1].m128_f32[2];
	if (v73 <= 0.0)
	{
		v74 = v73 * v114.m128_f32[1];
		v75 = v73 * v113.m128_f32[1];
	}
	else
	{
		v74 = v73 * v113.m128_f32[1];
		v75 = v73 * v114.m128_f32[1];
	}
	v76 = v72 + v75;
	v77 = v5[2].m128_f32[2];
	v78 = v71 + v74;
	if (v77 <= 0.0)
	{
		v79 = v77 * v114.m128_f32[2];
		v80 = v77 * v113.m128_f32[2];
	}
	else
	{
		v79 = v77 * v113.m128_f32[2];
		v80 = v77 * v114.m128_f32[2];
	}
	v112.m128_f32[2] = v78 + v79;
	v111.m128_f32[2] = v76 + v80;
	v81 = v111;
	*(__m128*)(a1 + 80) = v112;
	*(__m128*)(a1 + 96) = v81;
	if (*(_QWORD*)(a1 + 304))
	{
		v111 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 64), (__m128) * (unsigned int*)(a1 + 72)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 68), (__m128)0i64));
		sub_1401AE000(&v112, &v113, &v111);
		v84 = v83;
		v123 = *(__m128*) & ymmword_140C78390.m256_f32[4];
		v116[3] = v83;
		v116[7] = v83;
		v116[11] = v83;
		v122.m128_u64[1] = *(_QWORD*)&ymmword_140C78390.m256_f32[2];
		v125 = xmmword_140C783C0;
		v122.m128_u64[0] = v112.m128_u64[0];
		DWORD1(v125) = *(_DWORD*)(a1 + 164);
		v122.m128_i32[2] = v112.m128_i32[2];
		v116[0] = v112.m128_i32[0];
		v124 = (__m128)xmmword_140C783B0;
		v123.m128_u64[0] = v113.m128_u64[0];
		v85 = *(_DWORD*)(a1 + 160);
		v116[2] = v111.m128_i32[0];
		v123.m128_i32[2] = v113.m128_i32[2];
		LODWORD(v125) = v85;
		v86 = *(_DWORD*)(a1 + 168);
		v116[5] = v113.m128_i32[1];
		v124.m128_u64[0] = v111.m128_u64[0];
		DWORD2(v125) = v86;
		v124.m128_i32[2] = v111.m128_i32[2];
		v116[1] = v113.m128_i32[0];
		v116[8] = v112.m128_i32[2];
		v116[4] = v112.m128_i32[1];
		v116[10] = v111.m128_i32[2];
		v116[6] = v111.m128_i32[1];
		v116[9] = v113.m128_i32[2];
		v113 = _mm_mul_ps((__m128)v125, v122);
		LODWORD(v87) = _mm_shuffle_ps(v113, v113, 170).m128_u32[0];
		if (_mm_shuffle_ps(v113, v113, 85).m128_f32[0] > v113.m128_f32[0])
			v84 = 1i64;
		v88 = 1 - v84;
		if (v87 > v113.m128_f32[v84])
			v84 = 2i64;
		*(float*)&v116[12] = -(float)((float)(v113.m128_f32[-v88 + 3 - v84] + v113.m128_f32[v88]) + v113.m128_f32[v84]);
		v89 = _mm_mul_ps((__m128)v125, v124);
		v90 = v83;
		v113 = _mm_mul_ps((__m128)v125, v123);
		LODWORD(v91) = _mm_shuffle_ps(v113, v113, 170).m128_u32[0];
		if (_mm_shuffle_ps(v113, v113, 85).m128_f32[0] > v113.m128_f32[0])
			v90 = 1i64;
		v92 = 1 - v90;
		if (v91 > v113.m128_f32[v90])
			v90 = 2i64;
		v93 = (float)(v113.m128_f32[-v92 + 3 - v90] + v113.m128_f32[v92]) + v113.m128_f32[v90];
		v113 = v89;
		*(float*)&v116[13] = -v93;
		v19 = _mm_shuffle_ps(v89, v89, 85).m128_f32[0] <= v89.m128_f32[0];
		LODWORD(v94) = _mm_shuffle_ps(v89, v89, 170).m128_u32[0];
		if (!v19)
			v83 = 1i64;
		v95 = 1 - v83;
		if (v94 > v113.m128_f32[v83])
			v83 = 2i64;
		v96 = (float)(v113.m128_f32[-v95 + 3 - v83] + v113.m128_f32[v95]) + v113.m128_f32[v83];
		v113.m128_u64[0] = (unsigned __int64)v82;
		v113.m128_u64[1] = (unsigned __int64)v116;
		*(float*)&v116[14] = -v96;
		v116[15] = 1065353216;
		v127 = v116;
		v126 = v82;
		sub_1401AFB10(&v126, &v113);
		v97 = *(_QWORD*)(a1 + 16);
		v98 = (__m128)xmmword_140C78500;
		v99 = *(unsigned int*)(v97 + 64);
		v100 = (__m128)xmmword_140C78510;
		if (*(_DWORD*)(v97 + 64))
		{
			v101 = *(__m128**)(v97 + 72);
			do
			{
				v102 = *v101++;
				v103 = _mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v102, v102, 85), v114),
							_mm_mul_ps(_mm_shuffle_ps(v102, v102, 0), v113)),
						_mm_mul_ps(_mm_shuffle_ps(v102, v102, 170), v115[0])),
					v115[1]);
				v100 = _mm_max_ps(v100, v103);
				v98 = _mm_min_ps(v98, v103);
				--v99;
			} while (v99);
		}
		v104 = _mm_sub_ps(v100, v98);
		v105 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 304) + 24i64))(*(_QWORD*)(a1 + 304));
		v106 = (__m128)0x3E800000u;
		v107 = (__m128)0x3E800000u;
		v107.m128_f32[0] = 0.25 / (float)*(int*)(v105 + 4);
		v108 = (float)*(int*)(v105 + 8);
		v113.m128_u64[0] = (unsigned __int64)v116;
		v113.m128_u64[1] = (unsigned __int64)&v117;
		v106.m128_f32[0] = 0.25 / v108;
		v117 = ymmword_140C78390;
		v121 = *((_QWORD*)&xmmword_140C783C0 + 1);
		v109 = _mm_unpacklo_ps(_mm_unpacklo_ps(v107, (__m128)0i64), _mm_unpacklo_ps(v106, (__m128)0i64));
		v110 = _mm_sub_ps(_mm_sub_ps((__m128)xmmword_140B7B240, v109), v109);
		v118 = xmmword_140C783B0;
		v117.m256_f32[0] = v110.m128_f32[0] / v104.m128_f32[0];
		v119 = v109.m128_f32[0] - (float)(v98.m128_f32[0] * (float)(v110.m128_f32[0] / v104.m128_f32[0]));
		v127 = (int*)&v117;
		v117.m256_f32[5] = _mm_shuffle_ps(v110, v110, 85).m128_f32[0] / _mm_shuffle_ps(v104, v104, 85).m128_f32[0];
		v126 = (__m128*)v116;
		v120 = _mm_shuffle_ps(v109, v109, 85).m128_f32[0]
			- (float)(_mm_shuffle_ps(v98, v98, 85).m128_f32[0] * v117.m256_f32[5]);
		sub_1401AFB10(&v126, (__m128*)(a1 + 240));
		return (__m128*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 304) + 56i64))(*(_QWORD*)(a1 + 304));
	}
	return result;
}
// 1402D60BA: variable 'v5' is possibly undefined
// 1402D65BE: variable 'v83' is possibly undefined
// 1402D67B4: variable 'v82' is possibly undefined
// 140B7AB90: using guessed type __int128 xmmword_140B7AB90;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C78500: using guessed type __int128 xmmword_140C78500;
// 140C78510: using guessed type __int128 xmmword_140C78510;
// 1402D6030: using guessed type __m128 var_F0;

