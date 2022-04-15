#include "../winhttp.h"

//----- (0000000140868CC0) ----------------------------------------------------
__int64 __fastcall sub_140868CC0(__int64 a1, __m128i* a2)
{
	__int64 v4; // rbx
	__m128i v6; // [rsp+20h] [rbp-18h]

	EnterCriticalSection(&stru_140C62878);
	v6 = *a2;
	v4 = *(_QWORD*)(a1 + 8i64 * ((_mm_cvtsi128_si32(*a2) + _mm_srli_si128(*a2, 8).m128i_u32[0]) % 0x1F));
	if (v4)
	{
		while (*(_DWORD*)v4 != v6.m128i_i32[0] || *(_QWORD*)(v4 + 8) != v6.m128i_i64[1])
		{
			v4 = *(_QWORD*)(v4 + 16);
			if (!v4)
				goto LABEL_5;
		}
	}
	else
	{
	LABEL_5:
		v4 = 0i64;
	}
	LeaveCriticalSection(&stru_140C62878);
	return v4;
}
// 140868CC0: using guessed type __m128i var_18;

