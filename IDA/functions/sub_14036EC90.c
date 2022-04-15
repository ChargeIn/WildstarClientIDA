#include "../winhttp.h"

//----- (000000014036EC90) ----------------------------------------------------
__int64 __fastcall sub_14036EC90(__int64 a1, __m128* a2, _OWORD* a3, __int64 a4, unsigned __int64 a5)
{
	unsigned __int64 v5; // rdi
	float* v7; // r14
	__m128 v9; // xmm0
	__m128 v10; // xmm0
	__m128 v11; // xmm3
	__m128 v12; // xmm2
	__m128 v13; // xmm5
	__m128 v14; // xmm4
	__m128 v15; // xmm3
	__m128 v16; // xmm2
	__m128* v17; // r10
	__int64 v18; // r9
	__m128* v19; // r8
	__m128 v20; // xmm4
	__m128 v21; // xmm5
	__m128 v22; // xmm6
	__m128 v23; // xmm7
	float* v24; // rax
	__m128 v25; // xmm2
	__int64 v26; // rcx
	__m128* v27; // rax
	__int64 v28; // rdx
	__m128 v29; // xmm3
	__m128 v30; // xmm2
	__m128** v31; // rax
	__int128 v32; // xmm0
	float v33; // xmm1_4
	float v34; // xmm2_4
	unsigned int v35; // xmm0_4
	unsigned int v36; // xmm1_4
	__m128 v37; // xmm2
	__m128 v38; // xmm3
	float v39; // xmm0_4
	float v40; // xmm2_4
	float v41; // xmm1_4
	__m128 v42; // xmm2
	__m128 v43; // xmm3
	__int64 result; // rax
	__int128 v45; // [rsp+28h] [rbp-71h]
	__int128 v46; // [rsp+38h] [rbp-61h]
	__m128* v47; // [rsp+48h] [rbp-51h] BYREF
	__int64 v48; // [rsp+50h] [rbp-49h]

	v5 = a5;
	*(__m128*)(a1 + 960) = *a2;
	v7 = (float*)(a1 + 1280);
	*(__m128*)(a1 + 976) = a2[1];
	v9 = a2[2];
	v47 = (__m128*)a4;
	*(__m128*)(a1 + 992) = v9;
	v10 = a2[3];
	*(__m128*)(a1 + 1008) = v10;
	v11 = *(__m128*)(a1 + 960);
	v12 = *(__m128*)(a1 + 992);
	v13 = _mm_unpackhi_ps(v11, *(__m128*)(a1 + 976));
	v14 = _mm_unpackhi_ps(v12, v10);
	v15 = _mm_unpacklo_ps(v11, *(__m128*)(a1 + 976));
	v16 = _mm_unpacklo_ps(v12, v10);
	*(__m128*)(a1 + 1024) = _mm_shuffle_ps(v15, v16, 68);
	*(__m128*)(a1 + 1040) = _mm_shuffle_ps(v15, v16, 238);
	*(__m128*)(a1 + 1056) = _mm_shuffle_ps(v13, v14, 68);
	*(__m128*)(a1 + 1072) = _mm_shuffle_ps(v13, v14, 238);
	*(_OWORD*)(a1 + 1088) = *a3;
	*(_OWORD*)(a1 + 1104) = a3[1];
	*(_OWORD*)(a1 + 1120) = a3[2];
	*(_OWORD*)(a1 + 1136) = a3[3];
	*(__m128*)(a1 + 1152) = *a2;
	*(__m128*)(a1 + 1168) = a2[1];
	*(__m128*)(a1 + 1184) = a2[2];
	*(__m128*)(a1 + 1200) = a2[3];
	*(_OWORD*)(a1 + 1216) = *a3;
	*(_OWORD*)(a1 + 1232) = a3[1];
	*(_OWORD*)(a1 + 1248) = a3[2];
	*(_OWORD*)(a1 + 1264) = a3[3];
	*(_OWORD*)(a1 + 1280) = *(_OWORD*)a4;
	*(_OWORD*)(a1 + 1296) = *(_OWORD*)(a4 + 16);
	*(_OWORD*)(a1 + 1312) = *(_OWORD*)(a4 + 32);
	*(_OWORD*)(a1 + 1328) = *(_OWORD*)(a4 + 48);
	*(_OWORD*)(a1 + 1344) = *(_OWORD*)a4;
	*(_OWORD*)(a1 + 1360) = *(_OWORD*)(a4 + 16);
	*(_OWORD*)(a1 + 1376) = *(_OWORD*)(a4 + 32);
	*(_OWORD*)(a1 + 1392) = *(_OWORD*)(a4 + 48);
	sub_1401AFC20((__int64*)&v47, (double*)(a1 + 1408));
	v47 = v17;
	v48 = (__int64)v7;
	sub_1401AFB10(&v47, (__m128*)(a1 + 1472));
	*((_QWORD*)&v45 + 1) = v18;
	v47 = v19;
	v48 = v18;
	sub_1401AFB10(&v47, (__m128*)(a1 + 1536));
	v20 = *(__m128*)(a1 + 1024);
	v21 = *(__m128*)(a1 + 1040);
	v22 = *(__m128*)(a1 + 1056);
	v23 = *(__m128*)(a1 + 1072);
	if (v5 < v5 + 96)
	{
		do
		{
			v24 = (float*)((char*)&v47 + v5 - a5);
			_mm_prefetch((const char*)(v5 + 24), 0);
			v25 = *(__m128*)v5;
			v5 += 16i64;
			_mm_stream_ps(
				v24,
				_mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v25, v25, 85), v21), _mm_mul_ps(_mm_shuffle_ps(v25, v25, 0), v20)),
						_mm_mul_ps(_mm_shuffle_ps(v25, v25, 170), v22)),
					_mm_mul_ps(_mm_shuffle_ps(v25, v25, 255), v23)));
		} while (v5 < a5 + 96);
	}
	_mm_sfence();
	v26 = 6i64;
	v27 = (__m128*) & v47;
	v28 = 6i64;
	do
	{
		v29 = *v27++;
		v30 = _mm_mul_ps(v29, v29);
		v30.m128_f32[0] = 1.0
			/ fsqrt(
				(float)(v30.m128_f32[0] + _mm_shuffle_ps(v30, v30, 85).m128_f32[0])
				+ _mm_shuffle_ps(v30, v30, 170).m128_f32[0]);
		v27[-1] = _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), v29);
		--v28;
	} while (v28);
	v31 = &v47;
	do
	{
		v32 = *(_OWORD*)v31;
		v31 += 2;
		*(_OWORD*)((char*)v31 + a1 + 1680 - (_QWORD)&v47 - 16) = v32;
		--v26;
	} while (v26);
	*(_QWORD*)&v45 = 0i64;
	*(_QWORD*)&v46 = 0x3F8000003F800000i64;
	*(_OWORD*)(a1 + 1872) = v45;
	*(_OWORD*)(a1 + 1888) = v46;
	*(_DWORD*)(a1 + 1904) = 0;
	if (*(float*)(a4 + 44) == 0.0)
	{
		v33 = *(float*)(a1 + 1336);
		*(_DWORD*)(a1 + 1608) = 1;
		v34 = 1.0 / *(float*)(a1 + 1320);
		*(float*)&v35 = v33 * v34;
		*(float*)&v36 = (float)(v33 - 1.0) * v34;
		v37 = (__m128)0x40000000u;
		v38 = (__m128)0x40000000u;
		v38.m128_f32[0] = 2.0 / *v7;
		v37.m128_f32[0] = 2.0 / *(float*)(a1 + 1300);
		*(_QWORD*)(a1 + 1612) = __PAIR64__(v36, v35);
		*(__m128*)(a1 + 1632) = _mm_unpacklo_ps(_mm_unpacklo_ps(v38, (__m128)0i64), _mm_unpacklo_ps(v37, (__m128)0i64));
		*(float*)(a1 + 1648) = (float)((float)(*(float*)(a1 + 1328) + 1.0) * *(float*)(a1 + 1632)) * -0.5;
		v39 = (float)((float)(*(float*)(a1 + 1332) + 1.0) * *(float*)(a1 + 1636)) * -0.5;
	}
	else
	{
		v40 = *(float*)(a1 + 1336);
		v41 = *(float*)(a1 + 1320);
		*(_DWORD*)(a1 + 1608) = 0;
		*(_QWORD*)(a1 + 1612) = __PAIR64__(v40 / (float)(v41 + 1.0), v40 / v41);
		v42 = (__m128) * (unsigned int*)(a1 + 1612);
		v42.m128_f32[0] = v42.m128_f32[0] * 2.0;
		v43 = v42;
		v42.m128_f32[0] = v42.m128_f32[0] / *(float*)(a4 + 20);
		v43.m128_f32[0] = v43.m128_f32[0] / *(float*)a4;
		*(__m128*)(a1 + 1632) = _mm_unpacklo_ps(_mm_unpacklo_ps(v43, (__m128)0i64), _mm_unpacklo_ps(v42, (__m128)0i64));
		*(float*)(a1 + 1648) = (float)((float)(*(float*)(a1 + 1312) - 1.0) * *(float*)(a1 + 1632)) * 0.5;
		v39 = (float)((float)(*(float*)(a1 + 1316) - 1.0) * *(float*)(a1 + 1636)) * 0.5;
	}
	*(float*)(a1 + 1652) = v39;
	result = 0i64;
	*(__m128*)(a1 + 1664) = _mm_add_ps(*(__m128*)(a1 + 1648), *(__m128*)(a1 + 1632));
	return result;
}
// 14036EE43: variable 'v17' is possibly undefined
// 14036EE6B: variable 'v18' is possibly undefined
// 14036EE76: variable 'v19' is possibly undefined
// 14036EFBF: variable 'v46' is possibly undefined

