//----- (000000014030A8A0) ----------------------------------------------------
__m128* __fastcall sub_14030A8A0(__int64 a1, __m128* a2, __int64 a3)
{
	unsigned int* v3; // rax
	__m128 v4; // xmm0
	__m128 v5; // xmm2
	__m128 v6; // xmm3
	__m128* result; // rax
	__m128 v8; // xmm3
	__int16* v9; // rcx

	if (*(_DWORD*)(a1 + 176) == 1)
	{
		v3 = (unsigned int*)(*(_QWORD*)a1 + a3 * *(_QWORD*)(a1 + 88));
		v4 = (__m128)v3[2];
		v5 = (__m128)v3[1];
		v6 = (__m128) * v3;
		result = a2;
		v8 = _mm_unpacklo_ps(_mm_unpacklo_ps(v6, v4), _mm_unpacklo_ps(v5, (__m128)0i64));
	}
	else
	{
		v9 = (__int16*)(*(_QWORD*)a1 + a3 * *(_QWORD*)(a1 + 88));
		result = a2;
		v8 = _mm_mul_ps(
			_mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)*v9), (__m128)COERCE_UNSIGNED_INT((float)v9[2])),
				_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v9[1]), (__m128)0i64)),
			(__m128)xmmword_140B7AB30);
	}
	*a2 = v8;
	return result;
}
// 140B7AB30: using guessed type __int128 xmmword_140B7AB30;

