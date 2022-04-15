#include "../winhttp.h"

//----- (000000014041CA00) ----------------------------------------------------
__int64 __fastcall sub_14041CA00(_QWORD* a1)
{
	int* v2; // rax
	__m128i v3; // xmm0
	__int64 v4; // rdx
	__int64 result; // rax
	__int64 v6; // rax

	v2 = sub_140417BF0(a1, 1u);
	if (v2)
	{
		v3 = _mm_cvtsi32_si128(v2[116]);
		v4 = a1[2];
		result = 1i64;
		*(_DWORD*)(v4 + 8) = 3;
		*(_QWORD*)v4 = *(_OWORD*)&_mm_cvtepi32_pd(v3);
		a1[2] += 16i64;
	}
	else
	{
		v6 = a1[2];
		*(_QWORD*)v6 = 0i64;
		*(_DWORD*)(v6 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}

