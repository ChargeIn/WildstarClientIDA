#include "../winhttp.h"

//----- (000000014035C090) ----------------------------------------------------
__int64 __fastcall sub_14035C090(__int64 a1, int* a2, __m128* a3)
{
	int v3; // r9d
	int v5; // eax
	int v6; // r8d
	int v7; // r10d
	__int64 v8; // r9
	__int64 v9; // rax
	__m128* v10; // rbx
	__m128 v11; // xmm11
	__m128 v12; // xmm2
	__m128 v13; // xmm4
	__m128 v14; // xmm4
	__m128 v15; // xmm7
	__m128 v16; // xmm2
	__m128 v17; // xmm14
	__m128 v18; // xmm14
	__m128 v19; // xmm2
	__m128 v20; // xmm15
	__m128 v21; // xmm15
	__m128 v22; // xmm10
	__m128 v23; // xmm9
	__m128 v24; // xmm11
	__m128 v25; // xmm0
	__m128 v26; // xmm4
	__m128 v27; // xmm6
	__m128 v28; // xmm13
	__m128 v29; // xmm8
	__m128 v30; // xmm0
	__m128 v31; // xmm6
	__m128 v32; // xmm12
	__m128 v33; // xmm7
	__m128 v34; // xmm0
	__m128 v35; // xmm6
	__m128 v36; // xmm2
	__m128 v37; // xmm11
	__m128 v38; // xmm6
	__m128 v39; // xmm9
	__m128 v40; // xmm8
	__m128 v41; // xmm5
	__m128 v42; // xmm1
	__m128 v43; // xmm2
	__m128 v44; // xmm1
	__m128 v45; // xmm3
	__m128 v46; // xmm2
	__m128 v47; // xmm1
	__m128 v48; // xmm0
	__m128 v49; // xmm2
	__m128 v50; // xmm3
	__m128 v51; // xmm2
	__int64 result; // rax
	__m128 v53; // xmm0
	__m128 v54; // xmm2
	__m128 v55; // [rsp+20h] [rbp-158h] BYREF
	__m128 v56; // [rsp+30h] [rbp-148h]
	__m128 v57; // [rsp+40h] [rbp-138h]
	__m128 v58; // [rsp+50h] [rbp-128h]
	__m128 v59; // [rsp+60h] [rbp-118h]
	__m128 v60; // [rsp+70h] [rbp-108h]
	__m128 v61; // [rsp+80h] [rbp-F8h]
	__m128 v62; // [rsp+90h] [rbp-E8h]
	__m128 v63; // [rsp+A0h] [rbp-D8h]
	__m128 v64; // [rsp+B0h] [rbp-C8h]
	__m128 v65; // [rsp+C0h] [rbp-B8h]

	v3 = *a2;
	if (*a2 < *(_DWORD*)(a1 + 2256))
		return 2147500037i64;
	if (v3 >= *(_DWORD*)(a1 + 2264))
		return 2147500037i64;
	v5 = a2[1];
	if (v5 < *(_DWORD*)(a1 + 2260) || v5 >= *(_DWORD*)(a1 + 2268))
		return 2147500037i64;
	v6 = *(_DWORD*)(a1 + 2208);
	v7 = *(_DWORD*)(a1 + 2204);
	v55.m128_i32[0] = -1;
	v8 = v3 % v7 + v7 * (v5 % v6 + v6 * (v5 % v6 < 0)) + v7 * (unsigned int)(v3 % v7 < 0);
	v9 = *(_QWORD*)(a1 + 2272);
	v10 = *(__m128**)(v9 + 8 * v8);
	if (v10[90].m128_u64[1])
		sub_14037CC30(*(_QWORD*)(v9 + 8 * v8), (__int64)&v55);
	v11 = _mm_max_ps(v10[13], v10[60]);
	v62 = _mm_sub_ps((__m128)0i64, (__m128)xmmword_140C77870);
	v56 = (__m128)xmmword_140C77870;
	v12 = _mm_sub_ps(
		_mm_mul_ps(
			_mm_shuffle_ps((__m128)xmmword_140C7AC50, (__m128)xmmword_140C7AC50, 210),
			_mm_shuffle_ps((__m128)xmmword_140C77870, (__m128)xmmword_140C77870, 201)),
		_mm_mul_ps(
			_mm_shuffle_ps((__m128)xmmword_140C7AC50, (__m128)xmmword_140C7AC50, 201),
			_mm_shuffle_ps(v56, v56, 210)));
	v13 = _mm_mul_ps(v12, v12);
	v13.m128_f32[0] = 1.0
		/ fsqrt(
			(float)(v13.m128_f32[0] + _mm_shuffle_ps(v13, v13, 85).m128_f32[0])
			+ _mm_shuffle_ps(v13, v13, 170).m128_f32[0]);
	v14 = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v12);
	v15 = _mm_sub_ps((__m128)0i64, v14);
	v60 = v14;
	v55 = v14;
	v63 = v15;
	v16 = _mm_sub_ps(
		_mm_mul_ps(
			_mm_shuffle_ps(v14, v14, 210),
			_mm_shuffle_ps((__m128)xmmword_140C7AC50, (__m128)xmmword_140C7AC50, 201)),
		_mm_mul_ps(
			_mm_shuffle_ps(v14, v14, 201),
			_mm_shuffle_ps((__m128)xmmword_140C7AC50, (__m128)xmmword_140C7AC50, 210)));
	v17 = _mm_mul_ps(v16, v16);
	v17.m128_f32[0] = 1.0
		/ fsqrt(
			(float)(v17.m128_f32[0] + _mm_shuffle_ps(v17, v17, 85).m128_f32[0])
			+ _mm_shuffle_ps(v17, v17, 170).m128_f32[0]);
	v18 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v16);
	v19 = _mm_sub_ps(
		_mm_mul_ps(
			_mm_shuffle_ps((__m128)xmmword_140C77870, (__m128)xmmword_140C77870, 210),
			_mm_shuffle_ps(v14, v14, 201)),
		_mm_mul_ps(
			_mm_shuffle_ps((__m128)xmmword_140C77870, (__m128)xmmword_140C77870, 201),
			_mm_shuffle_ps(v14, v14, 210)));
	v20 = _mm_mul_ps(v19, v19);
	v20.m128_f32[0] = 1.0
		/ fsqrt(
			(float)(v20.m128_f32[0] + _mm_shuffle_ps(v20, v20, 85).m128_f32[0])
			+ _mm_shuffle_ps(v20, v20, 170).m128_f32[0]);
	v57 = _mm_min_ps(v10[12], v10[59]);
	v21 = _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v19);
	v22 = (__m128)v57.m128_u32[2];
	v58 = v11;
	v23 = (__m128)v11.m128_u32[2];
	v24 = _mm_shuffle_ps(v11, v11, 85);
	v64 = v24;
	v65 = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps(v24, (__m128)0i64));
	v61 = _mm_shuffle_ps(v14, v14, 170);
	v59 = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps((__m128)(unsigned int)dword_140C7AC64, (__m128)0i64));
	if (v61.m128_f32[0] >= 0.0)
		v25 = v23;
	else
		v25 = (__m128)v57.m128_u32[2];
	v26 = (__m128)v57.m128_u32[0];
	if (v55.m128_f32[0] >= 0.0)
		v27 = (__m128)v58.m128_u32[0];
	else
		v27 = (__m128)v57.m128_u32[0];
	v28 = _mm_shuffle_ps(v15, v15, 170);
	v29 = _mm_unpacklo_ps(_mm_unpacklo_ps(v27, v25), _mm_unpacklo_ps(v24, (__m128)0i64));
	if (v28.m128_f32[0] >= 0.0)
		v30 = v23;
	else
		v30 = (__m128)v57.m128_u32[2];
	if (v15.m128_f32[0] >= 0.0)
		v31 = (__m128)v58.m128_u32[0];
	else
		v31 = (__m128)v57.m128_u32[0];
	v32 = _mm_shuffle_ps(v18, v18, 170);
	v33 = _mm_unpacklo_ps(_mm_unpacklo_ps(v31, v30), _mm_unpacklo_ps(v24, (__m128)0i64));
	if (v32.m128_f32[0] >= 0.0)
		v34 = v23;
	else
		v34 = (__m128)v57.m128_u32[2];
	if (v18.m128_f32[0] >= 0.0)
		v35 = (__m128)v58.m128_u32[0];
	else
		v35 = (__m128)v57.m128_u32[0];
	v36 = v24;
	v37 = _mm_shuffle_ps(v21, v21, 170);
	v38 = _mm_unpacklo_ps(_mm_unpacklo_ps(v35, v34), _mm_unpacklo_ps(v36, (__m128)0i64));
	if (v37.m128_f32[0] >= 0.0)
		v22 = v23;
	if (v21.m128_f32[0] >= 0.0)
		v26 = (__m128)v58.m128_u32[0];
	v39 = v62;
	v40 = _mm_mul_ps(v29, v60);
	v41 = _mm_unpacklo_ps(_mm_unpacklo_ps(v26, v22), _mm_unpacklo_ps((__m128)v64.m128_u32[0], (__m128)0i64));
	v42 = _mm_mul_ps(v65, (__m128)xmmword_140C77870);
	v42.m128_f32[0] = (float)(v42.m128_f32[0] + _mm_shuffle_ps(v42, v42, 85).m128_f32[0])
		+ _mm_shuffle_ps(v42, v42, 170).m128_f32[0];
	v43 = v59;
	*a3 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128)v56.m128_u32[0], (__m128)v56.m128_u32[2]),
		_mm_unpacklo_ps((__m128)v56.m128_u32[1], _mm_xor_ps(v42, (__m128)0x80000000)));
	v44 = _mm_mul_ps(v43, v39);
	v44.m128_f32[0] = (float)(v44.m128_f32[0] + _mm_shuffle_ps(v44, v44, 85).m128_f32[0])
		+ _mm_shuffle_ps(v44, v44, 170).m128_f32[0];
	v45 = (__m128)v55.m128_u32[0];
	v46 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v39, _mm_shuffle_ps(v39, v39, 170)),
		_mm_unpacklo_ps(_mm_shuffle_ps(v39, v39, 85), _mm_xor_ps(v44, (__m128)0x80000000)));
	v47 = v40;
	v48 = (__m128)v61.m128_u32[0];
	a3[1] = v46;
	v47.m128_f32[0] = (float)(v40.m128_f32[0] + _mm_shuffle_ps(v40, v40, 85).m128_f32[0])
		+ _mm_shuffle_ps(v40, v40, 170).m128_f32[0];
	a3[3] = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v45, v48),
		_mm_unpacklo_ps((__m128)v55.m128_u32[1], _mm_xor_ps(v47, (__m128)0x80000000)));
	v49 = _mm_mul_ps(v33, v63);
	v49.m128_f32[0] = (float)(v49.m128_f32[0] + _mm_shuffle_ps(v49, v49, 85).m128_f32[0])
		+ _mm_shuffle_ps(v49, v49, 170).m128_f32[0];
	v50 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v63, v28),
		_mm_unpacklo_ps(_mm_shuffle_ps(v63, v63, 85), _mm_xor_ps(v49, (__m128)0x80000000)));
	v51 = _mm_mul_ps(v38, v18);
	a3[2] = v50;
	v51.m128_f32[0] = (float)(v51.m128_f32[0] + _mm_shuffle_ps(v51, v51, 85).m128_f32[0])
		+ _mm_shuffle_ps(v51, v51, 170).m128_f32[0];
	result = 0i64;
	v53 = _mm_unpacklo_ps(_mm_shuffle_ps(v18, v18, 85), _mm_xor_ps(v51, (__m128)0x80000000));
	v54 = _mm_mul_ps(v41, v21);
	a3[5] = _mm_unpacklo_ps(_mm_unpacklo_ps(v18, v32), v53);
	v54.m128_f32[0] = (float)(v54.m128_f32[0] + _mm_shuffle_ps(v54, v54, 85).m128_f32[0])
		+ _mm_shuffle_ps(v54, v54, 170).m128_f32[0];
	a3[4] = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v21, v37),
		_mm_unpacklo_ps(_mm_shuffle_ps(v21, v21, 85), _mm_xor_ps(v54, (__m128)0x80000000)));
	return result;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C7AC50: using guessed type __int128 xmmword_140C7AC50;
// 140C7AC64: using guessed type int dword_140C7AC64;

