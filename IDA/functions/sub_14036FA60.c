#include "../winhttp.h"

//----- (000000014036FA60) ----------------------------------------------------
__int64 __fastcall sub_14036FA60(__m128* a1, float* a2)
{
	unsigned __int64 v4; // rcx
	unsigned __int64 v5; // xmm0_8
	float* v7; // [rsp+48h] [rbp+10h] BYREF

	v7 = a2;
	if (!a2
		|| a1[1].m128_f32[0] > a2[20]
		|| a1[2].m128_f32[0] < a2[24]
		|| a1[1].m128_f32[1] > a2[21]
		|| a1[2].m128_f32[1] < a2[25])
	{
		return 0i64;
	}
	if (!a1[3].m128_u64[0] && a1[4].m128_u64[0] >= 8)
		sub_140370000(a1);
	v4 = a1[3].m128_u64[0];
	if (v4)
	{
		v5 = _mm_mul_ps(_mm_add_ps(a1[2], a1[1]), (__m128)xmmword_140B7AC50).m128_u64[0];
		if (*(float*)&v5 < a2[24])
		{
			if (*(float*)&v5 <= a2[20])
			{
				if (*((float*)&v5 + 1) >= a2[25])
				{
					sub_14036FA60(v4 + 160);
					return 1i64;
				}
				if (*((float*)&v5 + 1) <= a2[21])
				{
					sub_14036FA60(v4 + 240);
					return 1i64;
				}
			}
		}
		else
		{
			if (*((float*)&v5 + 1) >= a2[25])
			{
			LABEL_14:
				sub_14036FA60(v4);
				return 1i64;
			}
			if (*((float*)&v5 + 1) <= a2[21])
			{
				v4 += 80i64;
				goto LABEL_14;
			}
		}
	}
	sub_140033260(&a1[3].m128_i64[1], &v7);
	return 1i64;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;

