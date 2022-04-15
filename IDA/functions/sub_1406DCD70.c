//----- (00000001406DCD70) ----------------------------------------------------
__int64 __fastcall sub_1406DCD70(__m128* a1, int* a2)
{
	__m128i v4; // xmm2
	__m128 v6; // [rsp+20h] [rbp-18h] BYREF

	if (a1[129].m128_i8[0])
	{
		v4 = _mm_cvtsi32_si128(0);
		v6 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[56].m128_i32[2] - *a2), v4),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[56].m128_i32[3] - a2[1]), v4)));
		sub_1406DC510(a1, &v6);
		a1[56].m128_i32[2] = *a2;
		a1[56].m128_i32[3] = a2[1];
		a1[58].m128_i32[1] = sub_14018CDF0();
	}
	return sub_1400D23B0((__int64)a1, a2);
}
// 1406DCD70: using guessed type __m128 var_18;

