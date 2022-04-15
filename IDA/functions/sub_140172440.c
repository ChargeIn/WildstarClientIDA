#include "../winhttp.h"

//----- (0000000140172440) ----------------------------------------------------
__int64 __fastcall sub_140172440(_QWORD* a1)
{
	__int64 v2; // rdi
	int v3; // eax
	unsigned __int64 v4; // r9
	__int64 v5; // rdx
	_DWORD* i; // r8
	__int64 result; // rax
	unsigned int v8; // eax
	__int64 v9; // rcx
	__m128i v10; // xmm0

	v2 = sub_140171EB0(a1);
	v3 = sub_140056D60(a1, 2u);
	if (v3 == -1)
		return 0i64;
	v4 = *(_QWORD*)(v2 + 1600);
	v5 = 0i64;
	if (!v4)
		return 0i64;
	for (i = *(_DWORD**)(v2 + 1592); *i != v3 || v5 + 1 >= v4; ++i)
	{
		if (++v5 >= v4)
			return 0i64;
	}
	v8 = *(_DWORD*)(*(_QWORD*)(v2 + 1592) + 4 * v5 + 4);
	if (v8 == -1)
		return 0i64;
	v9 = a1[2];
	v10 = _mm_cvtsi32_si128(v8);
	result = 1i64;
	*(_DWORD*)(v9 + 8) = 3;
	*(_QWORD*)v9 = *(_OWORD*)&_mm_cvtepi32_pd(v10);
	a1[2] += 16i64;
	return result;
}

