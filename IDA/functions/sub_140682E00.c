#include "../winhttp.h"

//----- (0000000140682E00) ----------------------------------------------------
__int64 __fastcall sub_140682E00(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	unsigned int* v4; // rcx
	unsigned int* v5; // rax
	__m128i v6; // xmm0
	__int64 v7; // rcx
	__int64 result; // rax
	_DWORD* v9; // rax

	if (qword_140C65970
		&& *(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(unsigned int**)(v3 + 8)) != 0i64
		&& (v5 = (unsigned int*)sub_140617410((__int64)v4, *v4)) != 0i64)
	{
		v6 = _mm_cvtsi32_si128(*v5);
		v7 = a1[2];
		result = 1i64;
		*(_DWORD*)(v7 + 8) = 3;
		*(_QWORD*)v7 = *(_OWORD*)&_mm_cvtepi32_pd(v6);
		a1[2] += 16i64;
	}
	else
	{
		v9 = (_DWORD*)a1[2];
		*v9 = 0;
		v9[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

