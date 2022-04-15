//----- (00000001402E3A90) ----------------------------------------------------
__m128* __fastcall sub_1402E3A90(__int64 a1, __m128* a2)
{
	__m128* result; // rax
	__m128 v3; // xmm1

	result = a2;
	v3 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(
						_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(a1 + 32) + 80i64) & 0xFFFFFF), 0),
						(__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	*a2 = v3;
	*a2 = _mm_mul_ps(v3, (__m128)xmmword_140B7B2F0);
	a2->m128_i32[3] = 1065353216;
	return result;
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B2F0: using guessed type __int128 xmmword_140B7B2F0;

