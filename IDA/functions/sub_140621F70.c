//----- (0000000140621F70) ----------------------------------------------------
void __fastcall sub_140621F70(__m128* a1)
{
	unsigned __int64 v2; // rcx
	__m128 v3; // xmm2
	__m128 v4; // xmm1
	__m128 v5; // xmm3
	__m128 v6; // xmm12
	__m128 v7; // xmm1
	__m128 v8; // xmm13
	__m128 v9; // xmm1
	float v10; // xmm2_4
	float v11; // xmm0_4
	__m128 v12; // xmm13
	__m128 v13; // xmm3
	__m128 v14; // xmm2
	__m128 v15; // xmm6
	__m128 v16; // xmm0
	double v17; // xmm0_8
	double v18; // xmm8_8
	__m128 v19; // xmm3
	__m128 v20; // xmm1
	float v21; // xmm2_4
	float v22; // xmm0_4
	__m128 v23; // xmm3
	__m128 v24; // xmm2
	float v25; // xmm0_4
	__m128 v26; // xmm12
	float v27; // xmm6_4
	float v28; // xmm0_4
	float v29; // xmm4_4
	float v30; // xmm5_4
	__m128 v31; // xmm8
	float v32; // xmm10_4
	__m128 v33; // xmm7
	__m128 v34; // xmm3
	float v35; // xmm9_4
	float v36; // xmm11_4
	float v37; // xmm11_4
	float v38; // xmm6_4
	__m128 v39; // xmm2
	float v40; // xmm0_4
	__m128 v41; // xmm12
	float v42; // xmm11_4
	float v43; // xmm9_4
	float v44; // xmm4_4
	float v45; // xmm5_4
	float v46; // xmm10_4
	float v47; // xmm6_4
	float v48; // xmm9_4
	float v49; // xmm11_4
	int v50; // xmm0_4
	unsigned __int64 v51; // rcx
	unsigned __int64 v52; // rbx
	__m128 v53; // xmm6
	__m128 v54; // xmm0
	__m128 v55; // xmm2
	int v56[2]; // [rsp+20h] [rbp-89h] BYREF
	__int64 v57; // [rsp+28h] [rbp-81h]
	int v58; // [rsp+30h] [rbp-79h]
	__int64 v59; // [rsp+34h] [rbp-75h]
	int v60; // [rsp+3Ch] [rbp-6Dh]
	int v61[16]; // [rsp+40h] [rbp-69h] BYREF

	v2 = a1[5].m128_u64[0];
	if (v2
		&& (*(unsigned int(__fastcall**)(unsigned __int64, __int64))(*(_QWORD*)v2 + 408i64))(v2, 150i64)
		&& (*(unsigned int(__fastcall**)(unsigned __int64, __int64))(*(_QWORD*)a1[5].m128_u64[0] + 848i64))(
			a1[5].m128_u64[0],
			67i64))
	{
		if (a1[56].m128_i32[3]
			|| (v3 = _mm_sub_ps(a1[22], a1[27]),
				v4 = _mm_mul_ps(v3, v3),
				(float)((float)(v4.m128_f32[0] + _mm_shuffle_ps(v4, v4, 85).m128_f32[0])
					+ _mm_shuffle_ps(v4, v4, 170).m128_f32[0]) > a1[41].m128_f32[0]))
		{
			v5 = _mm_sub_ps(a1[27], a1[29]);
			v6 = (__m128)0x40400000u;
			v7 = _mm_mul_ps(v5, v5);
			v8 = (__m128)0x40400000u;
			if ((float)((float)(v7.m128_f32[0] + _mm_shuffle_ps(v7, v7, 85).m128_f32[0])
				+ _mm_shuffle_ps(v7, v7, 170).m128_f32[0]) <= *(float*)&dword_140C4A8A8)
				v5 = _mm_sub_ps(a1[22], a1[21]);
			v9 = _mm_mul_ps(v5, v5);
			v10 = (float)(v9.m128_f32[0] + _mm_shuffle_ps(v9, v9, 85).m128_f32[0]) + _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
			v11 = fsqrt(v10);
			v8.m128_f32[0] = fmaxf(
				(float)((float)(3.0 - (float)((float)(v10 * (float)(1.0 / v11)) * (float)(1.0 / v11))) * 0.5)
				* (float)(1.0 / v11),
				0.0);
			v12 = _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), v5);
			v13 = a1[39];
			v14 = _mm_mul_ps(v12, v13);
			v15 = _mm_sub_ps(
				_mm_mul_ps(_mm_shuffle_ps(v12, v12, 210), _mm_shuffle_ps(v13, v13, 201)),
				_mm_mul_ps(_mm_shuffle_ps(v12, v12, 201), _mm_shuffle_ps(v13, v13, 210)));
			v16 = _mm_mul_ps(v15, v15);
			v16.m128_f32[0] = fsqrt(
				(float)(v16.m128_f32[0] + _mm_shuffle_ps(v16, v16, 85).m128_f32[0])
				+ _mm_shuffle_ps(v16, v16, 170).m128_f32[0]);
			v17 = sub_1408FCF3C(*(double*)v16.m128_u64);
			if ((float)((float)(v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 85).m128_f32[0])
				+ _mm_shuffle_ps(v14, v14, 170).m128_f32[0]) <= 0.0)
			{
				HIDWORD(v18) = 0;
				*(float*)&v18 = 3.1415927 - *(float*)&v17;
			}
			else
			{
				v18 = v17;
			}
			v19 = (__m128)0x40400000u;
			*(float*)&v18 = *(float*)&v18 * 0.5;
			v20 = _mm_mul_ps(v15, v15);
			v21 = (float)(v20.m128_f32[0] + _mm_shuffle_ps(v20, v20, 85).m128_f32[0])
				+ _mm_shuffle_ps(v20, v20, 170).m128_f32[0];
			v22 = fsqrt(v21);
			v19.m128_f32[0] = fmaxf(
				(float)((float)(3.0 - (float)((float)(v21 * (float)(1.0 / v22)) * (float)(1.0 / v22))) * 0.5)
				* (float)(1.0 / v22),
				0.0);
			v23 = _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v15);
			v24 = _mm_mul_ps(v23, v23);
			v24.m128_f32[0] = (float)(v24.m128_f32[0] + _mm_shuffle_ps(v24, v24, 85).m128_f32[0])
				+ _mm_shuffle_ps(v24, v24, 170).m128_f32[0];
			v25 = 1.0 / fsqrt(v24.m128_f32[0]);
			v6.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v24.m128_f32[0] * v25) * v25)) * 0.5) * v25, 0.0);
			v26 = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), v23);
			sub_1408FE3D0(v18);
			v27 = *(float*)&v18;
			v28 = sub_1408FC950(v18);
			v29 = a1[40].m128_f32[0];
			v30 = a1[40].m128_f32[1];
			v31 = (__m128)a1[40].m128_u32[3];
			v32 = v28;
			v33 = (__m128)LODWORD(v29);
			v34 = (__m128)LODWORD(v30);
			v35 = v26.m128_f32[0] * v27;
			v36 = _mm_shuffle_ps(v26, v26, 85).m128_f32[0];
			v26.m128_f32[0] = _mm_shuffle_ps(v26, v26, 170).m128_f32[0] * v27;
			v37 = v36 * v27;
			v38 = a1[40].m128_f32[2];
			v39 = (__m128)LODWORD(v38);
			v33.m128_f32[0] = (float)((float)((float)(v29 * v28) + (float)(a1[40].m128_f32[3] * v35)) + (float)(v38 * v37))
				- (float)(v30 * v26.m128_f32[0]);
			v34.m128_f32[0] = (float)((float)((float)(v30 * v28) - (float)(v38 * v35)) + (float)(a1[40].m128_f32[3] * v37))
				+ (float)(v29 * v26.m128_f32[0]);
			v39.m128_f32[0] = (float)(v38 * v28) + (float)(v30 * v35);
			v40 = a1[40].m128_f32[3];
			v61[3] = 0;
			v61[7] = 0;
			v61[11] = 0;
			v61[15] = 1065353216;
			v39.m128_f32[0] = (float)(v39.m128_f32[0] - (float)(v29 * v37)) + (float)(v40 * v26.m128_f32[0]);
			v31.m128_f32[0] = (float)((float)((float)(v31.m128_f32[0] * v32) - (float)(v29 * v35)) - (float)(v30 * v37))
				- (float)(v38 * v26.m128_f32[0]);
			v41 = _mm_unpacklo_ps(_mm_unpacklo_ps(v33, v39), _mm_unpacklo_ps(v34, v31));
			a1[40] = v41;
			v42 = _mm_shuffle_ps(v41, v41, 85).m128_f32[0];
			v33.m128_f32[0] = _mm_shuffle_ps(v41, v41, 255).m128_f32[0];
			v43 = _mm_shuffle_ps(v41, v41, 170).m128_f32[0];
			v44 = v43 * 2.0;
			v45 = v41.m128_f32[0] * (float)(v41.m128_f32[0] * 2.0);
			v39.m128_f32[0] = v41.m128_f32[0] * (float)(v42 * 2.0);
			v46 = v33.m128_f32[0] * (float)(v41.m128_f32[0] * 2.0);
			v31.m128_f32[0] = v33.m128_f32[0] * (float)(v42 * 2.0);
			v47 = v42 * (float)(v42 * 2.0);
			v48 = v43 * (float)(v43 * 2.0);
			v33.m128_f32[0] = v33.m128_f32[0] * v44;
			*(float*)v61 = (float)(1.0 - v47) - v48;
			v49 = v42 * v44;
			*(float*)&v61[2] = (float)(v41.m128_f32[0] * v44) - v31.m128_f32[0];
			*(float*)&v61[1] = v39.m128_f32[0] + v33.m128_f32[0];
			*(float*)&v61[6] = v49 + v46;
			v20.m128_i32[0] = a1[22].m128_i32[1];
			*(float*)&v61[5] = (float)(1.0 - v45) - v48;
			v61[12] = a1[22].m128_i32[0];
			*(float*)&v61[4] = v39.m128_f32[0] - v33.m128_f32[0];
			*(float*)&v61[8] = (float)(v41.m128_f32[0] * v44) + v31.m128_f32[0];
			*(float*)&v61[9] = v49 - v46;
			*(float*)&v61[10] = (float)(1.0 - v45) - v47;
			v50 = a1[22].m128_i32[2];
			a1[39] = v12;
			v51 = a1[5].m128_u64[0];
			v61[13] = v20.m128_i32[0];
			v61[14] = v50;
			(*(void(__fastcall**)(unsigned __int64, int*))(*(_QWORD*)v51 + 72i64))(v51, v61);
			v52 = a1[5].m128_u64[0];
			v56[0] = 150;
			v57 = 1065353216i64;
			v56[1] = sub_1401AE6F0(0, -1);
			v59 = 3i64;
			v58 = 0;
			v60 = 0;
			(*(void(__fastcall**)(unsigned __int64, _QWORD, int*))(*(_QWORD*)v52 + 584i64))(v52, 0i64, v56);
			v53 = a1[23];
			(*(void(__fastcall**)(unsigned __int64, __int64, __m128*))(*(_QWORD*)a1[5].m128_u64[0] + 872i64))(
				a1[5].m128_u64[0],
				67i64,
				a1 + 23);
			a1[24] = _mm_sub_ps(a1[23], v53);
		}
	}
	else
	{
		v54 = a1[22];
		v55 = a1[23];
		a1[23] = v54;
		a1[24] = _mm_sub_ps(v54, v55);
	}
}
// 140C4A8A8: using guessed type int dword_140C4A8A8;

