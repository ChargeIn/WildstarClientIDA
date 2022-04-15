#include "../winhttp.h"

//----- (00000001406D6030) ----------------------------------------------------
__int64 __fastcall sub_1406D6030(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rax
	__m128i v5; // xmm0

	v2 = sub_1406D5FA0(a1);
	v3 = a1[2];
	if (v2)
	{
		v5 = _mm_cvtsi32_si128(*(_DWORD*)(v2 + 1100));
		*(_DWORD*)(v3 + 8) = 3;
		*(_QWORD*)v3 = *(_OWORD*)&_mm_cvtepi32_pd(v5);
	}
	else
	{
		*(_DWORD*)(v3 + 8) = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}

