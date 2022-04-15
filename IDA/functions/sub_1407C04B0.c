#include "../winhttp.h"

//----- (00000001407C04B0) ----------------------------------------------------
__int64 __fastcall sub_1407C04B0(_QWORD** a1, __int64 a2, __int64 a3)
{
	__m128i v6; // [rsp+30h] [rbp-B8h]
	__m128i v7; // [rsp+40h] [rbp-A8h]
	__m128i v8; // [rsp+50h] [rbp-98h]
	__m128i v9; // [rsp+60h] [rbp-88h]
	__m128i v10; // [rsp+70h] [rbp-78h]
	__int64 v11; // [rsp+D0h] [rbp-18h]

	v10 = *(__m128i*)a3;
	v8 = *(__m128i*)(a3 + 16);
	v6 = *(__m128i*)(a3 + 32);
	v7 = *(__m128i*)(a3 + 48);
	v9 = *(__m128i*)(a3 + 64);
	v11 = *(_QWORD*)(a3 + 80);
	sub_1407E4830((int*)a3, 0i64, 0x58ui64);
	*(_DWORD*)a3 = _mm_cvtsi128_si32(v10);
	*(_DWORD*)(a3 + 8) = _mm_cvtsi128_si32(_mm_srli_si128(v10, 8));
	*(_QWORD*)(a3 + 16) = v8.m128i_i64[0];
	*(_DWORD*)(a3 + 24) = _mm_cvtsi128_si32(_mm_srli_si128(v8, 8));
	*(_DWORD*)(a3 + 32) = _mm_cvtsi128_si32(v6);
	*(_QWORD*)(a3 + 40) = _mm_srli_si128(v6, 8).m128i_u64[0];
	*(_DWORD*)(a3 + 48) = _mm_cvtsi128_si32(v7);
	*(_DWORD*)(a3 + 56) = _mm_cvtsi128_si32(_mm_srli_si128(v7, 8));
	*(_QWORD*)(a3 + 64) = v9.m128i_i64[0];
	*(_DWORD*)(a3 + 72) = _mm_cvtsi128_si32(_mm_srli_si128(v9, 8));
	*(_QWORD*)(a3 + 80) = v11;
	return sub_1407C08E0(a1, 0i64, a3, 88i64, 0i64);
}

