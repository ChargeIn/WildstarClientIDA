#include "../winhttp.h"

//----- (00000001403917C0) ----------------------------------------------------
__int64 __fastcall sub_1403917C0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	__int64 v4; // rcx
	__m128 v6; // [rsp+30h] [rbp-18h] BYREF

	v4 = *(_QWORD*)(a1 + 16);
	v6 = _mm_sub_ps((__m128)0i64, (__m128)xmmword_140C77870);
	return (*(__int64(__fastcall**)(__int64, __int64, __m128*, __int64, int))(*(_QWORD*)v4 + 176i64))(
		v4,
		a2,
		&v6,
		a3,
		a4);
}
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 1403917C0: using guessed type __m128 var_18;

