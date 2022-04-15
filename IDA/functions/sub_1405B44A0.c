#include "../winhttp.h"

//----- (00000001405B44A0) ----------------------------------------------------
__m128* __fastcall sub_1405B44A0(__int64 a1, __m128* a2)
{
	__m128 v2; // xmm0
	__m128 v4; // xmm7
	__m128 v5; // xmm8
	__m128 v6; // xmm0
	__m128* result; // rax

	if (*(_DWORD*)(a1 + 4956))
	{
		v2.m128_f32[0] = sub_1405B42D0(a1);
		v4 = v2;
		v2.m128_f32[0] = sub_1408FE3D0(*(double*)v2.m128_u64);
		v5 = v2;
		v6 = v4;
		v6.m128_f32[0] = sub_1408FC950(*(double*)v4.m128_u64);
		result = a2;
		*a2 = _mm_unpacklo_ps(
			_mm_unpacklo_ps(_mm_xor_ps(v5, (__m128)xmmword_140B7B530), _mm_xor_ps(v6, (__m128)xmmword_140B7B530)),
			(__m128)0i64);
	}
	else
	{
		result = a2;
		*a2 = *(__m128*)(a1 + 4416);
	}
	return result;
}
// 1405B44C2: variable 'v2' is possibly undefined
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

