#include "../winhttp.h"

//----- (00000001401B0590) ----------------------------------------------------
float* __fastcall sub_1401B0590(int* a1, __int64 a2)
{
	float** v2; // r8
	int v3; // xmm0_4
	__m128* v4; // rax
	__m128 v5; // xmm12
	float* v6; // rax
	float v7; // xmm11_4
	float v8; // xmm7_4
	float v9; // xmm9_4
	float v10; // xmm8_4
	float v11; // xmm4_4
	float v12; // xmm3_4
	float v13; // xmm10_4
	float v14; // xmm6_4
	float v15; // xmm5_4
	float v16; // xmm9_4
	float v17; // xmm7_4
	float v18; // xmm1_4
	float* result; // rax
	__m128* v20; // [rsp+20h] [rbp-C8h] BYREF
	int* v21; // [rsp+28h] [rbp-C0h]
	int v22[12]; // [rsp+30h] [rbp-B8h] BYREF
	__int128 v23; // [rsp+60h] [rbp-88h]

	v2 = (float**)a1;
	*(_QWORD*)(a2 + 52) = 0i64;
	*(_QWORD*)(a2 + 44) = 0i64;
	*(_QWORD*)(a2 + 32) = 0i64;
	*(_QWORD*)(a2 + 24) = 0i64;
	*(_QWORD*)(a2 + 12) = 0i64;
	*(_QWORD*)(a2 + 4) = 0i64;
	v3 = *a1;
	*(_DWORD*)(a2 + 40) = *a1;
	*(_DWORD*)(a2 + 20) = v3;
	*(_DWORD*)a2 = v3;
	*(_DWORD*)(a2 + 60) = 1065353216;
	v4 = (__m128*) * ((_QWORD*)a1 + 2);
	if (v4)
	{
		v20 = (__m128*)a2;
		v5 = *v4;
		v6 = (float*)*((_QWORD*)a1 + 1);
		v22[3] = 0;
		v22[7] = 0;
		v22[11] = 0;
		v7 = _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
		v8 = _mm_shuffle_ps(v5, v5, 255).m128_f32[0];
		v9 = _mm_shuffle_ps(v5, v5, 170).m128_f32[0];
		v10 = v8 * (float)(v7 * 2.0);
		v11 = v5.m128_f32[0] * (float)(v7 * 2.0);
		v12 = v9 * 2.0;
		v13 = v8 * (float)(v5.m128_f32[0] * 2.0);
		v14 = v7 * (float)(v7 * 2.0);
		v15 = v5.m128_f32[0] * (float)(v5.m128_f32[0] * 2.0);
		v16 = v9 * (float)(v9 * 2.0);
		v17 = v8 * v12;
		*(float*)v22 = (float)(1.0 - v14) - v16;
		v5.m128_f32[0] = v5.m128_f32[0] * v12;
		*(float*)&v22[1] = v11 + v17;
		*(float*)&v22[2] = v5.m128_f32[0] - v10;
		*(float*)&v22[5] = (float)(1.0 - v15) - v16;
		*(float*)&v22[8] = v5.m128_f32[0] + v10;
		*(float*)&v22[9] = (float)(v7 * v12) - v13;
		*(float*)&v22[4] = v11 - v17;
		*(float*)&v22[6] = (float)(v7 * v12) + v13;
		*(float*)&v22[10] = (float)(1.0 - v15) - v14;
		v23 = xmmword_140B7AD00;
		if (v6)
		{
			*(float*)(a2 + 48) = -*v6;
			*(float*)(a2 + 52) = -*(float*)(*((_QWORD*)a1 + 1) + 4i64);
			v18 = *(float*)(*((_QWORD*)a1 + 1) + 8i64);
			v21 = v22;
			*(float*)(a2 + 56) = -v18;
			sub_1401AFB10(&v20, (__m128*)a2);
			*(float*)(a2 + 48) = *v2[1] + *(float*)(a2 + 48);
			*(float*)(a2 + 52) = v2[1][1] + *(float*)(a2 + 52);
			*(float*)(a2 + 56) = v2[1][2] + *(float*)(a2 + 56);
		}
		else
		{
			v21 = v22;
			sub_1401AFB10(&v20, (__m128*)a2);
		}
	}
	result = v2[3];
	if (result)
	{
		*(float*)(a2 + 48) = *result + *(float*)(a2 + 48);
		*(float*)(a2 + 52) = v2[3][1] + *(float*)(a2 + 52);
		result = v2[3];
		*(float*)(a2 + 56) = result[2] + *(float*)(a2 + 56);
	}
	return result;
}
// 1401B07A2: variable 'v2' is possibly undefined
// 1401B07AA: variable 'a2' is possibly undefined
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

