//----- (0000000140628D90) ----------------------------------------------------
void __fastcall sub_140628D90(__m128* a1, __m128* a2)
{
	__m128 v2; // xmm0
	__m128 v4; // xmm6
	__m128 v5; // xmm7
	__int128 v6; // xmm9
	__m128 v7; // xmm8
	__int128 v8; // xmm10
	__int128 v9; // xmm11
	__int128 v10; // xmm13
	__m128 v11; // xmm15
	float v12; // xmm2_4
	float v13; // xmm3_4
	__m128 v14; // xmm0
	__m128 v15; // xmm1
	__m128 v16; // xmm0
	__m128 v17; // xmm1
	__m128 v18; // xmm12
	float v19; // xmm4_4
	float v20; // xmm14_4
	float v21; // xmm2_4
	double v22; // xmm2_8
	__m128 v23; // xmm0
	__m128 v24; // xmm0
	__m128 v25; // xmm3
	__m128 v26; // xmm0
	__m128 v27; // xmm1
	unsigned __int64 v28; // rax
	int* v29; // rax
	int* v30; // rdi
	__int32 v31; // ecx
	int* v32; // rax
	__int64 v33; // rsi
	int v34; // ebx
	unsigned int v35; // edi
	__int64 i; // rbx
	__m128* v37; // [rsp+38h] [rbp-D0h] BYREF
	__int128* v38; // [rsp+40h] [rbp-C8h]
	unsigned int v39; // [rsp+48h] [rbp-C0h] BYREF
	__int128 v40; // [rsp+58h] [rbp-B0h] BYREF
	__int128 v41; // [rsp+68h] [rbp-A0h]
	__int128 v42; // [rsp+78h] [rbp-90h]
	__m128 v43; // [rsp+88h] [rbp-80h]
	int v44; // [rsp+98h] [rbp-70h] BYREF
	__int64 v45; // [rsp+9Ch] [rbp-6Ch]
	int* v46; // [rsp+A8h] [rbp-60h]
	__m128 v47[4]; // [rsp+B8h] [rbp-50h] BYREF
	__m128 v48[4]; // [rsp+F8h] [rbp-10h] BYREF
	__int128 v49; // [rsp+138h] [rbp+30h] BYREF
	__int128 v50; // [rsp+148h] [rbp+40h] BYREF
	__int128 v51; // [rsp+158h] [rbp+50h]
	__m128 v52; // [rsp+168h] [rbp+60h]
	__int128 v53; // [rsp+178h] [rbp+70h]
	__m128* v54; // [rsp+188h] [rbp+80h] BYREF
	__int128* v55; // [rsp+190h] [rbp+88h]
	__m128 v56[4]; // [rsp+198h] [rbp+90h] BYREF
	int v57; // [rsp+1D8h] [rbp+D0h]
	int v58; // [rsp+1DCh] [rbp+D4h]
	int v59; // [rsp+1E0h] [rbp+D8h]
	__int128 v60[4]; // [rsp+1E8h] [rbp+E0h] BYREF
	__m128* v61[10]; // [rsp+228h] [rbp+120h] BYREF

	v2 = *a2;
	v37 = (__m128*) & v50;
	a1[18] = _mm_add_ps(v2, a1[18]);
	v4 = (__m128)a1[18].m128_u32[2];
	v5 = (__m128)a1[18].m128_u32[1];
	v38 = &v40;
	v6 = *(_OWORD*)ymmword_140C78410.m256_f32;
	v7 = (__m128)a1[18].m128_u32[0];
	v8 = *(_OWORD*)&ymmword_140C78410.m256_f32[4];
	v9 = xmmword_140C78430;
	v10 = xmmword_140C78440;
	v40 = *(_OWORD*)ymmword_140C78410.m256_f32;
	v12 = a1[19].m128_f32[1];
	LODWORD(v49) = a1[19].m128_i32[0];
	v11 = (__m128)(unsigned int)v49;
	v43 = _mm_unpacklo_ps(_mm_unpacklo_ps(v7, v4), _mm_unpacklo_ps(v5, (__m128)0x3F800000u));
	v13 = a1[19].m128_f32[2];
	*(_QWORD*)((char*)&v49 + 4) = __PAIR64__(LODWORD(v13), LODWORD(v12));
	v14 = _mm_shuffle_ps(v11, v11, 0);
	v41 = *(_OWORD*)&ymmword_140C78410.m256_f32[4];
	v42 = xmmword_140C78430;
	v15 = _mm_mul_ps(*(__m128*)ymmword_140C78410.m256_f32, v14);
	v14.m128_f32[0] = v12;
	v16 = _mm_shuffle_ps(v14, v14, 0);
	v50 = (__int128)v15;
	v53 = xmmword_140C78440;
	v17 = _mm_mul_ps(*(__m128*) & ymmword_140C78410.m256_f32[4], v16);
	v16.m128_f32[0] = v13;
	v51 = (__int128)v17;
	v54 = v37;
	v52 = _mm_mul_ps((__m128)xmmword_140C78430, _mm_shuffle_ps(v16, v16, 0));
	v55 = &v40;
	sub_1401AFB10(&v54, v47);
	v18 = a1[17];
	v49 = v6;
	v50 = v8;
	v52 = _mm_unpacklo_ps(_mm_unpacklo_ps(v7, v4), _mm_unpacklo_ps(v5, (__m128)0x3F800000u));
	v51 = v9;
	v57 = v11.m128_i32[0];
	HIDWORD(v40) = 0;
	v37 = (__m128*)v60;
	HIDWORD(v41) = 0;
	*(float*)&v9 = _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
	*(float*)&v6 = _mm_shuffle_ps(v18, v18, 170).m128_f32[0];
	v5.m128_f32[0] = _mm_shuffle_ps(v18, v18, 255).m128_f32[0];
	HIDWORD(v42) = 0;
	v38 = &v40;
	v19 = *(float*)&v6 * 2.0;
	*(float*)&v8 = v5.m128_f32[0] * (float)(v18.m128_f32[0] * 2.0);
	v60[3] = v10;
	v20 = 1.0 - (float)(v18.m128_f32[0] * (float)(v18.m128_f32[0] * 2.0));
	v21 = v18.m128_f32[0] * (float)(*(float*)&v9 * 2.0);
	v4.m128_f32[0] = *(float*)&v9 * (float)(*(float*)&v9 * 2.0);
	v7.m128_f32[0] = v5.m128_f32[0] * (float)(*(float*)&v9 * 2.0);
	*(float*)&v6 = *(float*)&v6 * (float)(*(float*)&v6 * 2.0);
	v5.m128_f32[0] = v5.m128_f32[0] * v19;
	*(float*)&v40 = (float)(1.0 - v4.m128_f32[0]) - *(float*)&v6;
	*(float*)&v9 = *(float*)&v9 * v19;
	*((float*)&v40 + 2) = (float)(v18.m128_f32[0] * v19) - v7.m128_f32[0];
	*((float*)&v40 + 1) = v21 + v5.m128_f32[0];
	*(float*)&v41 = v21 - v5.m128_f32[0];
	*(_QWORD*)&v22 = a1[19].m128_u32[2];
	*((float*)&v41 + 2) = *(float*)&v9 + *(float*)&v8;
	v17.m128_i32[0] = a1[19].m128_i32[1];
	*((float*)&v41 + 1) = v20 - *(float*)&v6;
	v23 = (__m128)xmmword_140B7AD00;
	v43 = (__m128)xmmword_140B7AD00;
	v58 = v17.m128_i32[0];
	v23.m128_f32[0] = v11.m128_f32[0];
	v24 = _mm_shuffle_ps(v23, v23, 0);
	v25 = _mm_mul_ps(*(__m128*)ymmword_140C78410.m256_f32, v24);
	v24.m128_f32[0] = v17.m128_f32[0];
	*(float*)&v42 = (float)(v18.m128_f32[0] * v19) + v7.m128_f32[0];
	*((float*)&v42 + 1) = *(float*)&v9 - *(float*)&v8;
	v26 = _mm_shuffle_ps(v24, v24, 0);
	v60[0] = (__int128)v25;
	v27 = _mm_mul_ps(*(__m128*) & ymmword_140C78410.m256_f32[4], v26);
	v26.m128_f32[0] = *(float*)&v22;
	*((float*)&v42 + 2) = v20 - v4.m128_f32[0];
	v59 = LODWORD(v22);
	v60[1] = (__int128)v27;
	v54 = (__m128*)v60;
	v60[2] = (__int128)_mm_mul_ps((__m128)xmmword_140C78430, _mm_shuffle_ps(v26, v26, 0));
	v55 = &v40;
	sub_1401AFB10(&v54, v56);
	v37 = v56;
	v61[0] = v56;
	v38 = &v49;
	v61[1] = (__m128*) & v49;
	sub_1401AFB10(v61, v48);
	(*(void(__fastcall**)(__m128*, __m128*, __m128*))(a1->m128_u64[0] + 16))(a1, v47, v48);
	v28 = a1[16].m128_u64[0];
	if (v28 && *(_QWORD*)(v28 + 5872))
	{
		v45 = 8i64;
		v29 = sub_14018C320(0i64, 0x240ui64, 8u);
		*v29 = 2;
		v30 = v29;
		v29[2] = a1[18].m128_i32[0];
		v31 = a1[18].m128_i32[1];
		v46 = v29;
		v29[3] = v31;
		v29[4] = a1[18].m128_i32[2];
		v29[5] = 0;
		v32 = (int*)sub_1401B2FE0((__int64)&v37, a1 + 17);
		v30[18] = 14;
		v44 = 2;
		v30[20] = *v32;
		v30[21] = v32[1];
		v30[22] = v32[2];
		LODWORD(v32) = dword_140C636A8;
		v30[23] = 0;
		v33 = a1[16].m128_i64[0];
		v39 = (unsigned int)v32;
		if (*(_DWORD*)(v33 + 3408) || *(_DWORD*)(v33 + 128) == 18)
		{
			v34 = 0;
			while ((int)sub_1405B4AB0(v33, &v39, (unsigned int*)&v30[18 * v34], 0i64, 0i64) >= 0)
			{
				if ((unsigned int)++v34 >= 2)
				{
					v35 = v39;
					sub_1405B4F50(v33, v39);
					sub_1405B5070(v33, v35);
					sub_1405B82A0(v33, v35, v22);
					for (i = *(_QWORD*)(v33 + 3848); i; i = *(_QWORD*)(i + 3864))
						sub_1405B4EF0(i, v35, v22);
					break;
				}
			}
		}
		sub_14079A4F0((__int64)&v44);
		sub_14018B900((__int64)v46, 0);
	}
}
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C78410: using guessed type __m256 ymmword_140C78410;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 140628D90: using guessed type __m128 var_280[4];
// 140628D90: using guessed type __m128 var_1A0[4];
// 140628D90: using guessed type __m128 var_240[4];

