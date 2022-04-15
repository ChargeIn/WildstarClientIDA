#include "../winhttp.h"

//----- (00000001401132F0) ----------------------------------------------------
__int64 __fastcall sub_1401132F0(__int64 a1)
{
	__int64 v2; // rdx
	__m128i v3; // xmm2
	__int64 v4; // r8
	__m128i v5; // xmm3
	__m128i v6; // xmm1
	unsigned __int64 v7; // r8
	__int64 v8; // r8
	__int64 result; // rax
	__int128 v10; // [rsp+40h] [rbp-38h] BYREF
	__int128 v11[2]; // [rsp+50h] [rbp-28h] BYREF

	if ((*(_BYTE*)(a1 + 664) & 1) == 0)
	{
		v2 = *(_QWORD*)(a1 + 696);
		v3 = _mm_cvtsi32_si128(0);
		v4 = *(_QWORD*)(qword_140C63650 + 232);
		v5 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 716));
		v6 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 720));
		v11[1] = (__int128)_mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 724)), v3),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 728)), v3)));
		v11[0] = (__int128)_mm_cvtepi32_ps(_mm_unpacklo_epi32(_mm_unpacklo_epi32(v5, v3), _mm_unpacklo_epi32(v6, v3)));
		v10 = xmmword_140B7B240;
		(*(void(__fastcall**)(__int64, _QWORD, __int64, __int64, __int64, int, __int128*, int))(*(_QWORD*)qword_140C65680
			+ 264i64))(
				qword_140C65680,
				*(_QWORD*)(v2 + 96),
				v4,
				-1i64,
				a1 + 1344,
				1030,
				&v10,
				1);
		v7 = *(unsigned int*)(a1 + 1160);
		if (v7 >= *(_QWORD*)(qword_140C63678 + 48))
			v8 = *(_QWORD*)(qword_140C63678 + 40);
		else
			v8 = *(_QWORD*)(qword_140C63678 + 40) + 32 * v7;
		return (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, __int128*, int, __int64, int))(*(_QWORD*)qword_140C65680 + 264i64))(
			qword_140C65680,
			*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64),
			*(_QWORD*)(qword_140C63650 + 232),
			-1i64,
			v11,
			262,
			v8,
			1);
	}
	return result;
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;

