#include "../winhttp.h"

//----- (000000014068B750) ----------------------------------------------------
__int64 __fastcall sub_14068B750(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned int v4; // eax
	__int64 v5; // rax
	unsigned int v6; // eax
	__int64 v7; // rcx
	__m128i v8; // xmm0
	__int64 result; // rax

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 8) + 32i64))(*(_QWORD*)(v3 + 8)),
			(v5 = sub_140498A40(qword_140C65980, v4, 0)) != 0))
	{
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 40i64))(v5);
		v7 = a1[2];
		*(_DWORD*)(v7 + 8) = 3;
		v8 = _mm_cvtsi32_si128(v6);
		result = 1i64;
		*(_QWORD*)v7 = *(_OWORD*)&_mm_cvtepi32_pd(v8);
		a1[2] += 16i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

