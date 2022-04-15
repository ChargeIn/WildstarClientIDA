//----- (0000000140286880) ----------------------------------------------------
__int64 __fastcall sub_140286880(__m128* a1, unsigned __int64* a2, unsigned int* a3, __int64 a4)
{
	unsigned __int64 v5; // rcx
	__int64 result; // rax

	v5 = a1[26].m128_u64[0];
	if (v5)
	{
		(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v5 + 8i64))(v5);
		a1[26].m128_u64[0] = 0i64;
	}
	a1[27] = _mm_rcp_ps(
		_mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*a3), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(a3[1]), _mm_cvtsi32_si128(0)))));
	a1[15].m128_u64[1] = a2[1];
	a1[15].m128_u64[0] = *a2;
	a1[16].m128_u64[0] = a2[2];
	result = (*(__int64(__fastcall**)(__m128*, _QWORD, __int64))(a1->m128_u64[0] + 232))(a1, 0i64, a4);
	a1[15].m128_u64[1] = 0i64;
	a1[15].m128_u64[0] = 0i64;
	a1[16].m128_u64[0] = 0i64;
	return result;
}

