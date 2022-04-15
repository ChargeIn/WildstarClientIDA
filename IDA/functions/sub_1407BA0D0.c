//----- (00000001407BA0D0) ----------------------------------------------------
__int64 __fastcall sub_1407BA0D0(__m128* a1, __m128* a2, __m128* a3, int a4, float a5, __m128* a6)
{
	__m128 v6; // xmm7
	__m128 v7; // xmm8
	__m128 v12; // xmm3
	__m128 v13; // xmm2
	float v14; // xmm0_4
	__m128 v15; // xmm1
	__m128 v16; // xmm3
	__m128 v17; // xmm9
	__m128 v18; // xmm1
	__m128 v19; // xmm6
	int v20; // eax
	__int64 v21; // rcx
	float v23; // xmm0_4
	__m128 v24; // xmm7
	float v25; // xmm0_4
	__m128 v26; // xmm6
	__m128 v27; // xmm9
	int v28; // edi
	__m128 v29; // xmm0
	__m128 v30; // xmm9
	__m128 v31; // xmm2
	float v32; // xmm2_4
	__m128 v33; // xmm7
	float v34; // xmm7_4
	int v35; // eax
	__m128 v36; // xmm3
	__m128 v37; // xmm2
	__m128 v38; // xmm1
	float v39; // xmm2_4
	float v40; // xmm1_4
	__m128 v41; // xmm2
	__m128 v42; // xmm1
	float v43; // xmm0_4
	__m128 v44; // xmm0
	__m128 v45; // [rsp+28h] [rbp-69h] BYREF
	__m128 v46; // [rsp+38h] [rbp-59h] BYREF
	__m128 v47; // [rsp+48h] [rbp-49h] BYREF
	__m128 v48[7]; // [rsp+58h] [rbp-39h] BYREF

	v7 = (__m128)0x40400000u;
	v45 = *a2;
	v12 = (__m128)0x40400000u;
	v45.m128_i32[1] = 0;
	v13 = _mm_mul_ps(v45, v45);
	v13.m128_f32[0] = (float)(v13.m128_f32[0] + _mm_shuffle_ps(v13, v13, 85).m128_f32[0])
		+ _mm_shuffle_ps(v13, v13, 170).m128_f32[0];
	v14 = 1.0 / fsqrt(v13.m128_f32[0]);
	v12.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v13.m128_f32[0] * v14) * v14)) * 0.5) * v14, 0.0);
	v15 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v45);
	v16 = _mm_shuffle_ps(v15, v15, 170);
	v15.m128_f32[0] = v15.m128_f32[0] * a1[29].m128_f32[0];
	v16.m128_f32[0] = v16.m128_f32[0] * a1[29].m128_f32[2];
	v17 = _mm_unpacklo_ps(_mm_unpacklo_ps(v15, v16), (__m128)0i64);
	v18 = (__m128)a1[29].m128_u32[1];
	v48[0] = v17;
	v18.m128_f32[0] = (float)(v18.m128_f32[0] * 2.0) * 0.33333334;
	v19 = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps(v18, (__m128)0i64));
	v45 = a1[4];
	v47 = v19;
	v46 = _mm_add_ps(v45, v19);
	sub_1407B64C0((__int64)a1, &v45, &v46, 16449);
	sub_1407B74E0((__int64)a1);
	v20 = sub_1407B80B0(a1, &v47);
	v21 = (__int64)a1;
	if (v20 && (sub_1407B93E0((__int64)a1), v23 = a1[72].m128_f32[0], v21 = (__int64)a1, v23 >= 0.0000099999997))
	{
		v48[5] = v6;
		v6.m128_f32[0] = v23;
		v24 = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), v19);
		v45 = _mm_add_ps(v45, v24);
		v47 = _mm_add_ps(v45, v17);
		sub_1407B64C0((__int64)a1, &v45, &v47, 16449);
		sub_1407B74E0((__int64)a1);
		if (!(unsigned int)sub_1407B80B0(a1, v48))
			goto LABEL_18;
		sub_1407B93E0((__int64)a1);
		v25 = a1[72].m128_f32[0];
		if (v25 < 0.0000099999997)
			goto LABEL_18;
		v19.m128_f32[0] = v25;
		v26 = _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v17);
		v27 = _mm_sub_ps((__m128)0i64, v24);
		v47 = v27;
		v45 = _mm_add_ps(v45, v26);
		v48[0] = _mm_add_ps(v45, v27);
		sub_1407B64C0((__int64)a1, &v45, v48, 16449);
		sub_1407B74E0((__int64)a1);
		v28 = 0;
		if ((unsigned int)sub_1407B80B0(a1, &v47))
			sub_1407B93E0((__int64)a1);
		else
			a1[72].m128_i32[0] = 0;
		v29 = (__m128)a1[72].m128_u32[0];
		if (v29.m128_f32[0] == 1.0)
			goto LABEL_18;
		v45 = _mm_add_ps(v45, _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0), v27));
		v30 = _mm_sub_ps(v45, a1[4]);
		v31 = _mm_mul_ps(v30, v30);
		v32 = fsqrt(
			(float)(v31.m128_f32[0] + _mm_shuffle_ps(v31, v31, 85).m128_f32[0])
			+ _mm_shuffle_ps(v31, v31, 170).m128_f32[0]);
		if (v32 < 0.0000099999997)
			goto LABEL_18;
		v33 = _mm_mul_ps(v26, v26);
		v34 = fsqrt(
			(float)(v33.m128_f32[0] + _mm_shuffle_ps(v33, v33, 85).m128_f32[0])
			+ _mm_shuffle_ps(v33, v33, 170).m128_f32[0])
			/ v32;
		if (v34 < a5)
			goto LABEL_18;
		sub_1407B64C0((__int64)a1, &v45, &v45, 16449);
		sub_1407B74E0((__int64)a1);
		sub_1407B8180((__int64)a1);
		sub_1407B89B0(a1, v48, a3);
		v35 = 0;
		v36 = _mm_sub_ps(*a3, v48[0]);
		v37 = _mm_mul_ps(v48[0], v48[0]);
		v38 = _mm_mul_ps(v36, v36);
		v39 = fsqrt(
			(float)(v37.m128_f32[0] + _mm_shuffle_ps(v37, v37, 85).m128_f32[0])
			+ _mm_shuffle_ps(v37, v37, 170).m128_f32[0]);
		v40 = fsqrt(
			(float)(v38.m128_f32[0] + _mm_shuffle_ps(v38, v38, 85).m128_f32[0])
			+ _mm_shuffle_ps(v38, v38, 170).m128_f32[0]);
		if (v39 > (float)(v40 * a1[17].m128_f32[1]) && a4)
			v28 = 1;
		LOBYTE(v35) = v39 > (float)(v40 * a1[17].m128_f32[0]);
		if (v35 || v28)
		{
		LABEL_18:
			sub_1407B64C0((__int64)a1, a1 + 4, a1 + 4, 16449);
			sub_1407B74E0((__int64)a1);
			sub_1407B8180((__int64)a1);
			return 0i64;
		}
		else
		{
			v41 = _mm_mul_ps(v30, v30);
			v41.m128_f32[0] = (float)(v41.m128_f32[0] + _mm_shuffle_ps(v41, v41, 85).m128_f32[0])
				+ _mm_shuffle_ps(v41, v41, 170).m128_f32[0];
			v42 = _mm_mul_ps(*a2, *a2);
			v43 = 1.0 / fsqrt(v41.m128_f32[0]);
			v7.m128_f32[0] = (float)((float)(3.0 - (float)((float)(v41.m128_f32[0] * v43) * v43)) * 0.5) * v43;
			v44 = _mm_shuffle_ps(v42, v42, 85);
			v7.m128_f32[0] = fmaxf(v7.m128_f32[0], 0.0);
			v44.m128_f32[0] = fsqrt((float)(v42.m128_f32[0] + v44.m128_f32[0]) + _mm_shuffle_ps(v42, v42, 170).m128_f32[0])
				* v34;
			*a6 = _mm_mul_ps(_mm_shuffle_ps(v44, v44, 0), _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), v30));
			sub_1407B8180((__int64)a1);
			return 1i64;
		}
	}
	else
	{
		sub_1407B8180(v21);
		return 0i64;
	}
}
// 1407BA0D0: could not find valid save-restore pair for xmm7
// 1407BA240: variable 'v6' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;

