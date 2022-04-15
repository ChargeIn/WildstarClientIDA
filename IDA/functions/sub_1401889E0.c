#include "../winhttp.h"

//----- (00000001401889E0) ----------------------------------------------------
__int64 __fastcall sub_1401889E0(__int64 a1, __m128* a2, __int64 a3)
{
	__m128 v3; // xmm2
	__m128 v6; // xmm6
	__int64 v7; // r10
	__m128* v8; // r9
	__m128* v9; // r8
	__m128 v11; // xmm0
	__m128* v12; // rdx
	__m128* v13; // rcx
	__int64 v14; // r8
	__int64 v15; // rcx
	__int64 v16; // rax
	__m128* v17; // rax
	__int64 v18; // r8
	__int64 v19; // rax
	__m128* v20; // rax
	__m128* v21; // rcx
	__m128 v22; // xmm0
	float v23; // xmm1_4
	float v24; // xmm2_4

	v6 = v3;
	v7 = sub_140188E00(a1, (__int64)a2, a3);
	v8 = *(__m128**)(v7 + 8);
	v9 = *(__m128**)(v7 + 16);
	if (v8 == v9)
		return 0i64;
	if ((((char*)v9 - (char*)v8) & 0xFFFFFFFFFFFFFFE0ui64) == 32 || v3.m128_f32[0] <= v8[1].m128_f32[0])
	{
		v11 = *v8;
		goto LABEL_31;
	}
	if (v3.m128_f32[0] < v9[-1].m128_f32[0])
	{
		v12 = *(__m128**)(a1 + 40);
		if (v12 != v9)
		{
			if (v3.m128_f32[0] <= v12[1].m128_f32[0] && v3.m128_f32[0] >= *(float*)(*(_QWORD*)(a1 + 48) + 16i64))
				goto LABEL_27;
			if (v12 != v9)
			{
				*(_QWORD*)(a1 + 48) = v12;
				*(_QWORD*)(a1 + 40) = v12 + 2;
				v13 = *(__m128**)(v7 + 16);
				if (&v12[2] == v13 || v3.m128_f32[0] > v12[3].m128_f32[0] || v3.m128_f32[0] < v12[1].m128_f32[0])
				{
					v14 = *(_QWORD*)(v7 + 8);
					v15 = ((__int64)v13 - v14) >> 5;
					while (v15 > 0)
					{
						v16 = 32 * (v15 >> 1);
						if (v3.m128_f32[0] <= *(float*)(v16 + v14 + 16))
						{
							v15 >>= 1;
						}
						else
						{
							v14 += v16 + 32;
							v15 += -1 - (v15 >> 1);
						}
					}
					*(_QWORD*)(a1 + 40) = v14;
					v17 = (__m128*)(v14 - 32);
				LABEL_26:
					*(_QWORD*)(a1 + 48) = v17;
				}
			LABEL_27:
				v20 = *(__m128**)(a1 + 40);
				v21 = *(__m128**)(a1 + 48);
				v22 = 0i64;
				v23 = v20[1].m128_f32[0];
				v24 = v21[1].m128_f32[0];
				if (v23 != v24)
				{
					v22 = v6;
					v22.m128_f32[0] = (float)(v6.m128_f32[0] - v24) / (float)(v23 - v24);
				}
				*a2 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(*v20, *v21), _mm_shuffle_ps(v22, v22, 0)), *v21);
				return 1i64;
			}
		}
		v18 = ((char*)v9 - (char*)v8) >> 5;
		while (v18 > 0)
		{
			v19 = 2 * (v18 >> 1);
			if (v3.m128_f32[0] <= v8[v19 + 1].m128_f32[0])
			{
				v18 >>= 1;
			}
			else
			{
				v8 = (__m128*)((char*)v8 + v19 * 16 + 32);
				v18 += -1 - (v18 >> 1);
			}
		}
		*(_QWORD*)(a1 + 40) = v8;
		v17 = v8 - 2;
		goto LABEL_26;
	}
	v11 = v9[-2];
LABEL_31:
	*a2 = v11;
	return 1i64;
}
// 1401889F5: variable 'v3' is possibly undefined

