#include "../winhttp.h"

//----- (0000000140665A90) ----------------------------------------------------
__int64 __fastcall sub_140665A90(_QWORD* a1)
{
	__int64* v2; // rax
	__int64 result; // rax
	unsigned int v4; // eax
	__int64 v5; // rcx
	__m128i v6; // xmm0

	v2 = (__int64*)sub_140056AB0(a1, 1u);
	if (v2)
	{
		v4 = sub_1405534B0(*v2);
		v5 = a1[2];
		*(_DWORD*)(v5 + 8) = 3;
		v6 = _mm_cvtsi32_si128(v4);
		result = 1i64;
		*(_QWORD*)v5 = *(_OWORD*)&_mm_cvtepi32_pd(v6);
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

