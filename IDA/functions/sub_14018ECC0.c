#include "../winhttp.h"

//----- (000000014018ECC0) ----------------------------------------------------
__m128* __fastcall sub_14018ECC0(__m128* a1, WCHAR* a2)
{
	WCHAR* v2; // rdi
	__m128* result; // rax
	char v5; // r15
	unsigned int v6; // ebx
	unsigned __int16** v7; // r14
	unsigned __int64 i; // rsi
	WCHAR v9; // cx
	unsigned int v10; // ebx
	WCHAR v11; // cx
	__m128 v12; // xmm2
	__m128 v13; // [rsp+20h] [rbp-28h]

	v2 = a2;
	if (!a2)
	{
		result = a1;
		*a1 = 0i64;
		return result;
	}
	v5 = 0;
	if (*a2 == 48 && (unsigned __int16)sub_140056430(a2[1]) == 120)
		v2 += 2;
	if (*v2 == 50 && (unsigned __int16)sub_140056430(v2[1]) == 120 && v2[2] == 58)
	{
		v5 = 1;
		v2 += 3;
	}
	v6 = 0;
	v7 = &off_140B5E520;
	for (i = 0i64; i < 8; ++i)
	{
		if (!(unsigned int)sub_14018E2C0((__int64)v2, *v7))
		{
			*a1 = _mm_mul_ps(
				_mm_cvtepi32_ps(
					_mm_shuffle_epi32(
						_mm_unpacklo_epi16(
							_mm_unpacklo_epi8(
								_mm_shuffle_epi32(_mm_cvtsi32_si128(*((_DWORD*)&off_140B5E520 + 4 * i + 2)), 0),
								(__m128i)0i64),
							(__m128i)0i64),
						198)),
				(__m128)xmmword_140B7AB70);
			return a1;
		}
		v7 += 2;
	}
	if ((unsigned int)sub_1407DFF44(*v2))
	{
		while (1)
		{
			v9 = *v2;
			v6 *= 16;
			if ((unsigned __int16)(*v2 - 48) <= 9u)
				break;
			if ((unsigned __int16)(v9 - 97) <= 5u)
			{
				v10 = v6 - 87;
				goto LABEL_20;
			}
			if ((unsigned __int16)(v9 - 65) <= 5u)
			{
				v10 = v6 - 55;
				goto LABEL_20;
			}
		LABEL_21:
			v11 = v2[1];
			++v2;
			if (!(unsigned int)sub_1407DFF44(v11))
				goto LABEL_22;
		}
		v10 = v6 - 48;
	LABEL_20:
		v6 = v9 + v10;
		goto LABEL_21;
	}
LABEL_22:
	v12 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(v6), 0), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v13.m128_i32[3] = v12.m128_i32[3];
	if (v5)
	{
		v13.m128_f32[0] = v12.m128_f32[0] * 2.0;
		v13.m128_f32[1] = v12.m128_f32[1] * 2.0;
		v13.m128_f32[2] = v12.m128_f32[2] * 2.0;
		v12 = v13;
	}
	*a1 = v12;
	return a1;
}
// 140B5E520: using guessed type wchar_t *off_140B5E520;
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;

