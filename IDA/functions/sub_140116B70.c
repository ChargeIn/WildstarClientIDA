//----- (0000000140116B70) ----------------------------------------------------
__int64 __fastcall sub_140116B70(_DWORD* a1, int* a2)
{
	__m128i v3; // xmm2
	__int64 v5; // rax
	__m128 v7; // [rsp+20h] [rbp-18h] BYREF

	v3 = _mm_cvtsi32_si128(0);
	v7 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*a2 - a1[179]), v3),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(a2[1] - a1[180]), v3)));
	v5 = sub_140141A40((__int64)(a1 + 256), &v7);
	(*(void(__fastcall**)(_DWORD*, __int64))(*(_QWORD*)a1 + 488i64))(a1, v5);
	return sub_1400D23B0((__int64)a1, a2);
}
// 140116B70: using guessed type __m128 var_18;

