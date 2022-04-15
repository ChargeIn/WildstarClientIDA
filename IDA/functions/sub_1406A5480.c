#include "../winhttp.h"

//----- (00000001406A5480) ----------------------------------------------------
__int64 __fastcall sub_1406A5480(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx
	__int64 result; // rax
	__int64 v5; // rcx
	__m128i v6; // xmm0

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v5 = a1[2];
		v6 = _mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(v2 + 8) + 12i64));
		*(_DWORD*)(v5 + 8) = 3;
		result = 1i64;
		*(_QWORD*)v5 = *(_OWORD*)&_mm_cvtepi32_pd(v6);
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

