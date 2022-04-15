#include "../winhttp.h"

//----- (00000001402952A0) ----------------------------------------------------
float* __fastcall sub_1402952A0(__int64 a1, __int128* a2, int a3)
{
	__m128 v3; // xmm1
	__m128 v4; // xmm2
	__int128 v5; // xmm0
	__m128* v6; // rax
	__int64 v7; // r11
	__int64 v8; // r10
	__m128 v9; // xmm7
	__int64 v10; // r8
	__m128 v11; // xmm6
	float v12; // xmm3_4
	__int64 v13; // rdx
	__m128 v14; // xmm0
	float v15; // xmm1_4
	float v16; // xmm2_4
	float v17; // xmm4_4
	float v18; // xmm5_4
	__int64 v19; // r8
	__m128 v20; // xmm1
	__m128 v21; // xmm2
	__m128 v22; // xmm3
	__m128 v23; // xmm6
	__m128 v24; // xmm3
	__m128 v25; // xmm1
	unsigned __int32 v26; // xmm0_4
	__m128 v27; // xmm3
	bool v28; // cc
	float v29; // xmm1_4
	__int64 v30; // rdx
	float v31; // xmm0_4
	__int64 v32; // r8
	float v33; // xmm3_4
	__int64 v34; // rdx
	float v35; // xmm0_4
	__int64 v36; // r9
	float* result; // rax
	__m128 v38; // [rsp+28h] [rbp-79h] BYREF
	__m128 v39; // [rsp+38h] [rbp-69h] BYREF
	__m128 v40; // [rsp+48h] [rbp-59h]
	__int128 v41; // [rsp+58h] [rbp-49h]
	__m128 v42; // [rsp+68h] [rbp-39h] BYREF
	__m128 v43; // [rsp+78h] [rbp-29h]

	switch (a3)
	{
	case 0:
		v3 = (__m128)xmmword_140C77860;
		v4 = (__m128)xmmword_140C77870;
		break;
	case 1:
		v4 = (__m128)xmmword_140C77870;
		v3 = _mm_sub_ps((__m128)0i64, (__m128)xmmword_140C77860);
		break;
	case 2:
		v3 = (__m128)xmmword_140C77870;
		v4 = (__m128)xmmword_140C77880;
		break;
	case 3:
		v4 = _mm_sub_ps((__m128)0i64, (__m128)xmmword_140C77880);
		v3 = _mm_sub_ps((__m128)0i64, (__m128)xmmword_140C77870);
		break;
	case 4:
		v4 = (__m128)xmmword_140C77870;
		v3 = _mm_sub_ps((__m128)0i64, (__m128)xmmword_140C77880);
		break;
	case 5:
		v3 = (__m128)xmmword_140C77880;
		v4 = (__m128)xmmword_140C77870;
		break;
	default:
		v3 = v39;
		v4 = v39;
		break;
	}
	v5 = *a2;
	v42 = v3;
	v43 = v4;
	v41 = v5;
	v6 = (__m128*)sub_1401ADD80(&v42, (__int64)&v39);
	v8 = 0i64;
	v9 = 0i64;
	v10 = 0i64;
	v11 = _mm_sub_ps((__m128)0i64, *v6);
	v39 = v11;
	v40 = _mm_sub_ps(
		_mm_mul_ps(_mm_shuffle_ps(v11, v11, 210), _mm_shuffle_ps(v43, v43, 201)),
		_mm_mul_ps(_mm_shuffle_ps(v11, v11, 201), _mm_shuffle_ps(v43, v43, 210)));
	v38 = _mm_mul_ps(v40, v40);
	LODWORD(v12) = _mm_shuffle_ps(v38, v38, 170).m128_u32[0];
	if (_mm_shuffle_ps(v38, v38, 85).m128_f32[0] > v38.m128_f32[0])
		v10 = 1i64;
	v13 = 1 - v10;
	if (v12 > v38.m128_f32[v10])
		v10 = 2i64;
	v14 = (__m128)v38.m128_u32[-v13 + 3 - v10];
	v14.m128_f32[0] = (float)(v14.m128_f32[0] + v38.m128_f32[v13]) + v38.m128_f32[v10];
	if (v14.m128_f32[0] <= *(float*)&dword_140C3D7D8)
	{
		v38 = 0i64;
		v18 = 0.0;
		v17 = 0.0;
		v16 = 0.0;
	}
	else
	{
		v15 = 1.0 / _mm_sqrt_ps(v14).m128_f32[0];
		v16 = v40.m128_f32[0] * v15;
		v17 = v40.m128_f32[1] * v15;
		v18 = v40.m128_f32[2] * v15;
		v38.m128_f32[0] = v40.m128_f32[0] * v15;
		v38.m128_f32[1] = v40.m128_f32[1] * v15;
		v38.m128_f32[2] = v40.m128_f32[2] * v15;
		v9 = v38;
	}
	v19 = 0i64;
	*(float*)v7 = v16;
	*(_DWORD*)(v7 + 12) = 0;
	*(_DWORD*)(v7 + 28) = 0;
	v20 = _mm_shuffle_ps(v11, v11, 210);
	*(float*)(v7 + 16) = v17;
	*(float*)(v7 + 32) = v18;
	v21 = (__m128)v41;
	*(_DWORD*)(v7 + 44) = 0;
	v22 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 201), _mm_shuffle_ps(v9, v9, 210));
	v23 = _mm_mul_ps(v11, v21);
	*(_DWORD*)(v7 + 8) = v39.m128_i32[0];
	v24 = _mm_sub_ps(v22, _mm_mul_ps(v20, _mm_shuffle_ps(v9, v9, 201)));
	*(_DWORD*)(v7 + 4) = v24.m128_i32[0];
	v25 = _mm_mul_ps(v21, v9);
	v38 = v25;
	*(_DWORD*)(v7 + 20) = _mm_shuffle_ps(v24, v24, 85).m128_u32[0];
	*(_DWORD*)(v7 + 24) = v39.m128_i32[1];
	v26 = _mm_shuffle_ps(v24, v24, 170).m128_u32[0];
	v27 = _mm_mul_ps(v24, v21);
	*(_DWORD*)(v7 + 36) = v26;
	*(_DWORD*)(v7 + 40) = v39.m128_i32[2];
	v28 = _mm_shuffle_ps(v25, v25, 85).m128_f32[0] <= v25.m128_f32[0];
	LODWORD(v29) = _mm_shuffle_ps(v25, v25, 170).m128_u32[0];
	if (!v28)
		v19 = 1i64;
	v30 = 1 - v19;
	if (v29 > v38.m128_f32[v19])
		v19 = 2i64;
	v31 = (float)(v38.m128_f32[-v30 + 3 - v19] + v38.m128_f32[v30]) + v38.m128_f32[v19];
	v38 = v27;
	v32 = 0i64;
	*(float*)(v7 + 48) = -v31;
	v28 = _mm_shuffle_ps(v27, v27, 85).m128_f32[0] <= v27.m128_f32[0];
	LODWORD(v33) = _mm_shuffle_ps(v27, v27, 170).m128_u32[0];
	if (!v28)
		v32 = 1i64;
	v34 = 1 - v32;
	if (v33 > v38.m128_f32[v32])
		v32 = 2i64;
	v35 = (float)(v38.m128_f32[-v34 + 3 - v32] + v38.m128_f32[v34]) + v38.m128_f32[v32];
	v38 = v23;
	*(float*)(v7 + 52) = -v35;
	if (_mm_shuffle_ps(v23, v23, 85).m128_f32[0] > v23.m128_f32[0])
		v8 = 1i64;
	v36 = 1 - v8;
	*(_DWORD*)(v7 + 60) = 1065353216;
	if (_mm_shuffle_ps(v23, v23, 170).m128_f32[0] > v38.m128_f32[v8])
		v8 = 2i64;
	result = &v38.m128_f32[-v36 + 3 - v8];
	*(float*)(v7 + 56) = -(float)((float)(*result + v38.m128_f32[v36]) + v38.m128_f32[v8]);
	return result;
}
// 1402955DF: returning address of temporary local variable '%var_D0@12'
// 140295475: variable 'v7' is possibly undefined
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3D7D8: using guessed type int dword_140C3D7D8;
// 140C77860: using guessed type __int128 xmmword_140C77860;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C77880: using guessed type __int128 xmmword_140C77880;

