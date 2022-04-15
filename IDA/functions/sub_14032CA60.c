//----- (000000014032CA60) ----------------------------------------------------
__m128* __fastcall sub_14032CA60(__int64 a1, __m128* a2, __m128* a3)
{
	__m128 v3; // xmm14
	__m128 v4; // xmm15
	__m128 v5; // xmm13
	__m128 v9; // xmm2
	float v10; // xmm0_4
	__m128 v11; // xmm13
	__m128 v12; // xmm2
	__m128 v13; // xmm7
	double v14; // xmm6_8
	float v15; // xmm9_4
	float v16; // xmm11_4
	__m128 v17; // xmm8
	__m128 v18; // xmm2
	float v19; // xmm3_4
	float v20; // xmm0_4
	__m128 v21; // xmm8
	float v22; // xmm5_4
	float v23; // xmm3_4
	float v24; // xmm4_4
	double v25; // xmm6_8
	double v26; // xmm12_8
	float v27; // xmm9_4
	float v28; // xmm11_4
	__m128 v29; // xmm8
	__m128 v30; // xmm2
	float v31; // xmm3_4
	float v32; // xmm0_4
	__m128 v33; // xmm8
	float v34; // xmm5_4
	float v35; // xmm7_4
	float v36; // xmm3_4
	float v37; // xmm4_4
	float v38; // xmm9_4
	__m128 v39; // xmm2
	float v40; // xmm3_4
	float v41; // xmm0_4
	__m128 v42; // xmm14
	float v43; // xmm5_4
	float v44; // xmm7_4
	float v45; // xmm3_4
	float v46; // xmm4_4
	__m128* result; // rax
	__m128 v48; // xmm2
	__m128 v49; // xmm0
	__m128 v50; // [rsp+68h] [rbp-A0h]
	__m128 v51; // [rsp+68h] [rbp-A0h]
	__m128 v52; // [rsp+78h] [rbp-90h]
	__m128 v53; // [rsp+78h] [rbp-90h]
	__m128 v54; // [rsp+88h] [rbp-80h]
	__m128 v55; // [rsp+88h] [rbp-80h]

	v3 = (__m128)0x40400000u;
	v4 = (__m128)xmmword_140B7A330;
	v5 = (__m128)0x40400000u;
	v9 = _mm_mul_ps(*a3, *a3);
	v9.m128_f32[0] = (float)(v9.m128_f32[0] + _mm_shuffle_ps(v9, v9, 85).m128_f32[0])
		+ _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
	v10 = fsqrt(v9.m128_f32[0]);
	v5.m128_f32[0] = fmaxf(
		(float)((float)(3.0 - (float)((float)(v9.m128_f32[0] * (float)(1.0 / v10)) * (float)(1.0 / v10)))
			* 0.5)
		* (float)(1.0 / v10),
		0.0);
	v11 = _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), *a3);
	if (v11.m128_f32[0] != 0.0 || _mm_shuffle_ps(v11, v11, 170).m128_f32[0] != 0.0)
	{
		v12 = _mm_mul_ps(v11, (__m128)xmmword_140B7A4B0);
		v13 = _mm_sub_ps(
			_mm_mul_ps(
				_mm_shuffle_ps(v11, v11, 210),
				_mm_shuffle_ps((__m128)xmmword_140B7A4B0, (__m128)xmmword_140B7A4B0, 201)),
			_mm_mul_ps(
				_mm_shuffle_ps(v11, v11, 201),
				_mm_shuffle_ps((__m128)xmmword_140B7A4B0, (__m128)xmmword_140B7A4B0, 210)));
		*(_QWORD*)&v14 = sub_1408FCCB0(
			(float)(v12.m128_f32[0] + _mm_shuffle_ps(v12, v12, 85).m128_f32[0])
			+ _mm_shuffle_ps(v12, v12, 170).m128_f32[0]).m128_u64[0];
		v15 = sub_1408FE3D0(v14);
		v50.m128_i32[3] = 0;
		v16 = sub_1408FC950(v14);
		v17 = (__m128)0x40400000u;
		v18 = _mm_mul_ps(v13, v13);
		v19 = (float)(v18.m128_f32[0] + _mm_shuffle_ps(v18, v18, 85).m128_f32[0])
			+ _mm_shuffle_ps(v18, v18, 170).m128_f32[0];
		v20 = fsqrt(v19);
		v17.m128_f32[0] = fmaxf(
			(float)((float)(3.0 - (float)((float)(v19 * (float)(1.0 / v20)) * (float)(1.0 / v20))) * 0.5)
			* (float)(1.0 / v20),
			0.0);
		v21 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v13);
		v22 = _mm_shuffle_ps(v21, v21, 85).m128_f32[0];
		v13.m128_f32[0] = _mm_shuffle_ps(v21, v21, 170).m128_f32[0];
		v50.m128_f32[0] = (float)((float)(v21.m128_f32[0] * v21.m128_f32[0]) * (float)(1.0 - v16)) + v16;
		v23 = (float)(v22 * v21.m128_f32[0]) * (float)(1.0 - v16);
		v50.m128_f32[1] = (float)(v13.m128_f32[0] * v15) + v23;
		v24 = (float)(v13.m128_f32[0] * v21.m128_f32[0]) * (float)(1.0 - v16);
		v52.m128_f32[0] = v23 - (float)(v13.m128_f32[0] * v15);
		*(float*)&v14 = (float)(v13.m128_f32[0] * v22) * (float)(1.0 - v16);
		v50.m128_f32[2] = v24 - (float)(v22 * v15);
		v21.m128_f32[0] = v21.m128_f32[0] * v15;
		v54.m128_f32[0] = (float)(v22 * v15) + v24;
		v52.m128_u64[1] = COERCE_UNSIGNED_INT(v21.m128_f32[0] + *(float*)&v14);
		v54.m128_f32[1] = *(float*)&v14 - v21.m128_f32[0];
		v52.m128_f32[1] = (float)((float)(v22 * v22) * (float)(1.0 - v16)) + v16;
		v54.m128_u64[1] = COERCE_UNSIGNED_INT((float)((float)(v13.m128_f32[0] * v13.m128_f32[0]) * (float)(1.0 - v16)) + v16);
		v4 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140B7A330, (__m128)xmmword_140B7A330, 0), v50),
					_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140B7A330, (__m128)xmmword_140B7A330, 85), v52)),
				_mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_140B7A330, (__m128)xmmword_140B7A330, 170), v54)),
			(__m128)xmmword_140B7AD00);
	}
	v25 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
	v26 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
	v27 = sub_1408FE3D0(v25);
	v51.m128_i32[3] = 0;
	v28 = sub_1408FC950(v25);
	v29 = (__m128)0x40400000u;
	v30 = _mm_mul_ps(v4, v4);
	v31 = (float)(v30.m128_f32[0] + _mm_shuffle_ps(v30, v30, 85).m128_f32[0]) + _mm_shuffle_ps(v30, v30, 170).m128_f32[0];
	v32 = fsqrt(v31);
	v29.m128_f32[0] = fmaxf(
		(float)((float)(3.0 - (float)((float)(v31 * (float)(1.0 / v32)) * (float)(1.0 / v32))) * 0.5)
		* (float)(1.0 / v32),
		0.0);
	v33 = _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0), v4);
	v34 = _mm_shuffle_ps(v33, v33, 85).m128_f32[0];
	v35 = _mm_shuffle_ps(v33, v33, 170).m128_f32[0];
	v51.m128_f32[0] = (float)((float)(v33.m128_f32[0] * v33.m128_f32[0]) * (float)(1.0 - v28)) + v28;
	v36 = (float)(v34 * v33.m128_f32[0]) * (float)(1.0 - v28);
	v51.m128_f32[1] = (float)(v35 * v27) + v36;
	v37 = (float)(v35 * v33.m128_f32[0]) * (float)(1.0 - v28);
	v53.m128_f32[0] = v36 - (float)(v35 * v27);
	v33.m128_f32[0] = v33.m128_f32[0] * v27;
	*(float*)&v25 = (float)(v35 * v34) * (float)(1.0 - v28);
	v51.m128_f32[2] = v37 - (float)(v34 * v27);
	v53.m128_f32[2] = v33.m128_f32[0] + *(float*)&v25;
	v53.m128_f32[1] = (float)((float)(v34 * v34) * (float)(1.0 - v28)) + v28;
	v55.m128_f32[0] = (float)(v34 * v27) + v37;
	v53.m128_i32[3] = 0;
	v55.m128_f32[1] = *(float*)&v25 - v33.m128_f32[0];
	v55.m128_u64[1] = COERCE_UNSIGNED_INT((float)((float)(v35 * v35) * (float)(1.0 - v28)) + v28);
	*a2 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v11, v11, 85), v53), _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v51)),
			_mm_mul_ps(_mm_shuffle_ps(v11, v11, 170), v55)),
		(__m128)xmmword_140B7AD00);
	v33.m128_i32[0] = sub_1408FE3D0(v26);
	v51.m128_i32[3] = 0;
	v38 = sub_1408FC950(v26);
	v39 = _mm_mul_ps(v11, v11);
	v40 = (float)(v39.m128_f32[0] + _mm_shuffle_ps(v39, v39, 85).m128_f32[0]) + _mm_shuffle_ps(v39, v39, 170).m128_f32[0];
	v41 = fsqrt(v40);
	v3.m128_f32[0] = fmaxf(
		(float)((float)(3.0 - (float)((float)(v40 * (float)(1.0 / v41)) * (float)(1.0 / v41))) * 0.5)
		* (float)(1.0 / v41),
		0.0);
	v42 = _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), v11);
	v43 = _mm_shuffle_ps(v42, v42, 85).m128_f32[0];
	v44 = _mm_shuffle_ps(v42, v42, 170).m128_f32[0];
	v51.m128_f32[0] = (float)((float)(v42.m128_f32[0] * v42.m128_f32[0]) * (float)(1.0 - v38)) + v38;
	v45 = (float)(v43 * v42.m128_f32[0]) * (float)(1.0 - v38);
	v51.m128_f32[1] = (float)(v44 * v33.m128_f32[0]) + v45;
	v46 = (float)(v44 * v42.m128_f32[0]) * (float)(1.0 - v38);
	*(float*)&v25 = (float)(v44 * v43) * (float)(1.0 - v38);
	v51.m128_f32[2] = v46 - (float)(v43 * v33.m128_f32[0]);
	v42.m128_f32[0] = v42.m128_f32[0] * v33.m128_f32[0];
	v55.m128_f32[0] = (float)(v43 * v33.m128_f32[0]) + v46;
	result = a2;
	v53.m128_f32[0] = v45 - (float)(v44 * v33.m128_f32[0]);
	v53.m128_u64[1] = COERCE_UNSIGNED_INT(v42.m128_f32[0] + *(float*)&v25);
	v53.m128_f32[1] = (float)((float)(v43 * v43) * (float)(1.0 - v38)) + v38;
	v55.m128_f32[1] = *(float*)&v25 - v42.m128_f32[0];
	v55.m128_u64[1] = COERCE_UNSIGNED_INT((float)((float)(v44 * v44) * (float)(1.0 - v38)) + v38);
	*a2 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 85), v53), _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 0), v51)),
			_mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 170), v55)),
		(__m128)xmmword_140B7AD00);
	v48 = _mm_mul_ps(*a3, *a3);
	v49 = _mm_shuffle_ps(v48, v48, 85);
	v49.m128_f32[0] = fsqrt((float)(v48.m128_f32[0] + v49.m128_f32[0]) + _mm_shuffle_ps(v48, v48, 170).m128_f32[0]);
	*a2 = _mm_mul_ps(*a2, _mm_shuffle_ps(v49, v49, 0));
	return result;
}
// 140B7A330: using guessed type __int128 xmmword_140B7A330;
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7A700: using guessed type __int128 xmmword_140B7A700;
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 14032CA60: using guessed type __m128 var_170;

