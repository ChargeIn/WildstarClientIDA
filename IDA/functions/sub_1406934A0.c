#include "../winhttp.h"

//----- (00000001406934A0) ----------------------------------------------------
__int64 __fastcall sub_1406934A0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned int** v4; // rcx
	__int64 v5; // rdx
	__int64 result; // rax
	__m128i v7; // xmm0
	__int64 v8; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = *(unsigned int***)(v3 + 8)) != 0i64)
	{
		v5 = a1[2];
		result = 1i64;
		v7 = _mm_cvtsi32_si128(**v4);
		*(_DWORD*)(v5 + 8) = 3;
		*(_QWORD*)v5 = *(_OWORD*)&_mm_cvtepi32_pd(v7);
		a1[2] += 16i64;
	}
	else
	{
		v8 = a1[2];
		*(_QWORD*)v8 = 0i64;
		*(_DWORD*)(v8 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}

