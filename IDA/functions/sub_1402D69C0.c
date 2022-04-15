#include "../winhttp.h"

//----- (00000001402D69C0) ----------------------------------------------------
__m128* __fastcall sub_1402D69C0(__m128* a1, __int64 a2)
{
	__m128 v2; // xmm0
	__m128* result; // rax
	__m128 v4; // xmm1
	__m128 v5; // xmm2
	__m128 v6; // [rsp+0h] [rbp-28h]
	__m128 v7; // [rsp+10h] [rbp-18h]

	v2 = (__m128)a1->m128_u32[3];
	result = *(__m128**)a2;
	if (v2.m128_f32[0] >= 0.0000099999997)
	{
		v4 = _mm_div_ps(*a1, _mm_shuffle_ps(v2, v2, 0));
		v5 = _mm_max_ps(result[1], v4);
		*result = _mm_min_ps(*result, v4);
		result[1] = v5;
	}
	else
	{
		v6.m128_u64[0] = 0i64;
		v7.m128_u64[0] = 0x3F8000003F800000i64;
		*result = v6;
		result[1] = v7;
	}
	++* (_DWORD*)(a2 + 8);
	return result;
}
// 1402D69E9: variable 'v6' is possibly undefined
// 1402D69F9: variable 'v7' is possibly undefined

