#include "../winhttp.h"

//----- (000000014067C470) ----------------------------------------------------
__int64 __fastcall sub_14067C470(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 result; // rax
	unsigned int v5; // eax
	__int64 v6; // rcx
	__m128i v7; // xmm0

	v2 = sub_14067B760(a1);
	if (v2)
	{
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2);
		if (v5 == 1)
			v5 = 0;
		v6 = a1[2];
		*(_DWORD*)(v6 + 8) = 3;
		v7 = _mm_cvtsi32_si128(v5);
		result = 1i64;
		*(_QWORD*)v6 = *(_OWORD*)&_mm_cvtepi32_pd(v7);
		a1[2] += 16i64;
	}
	else
	{
		v3 = a1[2];
		*(_QWORD*)v3 = 0i64;
		*(_DWORD*)(v3 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}

