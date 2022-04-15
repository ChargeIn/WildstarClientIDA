#include "../winhttp.h"

//----- (00000001401886C0) ----------------------------------------------------
__int64 __fastcall sub_1401886C0(__int64 a1, __m128* a2, __int64 a3)
{
	__int64 v5; // r8
	__int64 v6; // r8
	__int64 result; // rax
	__m128 v8; // [rsp+20h] [rbp-28h] BYREF

	if ((unsigned int)sub_140188C10(a1 + 48, &v8, a3))
	{
		a2[1] = v8;
		(*(void(__fastcall**)(__m128*, __int64))(a2->m128_u64[0] + 16))(a2, 1i64);
	}
	if ((unsigned int)sub_140188C10(a1 + 104, &v8, v5))
	{
		a2[2] = v8;
		(*(void(__fastcall**)(__m128*, __int64))(a2->m128_u64[0] + 16))(a2, 2i64);
	}
	result = sub_1401889E0(a1 + 160, &v8, v6);
	if ((_DWORD)result)
	{
		a2[3] = v8;
		return (*(__int64(__fastcall**)(__m128*, __int64))(a2->m128_u64[0] + 16))(a2, 4i64);
	}
	return result;
}
// 14018870D: variable 'v5' is possibly undefined
// 14018873C: variable 'v6' is possibly undefined

