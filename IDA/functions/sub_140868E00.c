#include "../winhttp.h"

//----- (0000000140868E00) ----------------------------------------------------
void __fastcall sub_140868E00(__int64 a1, __m128i* a2, _QWORD* a3)
{
	__int64 v6; // rax
	__int64 v7; // r8
	__m128i v8; // [rsp+20h] [rbp-18h]

	EnterCriticalSection(&stru_140C62878);
	v8 = *a2;
	v6 = *(_QWORD*)(a1 + 8i64 * ((_mm_cvtsi128_si32(*a2) + _mm_srli_si128(*a2, 8).m128i_u32[0]) % 0x1F));
	if (v6)
	{
		while (*(_DWORD*)v6 != v8.m128i_i32[0] || *(_QWORD*)(v6 + 8) != v8.m128i_i64[1])
		{
			v6 = *(_QWORD*)(v6 + 16);
			if (!v6)
				goto LABEL_5;
		}
	}
	else
	{
	LABEL_5:
		*a3 = a2->m128i_i64[0];
		a3[1] = a2->m128i_i64[1];
		v7 = (_mm_cvtsi128_si32(*a2) + _mm_srli_si128(*a2, 8).m128i_u32[0]) % 0x1F;
		a3[2] = *(_QWORD*)(a1 + 8 * v7);
		*(_QWORD*)(a1 + 8 * v7) = a3;
		++* (_DWORD*)(a1 + 248);
	}
	LeaveCriticalSection(&stru_140C62878);
}
// 140868E00: using guessed type __m128i var_18;

