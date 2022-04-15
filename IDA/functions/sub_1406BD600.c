#include "../winhttp.h"

//----- (00000001406BD600) ----------------------------------------------------
__int64 __fastcall sub_1406BD600(__int64 a1)
{
	__int64 result; // rax
	unsigned int v3; // edi
	unsigned int v4; // ebx
	__int64 v5; // rdx
	__m128i v6; // xmm2
	__int128 v7; // [rsp+30h] [rbp-58h] BYREF
	__m128 v8; // [rsp+40h] [rbp-48h] BYREF
	__m128 v9; // [rsp+50h] [rbp-38h]
	__int128 v10[2]; // [rsp+60h] [rbp-28h] BYREF

	result = qword_140C65898;
	if (*(_QWORD*)(qword_140C65898 + 25744))
	{
		v3 = *(_DWORD*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2320) + 24i64))(*(_QWORD*)(a1 + 2320)) + 8);
		v4 = *(_DWORD*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2320) + 24i64))(*(_QWORD*)(a1 + 2320)) + 4);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		v5 = *(_QWORD*)(a1 + 2320);
		v6 = _mm_cvtsi32_si128(0);
		v8 = _mm_cvtepi32_ps((__m128i)0i64);
		v10[0] = (__int128)v8;
		v9 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v4), v6),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v3), v6)));
		v10[1] = (__int128)v9;
		v7 = xmmword_140B7B240;
		return (*(__int64(__fastcall**)(__int64, __int64, __int128*, __m128*, __int128*, int))(*(_QWORD*)qword_140C65680
			+ 240i64))(
				qword_140C65680,
				v5,
				v10,
				&v8,
				&v7,
				1);
	}
	return result;
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C65898: using guessed type __int64 qword_140C65898;

