#include "../winhttp.h"

//----- (00000001407B2D00) ----------------------------------------------------
__int64 __fastcall sub_1407B2D00(__m128* a1, __m128* a2)
{
	__m128 v3; // xmm2
	__m128 v4; // xmm7
	__m128 v5; // xmm0
	float v6; // xmm7_4
	float* v7; // r10
	__m128* v8; // r11
	__int64 v9; // r9
	__int64 v10; // r8
	__m128 v11; // xmm4
	__m128 v12; // xmm3
	__m128 v13; // xmm5
	__m128 v14; // xmm0
	__m128 v15; // xmm6
	__m128 v16; // xmm2
	__m128 v17; // xmm4
	float v18; // xmm3_4
	__int64 v19; // rdx
	__m128 v20; // xmm1
	__m128 v21; // xmm2
	__m128 v22; // xmm6
	__int64 v23; // r8
	float v24; // xmm3_4
	float v25; // xmm5_4
	__int64 v26; // rdx
	float v27; // xmm0_4
	bool v28; // cc
	float v29; // xmm6_4
	__int64 v30; // rdx
	__m128 v31; // xmm6
	__m128 v32; // xmm6
	float v33; // xmm1_4
	__m128 v34; // xmm11
	__m128 v35; // xmm4
	float v36; // xmm0_4
	__m128 v38; // xmm4
	__m128 v39; // xmm2
	__m128 v40; // xmm5
	__m128 v41; // xmm3
	float v42; // xmm3_4
	__m128 v43; // xmm2
	__m128 v44; // xmm1
	float v45; // xmm1_4
	__m128 v46; // xmm2
	float v47; // xmm2_4
	float v48; // xmm4_4
	float v49; // xmm1_4
	float v50; // xmm5_4
	__m128 v51; // [rsp+28h] [rbp-79h] BYREF
	__m128 v52; // [rsp+38h] [rbp-69h] BYREF
	__m128 v53; // [rsp+48h] [rbp-59h] BYREF
	__m128 v54; // [rsp+58h] [rbp-49h]
	__m128 v55; // [rsp+68h] [rbp-39h]
	__m128 v56; // [rsp+78h] [rbp-29h]
	__m128 v57; // [rsp+88h] [rbp-19h]

	v3 = _mm_sub_ps(a1[1], *a1);
	v4 = _mm_mul_ps(v3, v3);
	v5 = _mm_shuffle_ps(v4, v4, 85);
	v6 = fsqrt((float)(v4.m128_f32[0] + v5.m128_f32[0]) + _mm_shuffle_ps(v4, v4, 170).m128_f32[0]);
	if (v6 <= 0.0000099999997)
	{
		v51 = (__m128)xmmword_140C77870;
	}
	else
	{
		v5.m128_f32[0] = v6;
		v51 = _mm_div_ps(v3, _mm_shuffle_ps(v5, v5, 0));
	}
	sub_1401AE000(&v52, &v53, &v51);
	v9 = 0i64;
	v10 = 0i64;
	v11 = (__m128) * (unsigned int*)v7;
	v12 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128)v52.m128_u32[0], (__m128)v52.m128_u32[2]),
		_mm_unpacklo_ps((__m128)v52.m128_u32[1], (__m128)0i64));
	v13 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128)v53.m128_u32[0], (__m128)v53.m128_u32[2]),
		_mm_unpacklo_ps((__m128)v53.m128_u32[1], (__m128)0i64));
	v14 = (__m128) * ((unsigned int*)v7 + 2);
	v54.m128_u64[0] = __PAIR64__(v13.m128_u32[0], v12.m128_u32[0]);
	v15 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128)v51.m128_u32[0], (__m128)v51.m128_u32[2]),
		_mm_unpacklo_ps((__m128)v51.m128_u32[1], (__m128)0i64));
	v16 = (__m128) * ((unsigned int*)v7 + 1);
	v55.m128_i32[0] = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
	v54.m128_u64[1] = v15.m128_u32[0];
	v17 = _mm_unpacklo_ps(_mm_unpacklo_ps(v11, v14), _mm_unpacklo_ps(v16, (__m128)0x3F800000u));
	v55.m128_u64[1] = _mm_shuffle_ps(v15, v15, 85).m128_u32[0];
	v55.m128_i32[1] = _mm_shuffle_ps(v13, v13, 85).m128_u32[0];
	v56.m128_i32[1] = _mm_shuffle_ps(v13, v13, 170).m128_u32[0];
	v56.m128_i32[0] = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
	v51 = _mm_mul_ps(v12, v17);
	v56.m128_u64[1] = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
	LODWORD(v18) = _mm_shuffle_ps(v51, v51, 170).m128_u32[0];
	if (_mm_shuffle_ps(v51, v51, 85).m128_f32[0] > v51.m128_f32[0])
		v10 = 1i64;
	v19 = 1 - v10;
	if (v18 > v51.m128_f32[v10])
		v10 = 2i64;
	v57.m128_f32[0] = -(float)((float)(v51.m128_f32[-v19 + 3 - v10] + v51.m128_f32[v19]) + v51.m128_f32[v10]);
	v20 = *a2;
	v21 = v54;
	v22 = _mm_mul_ps(v15, v17);
	v23 = 0i64;
	v57.m128_i32[3] = 1065353216;
	v24 = 0.0;
	v51 = _mm_mul_ps(v13, v17);
	LODWORD(v25) = _mm_shuffle_ps(v51, v51, 170).m128_u32[0];
	if (_mm_shuffle_ps(v51, v51, 85).m128_f32[0] > v51.m128_f32[0])
		v23 = 1i64;
	v26 = 1 - v23;
	if (v25 > v51.m128_f32[v23])
		v23 = 2i64;
	v27 = (float)(v51.m128_f32[-v26 + 3 - v23] + v51.m128_f32[v26]) + v51.m128_f32[v23];
	v51 = v22;
	v57.m128_f32[1] = -v27;
	v28 = _mm_shuffle_ps(v22, v22, 85).m128_f32[0] <= v22.m128_f32[0];
	LODWORD(v29) = _mm_shuffle_ps(v22, v22, 170).m128_u32[0];
	if (!v28)
		v9 = 1i64;
	v30 = 1 - v9;
	v28 = v29 <= v51.m128_f32[v9];
	v31 = _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v54);
	if (!v28)
		v9 = 2i64;
	v57.m128_f32[2] = -(float)((float)(v51.m128_f32[-v30 + 3 - v9] + v51.m128_f32[v30]) + v51.m128_f32[v9]);
	v32 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(v31, _mm_mul_ps(_mm_shuffle_ps(v20, v20, 85), v55)),
			_mm_mul_ps(_mm_shuffle_ps(v20, v20, 170), v56)),
		v57);
	v33 = 1.0;
	v53 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v8, *v8, 0), v54), _mm_mul_ps(_mm_shuffle_ps(*v8, *v8, 85), v55)),
			_mm_mul_ps(_mm_shuffle_ps(*v8, *v8, 170), v56)),
		v57);
	v34 = _mm_sub_ps(v53, v32);
	v35 = _mm_shuffle_ps(v34, v34, 170);
	LODWORD(v36) = _mm_shuffle_ps(v32, v32, 170).m128_u32[0];
	if (fabs(v35.m128_f32[0]) >= 0.0000099999997)
	{
		v21 = (__m128)v53.m128_u32[2];
		if (v36 < 0.0)
		{
			if (v53.m128_f32[2] >= 0.0)
			{
				v24 = -(float)(v36 / v35.m128_f32[0]);
				goto LABEL_26;
			}
			return 0i64;
		}
		if (v36 > v6)
		{
			if (v53.m128_f32[2] > v6)
				return 0i64;
			v24 = (float)(v6 - v36) / v35.m128_f32[0];
		}
	LABEL_26:
		if (v53.m128_f32[2] >= 0.0)
		{
			if (v53.m128_f32[2] > v6)
				v33 = (float)(v6 - v36) / v35.m128_f32[0];
		}
		else
		{
			v33 = -(float)(v36 / v35.m128_f32[0]);
		}
		goto LABEL_30;
	}
	if (v36 < 0.0 || v36 > v6)
		return 0i64;
LABEL_30:
	v35.m128_f32[0] = v24;
	v21.m128_f32[0] = v33;
	v38 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v35, v35, 0), v34), v32);
	v39 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v34), v32);
	v40 = _mm_sub_ps(v38, (__m128)0i64);
	v41 = _mm_mul_ps(v40, v40);
	v42 = (float)(v41.m128_f32[0] + _mm_shuffle_ps(v41, v41, 85).m128_f32[0]) - (float)(v7[8] * v7[8]);
	if (v42 > 0.0)
	{
		v43 = _mm_sub_ps(v39, v38);
		v44 = _mm_mul_ps(v43, v43);
		v45 = v44.m128_f32[0] + _mm_shuffle_ps(v44, v44, 85).m128_f32[0];
		if (v45 < *(float*)&dword_140C3EA78)
			return 0i64;
		v46 = _mm_mul_ps(v43, v40);
		v47 = (float)(v46.m128_f32[0] + _mm_shuffle_ps(v46, v46, 85).m128_f32[0]) * 2.0;
		v48 = (float)(v47 * v47) - (float)((float)(v45 * 4.0) * v42);
		if (v48 < 0.0)
			return 0i64;
		v49 = v45 * 2.0;
		v50 = fsqrt(v48);
		if ((float)((float)(v50 - v47) * (float)(1.0 / v49)) < 0.0
			|| (float)((float)((float)-v47 - v50) * (float)(1.0 / v49)) > 1.0)
		{
			return 0i64;
		}
	}
	return 1i64;
}
// 1407B2DDB: variable 'v7' is possibly undefined
// 1407B2FCB: variable 'v8' is possibly undefined
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3EA78: using guessed type int dword_140C3EA78;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 1407B2D00: using guessed type __m128 var_70;

