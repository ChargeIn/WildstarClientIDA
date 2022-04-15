#include "../winhttp.h"

//----- (000000014078DB00) ----------------------------------------------------
__int64 __fastcall sub_14078DB00(_QWORD* a1)
{
	char v2; // bl
	int v3; // eax
	__int64 v4; // rdx
	__m128i v5; // xmm0
	__int64 result; // rax

	v2 = sub_140056D60(a1, 2u);
	v3 = sub_140056D60(a1, 1u);
	v4 = a1[2];
	*(_DWORD*)(v4 + 8) = 3;
	v5 = _mm_cvtsi32_si128(__ROL4__(v3, v2 & 0x1F));
	result = 1i64;
	*(_QWORD*)v4 = *(_OWORD*)&_mm_cvtepi32_pd(v5);
	a1[2] += 16i64;
	return result;
}

