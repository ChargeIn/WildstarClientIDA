#include "../winhttp.h"

//----- (0000000140418160) ----------------------------------------------------
__int64 __fastcall sub_140418160(_QWORD* a1)
{
	int* v2; // rax
	__int64 result; // rax
	unsigned int v4; // eax
	__int64 v5; // rcx
	__m128i v6; // xmm0

	v2 = sub_140417BF0(a1, 1u);
	if (v2)
	{
		v4 = sub_1403AC840(qword_140C65898 + 160, 4, *v2);
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
// 140C65898: using guessed type __int64 qword_140C65898;

