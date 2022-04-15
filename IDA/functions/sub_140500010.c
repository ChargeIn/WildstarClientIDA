#include "../winhttp.h"

//----- (0000000140500010) ----------------------------------------------------
void __fastcall sub_140500010(__int64 a1, float a2)
{
	__int64 v3; // rcx
	float v5; // xmm7_4
	__int64 v6; // r8
	__int64 v7; // rdx
	__m128 v8; // xmm0
	float v9; // xmm0_4
	float v10; // xmm3_4
	float v11; // xmm9_4
	float v12; // xmm10_4
	__m128 v13; // xmm5
	__int64 v14; // r8
	float v15; // xmm2_4
	__int64 v16; // rdx
	__m128 v17; // xmm0
	float v18; // xmm4_4
	float v19; // xmm6_4
	float v20; // xmm7_4
	float v21; // xmm8_4
	__m128 v22; // xmm4
	__int64 v23; // r8
	__m128 v24; // xmm1
	__m128 v25; // xmm0
	__m128 v26; // xmm5
	__m128 v27; // xmm2
	__m128 v28; // xmm1
	__m128 v29; // xmm2
	bool v30; // cc
	float v31; // xmm1_4
	__int64 v32; // rdx
	float v33; // xmm0_4
	__int64 v34; // r8
	float v35; // xmm2_4
	__int64 v36; // rdx
	float v37; // xmm0_4
	__int64 v38; // rdx
	float v39; // xmm0_4
	float v40; // xmm5_4
	__int64 v41; // r9
	double v42; // xmm6_8
	float v43; // xmm7_4
	float v44; // xmm0_4
	float v45; // xmm7_4
	float v46; // xmm1_4
	float v47; // xmm0_4
	float v48; // xmm1_4
	float v49; // xmm1_4
	__m128 v50; // [rsp+28h] [rbp-E0h]
	__m128 v51; // [rsp+38h] [rbp-D0h]
	__int64 v52[10]; // [rsp+48h] [rbp-C0h] BYREF

	v3 = *(_QWORD*)(a1 + 2328);
	if (v3 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v3 + 24i64))(v3) > 0)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2328) + 112i64))(*(_QWORD*)(a1 + 2328));
	v5 = *(float*)&dword_140C3D7D8;
	v6 = 0i64;
	*(_DWORD*)(a1 + 2272) = 1;
	v51 = (__m128)xmmword_140B7A7B0;
	v50 = (__m128)xmmword_140B7A820;
	if (_mm_shuffle_ps((__m128)xmmword_140B7A820, (__m128)xmmword_140B7A820, 85).m128_f32[0] > 0.0)
		v6 = 1i64;
	v7 = 1 - v6;
	if (v50.m128_f32[v6] < 8.2943993)
		v6 = 2i64;
	v8 = (__m128)v50.m128_u32[-v7 + 3 - v6];
	v8.m128_f32[0] = (float)(v8.m128_f32[0] + v50.m128_f32[v7]) + v50.m128_f32[v6];
	if (v8.m128_f32[0] <= v5)
	{
		v13 = 0i64;
		v50 = 0i64;
		v10 = 0.0;
		v12 = 0.0;
		v11 = 0.0;
	}
	else
	{
		v9 = _mm_sqrt_ps(v8).m128_f32[0];
		v10 = (float)(1.0 / v9) * v51.m128_f32[2];
		v11 = (float)(1.0 / v9) * v51.m128_f32[0];
		v12 = (float)(1.0 / v9) * v51.m128_f32[1];
		v50.m128_f32[2] = v10;
		v50.m128_f32[0] = v11;
		v50.m128_f32[1] = v12;
		v13 = v50;
	}
	v14 = 0i64;
	v51 = _mm_sub_ps(
		_mm_mul_ps(
			_mm_shuffle_ps(v13, v13, 210),
			_mm_shuffle_ps((__m128)xmmword_140C77870, (__m128)xmmword_140C77870, 201)),
		_mm_mul_ps(
			_mm_shuffle_ps(v13, v13, 201),
			_mm_shuffle_ps((__m128)xmmword_140C77870, (__m128)xmmword_140C77870, 210)));
	v50 = _mm_mul_ps(v51, v51);
	LODWORD(v15) = _mm_shuffle_ps(v50, v50, 170).m128_u32[0];
	if (_mm_shuffle_ps(v50, v50, 85).m128_f32[0] > v50.m128_f32[0])
		v14 = 1i64;
	v16 = 1 - v14;
	if (v15 > v50.m128_f32[v14])
		v14 = 2i64;
	v17 = (__m128)v50.m128_u32[-v16 + 3 - v14];
	v17.m128_f32[0] = (float)(v17.m128_f32[0] + v50.m128_f32[v16]) + v50.m128_f32[v14];
	if (v17.m128_f32[0] <= v5)
	{
		v22 = 0i64;
		v50 = 0i64;
		v21 = 0.0;
		v20 = 0.0;
		v19 = 0.0;
	}
	else
	{
		v18 = 1.0 / _mm_sqrt_ps(v17).m128_f32[0];
		v19 = v51.m128_f32[0] * v18;
		v20 = v51.m128_f32[1] * v18;
		v21 = v51.m128_f32[2] * v18;
		v50.m128_f32[0] = v51.m128_f32[0] * v18;
		v50.m128_f32[1] = v51.m128_f32[1] * v18;
		v50.m128_f32[2] = v51.m128_f32[2] * v18;
		v22 = v50;
	}
	v23 = 0i64;
	*(float*)(a1 + 1088) = v19;
	*(float*)(a1 + 1096) = v11;
	*(float*)(a1 + 1104) = v20;
	*(_DWORD*)(a1 + 1100) = 0;
	*(_DWORD*)(a1 + 1116) = 0;
	*(_DWORD*)(a1 + 1132) = 0;
	*(float*)(a1 + 1112) = v12;
	*(float*)(a1 + 1120) = v21;
	*(float*)(a1 + 1128) = v10;
	v24 = _mm_mul_ps(_mm_shuffle_ps(v22, v22, 201), _mm_shuffle_ps(v13, v13, 210));
	v25 = _mm_shuffle_ps(v13, v13, 201);
	v26 = _mm_mul_ps(v13, (__m128)xmmword_140B7A7C0);
	v27 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(v22, v22, 210), v25), v24);
	*(_DWORD*)(a1 + 1092) = v27.m128_i32[0];
	v28 = _mm_mul_ps((__m128)xmmword_140B7A7C0, v22);
	v50 = v28;
	*(_DWORD*)(a1 + 1108) = _mm_shuffle_ps(v27, v27, 85).m128_u32[0];
	v25.m128_i32[0] = _mm_shuffle_ps(v27, v27, 170).m128_u32[0];
	v29 = _mm_mul_ps(v27, (__m128)xmmword_140B7A7C0);
	*(_DWORD*)(a1 + 1124) = v25.m128_i32[0];
	v30 = _mm_shuffle_ps(v28, v28, 85).m128_f32[0] <= v28.m128_f32[0];
	LODWORD(v31) = _mm_shuffle_ps(v28, v28, 170).m128_u32[0];
	if (!v30)
		v23 = 1i64;
	v32 = 1 - v23;
	if (v31 > v50.m128_f32[v23])
		v23 = 2i64;
	v33 = (float)(v50.m128_f32[-v32 + 3 - v23] + v50.m128_f32[v32]) + v50.m128_f32[v23];
	v50 = v29;
	v34 = 0i64;
	*(float*)(a1 + 1136) = -v33;
	v30 = _mm_shuffle_ps(v29, v29, 85).m128_f32[0] <= v29.m128_f32[0];
	LODWORD(v35) = _mm_shuffle_ps(v29, v29, 170).m128_u32[0];
	if (!v30)
		v34 = 1i64;
	v36 = 1 - v34;
	if (v35 > v50.m128_f32[v34])
		v34 = 2i64;
	v37 = v50.m128_f32[-v36 + 3 - v34] + v50.m128_f32[v36];
	v38 = 0i64;
	v39 = v37 + v50.m128_f32[v34];
	v50 = v26;
	*(float*)(a1 + 1140) = -v39;
	v30 = _mm_shuffle_ps(v26, v26, 85).m128_f32[0] <= v26.m128_f32[0];
	LODWORD(v40) = _mm_shuffle_ps(v26, v26, 170).m128_u32[0];
	if (!v30)
		v38 = 1i64;
	v41 = 1 - v38;
	if (v40 > v50.m128_f32[v38])
		v38 = 2i64;
	*(_DWORD*)(a1 + 1148) = 1065353216;
	v52[0] = a1 + 1088;
	*(float*)(a1 + 1144) = -(float)((float)(v50.m128_f32[-v41 + 3 - v38] + v50.m128_f32[v41]) + v50.m128_f32[v38]);
	sub_1401AFC20(v52, (double*)(a1 + 1152));
	*(_QWORD*)&v42 = (unsigned int)dword_140C3B438;
	v50.m128_u64[0] = 0x42C800003F800000i64;
	*(float*)&v42 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * 45.0;
	*(_QWORD*)(a1 + 1216) = 0x42C800003F800000i64;
	*(float*)&v42 = *(float*)&v42 * 0.5;
	v43 = sub_1408FC950(v42);
	v44 = sub_1408FE3D0(v42);
	*(_QWORD*)(a1 + 1236) = 0i64;
	*(_QWORD*)(a1 + 1244) = 0i64;
	*(_QWORD*)(a1 + 1256) = 0i64;
	*(_QWORD*)(a1 + 1264) = 0i64;
	v45 = v43 / v44;
	*(float*)(a1 + 1252) = v45;
	*(float*)(a1 + 1232) = v45 / a2;
	v46 = *(float*)(a1 + 1220);
	v47 = *(float*)(a1 + 1216);
	*(_DWORD*)(a1 + 1276) = -1082130432;
	*(_QWORD*)(a1 + 1280) = 0i64;
	v48 = v46 / (float)(v47 - v46);
	*(float*)(a1 + 1272) = v48;
	v49 = v48 * *(float*)(a1 + 1216);
	*(_DWORD*)(a1 + 1292) = 0;
	*(float*)(a1 + 1288) = v49;
}
// 140B7A7B0: using guessed type __int128 xmmword_140B7A7B0;
// 140B7A7C0: using guessed type __int128 xmmword_140B7A7C0;
// 140B7A820: using guessed type __int128 xmmword_140B7A820;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C3D7D8: using guessed type int dword_140C3D7D8;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140500010: using guessed type __int64 var_D0[10];

