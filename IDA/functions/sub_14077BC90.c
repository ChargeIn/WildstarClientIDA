#include "../winhttp.h"

//----- (000000014077BC90) ----------------------------------------------------
void __fastcall sub_14077BC90(__m128* a1)
{
	__m128 v2; // xmm2
	__m128 v3; // xmm1

	if ((*(_BYTE*)(a1[9].m128_u64[0] + 28) & 1) == 0)
	{
		v2 = _mm_sub_ps(*(__m128*)(*(_QWORD*)(qword_140C65898 + 120) + 4576i64), a1[11]);
		v3 = _mm_mul_ps(v2, v2);
		if ((float)((float)(v3.m128_f32[0] + _mm_shuffle_ps(v3, v3, 85).m128_f32[0])
			+ _mm_shuffle_ps(v3, v3, 170).m128_f32[0]) > 25.0)
		{
			sub_1407797A0((__int64)a1, 1, 2);
			sub_140779660((__int64)a1, 0i64);
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

