#include "../winhttp.h"

//----- (0000000140785230) ----------------------------------------------------
int* __fastcall sub_140785230(int* a1, int* a2, int a3, int a4)
{
	int* v7; // rax
	double v8; // xmm0_8
	float v9; // xmm9_4
	__m128 v10; // xmm4
	__m128 v11; // xmm5
	float v12; // xmm3_4
	__m128 v13; // xmm2
	float v14; // xmm1_4
	int v15; // ecx
	float v16; // xmm2_4
	float v17; // xmm1_4
	int v18; // ecx
	float v19; // xmm2_4
	__m128 v20; // xmm4
	float v21; // xmm5_4
	float v22; // xmm1_4
	int v23; // ecx
	float v24; // xmm2_4
	float v25; // xmm1_4
	int v26; // ecx
	__m128 v27; // xmm4
	__m128 v28; // xmm4
	__m128 v29; // xmm2
	float v30; // xmm8_4
	__m128 v31; // xmm5
	float v32; // xmm1_4
	int v33; // ecx
	float v34; // xmm5_4
	float v35; // xmm1_4
	int v36; // ecx
	float v37; // xmm5_4
	int v38; // eax
	int v40[4]; // [rsp+30h] [rbp-88h] BYREF
	int v41[2]; // [rsp+40h] [rbp-78h] BYREF
	float v42; // [rsp+48h] [rbp-70h]

	if (a4)
	{
		v7 = (int*)sub_140787350((__int64)a1, (__int64)v41, a3);
		a1[9] = *v7;
		a1[10] = v7[1];
		a1[11] = v7[2];
	}
	else
	{
		sub_140787350((__int64)a1, (__int64)v40, a1[8]);
		sub_140787350((__int64)a1, (__int64)v41, a3);
		v8 = 0.0;
		if (a3 - a1[8] >= 0)
			*(float*)&v8 = (float)(a3 - a1[8]) * 0.001;
		*(float*)&v8 = (float)(*(float*)&v8 * -0.69314718) * 6.0240965;
		v9 = sub_1408FC7F0(v8);
		v13 = (__m128)(unsigned int)a1[9];
		v11 = (__m128)(unsigned int)a1[11];
		v10 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)(unsigned int)v40[1], (__m128)(unsigned int)v40[2]),
			_mm_unpacklo_ps((__m128)(unsigned int)v40[0], (__m128)0i64));
		v11.m128_f32[0] = (float)((float)(v11.m128_f32[0] - _mm_shuffle_ps(v10, v10, 170).m128_f32[0]) + 3.1415927)
			* 0.15915494;
		v12 = fmaxf(-1.5707964, fminf(*((float*)a1 + 10) - v10.m128_f32[0], 1.5707964));
		v13.m128_f32[0] = (float)((float)(v13.m128_f32[0] - _mm_shuffle_ps(v10, v10, 85).m128_f32[0]) + 3.1415927)
			* 0.15915494;
		v14 = v13.m128_f32[0];
		v15 = (int)v13.m128_f32[0];
		if ((int)v13.m128_f32[0] != 0x80000000 && (float)v15 != v13.m128_f32[0])
			v14 = (float)(v15 - (_mm_movemask_ps(_mm_unpacklo_ps(v13, v13)) & 1));
		v16 = v13.m128_f32[0] - v14;
		v17 = v11.m128_f32[0];
		v18 = (int)v11.m128_f32[0];
		v19 = (float)(v16 * 6.2831855) - 3.1415927;
		if ((int)v11.m128_f32[0] != 0x80000000 && (float)v18 != v11.m128_f32[0])
			v17 = (float)(v18 - (_mm_movemask_ps(_mm_unpacklo_ps(v11, v11)) & 1));
		v20 = (__m128)0xBFC90FDB;
		v13.m128_f32[0] = (float)((float)(v19 * v9) + 3.1415927) * 0.15915494;
		v20.m128_f32[0] = fmaxf(-1.5707964, fminf(v12 * v9, 1.5707964));
		v21 = (float)((float)(v11.m128_f32[0] - v17) * 6.2831855) - 3.1415927;
		v22 = v13.m128_f32[0];
		v23 = (int)v13.m128_f32[0];
		v11.m128_f32[0] = (float)((float)(v21 * v9) + 3.1415927) * 0.15915494;
		if ((int)v13.m128_f32[0] != 0x80000000 && (float)v23 != v13.m128_f32[0])
			v22 = (float)(v23 - (_mm_movemask_ps(_mm_unpacklo_ps(v13, v13)) & 1));
		v24 = v13.m128_f32[0] - v22;
		v25 = v11.m128_f32[0];
		v26 = (int)v11.m128_f32[0];
		v13.m128_f32[0] = (float)(v24 * 6.2831855) - 3.1415927;
		if ((int)v11.m128_f32[0] != 0x80000000 && (float)v26 != v11.m128_f32[0])
			v25 = (float)(v26 - (_mm_movemask_ps(_mm_unpacklo_ps(v11, v11)) & 1));
		v11.m128_f32[0] = (float)((float)(v11.m128_f32[0] - v25) * 6.2831855) - 3.1415927;
		v27 = _mm_unpacklo_ps(v20, v11);
		v31 = (__m128)(unsigned int)v41[0];
		v28 = _mm_unpacklo_ps(v27, _mm_unpacklo_ps(v13, (__m128)0i64));
		v29 = (__m128)LODWORD(v42);
		v29.m128_f32[0] = (float)((float)(v42 + _mm_shuffle_ps(v28, v28, 170).m128_f32[0]) + 3.1415927) * 0.15915494;
		v30 = fmaxf(-1.5707964, fminf(*(float*)&v41[1] + v28.m128_f32[0], 1.5707964));
		v31.m128_f32[0] = (float)((float)(*(float*)v41 + _mm_shuffle_ps(v28, v28, 85).m128_f32[0]) + 3.1415927)
			* 0.15915494;
		v32 = v31.m128_f32[0];
		v33 = (int)v31.m128_f32[0];
		if ((int)v31.m128_f32[0] != 0x80000000 && (float)v33 != v31.m128_f32[0])
			v32 = (float)(v33 - (_mm_movemask_ps(_mm_unpacklo_ps(v31, v31)) & 1));
		v34 = v31.m128_f32[0] - v32;
		v35 = v29.m128_f32[0];
		v36 = (int)v29.m128_f32[0];
		v37 = (float)(v34 * 6.2831855) - 3.1415927;
		if ((int)v29.m128_f32[0] != 0x80000000 && (float)v36 != v29.m128_f32[0])
			v35 = (float)(v36 - (_mm_movemask_ps(_mm_unpacklo_ps(v29, v29)) & 1));
		*((float*)a1 + 9) = v37;
		*((float*)a1 + 10) = v30;
		*((float*)a1 + 11) = (float)((float)(v29.m128_f32[0] - v35) * 6.2831855) - 3.1415927;
	}
	v38 = a1[9];
	a1[8] = a3;
	*a2 = v38;
	a2[1] = a1[10];
	a2[2] = a1[11];
	return a2;
}

