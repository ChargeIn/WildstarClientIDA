#include "../winhttp.h"

//----- (00000001403702A0) ----------------------------------------------------
__m128* __fastcall sub_1403702A0(__m128* a1, float* a2)
{
	__m128* i; // rax
	unsigned __int64 v3; // xmm0_8

	for (i = (__m128*)a1[3].m128_u64[0]; i; i = (__m128*)a1[3].m128_u64[0])
	{
		v3 = _mm_mul_ps(_mm_add_ps(a1[2], a1[1]), (__m128)xmmword_140B7AC50).m128_u64[0];
		if (a2[4] > *(float*)&v3)
		{
			if (*(float*)&v3 > *a2)
				return a1;
			if (*((float*)&v3 + 1) < a2[5])
			{
				if (*((float*)&v3 + 1) > a2[1])
					return a1;
				a1 = i + 15;
			}
			else
			{
				a1 = i + 10;
			}
		}
		else if (*((float*)&v3 + 1) < a2[5])
		{
			if (*((float*)&v3 + 1) > a2[1])
				return a1;
			a1 = i + 5;
		}
		else
		{
			a1 = i;
		}
	}
	return a1;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;

