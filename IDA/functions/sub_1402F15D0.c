//----- (00000001402F15D0) ----------------------------------------------------
float* __fastcall sub_1402F15D0(__int64 a1)
{
	__m128 v1; // xmm4
	__m128 v2; // xmm3
	__m128 v3; // xmm2
	__m128 v5; // xmm7
	__int128 v6; // xmm8
	float v7; // xmm7_4
	__m128 v8; // xmm6
	float v9; // xmm6_4
	__m128 v10; // xmm5
	__m128 v11; // xmm0
	float v12; // xmm5_4
	float* result; // rax
	float v14[4]; // [rsp+20h] [rbp-88h] BYREF
	__m128 v15; // [rsp+30h] [rbp-78h] BYREF
	__m128 v16; // [rsp+40h] [rbp-68h]
	__m128 v17; // [rsp+50h] [rbp-58h]
	__int128 v18; // [rsp+60h] [rbp-48h]

	v1 = *(__m128*)(a1 + 288);
	v2 = *(__m128*)(a1 + 304);
	v3 = *(__m128*)(a1 + 320);
	v5 = _mm_mul_ps(v1, v1);
	v6 = *(_OWORD*)(a1 + 336);
	v15 = v1;
	v16 = v2;
	v7 = fsqrt((float)(v5.m128_f32[0] + _mm_shuffle_ps(v5, v5, 85).m128_f32[0]) + _mm_shuffle_ps(v5, v5, 170).m128_f32[0]);
	v17 = v3;
	v18 = v6;
	*(float*)(a1 + 32) = v7;
	v8 = _mm_mul_ps(v2, v2);
	v9 = fsqrt((float)(v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0]) + _mm_shuffle_ps(v8, v8, 170).m128_f32[0]);
	v10 = _mm_mul_ps(v3, v3);
	v11 = _mm_shuffle_ps(v10, v10, 85);
	*(float*)(a1 + 36) = v9;
	v12 = fsqrt((float)(v10.m128_f32[0] + v11.m128_f32[0]) + _mm_shuffle_ps(v10, v10, 170).m128_f32[0]);
	*(float*)(a1 + 40) = v12;
	if (v7 > 0.0000099999997)
	{
		v11.m128_f32[0] = v7;
		v11 = _mm_shuffle_ps(v11, v11, 0);
		v15 = _mm_div_ps(v1, v11);
	}
	if (v9 > 0.0000099999997)
	{
		v11.m128_f32[0] = v9;
		v11 = _mm_shuffle_ps(v11, v11, 0);
		v16 = _mm_div_ps(v2, v11);
	}
	if (v12 > 0.0000099999997)
	{
		v11.m128_f32[0] = v12;
		v17 = _mm_div_ps(v3, _mm_shuffle_ps(v11, v11, 0));
	}
	result = sub_1401B1D60(v14, v15.m128_f32);
	*(_OWORD*)(a1 + 160) = *(_OWORD*)result;
	*(_OWORD*)(a1 + 224) = v6;
	*(_DWORD*)(a1 + 24) = 1;
	return result;
}
// 1402F15D0: using guessed type float var_88[4];

