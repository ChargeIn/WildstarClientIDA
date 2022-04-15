#include "../winhttp.h"

//----- (00000001408E9B50) ----------------------------------------------------
__int64 __fastcall sub_1408E9B50(int a1, int* a2)
{
	int v3; // r8d
	__m128d v4; // xmm1
	int v5; // edx
	__int64 result; // rax

	v3 = 4;
	v4 = _mm_sqrt_pd((__m128d)COERCE_UNSIGNED_INT64((double)a1));
	v5 = (int)v4.m128d_f64[0];
	if ((double)v5 != v4.m128d_f64[0])
		v4.m128d_f64[0] = (double)(v5 - (_mm_movemask_pd(_mm_unpacklo_pd(v4, v4)) & 1));
	do
	{
		while (a1 % v3)
		{
			if (v3 == 2)
			{
				v3 = 3;
			}
			else if (v3 == 4)
			{
				v3 = 2;
			}
			else
			{
				v3 += 2;
			}
			if ((double)v3 > v4.m128d_f64[0])
				v3 = a1;
		}
		*a2 = v3;
		a2 += 2;
		result = (unsigned int)(a1 / v3);
		*(a2 - 1) = result;
		a1 /= v3;
	} while ((int)result > 1);
	return result;
}
// 1408E9B7A: conditional instruction was optimized away because rdx.8<100000000u

