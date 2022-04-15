#include "../winhttp.h"

//----- (0000000140178AD0) ----------------------------------------------------
__int64 __fastcall sub_140178AD0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx
	__m128i v4; // xmm0

	v2 = sub_140177AC0(a1);
	v3 = a1[2];
	v4 = _mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(v2 + 1040) + 1160i64));
	*(_DWORD*)(v3 + 8) = 3;
	*(_QWORD*)v3 = *(_OWORD*)&_mm_cvtepi32_pd(v4);
	a1[2] += 16i64;
	return 0i64;
}

