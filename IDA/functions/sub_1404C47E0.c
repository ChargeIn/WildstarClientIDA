//----- (00000001404C47E0) ----------------------------------------------------
void __fastcall sub_1404C47E0(unsigned int* a1, __int64 a2)
{
	_OWORD* v2; // rbx
	__m128 v3; // xmm3
	__m128 v4; // xmm2
	__int64 v5; // r9
	__m128* v6; // r10
	float v7; // xmm1_4
	float v8; // xmm11_4
	float v9; // xmm9_4
	float v10; // xmm4_4
	float v11; // xmm8_4
	float v12; // xmm7_4
	float v13; // xmm10_4
	float v14; // xmm5_4
	float v15; // xmm6_4
	float v16; // xmm9_4
	float v17; // xmm12_4
	float v18; // xmm8_4
	float v19; // xmm11_4
	__m128* v20; // r9
	__m128 v21; // xmm14
	__m128 v22; // xmm7
	__m128 v23; // xmm1
	float v24; // xmm0_4
	__m128 v25; // xmm7
	__m128 v26; // xmm1
	float v27; // xmm0_4
	__m128 v28; // xmm6
	__m128 v29; // xmm4
	__m128 v30; // xmm6
	__m128 v31; // xmm1
	float v32; // xmm0_4
	__m128 v33; // xmm4
	__m128 v34; // xmm1
	float v35; // xmm0_4
	__m128 v36; // xmm14
	__m128 v37; // [rsp+28h] [rbp-E0h] BYREF
	unsigned __int64 v38; // [rsp+38h] [rbp-D0h] BYREF
	__int64 v39; // [rsp+40h] [rbp-C8h]
	__int128 v40; // [rsp+48h] [rbp-C0h]
	float v41; // [rsp+58h] [rbp-B0h]
	float v42; // [rsp+5Ch] [rbp-ACh]
	float v43; // [rsp+60h] [rbp-A8h]
	int v44; // [rsp+64h] [rbp-A4h]
	__int128 v45; // [rsp+68h] [rbp-A0h]
	__m128 v46; // [rsp+78h] [rbp-90h] BYREF
	__m128 v47; // [rsp+88h] [rbp-80h]
	__m128 v48; // [rsp+98h] [rbp-70h]
	__m128 v49; // [rsp+A8h] [rbp-60h]
	double v50[8]; // [rsp+B8h] [rbp-50h] BYREF
	char v51[64]; // [rsp+F8h] [rbp-10h] BYREF
	__int128 v52[6]; // [rsp+138h] [rbp+30h] BYREF
	__m128* v53[2]; // [rsp+198h] [rbp+90h] BYREF
	__m128 v54[4]; // [rsp+1A8h] [rbp+A0h] BYREF
	__m128* v55[2]; // [rsp+1E8h] [rbp+E0h] BYREF
	__m128 v56[4]; // [rsp+1F8h] [rbp+F0h] BYREF

	if (a2)
	{
		v2 = a1 + 128;
		*((_QWORD*)&v40 + 1) = &v37;
		v39 = 0i64;
		v3 = _mm_unpacklo_ps((__m128)a1[132], (__m128)a1[134]);
		v4 = _mm_unpacklo_ps((__m128)a1[133], (__m128)0i64);
		*(_QWORD*)&v40 = a1 + 128;
		LODWORD(v38) = a1[135];
		v37 = _mm_unpacklo_ps(v3, v4);
		v52[0] = v38;
		v52[1] = v40;
		sub_1401B0590((int*)v52, (__int64)v51);
		*(_QWORD*)&v52[0] = v5 + 544;
		sub_1401AFC20((__int64*)v52, v50);
		HIDWORD(v39) = 0;
		v7 = COERCE_FLOAT(*v6) * 2.0;
		v8 = _mm_shuffle_ps(*v6, *v6, 85).m128_f32[0];
		v9 = _mm_shuffle_ps(*v6, *v6, 170).m128_f32[0];
		v10 = v9 * 2.0;
		v4.m128_f32[0] = COERCE_FLOAT(*v6) * (float)(v8 * 2.0);
		v11 = _mm_shuffle_ps(*v6, *v6, 255).m128_f32[0];
		v12 = v11 * (float)(v9 * 2.0);
		v13 = v11 * v7;
		v14 = COERCE_FLOAT(*v6) * v7;
		v15 = v8 * (float)(v8 * 2.0);
		v16 = v9 * (float)(v9 * 2.0);
		v17 = COERCE_FLOAT(*v6) * v10;
		*(float*)&v38 = (float)(1.0 - v15) - v16;
		v18 = v11 * (float)(v8 * 2.0);
		v19 = v8 * v10;
		*(float*)&v40 = v4.m128_f32[0] - v12;
		*((float*)&v38 + 1) = v4.m128_f32[0] + v12;
		*(float*)&v39 = v17 - v18;
		v37.m128_u64[1] = (unsigned __int64)&v38;
		v37.m128_u64[0] = (unsigned __int64)v20;
		*((float*)&v40 + 2) = v19 + v13;
		HIDWORD(v40) = 0;
		v44 = 0;
		*((float*)&v40 + 1) = (float)(1.0 - v14) - v16;
		v45 = xmmword_140B7AD00;
		v41 = v17 + v18;
		v42 = v19 - v13;
		v53[0] = v20;
		v43 = (float)(1.0 - v14) - v15;
		v53[1] = (__m128*) & v38;
		sub_1401AFB10(v53, v54);
		v37.m128_u64[0] = (unsigned __int64)v54;
		v37.m128_u64[1] = (unsigned __int64)v50;
		v55[0] = v54;
		v55[1] = (__m128*)v50;
		sub_1401AFB10(v55, v56);
		v37.m128_u64[0] = (unsigned __int64)v56;
		v37.m128_u64[1] = (unsigned __int64)v51;
		*(_QWORD*)&v52[0] = v56;
		*((_QWORD*)&v52[0] + 1) = v51;
		sub_1401AFB10((__m128**)v52, &v46);
		v21 = (__m128)0x40400000u;
		v22 = (__m128)0x40400000u;
		v23 = _mm_mul_ps(v49, v49);
		v4.m128_f32[0] = (float)(v23.m128_f32[0] + _mm_shuffle_ps(v23, v23, 85).m128_f32[0])
			+ _mm_shuffle_ps(v23, v23, 170).m128_f32[0];
		v24 = fsqrt(v4.m128_f32[0]);
		v22.m128_f32[0] = fmaxf(
			(float)((float)(3.0 - (float)((float)(v4.m128_f32[0] * (float)(1.0 / v24)) * (float)(1.0 / v24)))
				* 0.5)
			* (float)(1.0 / v24),
			0.0);
		v25 = _mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), v49);
		v26 = _mm_mul_ps(v48, v48);
		v4.m128_f32[0] = (float)(v26.m128_f32[0] + _mm_shuffle_ps(v26, v26, 85).m128_f32[0])
			+ _mm_shuffle_ps(v26, v26, 170).m128_f32[0];
		v27 = fsqrt(v4.m128_f32[0]);
		v28 = (__m128)0x40400000u;
		v29 = (__m128)0x40400000u;
		v28.m128_f32[0] = fmaxf(
			(float)((float)(3.0 - (float)((float)(v4.m128_f32[0] * (float)(1.0 / v27)) * (float)(1.0 / v27)))
				* 0.5)
			* (float)(1.0 / v27),
			0.0);
		v30 = _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v48);
		v31 = _mm_mul_ps(v47, v47);
		v4.m128_f32[0] = (float)(v31.m128_f32[0] + _mm_shuffle_ps(v31, v31, 85).m128_f32[0])
			+ _mm_shuffle_ps(v31, v31, 170).m128_f32[0];
		v32 = fsqrt(v4.m128_f32[0]);
		v29.m128_f32[0] = fmaxf(
			(float)((float)(3.0 - (float)((float)(v4.m128_f32[0] * (float)(1.0 / v32)) * (float)(1.0 / v32)))
				* 0.5)
			* (float)(1.0 / v32),
			0.0);
		v33 = _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0), v47);
		v34 = _mm_mul_ps(v46, v46);
		v4.m128_f32[0] = (float)(v34.m128_f32[0] + _mm_shuffle_ps(v34, v34, 85).m128_f32[0])
			+ _mm_shuffle_ps(v34, v34, 170).m128_f32[0];
		v35 = fsqrt(v4.m128_f32[0]);
		v21.m128_f32[0] = fmaxf(
			(float)((float)(3.0 - (float)((float)(v4.m128_f32[0] * (float)(1.0 / v35)) * (float)(1.0 / v35)))
				* 0.5)
			* (float)(1.0 / v35),
			0.0);
		v36 = _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v46);
		v46 = _mm_unpacklo_ps(
			_mm_unpacklo_ps(v36, _mm_shuffle_ps(v36, v36, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v36, v36, 85), (__m128)0i64));
		v47 = _mm_unpacklo_ps(
			_mm_unpacklo_ps(v33, _mm_shuffle_ps(v33, v33, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v33, v33, 85), (__m128)0i64));
		v48 = _mm_unpacklo_ps(
			_mm_unpacklo_ps(v30, _mm_shuffle_ps(v30, v30, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v30, v30, 85), (__m128)0i64));
		v49 = _mm_unpacklo_ps(
			_mm_unpacklo_ps(v25, _mm_shuffle_ps(v25, v25, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v25, v25, 85), (__m128)0x3F800000u));
		*v2 = *(_OWORD*)sub_1401B1D60(v37.m128_f32, v46.m128_f32);
	}
}
// 1404C48C1: variable 'v5' is possibly undefined
// 1404C48D2: variable 'v6' is possibly undefined
// 1404C49AF: variable 'v20' is possibly undefined
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 1404C47E0: using guessed type double var_220[8];
// 1404C47E0: using guessed type __m128 var_130[4];
// 1404C47E0: using guessed type __m128 var_E0[4];

