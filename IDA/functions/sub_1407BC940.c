#include "../winhttp.h"

//----- (00000001407BC940) ----------------------------------------------------
void __fastcall sub_1407BC940(__m128* a1, __m128* a2)
{
	__m128 v2; // [rsp+0h] [rbp-28h]
	__m128 v3; // [rsp+10h] [rbp-18h]

	v2 = _mm_max_ps(a1[54], *a2);
	v3 = _mm_min_ps(a1[55], a2[1]);
	if (v2.m128_f32[0] < v3.m128_f32[0] && v2.m128_f32[1] < v3.m128_f32[1] && v2.m128_f32[2] < v3.m128_f32[2])
	{
		a1[54] = (__m128)xmmword_140C798C0;
		a1[55] = (__m128)xmmword_140C798D0;
	}
}
// 140C798C0: using guessed type __int128 xmmword_140C798C0;
// 140C798D0: using guessed type __int128 xmmword_140C798D0;
// 1407BC940: using guessed type __m128 var_18;

