//----- (00000001401AFF00) ----------------------------------------------------
float* __fastcall sub_1401AFF00(__int64 a1, __int64 a2)
{
	__int64 v2; // r8
	int* v3; // rax
	__m128* v4; // rcx
	int v5; // xmm0_4
	__m128 v6; // xmm11
	float v7; // xmm4_4
	float v8; // xmm10_4
	float v9; // xmm6_4
	float v10; // xmm8_4
	float v11; // xmm3_4
	float v12; // xmm9_4
	float v13; // xmm5_4
	float v14; // xmm7_4
	float v15; // xmm8_4
	float v16; // xmm6_4
	float v17; // xmm0_4
	float v18; // xmm10_4
	__m128 v19; // xmm2
	__m128 v20; // xmm4
	__m128 v21; // xmm3
	__m128 v22; // xmm1
	__m128 v23; // xmm0
	bool v24; // zf
	__m128 v25; // xmm2
	float v26; // xmm0_4
	float v27; // xmm0_4
	__m128* v28; // rdx
	__m128* v29; // rdx
	__m128* v30; // rdx
	float v31; // xmm0_4
	int v32; // ecx
	__m128* v33; // rax
	__m128 v34; // xmm11
	float* v35; // rax
	float v36; // xmm10_4
	float v37; // xmm6_4
	float v38; // xmm8_4
	float v39; // xmm5_4
	float v40; // xmm2_4
	float v41; // xmm9_4
	float v42; // xmm7_4
	float v43; // xmm3_4
	float v44; // xmm12_4
	float v45; // xmm8_4
	float v46; // xmm6_4
	float v47; // xmm10_4
	float v48; // xmm0_4
	float* result; // rax
	__m128* v50; // [rsp+28h] [rbp-E0h] BYREF
	__int128* v51; // [rsp+30h] [rbp-D8h]
	__m128 v52; // [rsp+38h] [rbp-D0h] BYREF
	__m128 v53; // [rsp+48h] [rbp-C0h]
	__m128 v54; // [rsp+58h] [rbp-B0h]
	__int128 v55; // [rsp+68h] [rbp-A0h]
	int v56; // [rsp+78h] [rbp-90h] BYREF
	__int64 v57; // [rsp+7Ch] [rbp-8Ch]
	__int64 v58; // [rsp+84h] [rbp-84h]
	int v59; // [rsp+8Ch] [rbp-7Ch]
	__int64 v60; // [rsp+90h] [rbp-78h]
	__int64 v61; // [rsp+98h] [rbp-70h]
	int v62; // [rsp+A0h] [rbp-68h]
	__int64 v63; // [rsp+A4h] [rbp-64h]
	__int64 v64; // [rsp+ACh] [rbp-5Ch]
	int v65; // [rsp+B4h] [rbp-54h]
	__int128 v66[4]; // [rsp+B8h] [rbp-50h] BYREF

	v2 = a1;
	v3 = *(int**)(a1 + 16);
	if (v3)
	{
		v4 = *(__m128**)(a1 + 8);
		if (v4)
		{
			v64 = 0i64;
			v63 = 0i64;
			v61 = 0i64;
			v60 = 0i64;
			v58 = 0i64;
			v57 = 0i64;
			v56 = *v3;
			v59 = v3[1];
			v5 = v3[2];
			v65 = 1065353216;
			v62 = v5;
			v6 = *v4;
			v53.m128_i32[3] = 0;
			v7 = v6.m128_f32[0] * (float)(v6.m128_f32[0] * 2.0);
			v8 = _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
			v9 = _mm_shuffle_ps(v6, v6, 255).m128_f32[0];
			v10 = _mm_shuffle_ps(v6, v6, 170).m128_f32[0];
			v11 = v10 * 2.0;
			v12 = v9 * (float)(v6.m128_f32[0] * 2.0);
			v13 = v8 * (float)(v8 * 2.0);
			v14 = v9 * (float)(v8 * 2.0);
			v15 = v10 * (float)(v10 * 2.0);
			v16 = v9 * v11;
			v52.m128_f32[0] = (float)(1.0 - v13) - v15;
			v17 = v6.m128_f32[0] * (float)(v8 * 2.0);
			v6.m128_f32[0] = v6.m128_f32[0] * v11;
			v18 = v8 * v11;
			v53.m128_f32[0] = v17 - v16;
			v52.m128_f32[1] = v17 + v16;
			v52.m128_u64[1] = COERCE_UNSIGNED_INT(v6.m128_f32[0] - v14);
			v53.m128_f32[1] = (float)(1.0 - v7) - v15;
			v54.m128_u64[1] = COERCE_UNSIGNED_INT((float)(1.0 - v7) - v13);
			v55 = xmmword_140B7AD00;
			v53.m128_f32[2] = v18 + v12;
			v54.m128_f32[0] = v6.m128_f32[0] + v14;
			v19 = _mm_unpacklo_ps(v52, v53);
			v20 = _mm_unpackhi_ps(v52, v53);
			v54.m128_f32[1] = v18 - v12;
			v21 = _mm_unpackhi_ps(v54, (__m128)xmmword_140B7AD00);
			v22 = _mm_unpacklo_ps(v54, (__m128)xmmword_140B7AD00);
			v23 = _mm_shuffle_ps(v19, v22, 68);
			v24 = *(_QWORD*)v2 == 0i64;
			v50 = (__m128*)a2;
			v25 = _mm_shuffle_ps(v19, v22, 238);
			if (v24)
			{
				*(__m128*)a2 = v23;
				*(__m128*)(a2 + 16) = v25;
				v51 = (__int128*)&v56;
				*(__m128*)(a2 + 32) = _mm_shuffle_ps(v20, v21, 68);
				*(__m128*)(a2 + 48) = _mm_shuffle_ps(v20, v21, 238);
				sub_1401AFB10(&v50, (__m128*)a2);
				v51 = (__int128*)&v52;
				v50 = v30;
				sub_1401AFB10(&v50, v30);
			}
			else
			{
				v66[0] = (__int128)v23;
				v66[1] = (__int128)v25;
				v66[2] = (__int128)_mm_shuffle_ps(v20, v21, 68);
				v66[3] = (__int128)_mm_shuffle_ps(v20, v21, 238);
				*(__m256*)a2 = ymmword_140C78390;
				*(_OWORD*)(a2 + 32) = xmmword_140C783B0;
				*(_OWORD*)(a2 + 48) = xmmword_140C783C0;
				v26 = *(float*)(a2 + 52);
				*(float*)(a2 + 48) = *(float*)(a2 + 48) - **(float**)v2;
				*(float*)(a2 + 52) = v26 - *(float*)(*(_QWORD*)v2 + 4i64);
				v27 = *(float*)(a2 + 56) - *(float*)(*(_QWORD*)v2 + 8i64);
				v51 = v66;
				*(float*)(a2 + 56) = v27;
				sub_1401AFB10(&v50, (__m128*)a2);
				v50 = v28;
				v51 = (__int128*)&v56;
				sub_1401AFB10(&v50, v28);
				v51 = (__int128*)&v52;
				v50 = v29;
				sub_1401AFB10(&v50, v29);
				*(float*)(a2 + 48) = **(float**)v2 + *(float*)(a2 + 48);
				*(float*)(a2 + 52) = *(float*)(*(_QWORD*)v2 + 4i64) + *(float*)(a2 + 52);
				*(float*)(a2 + 56) = *(float*)(*(_QWORD*)v2 + 8i64) + *(float*)(a2 + 56);
			}
		}
		else
		{
			v24 = *(_QWORD*)v2 == 0i64;
			*(_QWORD*)(a2 + 32) = 0i64;
			*(_QWORD*)(a2 + 24) = 0i64;
			*(_QWORD*)(a2 + 12) = 0i64;
			*(_QWORD*)(a2 + 4) = 0i64;
			if (v24)
			{
				*(_QWORD*)(a2 + 52) = 0i64;
				*(_QWORD*)(a2 + 44) = 0i64;
				*(_DWORD*)a2 = **(_DWORD**)(v2 + 16);
				*(_DWORD*)(a2 + 20) = *(_DWORD*)(*(_QWORD*)(v2 + 16) + 4i64);
				v32 = *(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64);
				*(_DWORD*)(a2 + 60) = 1065353216;
				*(_DWORD*)(a2 + 40) = v32;
			}
			else
			{
				*(_DWORD*)(a2 + 44) = 0;
				*(_DWORD*)a2 = **(_DWORD**)(v2 + 16);
				*(_DWORD*)(a2 + 20) = *(_DWORD*)(*(_QWORD*)(v2 + 16) + 4i64);
				*(_DWORD*)(a2 + 40) = *(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64);
				*(float*)(a2 + 48) = (float)(1.0 - **(float**)(v2 + 16)) * **(float**)v2;
				*(float*)(a2 + 52) = (float)(1.0 - *(float*)(*(_QWORD*)(v2 + 16) + 4i64)) * *(float*)(*(_QWORD*)v2 + 4i64);
				v31 = (float)(1.0 - *(float*)(*(_QWORD*)(v2 + 16) + 8i64)) * *(float*)(*(_QWORD*)v2 + 8i64);
				*(_DWORD*)(a2 + 60) = 1065353216;
				*(float*)(a2 + 56) = v31;
			}
		}
	}
	else
	{
		*(__m256*)a2 = ymmword_140C78390;
		*(_OWORD*)(a2 + 32) = xmmword_140C783B0;
		*(_OWORD*)(a2 + 48) = xmmword_140C783C0;
	}
	v33 = *(__m128**)(v2 + 32);
	if (v33)
	{
		v34 = *v33;
		v35 = *(float**)(v2 + 24);
		v50 = (__m128*)a2;
		v52.m128_i32[3] = 0;
		v36 = _mm_shuffle_ps(v34, v34, 85).m128_f32[0];
		v37 = _mm_shuffle_ps(v34, v34, 255).m128_f32[0];
		v38 = _mm_shuffle_ps(v34, v34, 170).m128_f32[0];
		v39 = v36 * (float)(v36 * 2.0);
		v40 = v34.m128_f32[0] * (float)(v36 * 2.0);
		v41 = v37 * (float)(v34.m128_f32[0] * 2.0);
		v42 = v37 * (float)(v36 * 2.0);
		v43 = v38 * 2.0;
		v44 = 1.0 - (float)(v34.m128_f32[0] * (float)(v34.m128_f32[0] * 2.0));
		v45 = v38 * (float)(v38 * 2.0);
		v46 = v37 * v43;
		v52.m128_f32[0] = (float)(1.0 - v39) - v45;
		v47 = v36 * v43;
		v52.m128_f32[2] = (float)(v34.m128_f32[0] * v43) - v42;
		v52.m128_f32[1] = v40 + v46;
		v53.m128_f32[0] = v40 - v46;
		v53.m128_f32[1] = v44 - v45;
		v53.m128_u64[1] = COERCE_UNSIGNED_INT(v47 + v41);
		v54.m128_f32[0] = (float)(v34.m128_f32[0] * v43) + v42;
		v55 = xmmword_140B7AD00;
		v54.m128_f32[1] = v47 - v41;
		v54.m128_u64[1] = COERCE_UNSIGNED_INT(v44 - v39);
		if (v35)
		{
			*(float*)(a2 + 48) = *(float*)(a2 + 48) - *v35;
			*(float*)(a2 + 52) = *(float*)(a2 + 52) - *(float*)(*(_QWORD*)(v2 + 24) + 4i64);
			v48 = *(float*)(a2 + 56) - *(float*)(*(_QWORD*)(v2 + 24) + 8i64);
			v51 = (__int128*)&v52;
			*(float*)(a2 + 56) = v48;
			sub_1401AFB10(&v50, (__m128*)a2);
			*(float*)(a2 + 48) = **(float**)(v2 + 24) + *(float*)(a2 + 48);
			*(float*)(a2 + 52) = *(float*)(*(_QWORD*)(v2 + 24) + 4i64) + *(float*)(a2 + 52);
			*(float*)(a2 + 56) = *(float*)(*(_QWORD*)(v2 + 24) + 8i64) + *(float*)(a2 + 56);
		}
		else
		{
			v51 = (__int128*)&v52;
			sub_1401AFB10(&v50, (__m128*)a2);
		}
	}
	result = *(float**)(v2 + 40);
	if (result)
	{
		*(float*)(a2 + 48) = *(float*)(a2 + 48) + *result;
		*(float*)(a2 + 52) = *(float*)(*(_QWORD*)(v2 + 40) + 4i64) + *(float*)(a2 + 52);
		result = *(float**)(v2 + 40);
		*(float*)(a2 + 56) = result[2] + *(float*)(a2 + 56);
	}
	return result;
}
// 1401B01A8: variable 'v28' is possibly undefined
// 1401B01C6: variable 'v29' is possibly undefined
// 1401B01D0: variable 'v2' is possibly undefined
// 1401B01D7: variable 'a2' is possibly undefined
// 1401B0242: variable 'v30' is possibly undefined
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;

