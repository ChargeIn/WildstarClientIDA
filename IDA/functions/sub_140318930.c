#include "../winhttp.h"

//----- (0000000140318930) ----------------------------------------------------
__int64 __fastcall sub_140318930(float a1, __int64 a2, __int64 a3, _OWORD* a4, unsigned int a5)
{
	unsigned int v6; // r10d
	unsigned int i; // ecx
	__int64 v8; // rcx
	__int64 v9; // r10
	__m128 v10; // xmm0
	__int64 result; // rax
	float v12; // xmm4_4
	__int64 v13; // rcx
	__int64 v14; // r10
	__m128 v15; // xmm0
	__m128 v16; // xmm1
	__m128 v17; // xmm0
	float v18; // xmm4_4

	if (a5)
	{
		v6 = 0;
		if (a5 > 1)
		{
			for (i = 1; i < a5; ++i)
			{
				if (a1 < *(float*)(a2 + 16i64 * i))
					break;
				++v6;
			}
		}
		if (v6 == a5 - 1)
		{
			if (a5 <= 1)
			{
				result = 32i64 * v6;
				*a4 = *(_OWORD*)(result + a3);
			}
			else
			{
				v8 = v6;
				v9 = v6 - 1;
				v10 = (__m128) * (unsigned int*)(a2 + 16i64 * (unsigned int)v8);
				result = 2i64 * (unsigned int)v9;
				v12 = *(float*)(a2 + 16i64 * (unsigned int)v9);
				if (v10.m128_f32[0] == v12)
				{
					v13 = 32 * v8;
				LABEL_10:
					*a4 = *(_OWORD*)(v13 + a3);
					return result;
				}
				v10.m128_f32[0] = v10.m128_f32[0] - v12;
				v14 = 32 * v9;
				v15 = _mm_shuffle_ps(v10, v10, 0);
				v16 = _mm_div_ps(_mm_sub_ps(*(__m128*)(32 * v8 + a3), *(__m128*)(v14 + a3)), v15);
				v15.m128_f32[0] = a1 - v12;
				*a4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), v16), *(__m128*)(v14 + a3));
			}
		}
		else
		{
			v13 = 32i64 * v6;
			v17 = (__m128) * (unsigned int*)(a2 + 16i64 * (v6 + 1));
			result = 2i64 * v6;
			v18 = *(float*)(a2 + 16i64 * v6);
			if (v17.m128_f32[0] == v18)
				goto LABEL_10;
			v17.m128_f32[0] = (float)(a1 - v18) / (float)(v17.m128_f32[0] - v18);
			*a4 = _mm_add_ps(
				_mm_mul_ps(
					_mm_shuffle_ps(v17, v17, 0),
					_mm_sub_ps(*(__m128*)(32i64 * (v6 + 1) + a3), *(__m128*)(v13 + a3))),
				*(__m128*)(v13 + a3));
		}
	}
	return result;
}

