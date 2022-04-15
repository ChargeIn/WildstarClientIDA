#include "../winhttp.h"

//----- (000000014077B6F0) ----------------------------------------------------
void __fastcall sub_14077B6F0(__m128* a1)
{
	__m128 v1; // xmm2
	__m128 v2; // xmm1

	if ((*(_BYTE*)(a1[9].m128_u64[0] + 28) & 1) == 0)
	{
		v1 = _mm_sub_ps(*(__m128*)(*(_QWORD*)(qword_140C65898 + 120) + 4576i64), a1[12]);
		v2 = _mm_mul_ps(v1, v1);
		if ((float)((float)(v2.m128_f32[0] + _mm_shuffle_ps(v2, v2, 85).m128_f32[0])
			+ _mm_shuffle_ps(v2, v2, 170).m128_f32[0]) > 25.0)
			sub_140779660((__int64)a1, 0i64);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

