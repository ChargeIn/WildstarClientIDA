#include "../winhttp.h"

//----- (00000001403C5D20) ----------------------------------------------------
__m128* __fastcall sub_1403C5D20(_QWORD* a1, __m128* a2, float a3)
{
	__int64 v3; // r8
	__m128* v4; // rbx
	unsigned __int64 v5; // r9
	__int64 v6; // rax
	__m128 v7; // xmm0
	__m128* result; // rax
	__int64 v9; // rax
	__m128 v10; // xmm1
	float v11; // xmm0_4

	v3 = 0i64;
	v4 = a2;
	v5 = (__int64)(a1[28] - a1[27]) >> 2;
	if (v5)
	{
		v6 = 0i64;
		while (v6 != v5 - 1)
		{
			a2 = (__m128*)a1[27];
			if (a3 >= a2->m128_f32[v6] && a3 < a2->m128_f32[(unsigned int)(v3 + 1)])
			{
				v9 = a1[27];
				v10 = (__m128) * (unsigned int*)(v9 + 4i64 * (unsigned int)v3);
				v11 = *(float*)(v9 + 4i64 * (unsigned int)(v3 + 1));
				result = v4;
				v10.m128_f32[0] = (float)(a3 - v10.m128_f32[0]) / (float)(v11 - v10.m128_f32[0]);
				*v4 = _mm_add_ps(
					_mm_mul_ps(
						_mm_shuffle_ps(v10, v10, 0),
						_mm_sub_ps(
							*(__m128*)(a1[59] + 16i64 * (unsigned int)(v3 + 1)),
							*(__m128*)(a1[59] + 16i64 * (unsigned int)v3))),
					*(__m128*)(a1[59] + 16i64 * (unsigned int)v3));
				return result;
			}
			v3 = (unsigned int)(v3 + 1);
			v6 = (unsigned int)v3;
			if ((unsigned int)v3 >= v5)
				goto LABEL_7;
		}
		result = v4;
		*v4 = *(__m128*)(a1[59] + 16i64 * (unsigned int)v3);
	}
	else
	{
	LABEL_7:
		v7 = *(__m128*)(*(__int64(__fastcall**)(_QWORD*, __m128*, __int64))(*a1 + 88i64))(a1, a2, v3);
		result = v4;
		*v4 = v7;
	}
	return result;
}

