//----- (0000000140372E60) ----------------------------------------------------
__int64 __fastcall sub_140372E60(__int64 a1)
{
	__int64 v2; // rax
	__int64 result; // rax
	__m128i v4; // xmm1
	__m128 v5; // xmm2

	v2 = sub_140350C30(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64), *(_DWORD*)(a1 + 24));
	if (!v2)
		return 2147500037i64;
	v4 = _mm_cvtsi32_si128(*(_DWORD*)(v2 + 16));
	*(_DWORD*)(a1 + 44) = 1065353216;
	result = 0i64;
	v5 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(_mm_unpacklo_epi8(_mm_shuffle_epi32(v4, 0), (__m128i)0i64), (__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	*(_DWORD*)(a1 + 40) = v5.m128_i32[0];
	*(_DWORD*)(a1 + 32) = _mm_shuffle_ps(v5, v5, 170).m128_u32[0];
	*(_DWORD*)(a1 + 36) = _mm_shuffle_ps(v5, v5, 85).m128_u32[0];
	return result;
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;

