#include "../winhttp.h"

//----- (00000001400FF280) ----------------------------------------------------
__int64 __fastcall sub_1400FF280(_DWORD* a1, _DWORD* a2, __m128* a3, float* a4, int a5, int a6)
{
	__m128 v7; // xmm0
	float v8; // xmm7_4
	int v9; // edx
	int v10; // ecx
	float v11; // xmm6_4
	float v12; // xmm4_4
	float v13; // xmm6_4
	int v14; // eax
	int v15; // ecx
	float v16; // xmm8_4
	float v17; // xmm6_4
	float v18; // xmm5_4
	float v19; // xmm1_4
	__int64 result; // rax
	float v21; // xmm0_4
	float v22; // xmm6_4
	float v23; // xmm5_4
	float v24; // xmm5_4
	float v25; // xmm5_4
	float v26; // xmm5_4
	float v27; // xmm4_4
	float v28; // xmm4_4
	float v29; // xmm4_4
	float v30; // xmm4_4

	v7 = _mm_sub_ps(a3[1], *a3);
	if (a5)
	{
		v8 = a3->m128_f32[0];
	}
	else
	{
		v8 = a3->m128_f32[1];
		a1 = a2;
		v7.m128_i32[0] = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
	}
	v9 = a1[2];
	v10 = a1[4];
	v11 = (float)(int)v7.m128_f32[0];
	v12 = fminf(v11, (float)(a1[1] - *a1));
	v13 = v11 - v12;
	v14 = a1[5] - v10;
	v15 = v10 - a1[3];
	v16 = fminf(v13, (float)(a1[3] - v9));
	v17 = v13 - v16;
	v18 = fminf(v17, (float)v14);
	v19 = (float)(v9 - a1[1]);
	result = (unsigned int)v15;
	v21 = (float)v15;
	v22 = v17 - v18;
	if (v19 == 0.0)
	{
		if (v21 != 0.0)
			v21 = v22;
	}
	else
	{
		v19 = v22;
		if (v21 != 0.0)
		{
			v19 = v22 * 0.5;
			v21 = v22 - (float)(v22 * 0.5);
		}
	}
	*a4 = v8;
	if (a6)
	{
		v23 = v18 + v8;
		a4[1] = v23;
		v24 = v23 + v21;
		a4[2] = v24;
		v25 = v24 + v16;
		a4[3] = v25;
		v26 = v25 + v19;
		a4[4] = v26;
		a4[5] = v26 + v12;
	}
	else
	{
		v27 = v12 + v8;
		a4[1] = v27;
		v28 = v27 + v19;
		a4[2] = v28;
		v29 = v28 + v16;
		a4[3] = v29;
		v30 = v29 + v21;
		a4[4] = v30;
		a4[5] = v30 + v18;
	}
	return result;
}

