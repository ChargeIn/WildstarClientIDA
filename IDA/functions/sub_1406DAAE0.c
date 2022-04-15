#include "../winhttp.h"

//----- (00000001406DAAE0) ----------------------------------------------------
__int64 __fastcall sub_1406DAAE0(_QWORD* a1)
{
	__int64 result; // rax
	unsigned int v3; // edx
	unsigned int v4; // eax
	__int64 v5; // rcx
	__m128i v6; // xmm0

	result = sub_1406DAEE0(a1);
	if (result)
	{
		v3 = *(_DWORD*)(result + 1036);
		if (v3)
			v4 = sub_1403BAD30(qword_140C65898, v3, *(_BYTE*)(qword_140C65898 + 28140));
		else
			v4 = 0;
		v5 = a1[2];
		v6 = _mm_cvtsi32_si128(v4);
		result = 1i64;
		*(_DWORD*)(v5 + 8) = 3;
		*(_QWORD*)v5 = *(_OWORD*)&_mm_cvtepi32_pd(v6);
		a1[2] += 16i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

