#include "../winhttp.h"

//----- (0000000140378E70) ----------------------------------------------------
__m128* __fastcall sub_140378E70(__m128* a1)
{
	__m128* v1; // rax
	__m128 i; // xmm2
	__m128 v4; // xmm1
	__m128 v5; // xmm2
	__m128 v6; // xmm0
	unsigned __int64 v7; // rcx
	__m128* result; // rax
	unsigned __int64 v9; // rbx
	__m128* v10; // rsi
	__m128 v11; // [rsp+20h] [rbp-18h] BYREF

	v1 = (__m128*)a1[2].m128_u64[1];
	for (i = 0i64; v1; i = _mm_add_ps(v5, v4))
	{
		v4 = i;
		v5 = v1[10];
		v1 = (__m128*)v1[2].m128_u64[1];
	}
	v6 = a1[10];
	v7 = a1[3].m128_u64[0];
	v11 = _mm_add_ps(v6, i);
	(*(void(__fastcall**)(unsigned __int64, __m128*))(*(_QWORD*)v7 + 168i64))(v7, &v11);
	result = (__m128*)(*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)a1[3].m128_u64[0] + 72i64))(a1[3].m128_u64[0]);
	v9 = 0i64;
	v10 = result;
	if (result)
	{
		do
		{
			result = (__m128*)(*(__int64(__fastcall**)(unsigned __int64, unsigned __int64))(*(_QWORD*)a1[3].m128_u64[0]
				+ 80i64))(
					a1[3].m128_u64[0],
					v9);
			if (result)
				result = (__m128*)sub_140378F20(result, &v11);
			++v9;
		} while (v9 < (unsigned __int64)v10);
	}
	return result;
}
// 140378E70: using guessed type __m128 var_18;

