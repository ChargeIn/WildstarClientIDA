//----- (0000000140642430) ----------------------------------------------------
__int64 __fastcall sub_140642430(__int64 a1, int* a2)
{
	__m128 v2; // xmm0
	__m128 v3; // xmm2
	__m128 v4; // xmm3
	int v5; // edx
	__m128 v7; // [rsp+30h] [rbp-28h] BYREF
	__m128 v8; // [rsp+40h] [rbp-18h] BYREF

	v2 = (__m128)(unsigned int)a2[3];
	v3 = (__m128)(unsigned int)a2[2];
	v7 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128)(unsigned int)a2[4], (__m128)(unsigned int)a2[6]),
		_mm_unpacklo_ps((__m128)(unsigned int)a2[5], (__m128)0i64));
	v4 = _mm_unpacklo_ps((__m128)(unsigned int)a2[1], v2);
	v2.m128_i32[0] = a2[7];
	v5 = *a2;
	v8 = _mm_unpacklo_ps(v4, _mm_unpacklo_ps(v3, (__m128)0i64));
	sub_140780830(a1, v5, &v8, &v7, v2.m128_i32[0]);
	return 0i64;
}
// 140642430: using guessed type __m128 var_18;

