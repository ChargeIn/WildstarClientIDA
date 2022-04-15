#include "../winhttp.h"

//----- (000000014041B9C0) ----------------------------------------------------
__int64 __fastcall sub_14041B9C0(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rdx
	__m128i v5; // xmm0
	__int64 v6; // rax

	v2 = sub_140417BF0(a1, 1u);
	if (v2)
	{
		v5 = _mm_cvtsi32_si128(v2[105]);
		v6 = a1[2];
		*(_DWORD*)(v6 + 8) = 3;
		*(_QWORD*)v6 = *(_OWORD*)&_mm_cvtepi32_pd(v5);
	}
	else
	{
		v3 = a1[2];
		*(_QWORD*)v3 = 0i64;
		*(_DWORD*)(v3 + 8) = 3;
	}
	a1[2] += 16i64;
	return 1i64;
}

