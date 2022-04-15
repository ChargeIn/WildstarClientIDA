#include "../winhttp.h"

//----- (00000001407B7D00) ----------------------------------------------------
__int64 __fastcall sub_1407B7D00(__m128* a1, _DWORD* a2)
{
	__int64 result; // rax
	__m128 v3; // xmm2
	__m128 v4; // xmm3
	__m128 v5; // xmm0
	float v6; // xmm3_4
	__m128 v7; // [rsp+20h] [rbp-28h] BYREF
	__int64 v8; // [rsp+30h] [rbp-18h]

	switch (*a2)
	{
	case 1:
		result = 2i64 * (unsigned int)a2[1];
		v3 = _mm_sub_ps(a1[23], *(__m128*)(a1[61].m128_u64[0] + 16i64 * (unsigned int)a2[1]));
		v4 = _mm_mul_ps(v3, v3);
		v5 = _mm_shuffle_ps(v4, v4, 85);
		v6 = fsqrt((float)(v4.m128_f32[0] + v5.m128_f32[0]) + _mm_shuffle_ps(v4, v4, 170).m128_f32[0]);
		if (v6 >= 0.0000099999997 && v6 <= 1.0078125)
		{
			v5.m128_f32[0] = v6;
			v8 = a1[61].m128_i64[0];
			v7 = _mm_div_ps(v3, _mm_shuffle_ps(v5, v5, 0));
			return sub_1407BCA70((__int64)a1, (__int64)&v7);
		}
		break;
	case 2:
		return sub_1407B7DD0(
			(__int64)a1,
			(__int64)a2,
			(__m128*)(a1[61].m128_u64[0] + 16i64 * (unsigned int)a2[1]),
			(__m128*)(a1[61].m128_u64[0] + 16i64 * (unsigned int)a2[2]));
	case 3:
		return sub_1407B7F60(a1, (__int64)a2, (__m128*)(a1[61].m128_u64[0] + 16i64 * (unsigned int)a2[1]), a1 + 62);
	}
	return result;
}

