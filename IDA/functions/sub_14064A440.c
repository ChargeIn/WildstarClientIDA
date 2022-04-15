#include "../winhttp.h"

//----- (000000014064A440) ----------------------------------------------------
__int64 __fastcall sub_14064A440(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	unsigned int v5; // eax
	__int64 v6; // rcx
	__m128i v7; // xmm0
	__int64 result; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		if (*(_QWORD*)(qword_140C65898 + 120) == v3)
			v4 = *(_QWORD*)(qword_140C65898 + 28048);
		else
			v4 = 0i64;
		v5 = 7;
		if (v4)
			v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		v6 = *(_QWORD*)(a1 + 16);
		v7 = _mm_cvtsi32_si128(v5);
		result = 1i64;
		*(_DWORD*)(v6 + 8) = 3;
		*(_QWORD*)v6 = *(_OWORD*)&_mm_cvtepi32_pd(v7);
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

