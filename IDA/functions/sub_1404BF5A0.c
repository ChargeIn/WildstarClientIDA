#include "../winhttp.h"

//----- (00000001404BF5A0) ----------------------------------------------------
__m128* __fastcall sub_1404BF5A0(__int64 a1, unsigned int* a2)
{
	__int64 v3; // rsi
	__m128* result; // rax
	__int64 v5; // r8
	__m128** v6; // r9
	__m128** v7; // rcx
	__int64 v8; // rbx
	double v9; // xmm6_8
	double v10; // xmm8_8
	double v11; // xmm7_8
	float v12; // xmm12_4
	float v13; // xmm11_4
	float v14; // xmm9_4
	float v15; // xmm10_4
	float v16; // xmm0_4
	float v17; // xmm5_4
	float v18; // xmm1_4
	float v19; // xmm10_4
	float v20; // xmm2_4
	float v21; // xmm11_4
	float v22; // xmm5_4
	float v23; // xmm4_4
	float v24; // xmm9_4
	float v25; // xmm3_4
	float v26; // xmm10_4
	float v27; // xmm9_4
	float v28; // xmm11_4
	unsigned __int64 v29; // r8
	__m128 v30; // xmm1
	__m128 v31; // xmm14
	__m128 v32; // xmm5
	__m128 v33; // xmm4
	float v34; // xmm2_4
	float v35; // xmm0_4
	__m128 v36; // xmm5
	__m128 v37; // xmm1
	float v38; // xmm2_4
	float v39; // xmm0_4
	__m128 v40; // xmm4
	__m128 v41; // xmm1
	float v42; // xmm2_4
	float v43; // xmm0_4
	__m128 v44; // xmm14
	float* v45; // rax
	unsigned __int64 v46; // rbx
	unsigned __int64 v47; // r8
	__int64 v48; // rcx
	__m128 v49; // [rsp+20h] [rbp-E0h] BYREF
	__m128 v50; // [rsp+30h] [rbp-D0h] BYREF
	__m128 v51; // [rsp+40h] [rbp-C0h]
	__m128 v52; // [rsp+50h] [rbp-B0h]
	__m128 v53; // [rsp+60h] [rbp-A0h]
	__int128 v54; // [rsp+70h] [rbp-90h] BYREF
	unsigned int v55; // [rsp+80h] [rbp-80h]
	unsigned int v56; // [rsp+84h] [rbp-7Ch]
	unsigned int v57; // [rsp+88h] [rbp-78h]
	int v58; // [rsp+8Ch] [rbp-74h]
	__m128 v59; // [rsp+90h] [rbp-70h] BYREF
	__m128 v60; // [rsp+A0h] [rbp-60h]
	__m128 v61; // [rsp+B0h] [rbp-50h]
	__m256 v62[2]; // [rsp+D0h] [rbp-30h] BYREF
	char v63[64]; // [rsp+110h] [rbp+10h] BYREF
	__m128 v64[4]; // [rsp+150h] [rbp+50h] BYREF
	__m128 v65[4]; // [rsp+190h] [rbp+90h] BYREF
	__m128* v66[2]; // [rsp+1D0h] [rbp+D0h] BYREF
	__m128 v67[4]; // [rsp+1E0h] [rbp+E0h] BYREF
	__int128 v68[6]; // [rsp+220h] [rbp+120h] BYREF

	v3 = **(_QWORD**)(a1 + 304);
	result = (__m128*)qword_140C659F0;
	v5 = *(_QWORD*)(qword_140C659F0 + 824);
	v6 = *(__m128***)(v5 + 16);
	v7 = *(__m128***)(v5 + 24);
	if (v6 != v7)
	{
		while (1)
		{
			result = *v6;
			if ((*v6)[11].m128_i32[3] == *(_DWORD*)(*(_QWORD*)(v3 + 296) + 20i64))
				break;
			if (++v6 == v7)
				return result;
		}
		v8 = (__int64)*v6;
		if (result)
		{
			*(_QWORD*)&v9 = a2[2];
			v54 = *(_OWORD*)(v3 + 512);
			*(_QWORD*)&v10 = *a2;
			*(_QWORD*)&v11 = a2[1];
			v55 = *(_DWORD*)(v3 + 528);
			v56 = *(_DWORD*)(v3 + 532);
			v57 = *(_DWORD*)(v3 + 536);
			v58 = *(_DWORD*)(v3 + 540);
			*(float*)&v9 = *(float*)&v9 * 0.5;
			v12 = sub_1408FE3D0(v9);
			*(float*)&v11 = *(float*)&v11 * 0.5;
			v13 = sub_1408FC950(v9);
			v14 = sub_1408FE3D0(v11);
			*(float*)&v10 = *(float*)&v10 * 0.5;
			LODWORD(v9) = sub_1408FC950(v11);
			v15 = sub_1408FE3D0(v10);
			v16 = sub_1408FC950(v10);
			v17 = v15 * *(float*)&v9;
			v18 = v12 * (float)(v15 * *(float*)&v9);
			v19 = v15 * v14;
			v20 = (float)(v13 * (float)(v16 * v14)) + v18;
			v49.m128_f32[0] = v20;
			v49.m128_f32[1] = (float)(v13 * v17) - (float)(v12 * (float)(v16 * v14));
			v49.m128_f32[2] = (float)(v12 * (float)(v16 * *(float*)&v9)) - (float)(v13 * v19);
			v49.m128_f32[3] = (float)(v12 * v19) + (float)(v13 * (float)(v16 * *(float*)&v9));
			v21 = _mm_shuffle_ps(v49, v49, 85).m128_f32[0];
			v50.m128_i32[3] = 0;
			v22 = v20 * (float)(v20 * 2.0);
			v23 = v20 * (float)(v21 * 2.0);
			*(float*)&v11 = _mm_shuffle_ps(v49, v49, 255).m128_f32[0];
			*(float*)&v10 = *(float*)&v11 * (float)(v21 * 2.0);
			*(float*)&v9 = v21 * (float)(v21 * 2.0);
			v24 = _mm_shuffle_ps(v49, v49, 170).m128_f32[0];
			v52.m128_i32[3] = 0;
			v25 = v24 * 2.0;
			v26 = *(float*)&v11 * (float)(v20 * 2.0);
			v27 = v24 * (float)(v24 * 2.0);
			*(float*)&v11 = *(float*)&v11 * v25;
			v50.m128_f32[0] = (float)(1.0 - *(float*)&v9) - v27;
			v28 = v21 * v25;
			v50.m128_f32[2] = (float)(v20 * v25) - *(float*)&v10;
			v50.m128_f32[1] = v23 + *(float*)&v11;
			v51.m128_u64[1] = COERCE_UNSIGNED_INT(v28 + v26);
			v51.m128_f32[1] = (float)(1.0 - v22) - v27;
			v51.m128_f32[0] = v23 - *(float*)&v11;
			v53 = (__m128)xmmword_140B7AD00;
			v52.m128_f32[0] = (float)(v20 * v25) + *(float*)&v10;
			v52.m128_f32[1] = v28 - v26;
			v66[0] = (__m128*)(v3 + 544);
			v52.m128_f32[2] = (float)(1.0 - v22) - *(float*)&v9;
			v66[1] = &v50;
			sub_1405B0600(v8, v62);
			sub_1401AFB10(v66, v67);
			v49.m128_u64[0] = (unsigned __int64)v67;
			v49.m128_u64[1] = v29;
			*(_QWORD*)&v68[0] = v67;
			*((_QWORD*)&v68[0] + 1) = v29;
			sub_1401AFB10((__m128**)v68, &v59);
			v30 = _mm_mul_ps(v61, v61);
			v31 = (__m128)0x40400000u;
			v32 = (__m128)0x40400000u;
			v33 = (__m128)0x40400000u;
			v34 = (float)(v30.m128_f32[0] + _mm_shuffle_ps(v30, v30, 85).m128_f32[0])
				+ _mm_shuffle_ps(v30, v30, 170).m128_f32[0];
			v35 = fsqrt(v34);
			v32.m128_f32[0] = fmaxf(
				(float)((float)(3.0 - (float)((float)(v34 * (float)(1.0 / v35)) * (float)(1.0 / v35))) * 0.5)
				* (float)(1.0 / v35),
				0.0);
			v36 = _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v61);
			v37 = _mm_mul_ps(v60, v60);
			v38 = (float)(v37.m128_f32[0] + _mm_shuffle_ps(v37, v37, 85).m128_f32[0])
				+ _mm_shuffle_ps(v37, v37, 170).m128_f32[0];
			v39 = fsqrt(v38);
			v33.m128_f32[0] = fmaxf(
				(float)((float)(3.0 - (float)((float)(v38 * (float)(1.0 / v39)) * (float)(1.0 / v39))) * 0.5)
				* (float)(1.0 / v39),
				0.0);
			v40 = _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), v60);
			v41 = _mm_mul_ps(v59, v59);
			v42 = (float)(v41.m128_f32[0] + _mm_shuffle_ps(v41, v41, 85).m128_f32[0])
				+ _mm_shuffle_ps(v41, v41, 170).m128_f32[0];
			v43 = fsqrt(v42);
			v31.m128_f32[0] = fmaxf(
				(float)((float)(3.0 - (float)((float)(v42 * (float)(1.0 / v43)) * (float)(1.0 / v43))) * 0.5)
				* (float)(1.0 / v43),
				0.0);
			v44 = _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v59);
			v50 = _mm_unpacklo_ps(
				_mm_unpacklo_ps(v44, _mm_shuffle_ps(v44, v44, 170)),
				_mm_unpacklo_ps(_mm_shuffle_ps(v44, v44, 85), (__m128)0i64));
			v51 = _mm_unpacklo_ps(
				_mm_unpacklo_ps(v40, _mm_shuffle_ps(v40, v40, 170)),
				_mm_unpacklo_ps(_mm_shuffle_ps(v40, v40, 85), (__m128)0i64));
			v52 = _mm_unpacklo_ps(
				_mm_unpacklo_ps(v36, _mm_shuffle_ps(v36, v36, 170)),
				_mm_unpacklo_ps(_mm_shuffle_ps(v36, v36, 85), (__m128)0i64));
			v53 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128)0i64, _mm_shuffle_ps((__m128)0i64, (__m128)0i64, 170)),
				_mm_unpacklo_ps(_mm_shuffle_ps((__m128)0i64, (__m128)0i64, 85), (__m128)0x3F800000u));
			v45 = sub_1401B1D60(v49.m128_f32, v50.m128_f32);
			v50.m128_u64[1] = 0i64;
			v54 = *(_OWORD*)v45;
			v51.m128_u64[0] = (unsigned __int64)&v54;
			v50.m128_i32[0] = v58;
			v51.m128_u64[1] = (unsigned __int64)&v49;
			v49 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v55, (__m128)v57), _mm_unpacklo_ps((__m128)v56, (__m128)0i64));
			v68[0] = v50.m128_u64[0];
			v68[1] = (__int128)v51;
			sub_1401B0590((int*)v68, (__int64)v63);
			v66[0] = (__m128*)(*(__int64(__fastcall**)(__int64, __m256*))(*(_QWORD*)v3 + 120i64))(v3, v62);
			sub_1401AFC20((__int64*)v66, (double*)v67[0].m128_u64);
			v49.m128_u64[0] = (unsigned __int64)v67;
			*(_QWORD*)&v68[0] = v67;
			v49.m128_u64[1] = (unsigned __int64)v63;
			*((_QWORD*)&v68[0] + 1) = v63;
			sub_1401AFB10((__m128**)v68, v64);
			(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)v3 + 40i64))(v3, v64);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 160i64))(a1);
			v46 = 1i64;
			v66[0] = (__m128*)(*(__int64(__fastcall**)(__int64, __m256*))(*(_QWORD*)v3 + 120i64))(v3, v62);
			(*(void(__fastcall**)(__int64, __m128*, __int64))(*(_QWORD*)v3 + 144i64))(v3, &v59, 1i64);
			sub_1401AFC20((__int64*)v66, (double*)v67[0].m128_u64);
			v49.m128_u64[0] = (unsigned __int64)v67;
			v49.m128_u64[1] = v47;
			*(_QWORD*)&v68[0] = v67;
			*((_QWORD*)&v68[0] + 1) = v47;
			result = sub_1401AFB10((__m128**)v68, v65);
			if (*(_QWORD*)(a1 + 312) > 1ui64)
			{
				do
				{
					v48 = *(_QWORD*)(*(_QWORD*)(a1 + 304) + 8 * v46);
					result = (__m128*)(*(__int64(__fastcall**)(__int64, __m128*))(*(_QWORD*)v48 + 40i64))(v48, v65);
					++v46;
				} while (v46 < *(_QWORD*)(a1 + 312));
			}
		}
	}
	return result;
}
// 1404BF93A: variable 'v29' is possibly undefined
// 1404BFC34: variable 'v47' is possibly undefined
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 1404BF5A0: using guessed type __m256 var_260[2];
// 1404BF5A0: using guessed type __m128 var_150[4];
// 1404BF5A0: using guessed type __m128 var_1E0[4];
// 1404BF5A0: using guessed type __m128 var_1A0[4];

