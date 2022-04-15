#include "../winhttp.h"

//----- (00000001406A1A60) ----------------------------------------------------
__int64 __fastcall sub_1406A1A60(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__m128i v4; // xmm0
	__int64 v5; // rcx
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && v3 != -8)
	{
		v4 = _mm_cvtsi32_si128(*(_DWORD*)(v3 + 68));
		v5 = a1[2];
		result = 1i64;
		*(_DWORD*)(v5 + 8) = 3;
		*(_QWORD*)v5 = *(_OWORD*)&_mm_cvtepi32_pd(v4);
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

