#include "../winhttp.h"

//----- (0000000140378F20) ----------------------------------------------------
__int64 __fastcall sub_140378F20(__m128* a1, __m128* a2)
{
	__m128 v2; // xmm0
	unsigned __int64 v4; // rcx
	__int64 result; // rax
	unsigned __int64 v6; // rbx
	unsigned __int64 i; // rdi
	__m128 v8; // [rsp+20h] [rbp-18h] BYREF

	v2 = a1[10];
	v4 = a1[3].m128_u64[0];
	v8 = _mm_add_ps(v2, *a2);
	(*(void(__fastcall**)(unsigned __int64, __m128*))(*(_QWORD*)v4 + 168i64))(v4, &v8);
	result = (*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)a1[3].m128_u64[0] + 72i64))(a1[3].m128_u64[0]);
	v6 = 0i64;
	for (i = result; v6 < i; ++v6)
	{
		result = (*(__int64(__fastcall**)(unsigned __int64, unsigned __int64))(*(_QWORD*)a1[3].m128_u64[0] + 80i64))(
			a1[3].m128_u64[0],
			v6);
		if (result)
			result = sub_140378F20(result, &v8);
	}
	return result;
}
// 140378F20: using guessed type __m128 var_18;

