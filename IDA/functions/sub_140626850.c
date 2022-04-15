#include "../winhttp.h"

//----- (0000000140626850) ----------------------------------------------------
__m128* __fastcall sub_140626850(__m128* a1, __m128* a2, __m128* a3)
{
	__m128 v3; // xmm8
	__m128 v5; // xmm10
	__m128 v6; // xmm5
	__m128 v7; // xmm3
	__m128 v8; // xmm7
	__m128 v9; // xmm12
	__m128 v10; // xmm1
	float v11; // xmm2_4
	__m128 v12; // xmm1
	float v13; // xmm0_4
	float v14; // xmm2_4
	float v15; // xmm0_4
	__m128 v16; // xmm1
	__m128 v17; // xmm10
	float v18; // xmm2_4
	float v19; // xmm0_4
	__m128 v20; // xmm5
	__m128 v21; // xmm8
	double v22; // xmm6_8
	__m128* result; // rax
	__m128 v24; // xmm1
	__int64 v25; // r8
	__m128 v26; // xmm0
	unsigned __int64 v27; // rcx
	unsigned __int64 v28; // rcx
	unsigned __int64 v29; // rcx
	unsigned __int64 v30; // rcx
	unsigned __int64 v31; // rcx
	unsigned __int64 v32; // rcx
	unsigned __int64 v33; // rcx
	unsigned __int64 v34; // rcx
	unsigned __int64 v35; // rcx
	int v36[4]; // [rsp+38h] [rbp-D0h] BYREF
	__int128 v37; // [rsp+48h] [rbp-C0h]
	float v38; // [rsp+58h] [rbp-B0h]
	int v39; // [rsp+5Ch] [rbp-ACh]
	__int64 v40; // [rsp+60h] [rbp-A8h]
	__int128 v41; // [rsp+68h] [rbp-A0h]
	__m128 v42; // [rsp+78h] [rbp-90h] BYREF
	__m128 v43; // [rsp+88h] [rbp-80h]
	__m128 v44; // [rsp+98h] [rbp-70h]
	__m128 v45; // [rsp+A8h] [rbp-60h]
	__int128 v46[4]; // [rsp+B8h] [rbp-50h] BYREF
	__int64 v47; // [rsp+F8h] [rbp-10h]
	__m128 v48[4]; // [rsp+108h] [rbp+0h] BYREF
	__int64 v49; // [rsp+148h] [rbp+40h]
	__m128 v50[4]; // [rsp+158h] [rbp+50h] BYREF
	__m128* v51; // [rsp+198h] [rbp+90h] BYREF
	__m128* v52; // [rsp+1A0h] [rbp+98h]
	__m128* v53[2]; // [rsp+1E8h] [rbp+E0h] BYREF
	__m128 v54[4]; // [rsp+1F8h] [rbp+F0h] BYREF
	__m128* v55; // [rsp+238h] [rbp+130h] BYREF
	double v56[8]; // [rsp+248h] [rbp+140h] BYREF

	v3 = (__m128)0x40400000u;
	if (a1[11].m128_i32[3] == 1)
		a2 = a3;
	v5 = (__m128)0x40400000u;
	v6 = (__m128)0x40400000u;
	v7 = a2[2];
	v8 = a2[1];
	v9 = a2[3];
	v10 = _mm_mul_ps(v7, v7);
	v11 = (float)(v10.m128_f32[0] + _mm_shuffle_ps(v10, v10, 85).m128_f32[0]) + _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
	v12 = _mm_mul_ps(v8, v8);
	v13 = 1.0 / fsqrt(v11);
	v5.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v11 * v13) * v13)) * 0.5) * v13, 0.0);
	v14 = (float)(v12.m128_f32[0] + _mm_shuffle_ps(v12, v12, 85).m128_f32[0]) + _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
	v15 = 1.0 / fsqrt(v14);
	v16 = _mm_mul_ps(*a2, *a2);
	v17 = _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), v7);
	v6.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v14 * v15) * v15)) * 0.5) * v15, 0.0);
	v18 = (float)(v16.m128_f32[0] + _mm_shuffle_ps(v16, v16, 85).m128_f32[0]) + _mm_shuffle_ps(v16, v16, 170).m128_f32[0];
	v19 = fsqrt(v18);
	v20 = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), v8);
	v3.m128_f32[0] = fmaxf(
		(float)((float)(3.0 - (float)((float)(v18 * (float)(1.0 / v19)) * (float)(1.0 / v19))) * 0.5)
		* (float)(1.0 / v19),
		0.0);
	v21 = _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), *a2);
	v42 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v21, _mm_shuffle_ps(v21, v21, 170)),
		_mm_unpacklo_ps(_mm_shuffle_ps(v21, v21, 85), (__m128)0i64));
	v43 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v20, _mm_shuffle_ps(v20, v20, 170)),
		_mm_unpacklo_ps(_mm_shuffle_ps(v20, v20, 85), (__m128)0i64));
	v46[0] = (__int128)v42;
	*(_QWORD*)&v22 = (unsigned int)dword_140C4A908;
	*(float*)&v22 = *(float*)&dword_140C4A908 * 0.5;
	v47 = *(_QWORD*)(qword_140C65898 + 120) + 4576i64;
	v46[1] = (__int128)v43;
	v44 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v17, _mm_shuffle_ps(v17, v17, 170)),
		_mm_unpacklo_ps(_mm_shuffle_ps(v17, v17, 85), (__m128)0i64));
	v46[2] = (__int128)v44;
	v45 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v9, _mm_shuffle_ps(v9, v9, 170)),
		_mm_unpacklo_ps(_mm_shuffle_ps(v9, v9, 85), (__m128)0x3F800000u));
	v46[3] = (__int128)v45;
	v38 = sub_1408FE3D0(v22);
	v36[0] = sub_1408FC950(v22);
	v40 = (unsigned int)v36[0];
	v41 = xmmword_140C78440;
	v36[1] = 0;
	v36[3] = 0;
	v39 = 0;
	*(float*)&v36[2] = -v38;
	v37 = xmmword_140B7A4B0;
	v55 = &v42;
	sub_1401AFC20((__int64*)&v55, v56);
	v53[0] = (__m128*)v56;
	v53[1] = (__m128*)v36;
	sub_1401AFB10(v53, v54);
	v51 = v54;
	v52 = &v42;
	sub_1401AFB10(&v51, v50);
	v52 = v50;
	v51 = &v42;
	result = sub_1401AFB10(&v51, v48);
	v24 = v44;
	v49 = v25 + 4576;
	a1[2] = v42;
	a1[3] = v43;
	v26 = v45;
	a1[4] = v24;
	a1[5] = v26;
	v27 = a1[6].m128_u64[0];
	if (v27)
		result = (__m128*)(*(__int64(__fastcall**)(unsigned __int64, __m128*))(*(_QWORD*)v27 + 320i64))(v27, v48);
	v28 = a1[6].m128_u64[1];
	if (v28)
		result = (__m128*)(*(__int64(__fastcall**)(unsigned __int64, __int128*))(*(_QWORD*)v28 + 320i64))(v28, v46);
	v29 = a1[7].m128_u64[0];
	if (v29)
		result = (__m128*)(*(__int64(__fastcall**)(unsigned __int64, __m128*))(*(_QWORD*)v29 + 320i64))(v29, v48);
	v30 = a1[7].m128_u64[1];
	if (v30)
	{
		result = (__m128*)(*(__int64(__fastcall**)(unsigned __int64, __int128*))(*(_QWORD*)v30 + 320i64))(v30, v46);
		v31 = a1[9].m128_u64[0];
		if (v31)
			result = (__m128*)(*(__int64(__fastcall**)(unsigned __int64, __int128*))(*(_QWORD*)v31 + 320i64))(v31, v46);
	}
	v32 = a1[8].m128_u64[0];
	if (v32)
	{
		result = (__m128*)(*(__int64(__fastcall**)(unsigned __int64, __int128*))(*(_QWORD*)v32 + 320i64))(v32, v46);
		v33 = a1[9].m128_u64[1];
		if (v33)
			result = (__m128*)(*(__int64(__fastcall**)(unsigned __int64, __int128*))(*(_QWORD*)v33 + 320i64))(v33, v46);
	}
	v34 = a1[8].m128_u64[1];
	if (v34)
	{
		result = (__m128*)(*(__int64(__fastcall**)(unsigned __int64, __int128*))(*(_QWORD*)v34 + 320i64))(v34, v46);
		v35 = a1[10].m128_u64[0];
		if (v35)
			return (__m128*)(*(__int64(__fastcall**)(unsigned __int64, __int128*))(*(_QWORD*)v35 + 320i64))(v35, v46);
	}
	return result;
}
// 140626BC8: variable 'v25' is possibly undefined
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C4A908: using guessed type int dword_140C4A908;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 140626850: using guessed type double var_B0[8];
// 140626850: using guessed type __m128 var_100[4];
// 140626850: using guessed type __m128 var_1A0[4];
// 140626850: using guessed type __m128 var_1F0[4];

