#include "../winhttp.h"

//----- (00000001401B1C60) ----------------------------------------------------
__int64 __fastcall sub_1401B1C60(float* a1, __int64 a2)
{
	__m128 v2; // xmm7
	__m128 v4; // xmm2
	float v5; // xmm8_4
	float v6; // xmm9_4
	double v7; // xmm10_8
	float v8; // xmm6_4
	float v9; // xmm0_4
	int v10; // ecx
	__int64 result; // rax
	float v12; // xmm6_4

	v2 = (__m128) * (unsigned int*)a1;
	v4 = v2;
	v5 = a1[1];
	v6 = a1[2];
	v4.m128_f32[0] = (float)((float)(v2.m128_f32[0] * v2.m128_f32[0]) + (float)(v5 * v5)) + (float)(v6 * v6);
	*(_QWORD*)&v7 = _mm_sqrt_ps(v4).m128_u64[0];
	v8 = sub_1408FE3D0(v7);
	v9 = sub_1408FC950(v7);
	v10 = LODWORD(v8);
	*(float*)(a2 + 12) = v9;
	if (v8 < 0.0)
		v10 = 0x80000000 - LODWORD(v8);
	result = a2;
	if ((int)abs32(v10) > 84)
	{
		v12 = v8 / *(float*)&v7;
		v2.m128_f32[0] = v2.m128_f32[0] * v12;
		v5 = v5 * v12;
		v6 = v6 * v12;
	}
	*(float*)(a2 + 8) = v6;
	*(float*)(a2 + 4) = v5;
	*(_DWORD*)a2 = v2.m128_i32[0];
	return result;
}

