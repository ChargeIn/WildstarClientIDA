#include "../winhttp.h"

//----- (00000001404E7BD0) ----------------------------------------------------
__int64 __fastcall sub_1404E7BD0(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	__m128i v4; // xmm0

	if (qword_140C658D0)
	{
		v3 = *(_QWORD*)(a1 + 16);
		v4 = _mm_cvtsi32_si128(*(_DWORD*)(qword_140C658C8 + 8));
		*(_DWORD*)(v3 + 8) = 3;
		result = 1i64;
		*(_QWORD*)v3 = *(_OWORD*)&_mm_cvtepi32_pd(v4);
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C658C8: using guessed type __int64 qword_140C658C8;
// 140C658D0: using guessed type __int64 qword_140C658D0;

