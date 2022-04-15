//----- (00000001401B1D60) ----------------------------------------------------
float* __fastcall sub_1401B1D60(float* a1, float* a2)
{
	float v2; // xmm5_4
	float v3; // xmm3_4
	float v4; // xmm4_4
	float v6; // xmm2_4
	__m128 v7; // xmm1
	float* result; // rax
	float v9; // xmm0_4
	__int64 v10; // r9
	float v11; // xmm0_4
	float v12; // xmm3_4
	__m128 v13; // xmm0
	__int64 v14; // r8
	__int64 v15; // rdx
	float v16; // xmm1_4
	int v17[4]; // [rsp+0h] [rbp-38h]
	__int64 v18[5]; // [rsp+10h] [rbp-28h]

	v2 = *a2;
	v3 = a2[5];
	v4 = a2[10];
	v7 = (__m128)LODWORD(v4);
	v6 = *a2 + v3;
	v7.m128_f32[0] = v4 + v6;
	if ((float)(v4 + v6) <= 0.0)
	{
		v10 = 2i64;
		v18[2] = 0i64;
		v18[1] = 2i64;
		v18[0] = 1i64;
		v11 = (float)(v2 - v3) - v4;
		v12 = (float)(v3 - v2) - v4;
		*(float*)v17 = v11;
		*(float*)&v17[1] = v12;
		*(float*)&v17[2] = v4 - v6;
		if ((float)(v4 - v6) <= *(float*)&v17[v11 < v12])
			v10 = v11 < v12;
		v13 = (__m128)(unsigned int)v17[v10];
		v14 = v18[v10];
		v13.m128_f32[0] = v13.m128_f32[0] + 1.0;
		v15 = v18[v14];
		v16 = _mm_sqrt_ps(v13).m128_f32[0] * 0.5;
		a1[v10] = v16;
		a1[v14] = (float)(a2[4 * v14 + v10] + a2[4 * v10 + v14]) * (float)(0.25 / v16);
		a1[v15] = (float)(a2[4 * v15 + v10] + a2[4 * v10 + v15]) * (float)(0.25 / v16);
		result = a1;
		a1[3] = (float)(a2[4 * v14 + v15] - a2[4 * v15 + v14]) * (float)(0.25 / v16);
	}
	else
	{
		v7.m128_f32[0] = v7.m128_f32[0] + 1.0;
		result = a1;
		v9 = _mm_sqrt_ps(v7).m128_f32[0] * 0.5;
		a1[3] = v9;
		*a1 = (float)(a2[6] - a2[9]) * (float)(0.25 / v9);
		a1[1] = (float)(a2[8] - a2[2]) * (float)(0.25 / v9);
		a1[2] = (float)(a2[1] - a2[4]) * (float)(0.25 / v9);
	}
	return result;
}

