#include "../winhttp.h"

//----- (00000001402E6790) ----------------------------------------------------
__int64 __fastcall sub_1402E6790(__int64* a1, float* a2, __m128* a3, __int16 a4)
{
	float v4; // xmm1_4

	if (*a2 >= 0.0 && *a2 <= 1.0)
	{
		v4 = a2[1];
		if (v4 >= 0.0 && v4 <= 1.0)
			return sub_1402DA040(a1, (unsigned __int64)a2, a3, a4);
	}
	sub_1402D9E20((__int64)a3, a4);
	return 0i64;
}

