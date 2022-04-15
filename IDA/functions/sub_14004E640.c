//----- (000000014004E640) ----------------------------------------------------
__int64 __fastcall sub_14004E640(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64* v3; // rax
	__int64 v4; // rdi
	__int128* v5; // r14
	__m128* v6; // r15
	__int128* v7; // rcx
	__int128 v8; // xmm0
	__m128 v9; // xmm11
	__m128 v10; // xmm0
	__int128 v11; // xmm0
	__int64 v12; // r8
	__m128 v13; // xmm5
	float v14; // xmm1_4
	__int64 v15; // rdx
	__m128 v16; // xmm0
	float v17; // xmm1_4
	float v18; // xmm8_4
	float v19; // xmm9_4
	float v20; // xmm10_4
	__m128 v21; // xmm4
	__int64 v22; // r8
	float v23; // xmm2_4
	__int64 v24; // rdx
	__m128 v25; // xmm0
	float v26; // xmm3_4
	float v27; // xmm5_4
	float v28; // xmm6_4
	float v29; // xmm7_4
	__m128 v30; // xmm3
	__int64 v31; // r8
	__m128 v32; // xmm2
	__m128 v33; // xmm1
	unsigned __int32 v34; // xmm0_4
	__m128 v35; // xmm2
	__m128 v36; // xmm11
	bool v37; // cc
	float v38; // xmm1_4
	__int64 v39; // rdx
	float v40; // xmm0_4
	__int64 v41; // r8
	float v42; // xmm2_4
	__int64 v43; // rdx
	float v44; // xmm0_4
	__int64 v45; // rdx
	float v46; // xmm0_4
	float v47; // xmm11_4
	__int64 v48; // rsi
	__m128 v50; // [rsp+28h] [rbp-A9h]
	__m128 v51; // [rsp+38h] [rbp-99h]
	__int64 v52[10]; // [rsp+48h] [rbp-89h] BYREF

	v1 = (_DWORD*)a1[3];
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
		&& (v3 = (__int64*)sub_140056AB0(a1, 1u)) != 0i64)
	{
		v4 = *v3;
	}
	else
	{
		v4 = 0i64;
	}
	v5 = (__int128*)sub_140056AB0(a1, 2u);
	v6 = (__m128*)sub_140056AB0(a1, 3u);
	v7 = (__int128*)sub_140056AB0(a1, 4u);
	if (v4)
	{
		*(_QWORD*)(v4 + 24) = 0i64;
		*(_DWORD*)(v4 + 32) = 0;
		if (v5)
			v8 = *v5;
		else
			v8 = xmmword_140B7A7D0;
		v51 = (__m128)v8;
		v9 = (__m128)v8;
		if (v6)
			v10 = *v6;
		else
			v10 = 0i64;
		v51 = v10;
		if (v7)
			v11 = *v7;
		else
			v11 = xmmword_140C77870;
		v12 = 0i64;
		v13 = (__m128)v11;
		v51 = _mm_sub_ps(v9, v51);
		v50 = _mm_mul_ps(v51, v51);
		LODWORD(v14) = _mm_shuffle_ps(v50, v50, 170).m128_u32[0];
		if (_mm_shuffle_ps(v50, v50, 85).m128_f32[0] > v50.m128_f32[0])
			v12 = 1i64;
		v15 = 1 - v12;
		if (v14 > v50.m128_f32[v12])
			v12 = 2i64;
		v16 = (__m128)v50.m128_u32[-v15 + 3 - v12];
		v16.m128_f32[0] = (float)(v16.m128_f32[0] + v50.m128_f32[v15]) + v50.m128_f32[v12];
		if (v16.m128_f32[0] <= *(float*)&dword_140C3D7D8)
		{
			v21 = 0i64;
			v50 = 0i64;
			v20 = 0.0;
			v19 = 0.0;
			v18 = 0.0;
		}
		else
		{
			v17 = 1.0 / _mm_sqrt_ps(v16).m128_f32[0];
			v18 = v51.m128_f32[0] * v17;
			v19 = v51.m128_f32[1] * v17;
			v20 = v51.m128_f32[2] * v17;
			v50.m128_f32[0] = v51.m128_f32[0] * v17;
			v50.m128_f32[1] = v51.m128_f32[1] * v17;
			v50.m128_f32[2] = v51.m128_f32[2] * v17;
			v21 = v50;
		}
		v22 = 0i64;
		v51 = _mm_sub_ps(
			_mm_mul_ps(_mm_shuffle_ps(v21, v21, 210), _mm_shuffle_ps(v13, v13, 201)),
			_mm_mul_ps(_mm_shuffle_ps(v21, v21, 201), _mm_shuffle_ps(v13, v13, 210)));
		v50 = _mm_mul_ps(v51, v51);
		LODWORD(v23) = _mm_shuffle_ps(v50, v50, 170).m128_u32[0];
		if (_mm_shuffle_ps(v50, v50, 85).m128_f32[0] > v50.m128_f32[0])
			v22 = 1i64;
		v24 = 1 - v22;
		if (v23 > v50.m128_f32[v22])
			v22 = 2i64;
		v25 = (__m128)v50.m128_u32[-v24 + 3 - v22];
		v25.m128_f32[0] = (float)(v25.m128_f32[0] + v50.m128_f32[v24]) + v50.m128_f32[v22];
		if (v25.m128_f32[0] <= *(float*)&dword_140C3D7D8)
		{
			v30 = 0i64;
			v50 = 0i64;
			v29 = 0.0;
			v28 = 0.0;
			v27 = 0.0;
		}
		else
		{
			v26 = 1.0 / _mm_sqrt_ps(v25).m128_f32[0];
			v27 = v51.m128_f32[0] * v26;
			v28 = v51.m128_f32[1] * v26;
			v29 = v51.m128_f32[2] * v26;
			v50.m128_f32[0] = v51.m128_f32[0] * v26;
			v50.m128_f32[1] = v51.m128_f32[1] * v26;
			v50.m128_f32[2] = v51.m128_f32[2] * v26;
			v30 = v50;
		}
		v31 = 0i64;
		*(float*)(v4 + 48) = v27;
		*(float*)(v4 + 56) = v18;
		*(float*)(v4 + 64) = v28;
		*(_DWORD*)(v4 + 60) = 0;
		*(_DWORD*)(v4 + 76) = 0;
		*(_DWORD*)(v4 + 92) = 0;
		*(float*)(v4 + 72) = v19;
		*(float*)(v4 + 80) = v29;
		*(float*)(v4 + 88) = v20;
		v32 = _mm_sub_ps(
			_mm_mul_ps(_mm_shuffle_ps(v30, v30, 210), _mm_shuffle_ps(v21, v21, 201)),
			_mm_mul_ps(_mm_shuffle_ps(v30, v30, 201), _mm_shuffle_ps(v21, v21, 210)));
		*(_DWORD*)(v4 + 52) = v32.m128_i32[0];
		v33 = _mm_mul_ps(v9, v30);
		v50 = v33;
		*(_DWORD*)(v4 + 68) = _mm_shuffle_ps(v32, v32, 85).m128_u32[0];
		v34 = _mm_shuffle_ps(v32, v32, 170).m128_u32[0];
		v35 = _mm_mul_ps(v32, v9);
		v36 = _mm_mul_ps(v9, v21);
		*(_DWORD*)(v4 + 84) = v34;
		v37 = _mm_shuffle_ps(v33, v33, 85).m128_f32[0] <= v33.m128_f32[0];
		LODWORD(v38) = _mm_shuffle_ps(v33, v33, 170).m128_u32[0];
		if (!v37)
			v31 = 1i64;
		v39 = 1 - v31;
		if (v38 > v50.m128_f32[v31])
			v31 = 2i64;
		v40 = (float)(v50.m128_f32[-v39 + 3 - v31] + v50.m128_f32[v39]) + v50.m128_f32[v31];
		v50 = v35;
		v41 = 0i64;
		*(float*)(v4 + 96) = -v40;
		v37 = _mm_shuffle_ps(v35, v35, 85).m128_f32[0] <= v35.m128_f32[0];
		LODWORD(v42) = _mm_shuffle_ps(v35, v35, 170).m128_u32[0];
		if (!v37)
			v41 = 1i64;
		v43 = 1 - v41;
		if (v42 > v50.m128_f32[v41])
			v41 = 2i64;
		v44 = v50.m128_f32[-v43 + 3 - v41] + v50.m128_f32[v43];
		v45 = 0i64;
		v46 = v44 + v50.m128_f32[v41];
		v50 = v36;
		*(float*)(v4 + 100) = -v46;
		v37 = _mm_shuffle_ps(v36, v36, 85).m128_f32[0] <= v36.m128_f32[0];
		LODWORD(v47) = _mm_shuffle_ps(v36, v36, 170).m128_u32[0];
		if (!v37)
			v45 = 1i64;
		v48 = 1 - v45;
		if (v47 > v50.m128_f32[v45])
			v45 = 2i64;
		*(_DWORD*)(v4 + 108) = 1065353216;
		v52[0] = v4 + 48;
		*(float*)(v4 + 104) = -(float)((float)(v50.m128_f32[-v48 + 3 - v45] + v50.m128_f32[v48]) + v50.m128_f32[v45]);
		sub_1401AFC20(v52, (double*)(v4 + 112));
		*(_QWORD*)(v4 + 24) = 0i64;
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B7A7D0: using guessed type __int128 xmmword_140B7A7D0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3D7D8: using guessed type int dword_140C3D7D8;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 14004E640: using guessed type __int64 var_E0[10];

