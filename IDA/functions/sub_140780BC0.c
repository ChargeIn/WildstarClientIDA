#include "../winhttp.h"

//----- (0000000140780BC0) ----------------------------------------------------
void __fastcall sub_140780BC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v4; // r10
	__int64 v5; // r11
	__int64 v6; // rcx
	float v7; // xmm8_4
	__m128 v8; // xmm6
	__m128 v9; // xmm1
	int v10; // edx
	float* v11; // r9
	__int128 v12; // [rsp+30h] [rbp-68h] BYREF
	__int128 v13; // [rsp+40h] [rbp-58h]
	__m128 v14; // [rsp+50h] [rbp-48h] BYREF

	v4 = a2;
	v5 = a3;
	v6 = ((_BYTE)a3 + 1) & 0x1F;
	v7 = *(float*)(32 * a4 + a2 + 28);
	v8 = (__m128) * (unsigned int*)(32 * a3 + a2 + 28);
	v8.m128_f32[0] = v8.m128_f32[0] + 0.5;
	v13 = *(_OWORD*)(32 * a3 + a2);
	v9 = v8;
	v9.m128_f32[0] = v8.m128_f32[0] * 2.0;
	v10 = (int)(float)(v8.m128_f32[0] * 2.0);
	if (v10 != 0x80000000 && (float)v10 != v9.m128_f32[0])
		v9.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v9, v9)) & 1) + v10);
	v8.m128_f32[0] = v8.m128_f32[0] + (float)((float)(v9.m128_f32[0] * 0.5) - v8.m128_f32[0]);
	if (v8.m128_f32[0] < v7)
	{
		v11 = (float*)(32 * v6 + v4 + 28);
		do
		{
			if (v8.m128_f32[0] > *v11)
			{
				do
				{
					v5 = v6;
					v6 = ((_BYTE)v6 + 1) & 0x1F;
				} while (v8.m128_f32[0] > *(float*)(32i64 * (unsigned int)v6 + v4 + 28));
			}
			sub_140780A80(
				v6,
				(__m128*)(v4 + 32 * v5),
				(__m128*)(v4 + 32 * v6),
				*(double*)v8.m128_u64,
				(__m128*) & v12,
				&v14);
			v8.m128_f32[0] = v8.m128_f32[0] + 0.5;
			v13 = v12;
		} while (v8.m128_f32[0] < v7);
	}
}
// 140780C70: variable 'v11' is possibly undefined
// 140780C80: variable 'v6' is possibly undefined
// 140780C86: variable 'v4' is possibly undefined
// 140780CB8: variable 'v5' is possibly undefined

