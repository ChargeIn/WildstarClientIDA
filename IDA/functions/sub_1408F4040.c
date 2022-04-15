#include "../winhttp.h"

//----- (00000001408F4040) ----------------------------------------------------
float __fastcall sub_1408F4040(__int64 a1, float a2, float a3, float a4, float a5)
{
	float v6; // xmm7_4
	double v8; // xmm0_8
	float v9; // xmm0_4
	float v10; // xmm1_4
	bool v11; // cf
	int v12; // eax
	float v13; // xmm4_4
	int v14; // eax
	float v15; // xmm3_4
	int v16; // eax
	float v17; // xmm0_4
	int v18; // eax
	float v19; // xmm6_4
	__m128 v20; // xmm0
	float v21; // xmm6_4
	float v22; // xmm6_4
	__m128 v23; // xmm1
	int v24; // ecx
	float v25; // xmm1_4
	double v26; // xmm0_8

	v6 = 13.5 - (float)(a4 * 9.0);
	v8 = sub_1408FBFC0(COERCE_DOUBLE(0x40000000i64), *(float*)(a1 + 12) - v6);
	v9 = *(float*)&v8 * *(float*)(a1 + 4);
	*(float*)(a1 + 4) = v9;
	v10 = v9 + *(float*)(a1 + 8);
	if (v9 != 0.0)
	{
		v11 = v9 < 0.0;
		if (v9 <= 0.0)
		{
		LABEL_5:
			if (!v11 || v10 > *(float*)a1)
				goto LABEL_11;
			goto LABEL_7;
		}
		if (v10 < *(float*)a1)
		{
			v11 = v9 < 0.0;
			goto LABEL_5;
		}
	}
LABEL_7:
	v12 = 214013 * *(_DWORD*)(a1 + 16) + 2531011;
	v13 = (float)v12;
	v14 = 214013 * v12 + 2531011;
	*(_DWORD*)(a1 + 16) = v14;
	v15 = (float)v14;
	*(float*)(a1 + 12) = v6;
	v16 = 214013 * *(_DWORD*)(a1 + 16) + 2531011;
	v17 = (float)v16;
	v18 = 214013 * v16 + 2531011;
	*(_DWORD*)(a1 + 16) = v18;
	v19 = (float)((float)v18 * 2.3283064e-10) + (float)(v17 * 2.3283064e-10);
	v20 = (__m128)0x40000000u;
	v21 = (float)((float)(v19 * 0.5) * 2.0) - 1.0;
	*(float*)a1 = v21;
	v22 = v21 - *(float*)(a1 + 8);
	*(double*)v20.m128_u64 = sub_1408FBFC0(
		COERCE_DOUBLE(0x40000000i64),
		(float)((float)((float)((float)(v15 * 2.3283064e-10) + (float)(v13 * 2.3283064e-10)) * 0.5)
			+ v6)
		- 0.5);
	v23 = v20;
	v23.m128_f32[0] = (float)(v20.m128_f32[0] * 0.001) / a5;
	v24 = (int)v23.m128_f32[0];
	if ((int)v23.m128_f32[0] != 0x80000000 && (float)v24 != v23.m128_f32[0])
		v23.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v23, v23)) & 1) + v24);
	*(float*)(a1 + 4) = v22 / v23.m128_f32[0];
LABEL_11:
	v25 = *(float*)(a1 + 8) + *(float*)(a1 + 4);
	*(float*)(a1 + 8) = v25;
	v26 = sub_1408FBFC0(COERCE_DOUBLE(0x40000000i64), v25 * a3);
	return *(float*)&v26 * a2;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

