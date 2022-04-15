#include "../winhttp.h"

//----- (00000001406A3050) ----------------------------------------------------
__int64 __fastcall sub_1406A3050(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx
	__m128i v4; // xmm0
	__int64 v5; // rcx
	__int64 result; // rax
	__int64 v7; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0)
	{
		v4 = _mm_cvtsi32_si128(*(_DWORD*)(v3 + 8));
		v5 = a1[2];
		result = 1i64;
		*(_DWORD*)(v5 + 8) = 3;
		*(_QWORD*)v5 = *(_OWORD*)&_mm_cvtepi32_pd(v4);
		a1[2] += 16i64;
	}
	else
	{
		v7 = a1[2];
		*(_QWORD*)v7 = 0i64;
		*(_DWORD*)(v7 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}

