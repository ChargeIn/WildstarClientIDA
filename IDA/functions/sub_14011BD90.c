#include "../winhttp.h"

//----- (000000014011BD90) ----------------------------------------------------
__int64 __fastcall sub_14011BD90(__int64 a1)
{
	__int64 v2; // rdx
	unsigned __int64 v3; // rcx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rcx
	__m128i v8; // xmm0
	__m128i v9; // xmm0
	__int64 v10; // rcx
	__int64 result; // rax
	__m128i v12; // xmm0
	__int64 v13; // rax
	int v14; // ecx
	__int64 v15; // rax

	v2 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (!v3)
		goto LABEL_5;
	v4 = *(_QWORD*)(qword_140C63650 + 760);
	v5 = 0i64;
	while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
	{
		v2 = (unsigned int)(v2 + 1);
		v5 = (unsigned int)v2;
		if ((unsigned int)v2 >= v3)
			goto LABEL_5;
	}
	v2 = *(_QWORD*)(v4 + 8i64 * (unsigned int)v2);
	if (v2)
	{
		v12 = _mm_cvtsi32_si128(*(_DWORD*)(v2 + 80));
		v13 = *(_QWORD*)(a1 + 16);
		v14 = *(_DWORD*)(v2 + 84);
		*(_DWORD*)(v13 + 8) = 3;
		*(_QWORD*)v13 = *(_OWORD*)&_mm_cvtepi32_pd(v12);
		*(_QWORD*)(a1 + 16) += 16i64;
		v15 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v15 + 8) = 3;
		*(double*)v15 = (double)v14;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 2i64;
	}
	else
	{
	LABEL_5:
		v6 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670, v2);
		v7 = *(_QWORD*)(a1 + 16);
		v8 = _mm_cvtsi32_si128(*(_DWORD*)(v6 + 8));
		*(_DWORD*)(v7 + 8) = 3;
		*(_QWORD*)v7 = *(_OWORD*)&_mm_cvtepi32_pd(v8);
		*(_QWORD*)(a1 + 16) += 16i64;
		v9 = _mm_cvtsi32_si128(*(_DWORD*)(v6 + 12));
		v10 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v10 + 8) = 3;
		result = 2i64;
		*(_QWORD*)v10 = *(_OWORD*)&_mm_cvtepi32_pd(v9);
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	return result;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65670: using guessed type __int64 qword_140C65670;

