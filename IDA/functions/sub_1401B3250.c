#include "../winhttp.h"

//----- (00000001401B3250) ----------------------------------------------------
float* __fastcall sub_1401B3250(float* a1, float* a2, float* a3, float a4)
{
	float v4; // xmm2_4
	__m128 v7; // xmm4
	float v8; // xmm1_4
	int v9; // r8d
	float v10; // xmm4_4
	float v11; // xmm9_4
	__m128 v12; // xmm1
	float v13; // xmm2_4
	int v14; // ecx
	float v15; // xmm2_4
	int v16; // ecx
	float v17; // xmm1_4
	float v18; // xmm2_4
	int v19; // ecx
	float* result; // rax

	v7 = (__m128) * ((unsigned int*)a3 + 2);
	v4 = a2[2];
	v7.m128_f32[0] = (float)((float)(v7.m128_f32[0] - v4) + 3.1415927) * 0.15915494;
	v8 = v7.m128_f32[0];
	v9 = (int)v7.m128_f32[0];
	if ((int)v7.m128_f32[0] != 0x80000000 && (float)v9 != v7.m128_f32[0])
		v8 = (float)(v9 - (_mm_movemask_ps(_mm_unpacklo_ps(v7, v7)) & 1));
	v10 = (float)(v7.m128_f32[0] - v8) * 6.2831855;
	v12 = (__m128) * (unsigned int*)a3;
	v7.m128_f32[0] = (float)((float)((float)((float)(v10 - 3.1415927) * a4) + v4) + 3.1415927) * 0.15915494;
	v11 = fmaxf(-1.5707964, fminf((float)((float)(a3[1] - a2[1]) * a4) + a2[1], 1.5707964));
	v12.m128_f32[0] = (float)((float)(v12.m128_f32[0] - *a2) + 3.1415927) * 0.15915494;
	v13 = v12.m128_f32[0];
	v14 = (int)v12.m128_f32[0];
	if ((int)v12.m128_f32[0] != 0x80000000 && (float)v14 != v12.m128_f32[0])
		v13 = (float)(v14 - (_mm_movemask_ps(_mm_unpacklo_ps(v12, v12)) & 1));
	v12.m128_f32[0] = (float)((float)((float)((float)((float)((float)(v12.m128_f32[0] - v13) * 6.2831855) - 3.1415927) * a4)
		+ *a2)
		+ 3.1415927)
		* 0.15915494;
	v15 = v12.m128_f32[0];
	v16 = (int)v12.m128_f32[0];
	if ((int)v12.m128_f32[0] != 0x80000000 && (float)v16 != v12.m128_f32[0])
		v15 = (float)(v16 - (_mm_movemask_ps(_mm_unpacklo_ps(v12, v12)) & 1));
	v17 = v12.m128_f32[0] - v15;
	v18 = v7.m128_f32[0];
	a1[1] = v11;
	v19 = (int)v7.m128_f32[0];
	*a1 = (float)(v17 * 6.2831855) - 3.1415927;
	if ((int)v7.m128_f32[0] != 0x80000000 && (float)v19 != v7.m128_f32[0])
		v18 = (float)(v19 - (_mm_movemask_ps(_mm_unpacklo_ps(v7, v7)) & 1));
	result = a1;
	a1[2] = (float)((float)(v7.m128_f32[0] - v18) * 6.2831855) - 3.1415927;
	return result;
}

