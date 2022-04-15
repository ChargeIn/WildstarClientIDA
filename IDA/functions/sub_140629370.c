//----- (0000000140629370) ----------------------------------------------------
void __fastcall sub_140629370(__m128* a1, float* a2)
{
	float v2; // xmm5_4
	__m128* v3; // rbx
	__m128 v5; // xmm7
	float v6; // xmm8_4
	float v7; // xmm9_4
	__m128 v8; // xmm12
	float v9; // xmm10_4
	float v10; // xmm6_4
	__m128 v11; // xmm11
	__m128 v12; // xmm3
	__m128 v13; // xmm2
	__int128 v14; // xmm9
	__int128 v15; // xmm10
	__m128 v16; // xmm7
	__m128 v17; // xmm6
	__m128 v18; // xmm8
	__int128 v19; // xmm11
	__m128 v20; // xmm15
	__int128 v21; // xmm13
	__m128 v22; // xmm0
	__m128 v23; // xmm1
	__m128 v24; // xmm0
	__m128 v25; // xmm1
	__m128 v26; // xmm12
	float v27; // xmm4_4
	float v28; // xmm5_4
	double v29; // xmm2_8
	__m128 v30; // xmm0
	__m128 v31; // xmm0
	__m128 v32; // xmm3
	__m128 v33; // xmm0
	__m128 v34; // xmm1
	unsigned __int64 v35; // rax
	int* v36; // rax
	int* v37; // rdi
	int v38; // ecx
	int* v39; // rax
	__int64 v40; // rsi
	int v41; // ebx
	unsigned int v42; // edi
	__int64 i; // rbx
	__int128* v44; // [rsp+38h] [rbp-D0h] BYREF
	__int128* v45; // [rsp+40h] [rbp-C8h]
	unsigned int v46; // [rsp+48h] [rbp-C0h] BYREF
	__m256 v47; // [rsp+58h] [rbp-B0h] BYREF
	__int128 v48; // [rsp+78h] [rbp-90h]
	__m128 v49; // [rsp+88h] [rbp-80h]
	int v50; // [rsp+98h] [rbp-70h] BYREF
	__int64 v51; // [rsp+9Ch] [rbp-6Ch]
	int* v52; // [rsp+A8h] [rbp-60h]
	__m128 v53[4]; // [rsp+B8h] [rbp-50h] BYREF
	__m128 v54[4]; // [rsp+F8h] [rbp-10h] BYREF
	__int128 v55; // [rsp+138h] [rbp+30h] BYREF
	__int128 v56; // [rsp+148h] [rbp+40h] BYREF
	__int128 v57; // [rsp+158h] [rbp+50h]
	__m128 v58; // [rsp+168h] [rbp+60h]
	__int128 v59; // [rsp+178h] [rbp+70h]
	__m128* v60; // [rsp+188h] [rbp+80h] BYREF
	__m256* v61; // [rsp+190h] [rbp+88h]
	__m128 v62[4]; // [rsp+198h] [rbp+90h] BYREF
	int v63; // [rsp+1D8h] [rbp+D0h]
	float v64; // [rsp+1DCh] [rbp+D4h]
	int v65; // [rsp+1E0h] [rbp+D8h]
	__int128 v66[4]; // [rsp+1E8h] [rbp+E0h] BYREF
	__m128* v67[10]; // [rsp+228h] [rbp+120h] BYREF

	v2 = a2[3];
	v3 = a1 + 17;
	v5 = (__m128)a1[17].m128_u32[0];
	v6 = a1[17].m128_f32[1];
	v7 = a1[17].m128_f32[2];
	v8 = (__m128)a1[17].m128_u32[3];
	v9 = a2[2];
	v10 = a2[1];
	v11 = v8;
	v12 = v8;
	v13 = v5;
	v11.m128_f32[0] = (float)((float)((float)(v8.m128_f32[0] * *a2) + (float)(v5.m128_f32[0] * v2)) + (float)(v6 * v9))
		- (float)(v7 * v10);
	v12.m128_f32[0] = (float)((float)((float)(v8.m128_f32[0] * v10) - (float)(v5.m128_f32[0] * v9)) + (float)(v6 * v2))
		+ (float)(v7 * *a2);
	v13.m128_f32[0] = (float)((float)((float)(v5.m128_f32[0] * v10) + (float)(v8.m128_f32[0] * v9)) - (float)(v6 * *a2))
		+ (float)(v7 * v2);
	v8.m128_f32[0] = (float)((float)((float)(v8.m128_f32[0] * v2) - (float)(v5.m128_f32[0] * *a2)) - (float)(v6 * v10))
		- (float)(v7 * v9);
	a1[17] = _mm_unpacklo_ps(_mm_unpacklo_ps(v11, v13), _mm_unpacklo_ps(v12, v8));
	v14 = *(_OWORD*)ymmword_140C78410.m256_f32;
	v15 = *(_OWORD*)&ymmword_140C78410.m256_f32[4];
	v16 = (__m128)a1[18].m128_u32[1];
	v17 = (__m128)a1[18].m128_u32[2];
	v18 = (__m128)a1[18].m128_u32[0];
	v19 = xmmword_140C78430;
	v47 = ymmword_140C78410;
	v48 = xmmword_140C78430;
	v21 = xmmword_140C78440;
	LODWORD(v55) = a1[19].m128_i32[0];
	v20 = (__m128)(unsigned int)v55;
	v44 = &v56;
	v22 = _mm_shuffle_ps(v20, v20, 0);
	v45 = (__int128*)&v47;
	v59 = xmmword_140C78440;
	v23 = _mm_mul_ps(*(__m128*)ymmword_140C78410.m256_f32, v22);
	v22.m128_f32[0] = a1[19].m128_f32[1];
	DWORD1(v55) = v22.m128_i32[0];
	v49 = _mm_unpacklo_ps(_mm_unpacklo_ps(v18, v17), _mm_unpacklo_ps(v16, (__m128)0x3F800000u));
	v56 = (__int128)v23;
	v24 = _mm_shuffle_ps(v22, v22, 0);
	DWORD2(v55) = a1[19].m128_i32[2];
	v25 = _mm_mul_ps(*(__m128*) & ymmword_140C78410.m256_f32[4], v24);
	v24.m128_f32[0] = *((float*)&v55 + 2);
	v57 = (__int128)v25;
	v60 = (__m128*) & v56;
	v58 = _mm_mul_ps((__m128)xmmword_140C78430, _mm_shuffle_ps(v24, v24, 0));
	v61 = &v47;
	sub_1401AFB10(&v60, v53);
	v26 = *v3;
	v57 = v19;
	v55 = v14;
	*(float*)&v19 = _mm_shuffle_ps(v26, v26, 85).m128_f32[0];
	*(float*)&v14 = _mm_shuffle_ps(v26, v26, 170).m128_f32[0];
	v58 = _mm_unpacklo_ps(_mm_unpacklo_ps(v18, v17), _mm_unpacklo_ps(v16, (__m128)0x3F800000u));
	v27 = *(float*)&v14 * 2.0;
	v56 = v15;
	v16.m128_f32[0] = _mm_shuffle_ps(v26, v26, 255).m128_f32[0];
	v17.m128_f32[0] = *(float*)&v19 * (float)(*(float*)&v19 * 2.0);
	*(float*)&v14 = *(float*)&v14 * (float)(*(float*)&v14 * 2.0);
	*(float*)&v15 = v16.m128_f32[0] * (float)(v26.m128_f32[0] * 2.0);
	v18.m128_f32[0] = v16.m128_f32[0] * (float)(*(float*)&v19 * 2.0);
	v16.m128_f32[0] = v16.m128_f32[0] * v27;
	v28 = v26.m128_f32[0] * (float)(v26.m128_f32[0] * 2.0);
	v13.m128_f32[0] = v26.m128_f32[0] * (float)(*(float*)&v19 * 2.0);
	v26.m128_f32[0] = v26.m128_f32[0] * v27;
	*(float*)&v19 = *(float*)&v19 * v27;
	v47.m256_f32[0] = (float)(1.0 - v17.m128_f32[0]) - *(float*)&v14;
	v66[3] = v21;
	v44 = v66;
	v47.m256_f32[3] = 0.0;
	v47.m256_f32[1] = v13.m128_f32[0] + v16.m128_f32[0];
	v47.m256_f32[4] = v13.m128_f32[0] - v16.m128_f32[0];
	v45 = (__int128*)&v47;
	v47.m256_f32[7] = 0.0;
	HIDWORD(v48) = 0;
	*(_QWORD*)&v29 = a1[19].m128_u32[2];
	v47.m256_f32[2] = v26.m128_f32[0] - v18.m128_f32[0];
	v47.m256_f32[5] = (float)(1.0 - v28) - *(float*)&v14;
	v30 = (__m128)xmmword_140B7AD00;
	v49 = (__m128)xmmword_140B7AD00;
	v47.m256_f32[6] = *(float*)&v19 + *(float*)&v15;
	v30.m128_f32[0] = v20.m128_f32[0];
	v31 = _mm_shuffle_ps(v30, v30, 0);
	v32 = _mm_mul_ps(*(__m128*)ymmword_140C78410.m256_f32, v31);
	v64 = a1[19].m128_f32[1];
	v31.m128_f32[0] = v64;
	v33 = _mm_shuffle_ps(v31, v31, 0);
	v66[0] = (__int128)v32;
	v34 = _mm_mul_ps(*(__m128*) & ymmword_140C78410.m256_f32[4], v33);
	v33.m128_f32[0] = *(float*)&v29;
	*(float*)&v48 = v26.m128_f32[0] + v18.m128_f32[0];
	v66[1] = (__int128)v34;
	*((float*)&v48 + 1) = *(float*)&v19 - *(float*)&v15;
	*((float*)&v48 + 2) = (float)(1.0 - v28) - v17.m128_f32[0];
	v66[2] = (__int128)_mm_mul_ps((__m128)xmmword_140C78430, _mm_shuffle_ps(v33, v33, 0));
	v63 = v20.m128_i32[0];
	v65 = LODWORD(v29);
	v61 = &v47;
	v60 = (__m128*)v66;
	sub_1401AFB10(&v60, v62);
	v44 = (__int128*)v62;
	v45 = &v55;
	v67[0] = v62;
	v67[1] = (__m128*) & v55;
	sub_1401AFB10(v67, v54);
	(*(void(__fastcall**)(__m128*, __m128*, __m128*))(a1->m128_u64[0] + 16))(a1, v53, v54);
	v35 = a1[16].m128_u64[0];
	if (v35 && *(_QWORD*)(v35 + 5872))
	{
		v51 = 8i64;
		v36 = sub_14018C320(0i64, 0x240ui64, 8u);
		*v36 = 2;
		v37 = v36;
		v36[2] = a1[18].m128_i32[0];
		v38 = a1[18].m128_i32[1];
		v52 = v36;
		v36[3] = v38;
		v36[4] = a1[18].m128_i32[2];
		v36[5] = 0;
		v39 = (int*)sub_1401B2FE0((__int64)&v44, v3);
		v37[18] = 14;
		v50 = 2;
		v37[20] = *v39;
		v37[21] = v39[1];
		v37[22] = v39[2];
		LODWORD(v39) = dword_140C636A8;
		v37[23] = 0;
		v40 = a1[16].m128_i64[0];
		v46 = (unsigned int)v39;
		if (*(_DWORD*)(v40 + 3408) || *(_DWORD*)(v40 + 128) == 18)
		{
			v41 = 0;
			while ((int)sub_1405B4AB0(v40, &v46, (unsigned int*)&v37[18 * v41], 0i64, 0i64) >= 0)
			{
				if ((unsigned int)++v41 >= 2)
				{
					v42 = v46;
					sub_1405B4F50(v40, v46);
					sub_1405B5070(v40, v42);
					sub_1405B82A0(v40, v42, v29);
					for (i = *(_QWORD*)(v40 + 3848); i; i = *(_QWORD*)(i + 3864))
						sub_1405B4EF0(i, v42, v29);
					break;
				}
			}
		}
		sub_14079A4F0((__int64)&v50);
		sub_14018B900((__int64)v52, 0);
	}
}
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C78410: using guessed type __m256 ymmword_140C78410;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 140629370: using guessed type __m128 var_280[4];
// 140629370: using guessed type __m128 var_1A0[4];
// 140629370: using guessed type __m128 var_240[4];

