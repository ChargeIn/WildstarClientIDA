//----- (0000000140182C40) ----------------------------------------------------
__int64 __fastcall sub_140182C40(__int64* a1)
{
	__int64 v1; // rax
	__int64 result; // rax
	__int64 v4; // rdx
	__int128 v5; // [rsp+30h] [rbp-58h] BYREF
	__m128 v6; // [rsp+40h] [rbp-48h] BYREF
	__m128 v7; // [rsp+50h] [rbp-38h]
	__int128 v8[2]; // [rsp+60h] [rbp-28h] BYREF

	v1 = *a1;
	LODWORD(v5) = 0;
	result = (*(__int64(__fastcall**)(__int64*, __int128*))(v1 + 272))(a1, &v5);
	if ((_BYTE)result)
	{
		if (!*((_DWORD*)a1 + 256)
			|| (result = (*(__int64(__fastcall**)(__int64*))(*a1 + 688))(a1), !*((_DWORD*)a1 + 256)))
		{
			v4 = a1[140];
			v7 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*((_DWORD*)a1 + 270)), _mm_cvtsi32_si128(0)),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*((_DWORD*)a1 + 271)), _mm_cvtsi32_si128(0))));
			v6 = _mm_cvtepi32_ps((__m128i)0i64);
			v8[0] = (__int128)v6;
			v8[1] = (__int128)v7;
			v5 = xmmword_140B7B240;
			return (*(__int64(__fastcall**)(__int64, __int64, __int128*, __m128*, __int128*, int))(*(_QWORD*)qword_140C65680
				+ 240i64))(
					qword_140C65680,
					v4,
					v8,
					&v6,
					&v5,
					1);
		}
	}
	return result;
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65680: using guessed type __int64 qword_140C65680;

