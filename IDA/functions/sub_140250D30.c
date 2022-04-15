#include "../winhttp.h"

//----- (0000000140250D30) ----------------------------------------------------
__m128* __fastcall sub_140250D30(__m128* a1, unsigned __int16* a2, char a3)
{
	unsigned __int64 v4; // r9
	unsigned __int16 v5; // cx
	__m128* result; // rax
	unsigned __int16 v7; // r8
	__m128 v8; // xmm4

	v4 = ((unsigned __int64)*((unsigned int*)a2 + 1) >> (2 * a3)) & 3;
	if ((((unsigned __int64)*((unsigned int*)a2 + 1) >> (2 * a3)) & 3) == 0)
	{
		v5 = *a2;
	LABEL_3:
		result = a1;
		*a1 = _mm_mul_ps(
			_mm_unpacklo_ps(
				_mm_unpacklo_ps(
					(__m128)COERCE_UNSIGNED_INT((float)(v5 >> 11)),
					(__m128)COERCE_UNSIGNED_INT((float)(v5 & 0x1F))),
				_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)((v5 >> 5) & 0x3F)), (__m128)0x3F800000u)),
			(__m128)xmmword_140B7AF60);
		return result;
	}
	v5 = a2[1];
	if (v4 == 1)
		goto LABEL_3;
	v7 = *a2;
	if (*a2 > v5)
	{
		result = a1;
		v8 = _mm_mul_ps(
			_mm_unpacklo_ps(
				_mm_unpacklo_ps(
					(__m128)COERCE_UNSIGNED_INT((float)(v7 >> 11)),
					(__m128)COERCE_UNSIGNED_INT((float)(v7 & 0x1F))),
				_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)((v7 >> 5) & 0x3F)), (__m128)0x3F800000u)),
			(__m128)xmmword_140B7AF60);
		*a1 = _mm_add_ps(
			_mm_mul_ps(
				_mm_shuffle_ps((__m128)dword_140AE37B8[v4], (__m128)dword_140AE37B8[v4], 0),
				_mm_sub_ps(
					_mm_mul_ps(
						_mm_unpacklo_ps(
							_mm_unpacklo_ps(
								(__m128)COERCE_UNSIGNED_INT((float)(v5 >> 11)),
								(__m128)COERCE_UNSIGNED_INT((float)(v5 & 0x1F))),
							_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)((v5 >> 5) & 0x3F)), (__m128)0x3F800000u)),
						(__m128)xmmword_140B7AF60),
					v8)),
			v8);
	}
	else
	{
		result = a1;
		if (v4 == 3)
			*a1 = 0i64;
		else
			*a1 = _mm_mul_ps(
				_mm_add_ps(
					_mm_mul_ps(
						_mm_unpacklo_ps(
							_mm_unpacklo_ps(
								(__m128)COERCE_UNSIGNED_INT((float)(v5 >> 11)),
								(__m128)COERCE_UNSIGNED_INT((float)(v5 & 0x1F))),
							_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)((v5 >> 5) & 0x3F)), (__m128)0x3F800000u)),
						(__m128)xmmword_140B7AF60),
					_mm_mul_ps(
						_mm_unpacklo_ps(
							_mm_unpacklo_ps(
								(__m128)COERCE_UNSIGNED_INT((float)(v7 >> 11)),
								(__m128)COERCE_UNSIGNED_INT((float)(v7 & 0x1F))),
							_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)((v7 >> 5) & 0x3F)), (__m128)0x3F800000u)),
						(__m128)xmmword_140B7AF60)),
				(__m128)xmmword_140B7AC50);
	}
	return result;
}
// 140AE37B8: using guessed type unsigned int dword_140AE37B8[4];
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7AF60: using guessed type __int128 xmmword_140B7AF60;

