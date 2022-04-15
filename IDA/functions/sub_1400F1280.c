#include "../winhttp.h"

//----- (00000001400F1280) ----------------------------------------------------
__int64 __fastcall sub_1400F1280(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__m128 v4; // xmm6
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // r9
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	int v10; // [rsp+28h] [rbp-20h]

	*a3 += 8i64;
	v4 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(*a3 - 8i64)), 0), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	*(__m128*)sub_140059170(a2, 0x10ui64) = v4;
	v5 = a2[4];
	v6 = sub_140062650((__int64)a2, (unsigned __int64*)"CColor", 6ui64);
	v7 = a2[2];
	v9 = v6;
	v10 = 4;
	sub_14005E8E0((__int64)a2, v5 + 160, (int*)&v9, v7);
	a2[2] += 16i64;
	return sub_140058BF0((__int64)a2, -2);
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;

