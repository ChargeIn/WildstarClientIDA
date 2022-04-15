#include "../winhttp.h"

//----- (00000001403A6440) ----------------------------------------------------
_BOOL8 __fastcall sub_1403A6440(__int64 a1, __m128* a2)
{
	__m128* v3; // rcx
	__int64 v4; // rsi
	__int64 v5; // rax
	__int32 v6; // eax
	_BOOL8 result; // rax

	if (!a2)
		return 0i64;
	if (a2 == *(__m128**)(a1 + 120))
		return 0i64;
	v3 = *(__m128**)(a1 + 25744);
	if (!v3 || !sub_1403AD690(v3, a2, 0.0, 5.0, 0.0))
		return 0i64;
	v4 = *(_QWORD*)(qword_140C65898 + 32144);
	result = 0;
	if (!sub_140396750(v4, a2->m128_u32[2]))
	{
		v5 = sub_1403967F0(v4, a2->m128_u32[2]);
		if (v5)
		{
			if (*(_DWORD*)(v5 + 68))
				return 1;
		}
		v6 = a2[8].m128_i32[0];
		if (v6 == 1 || v6 == 8)
			return 1;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

