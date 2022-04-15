#include "../winhttp.h"

//----- (00000001401B2BA0) ----------------------------------------------------
__int64 __fastcall sub_1401B2BA0(float* a1, float* a2, __int64 a3)
{
	float v3; // xmm1_4
	float v4; // xmm2_4
	__int64 v5; // r10
	unsigned __int64 v7; // r9
	float v8; // xmm3_4
	float v9; // xmm4_4
	float v10; // xmm0_4
	float v11; // xmm1_4
	__m128 v12; // xmm5
	__m128 v13; // xmm6
	unsigned __int64 v14; // rcx
	__int64 v15; // rdx
	__m128* v16; // r8
	__m128 v17; // xmm3
	__m128 v18; // xmm4
	float v20; // [rsp+0h] [rbp-68h]
	int v21[3]; // [rsp+4h] [rbp-64h]
	float v22; // [rsp+10h] [rbp-58h]
	float v23[2]; // [rsp+14h] [rbp-54h]
	float v24; // [rsp+1Ch] [rbp-4Ch]

	v3 = *a2;
	v4 = a2[4];
	v5 = 0i64;
	v7 = 0i64;
	v8 = a2[1];
	v9 = a2[5];
	v22 = *a1;
	v24 = a1[4];
	v10 = fmaxf(v22, fminf(v3, v24));
	v11 = a1[5];
	v23[0] = v10;
	v20 = a1[1];
	v23[1] = fmaxf(v22, fminf(v4, v24));
	v21[0] = fmaxf(v20, fminf(v8, v11));
	v21[1] = fmaxf(v20, fminf(v9, v11));
	*(float*)&v21[2] = v11;
	do
	{
		v12 = (__m128)(unsigned int)v21[v7 - 1];
		v13 = (__m128)(unsigned int)v21[v7];
		if (v12.m128_f32[0] != v13.m128_f32[0])
		{
			v14 = 0i64;
			v15 = 0i64;
			v16 = (__m128*)(a3 + 32 * v5);
			do
			{
				if (v15 != 1)
				{
					v17 = (__m128)LODWORD(v23[v14 - 1]);
					v18 = (__m128)LODWORD(v23[v14]);
					if (v17.m128_f32[0] != v18.m128_f32[0])
					{
						if (a3)
						{
							*v16 = _mm_unpacklo_ps(_mm_unpacklo_ps(v17, (__m128)0i64), _mm_unpacklo_ps(v12, (__m128)0i64));
							v16[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(v18, (__m128)0i64), _mm_unpacklo_ps(v13, (__m128)0i64));
						}
						++v5;
						v16 += 2;
					}
				}
				++v14;
				v15 += v7;
			} while (v14 < 3);
		}
		++v7;
	} while (v7 < 3);
	return v5;
}
// 1401B2BA0: using guessed type int var_64[3];
// 1401B2BA0: using guessed type float var_54[2];

