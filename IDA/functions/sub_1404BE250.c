#include "../winhttp.h"

//----- (00000001404BE250) ----------------------------------------------------
void __fastcall sub_1404BE250(_QWORD* a1, unsigned int* a2)
{
	__int64 v2; // rbx
	__int64 v5; // rcx
	__int64* v6; // rdx
	__int64* v7; // r8
	__int64 v8; // rdi
	double v9; // xmm6_8
	double v10; // xmm8_8
	double v11; // xmm7_8
	float v12; // xmm11_4
	float v13; // xmm10_4
	float v14; // xmm9_4
	float v15; // xmm0_4
	float v16; // xmm11_4
	float v17; // xmm9_4
	float v18; // xmm5_4
	float v19; // xmm4_4
	float v20; // xmm3_4
	float v21; // xmm10_4
	float v22; // xmm9_4
	float v23; // xmm11_4
	unsigned __int64 v24; // r8
	__m128 v25; // xmm1
	__m128 v26; // xmm14
	__m128 v27; // xmm5
	__m128 v28; // xmm4
	float v29; // xmm2_4
	float v30; // xmm0_4
	__m128 v31; // xmm5
	__m128 v32; // xmm1
	float v33; // xmm2_4
	float v34; // xmm0_4
	__m128 v35; // xmm4
	__m128 v36; // xmm1
	float v37; // xmm2_4
	float v38; // xmm0_4
	__m128 v39; // xmm14
	float* v40; // rax
	__m128 v41; // [rsp+20h] [rbp-E0h] BYREF
	__m128 v42; // [rsp+30h] [rbp-D0h] BYREF
	__m128 v43; // [rsp+40h] [rbp-C0h]
	__m128 v44; // [rsp+50h] [rbp-B0h]
	__m128 v45; // [rsp+60h] [rbp-A0h]
	__int128 v46; // [rsp+70h] [rbp-90h] BYREF
	unsigned int v47; // [rsp+80h] [rbp-80h]
	unsigned int v48; // [rsp+84h] [rbp-7Ch]
	unsigned int v49; // [rsp+88h] [rbp-78h]
	int v50; // [rsp+8Ch] [rbp-74h]
	__m128 v51; // [rsp+90h] [rbp-70h] BYREF
	__m128 v52; // [rsp+A0h] [rbp-60h]
	__m128 v53; // [rsp+B0h] [rbp-50h]
	char v54[64]; // [rsp+D0h] [rbp-30h] BYREF
	__m256 v55[2]; // [rsp+110h] [rbp+10h] BYREF
	__m128 v56[4]; // [rsp+150h] [rbp+50h] BYREF
	__m128* v57[2]; // [rsp+190h] [rbp+90h] BYREF
	__m128 v58[4]; // [rsp+1A0h] [rbp+A0h] BYREF
	__int128 v59[6]; // [rsp+1E0h] [rbp+E0h] BYREF

	v2 = a1[2];
	if (v2)
	{
		v5 = *(_QWORD*)(qword_140C659F0 + 824);
		v6 = *(__int64**)(v5 + 16);
		v7 = *(__int64**)(v5 + 24);
		if (v6 != v7)
		{
			while (*(_DWORD*)(*v6 + 188) != *(_DWORD*)(*(_QWORD*)(v2 + 296) + 20i64))
			{
				if (++v6 == v7)
					return;
			}
			v8 = *v6;
			if (*v6)
			{
				*(_QWORD*)&v9 = a2[2];
				v46 = *(_OWORD*)(v2 + 512);
				*(_QWORD*)&v10 = *a2;
				*(_QWORD*)&v11 = a2[1];
				v47 = *(_DWORD*)(v2 + 528);
				v48 = *(_DWORD*)(v2 + 532);
				v49 = *(_DWORD*)(v2 + 536);
				v50 = *(_DWORD*)(v2 + 540);
				*(float*)&v9 = *(float*)&v9 * 0.5;
				v12 = sub_1408FE3D0(v9);
				*(float*)&v11 = *(float*)&v11 * 0.5;
				v13 = sub_1408FC950(v9);
				v14 = sub_1408FE3D0(v11);
				*(float*)&v10 = *(float*)&v10 * 0.5;
				LODWORD(v9) = sub_1408FC950(v11);
				LODWORD(v11) = sub_1408FE3D0(v10);
				v15 = sub_1408FC950(v10);
				v41.m128_f32[0] = (float)((float)(v15 * v14) * v13) + (float)((float)(*(float*)&v11 * *(float*)&v9) * v12);
				v41.m128_f32[2] = (float)((float)(v15 * *(float*)&v9) * v12) - (float)((float)(*(float*)&v11 * v14) * v13);
				v41.m128_f32[1] = (float)((float)(*(float*)&v11 * *(float*)&v9) * v13) - (float)((float)(v15 * v14) * v12);
				v41.m128_f32[3] = (float)((float)(*(float*)&v11 * v14) * v12) + (float)((float)(v15 * *(float*)&v9) * v13);
				v16 = _mm_shuffle_ps(v41, v41, 85).m128_f32[0];
				v17 = _mm_shuffle_ps(v41, v41, 170).m128_f32[0];
				v42.m128_i32[3] = 0;
				v18 = v41.m128_f32[0] * (float)(v41.m128_f32[0] * 2.0);
				v19 = v41.m128_f32[0] * (float)(v16 * 2.0);
				*(float*)&v11 = _mm_shuffle_ps(v41, v41, 255).m128_f32[0];
				v20 = v17 * 2.0;
				*(float*)&v10 = *(float*)&v11 * (float)(v16 * 2.0);
				*(float*)&v9 = v16 * (float)(v16 * 2.0);
				v44.m128_i32[3] = 0;
				v21 = *(float*)&v11 * (float)(v41.m128_f32[0] * 2.0);
				v22 = v17 * (float)(v17 * 2.0);
				*(float*)&v11 = *(float*)&v11 * v20;
				v42.m128_f32[0] = (float)(1.0 - *(float*)&v9) - v22;
				v23 = v16 * v20;
				v42.m128_f32[1] = v19 + *(float*)&v11;
				v43.m128_f32[0] = v19 - *(float*)&v11;
				v42.m128_f32[2] = (float)(v41.m128_f32[0] * v20) - *(float*)&v10;
				v43.m128_f32[1] = (float)(1.0 - v18) - v22;
				v45 = (__m128)xmmword_140B7AD00;
				v43.m128_u64[1] = COERCE_UNSIGNED_INT(v23 + v21);
				v57[0] = (__m128*)(v2 + 544);
				v44.m128_f32[0] = (float)(v41.m128_f32[0] * v20) + *(float*)&v10;
				v44.m128_f32[1] = v23 - v21;
				v44.m128_f32[2] = (float)(1.0 - v18) - *(float*)&v9;
				v57[1] = &v42;
				sub_1405B0600(v8, v55);
				sub_1401AFB10(v57, v58);
				v41.m128_u64[0] = (unsigned __int64)v58;
				v41.m128_u64[1] = v24;
				*(_QWORD*)&v59[0] = v58;
				*((_QWORD*)&v59[0] + 1) = v24;
				sub_1401AFB10((__m128**)v59, &v51);
				v25 = _mm_mul_ps(v53, v53);
				v26 = (__m128)0x40400000u;
				v27 = (__m128)0x40400000u;
				v28 = (__m128)0x40400000u;
				v29 = (float)(v25.m128_f32[0] + _mm_shuffle_ps(v25, v25, 85).m128_f32[0])
					+ _mm_shuffle_ps(v25, v25, 170).m128_f32[0];
				v30 = fsqrt(v29);
				v27.m128_f32[0] = fmaxf(
					(float)((float)(3.0 - (float)((float)(v29 * (float)(1.0 / v30)) * (float)(1.0 / v30))) * 0.5)
					* (float)(1.0 / v30),
					0.0);
				v31 = _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), v53);
				v32 = _mm_mul_ps(v52, v52);
				v33 = (float)(v32.m128_f32[0] + _mm_shuffle_ps(v32, v32, 85).m128_f32[0])
					+ _mm_shuffle_ps(v32, v32, 170).m128_f32[0];
				v34 = fsqrt(v33);
				v28.m128_f32[0] = fmaxf(
					(float)((float)(3.0 - (float)((float)(v33 * (float)(1.0 / v34)) * (float)(1.0 / v34))) * 0.5)
					* (float)(1.0 / v34),
					0.0);
				v35 = _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v52);
				v36 = _mm_mul_ps(v51, v51);
				v37 = (float)(v36.m128_f32[0] + _mm_shuffle_ps(v36, v36, 85).m128_f32[0])
					+ _mm_shuffle_ps(v36, v36, 170).m128_f32[0];
				v38 = fsqrt(v37);
				v26.m128_f32[0] = fmaxf(
					(float)((float)(3.0 - (float)((float)(v37 * (float)(1.0 / v38)) * (float)(1.0 / v38))) * 0.5)
					* (float)(1.0 / v38),
					0.0);
				v39 = _mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), v51);
				v42 = _mm_unpacklo_ps(
					_mm_unpacklo_ps(v39, _mm_shuffle_ps(v39, v39, 170)),
					_mm_unpacklo_ps(_mm_shuffle_ps(v39, v39, 85), (__m128)0i64));
				v43 = _mm_unpacklo_ps(
					_mm_unpacklo_ps(v35, _mm_shuffle_ps(v35, v35, 170)),
					_mm_unpacklo_ps(_mm_shuffle_ps(v35, v35, 85), (__m128)0i64));
				v44 = _mm_unpacklo_ps(
					_mm_unpacklo_ps(v31, _mm_shuffle_ps(v31, v31, 170)),
					_mm_unpacklo_ps(_mm_shuffle_ps(v31, v31, 85), (__m128)0i64));
				v45 = _mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128)0i64, _mm_shuffle_ps((__m128)0i64, (__m128)0i64, 170)),
					_mm_unpacklo_ps(_mm_shuffle_ps((__m128)0i64, (__m128)0i64, 85), (__m128)0x3F800000u));
				v40 = sub_1401B1D60(v41.m128_f32, v42.m128_f32);
				v42.m128_u64[1] = 0i64;
				v46 = *(_OWORD*)v40;
				v43.m128_u64[0] = (unsigned __int64)&v46;
				v42.m128_i32[0] = v50;
				v43.m128_u64[1] = (unsigned __int64)&v41;
				v41 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v47, (__m128)v49), _mm_unpacklo_ps((__m128)v48, (__m128)0i64));
				v59[0] = v42.m128_u64[0];
				v59[1] = (__int128)v43;
				sub_1401B0590((int*)v59, (__int64)v54);
				v57[0] = (__m128*)(*(__int64(__fastcall**)(_QWORD, __m256*))(*(_QWORD*)a1[2] + 120i64))(a1[2], v55);
				sub_1401AFC20((__int64*)v57, (double*)v58[0].m128_u64);
				v41.m128_u64[0] = (unsigned __int64)v58;
				*(_QWORD*)&v59[0] = v58;
				v41.m128_u64[1] = (unsigned __int64)v54;
				*((_QWORD*)&v59[0] + 1) = v54;
				sub_1401AFB10((__m128**)v59, v56);
				(*(void(__fastcall**)(_QWORD, __m128*))(*(_QWORD*)a1[2] + 40i64))(a1[2], v56);
				(*(void(__fastcall**)(_QWORD*))(*a1 + 160i64))(a1);
			}
		}
	}
}
// 1404BE5EF: variable 'v24' is possibly undefined
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 1404BE250: using guessed type __m256 var_1E0[2];
// 1404BE250: using guessed type __m128 var_150[4];
// 1404BE250: using guessed type __m128 var_1A0[4];

