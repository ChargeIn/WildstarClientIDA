#include "../winhttp.h"

//----- (00000001406B98E0) ----------------------------------------------------
__int64 __fastcall sub_1406B98E0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rdx
	__int64 result; // rax
	__m128i v7; // xmm0

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = *(_QWORD*)(v3 + 8)) != 0)
	{
		v5 = a1[2];
		result = 1i64;
		v7 = _mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(v4 + 8) + 4i64));
		*(_DWORD*)(v5 + 8) = 3;
		*(_QWORD*)v5 = *(_OWORD*)&_mm_cvtepi32_pd(v7);
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

