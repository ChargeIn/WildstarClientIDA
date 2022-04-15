//----- (000000014017D9F0) ----------------------------------------------------
__int64 __fastcall sub_14017D9F0(__int64 a1)
{
	__m128i v1; // xmm2
	__int64 v2; // rdx
	__int64 result; // rax
	__int128 v4; // [rsp+30h] [rbp-58h] BYREF
	__m128 v5; // [rsp+40h] [rbp-48h] BYREF
	__m128 v6; // [rsp+50h] [rbp-38h]
	__int128 v7[2]; // [rsp+60h] [rbp-28h] BYREF

	if (!*(_DWORD*)(a1 + 1024))
	{
		v1 = _mm_cvtsi32_si128(0);
		v6 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1048)), v1),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1052)), v1)));
		v2 = *(_QWORD*)(a1 + 2112);
		v5 = _mm_cvtepi32_ps((__m128i)0i64);
		v7[0] = (__int128)v5;
		v7[1] = (__int128)v6;
		v4 = xmmword_140B7B240;
		return (*(__int64(__fastcall**)(__int64, __int64, __int128*, __m128*, __int128*, int))(*(_QWORD*)qword_140C65680
			+ 240i64))(
				qword_140C65680,
				v2,
				v7,
				&v5,
				&v4,
				1);
	}
	return result;
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65680: using guessed type __int64 qword_140C65680;

