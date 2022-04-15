#include "../winhttp.h"

//----- (00000001404C5110) ----------------------------------------------------
void __fastcall sub_1404C5110(unsigned int* a1, __int64 a2)
{
	__m128 v2; // xmm3
	__m128 v3; // xmm2
	__m128 v4; // xmm8
	__m128 v5; // xmm6
	__m128 v6; // xmm5
	__m128 v7; // xmm1
	float v8; // xmm0_4
	__m128 v9; // xmm6
	__m128 v10; // xmm1
	float v11; // xmm0_4
	__m128 v12; // xmm5
	__m128 v13; // xmm1
	float v14; // xmm0_4
	__m128 v15; // xmm4
	__m128 v16; // xmm4
	__m128 v17; // xmm0
	__m128 v18; // xmm1
	__m128 v19; // xmm4
	__m128 v20; // xmm2
	__m128 v21; // xmm0
	__m128 v22; // xmm1
	__m128 v23; // xmm0
	__m128 v24; // xmm5
	__m128* v25; // r10
	__m128 v26; // xmm3
	__m128 v27; // xmm1
	__m128 v28; // xmm5
	__m128 v29; // xmm3
	__m128 v30; // xmm1
	__m128 v31; // xmm4
	__m128 v32; // xmm3
	__m128 v33; // xmm1
	__m128 v34; // xmm8
	unsigned int* v35; // r9
	__m128 v36; // xmm3
	float* v37; // r10
	__m128 v38; // [rsp+28h] [rbp-E0h] BYREF
	__m128 v39; // [rsp+38h] [rbp-D0h] BYREF
	__m128 v40; // [rsp+48h] [rbp-C0h]
	__m128 v41; // [rsp+58h] [rbp-B0h]
	__m128 v42; // [rsp+68h] [rbp-A0h]
	__m256 v43; // [rsp+78h] [rbp-90h] BYREF
	__int128 v44; // [rsp+98h] [rbp-70h]
	__m128 v45; // [rsp+A8h] [rbp-60h]
	__int128 v46[3]; // [rsp+B8h] [rbp-50h] BYREF
	__m128 v47; // [rsp+E8h] [rbp-20h]
	__m128 v48; // [rsp+F8h] [rbp-10h] BYREF
	__m128 v49; // [rsp+108h] [rbp+0h]
	__m128 v50; // [rsp+118h] [rbp+10h]
	__m128 v51[3]; // [rsp+138h] [rbp+30h] BYREF
	float v52; // [rsp+168h] [rbp+60h]
	float v53; // [rsp+16Ch] [rbp+64h]
	int v54; // [rsp+170h] [rbp+68h]
	double v55[8]; // [rsp+178h] [rbp+70h] BYREF
	__int128 v56[6]; // [rsp+1B8h] [rbp+B0h] BYREF
	__m128* v57[2]; // [rsp+218h] [rbp+110h] BYREF
	__m128 v58[4]; // [rsp+228h] [rbp+120h] BYREF
	__m128* v59[2]; // [rsp+268h] [rbp+160h] BYREF
	__m128 v60[4]; // [rsp+278h] [rbp+170h] BYREF

	if (a2)
	{
		v40.m128_u64[0] = (unsigned __int64)(a1 + 128);
		v39.m128_u64[1] = 0i64;
		v2 = _mm_unpacklo_ps((__m128)a1[132], (__m128)a1[134]);
		v3 = _mm_unpacklo_ps((__m128)a1[133], (__m128)0i64);
		v39.m128_i32[0] = a1[135];
		v40.m128_u64[1] = (unsigned __int64)&v38;
		v38 = _mm_unpacklo_ps(v2, v3);
		v56[0] = v39.m128_u64[0];
		v56[1] = (__int128)v40;
		sub_1401B0590((int*)v56, (__int64)&v48);
		v4 = (__m128)0x40400000u;
		v5 = (__m128)0x40400000u;
		v6 = (__m128)0x40400000u;
		v7 = _mm_mul_ps(v50, v50);
		v3.m128_f32[0] = (float)(v7.m128_f32[0] + _mm_shuffle_ps(v7, v7, 85).m128_f32[0])
			+ _mm_shuffle_ps(v7, v7, 170).m128_f32[0];
		v8 = fsqrt(v3.m128_f32[0]);
		v5.m128_f32[0] = fmaxf(
			(float)((float)(3.0 - (float)((float)(v3.m128_f32[0] * (float)(1.0 / v8)) * (float)(1.0 / v8)))
				* 0.5)
			* (float)(1.0 / v8),
			0.0);
		v9 = _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), v50);
		v10 = _mm_mul_ps(v49, v49);
		v3.m128_f32[0] = (float)(v10.m128_f32[0] + _mm_shuffle_ps(v10, v10, 85).m128_f32[0])
			+ _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
		v11 = fsqrt(v3.m128_f32[0]);
		v6.m128_f32[0] = fmaxf(
			(float)((float)(3.0 - (float)((float)(v3.m128_f32[0] * (float)(1.0 / v11)) * (float)(1.0 / v11)))
				* 0.5)
			* (float)(1.0 / v11),
			0.0);
		v12 = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), v49);
		v13 = _mm_mul_ps(v48, v48);
		v3.m128_f32[0] = (float)(v13.m128_f32[0] + _mm_shuffle_ps(v13, v13, 85).m128_f32[0])
			+ _mm_shuffle_ps(v13, v13, 170).m128_f32[0];
		v14 = fsqrt(v3.m128_f32[0]);
		v15 = (__m128)0x40400000u;
		v15.m128_f32[0] = fmaxf(
			(float)((float)(3.0 - (float)((float)(v3.m128_f32[0] * (float)(1.0 / v14)) * (float)(1.0 / v14)))
				* 0.5)
			* (float)(1.0 / v14),
			0.0);
		v16 = _mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), v48);
		v17 = _mm_unpacklo_ps(v16, _mm_shuffle_ps(v16, v16, 170));
		v18 = _mm_shuffle_ps(v16, v16, 85);
		v19 = (__m128)0x40400000u;
		v20 = _mm_shuffle_ps(v12, v12, 170);
		v21 = _mm_unpacklo_ps(v17, _mm_unpacklo_ps(v18, (__m128)0i64));
		v22 = _mm_shuffle_ps(v12, v12, 85);
		v46[0] = (__int128)v21;
		v23 = v12;
		v24 = (__m128)0x40400000u;
		v46[1] = (__int128)_mm_unpacklo_ps(_mm_unpacklo_ps(v23, v20), _mm_unpacklo_ps(v22, (__m128)0i64));
		v26 = v25[36];
		v46[2] = (__int128)_mm_unpacklo_ps(
			_mm_unpacklo_ps(v9, _mm_shuffle_ps(v9, v9, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v9, v9, 85), (__m128)0i64));
		v27 = _mm_mul_ps(v26, v26);
		v47 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)0i64, _mm_shuffle_ps((__m128)0i64, (__m128)0i64, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps((__m128)0i64, (__m128)0i64, 85), (__m128)0x3F800000u));
		v20.m128_f32[0] = (float)(v27.m128_f32[0] + _mm_shuffle_ps(v27, v27, 85).m128_f32[0])
			+ _mm_shuffle_ps(v27, v27, 170).m128_f32[0];
		v23.m128_f32[0] = fsqrt(v20.m128_f32[0]);
		v24.m128_f32[0] = fmaxf(
			(float)((float)(3.0
				- (float)((float)(v20.m128_f32[0] * (float)(1.0 / v23.m128_f32[0]))
					* (float)(1.0 / v23.m128_f32[0])))
				* 0.5)
			* (float)(1.0 / v23.m128_f32[0]),
			0.0);
		v28 = _mm_mul_ps(_mm_shuffle_ps(v24, v24, 0), v26);
		v29 = v25[35];
		v30 = _mm_mul_ps(v29, v29);
		v20.m128_f32[0] = (float)(v30.m128_f32[0] + _mm_shuffle_ps(v30, v30, 85).m128_f32[0])
			+ _mm_shuffle_ps(v30, v30, 170).m128_f32[0];
		v23.m128_f32[0] = fsqrt(v20.m128_f32[0]);
		v19.m128_f32[0] = fmaxf(
			(float)((float)(3.0
				- (float)((float)(v20.m128_f32[0] * (float)(1.0 / v23.m128_f32[0]))
					* (float)(1.0 / v23.m128_f32[0])))
				* 0.5)
			* (float)(1.0 / v23.m128_f32[0]),
			0.0);
		*(_QWORD*)&v56[0] = &v39;
		v31 = _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v29);
		v32 = v25[34];
		v33 = _mm_mul_ps(v32, v32);
		v20.m128_f32[0] = (float)(v33.m128_f32[0] + _mm_shuffle_ps(v33, v33, 85).m128_f32[0])
			+ _mm_shuffle_ps(v33, v33, 170).m128_f32[0];
		v23.m128_f32[0] = fsqrt(v20.m128_f32[0]);
		v4.m128_f32[0] = fmaxf(
			(float)((float)(3.0
				- (float)((float)(v20.m128_f32[0] * (float)(1.0 / v23.m128_f32[0]))
					* (float)(1.0 / v23.m128_f32[0])))
				* 0.5)
			* (float)(1.0 / v23.m128_f32[0]),
			0.0);
		v34 = _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), v32);
		v39 = _mm_unpacklo_ps(
			_mm_unpacklo_ps(v34, _mm_shuffle_ps(v34, v34, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v34, v34, 85), (__m128)0i64));
		v40 = _mm_unpacklo_ps(
			_mm_unpacklo_ps(v31, _mm_shuffle_ps(v31, v31, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v31, v31, 85), (__m128)0i64));
		v41 = _mm_unpacklo_ps(
			_mm_unpacklo_ps(v28, _mm_shuffle_ps(v28, v28, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v28, v28, 85), (__m128)0i64));
		v42 = v47;
		sub_1401AFC20((__int64*)v56, v55);
		v36 = (__m128) * v35;
		v38.m128_u64[0] = (unsigned __int64)&v39;
		v43 = ymmword_140C78410;
		v44 = xmmword_140C78430;
		v45 = _mm_unpacklo_ps(_mm_unpacklo_ps(v36, (__m128)v35[2]), _mm_unpacklo_ps((__m128)v35[1], (__m128)0x3F800000u));
		v38.m128_u64[1] = (unsigned __int64)&v43;
		v57[1] = (__m128*) & v43;
		v57[0] = &v39;
		sub_1401AFB10(v57, v58);
		v38.m128_u64[0] = (unsigned __int64)v58;
		v38.m128_u64[1] = (unsigned __int64)v55;
		v59[0] = v58;
		v59[1] = (__m128*)v55;
		sub_1401AFB10(v59, v60);
		v38.m128_u64[0] = (unsigned __int64)v60;
		v38.m128_u64[1] = (unsigned __int64)v46;
		*(_QWORD*)&v56[0] = v60;
		*((_QWORD*)&v56[0] + 1) = v46;
		sub_1401AFB10((__m128**)v56, v51);
		v33.m128_f32[0] = v53 + v37[133];
		v37[132] = v52 + v37[132];
		v23.m128_i32[0] = v54;
		v37[133] = v33.m128_f32[0];
		v37[134] = v23.m128_f32[0] + v37[134];
	}
}
// 1404C5327: variable 'v25' is possibly undefined
// 1404C54D4: variable 'v35' is possibly undefined
// 1404C5605: variable 'v37' is possibly undefined
// 140C78410: using guessed type __m256 ymmword_140C78410;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 1404C5110: using guessed type double var_190[8];
// 1404C5110: using guessed type __m128 var_E0[4];
// 1404C5110: using guessed type __m128 var_90[4];
// 1404C5110: using guessed type __m128 var_1D0[3];

