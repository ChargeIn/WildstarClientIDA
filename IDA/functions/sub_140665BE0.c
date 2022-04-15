#include "../winhttp.h"

//----- (0000000140665BE0) ----------------------------------------------------
__int64 __fastcall sub_140665BE0(_QWORD* a1)
{
	__int64 v2; // r8
	__int64 v3; // rcx
	__int64 v4; // rdx
	unsigned int v5; // eax
	__int64 v6; // rcx
	__m128i v7; // xmm0
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(qword_140C65898 + 120)) != 0)
	{
		v4 = *(unsigned int*)(v3 + 60);
		if (!(_DWORD)v4)
			v4 = *(unsigned int*)(v3 + 56);
		v5 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65A10 + 16i64))(
			qword_140C65A10,
			v4,
			*(unsigned int*)(*(_QWORD*)(*(_QWORD*)v2 + 8i64) + 16i64));
		v6 = a1[2];
		*(_DWORD*)(v6 + 8) = 3;
		v7 = _mm_cvtsi32_si128(v5);
		result = 1i64;
		*(_QWORD*)v6 = *(_OWORD*)&_mm_cvtepi32_pd(v7);
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
// 140C65A10: using guessed type __int64 qword_140C65A10;

