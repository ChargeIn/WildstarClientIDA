#include "../winhttp.h"

//----- (00000001404E7AF0) ----------------------------------------------------
__int64 __fastcall sub_1404E7AF0(__int64 a1)
{
	int v1; // edx
	__int64 v2; // rax
	__m128i v4; // xmm0

	v1 = qword_140C658C8;
	v2 = *(_QWORD*)(a1 + 16);
	if (qword_140C658C8)
	{
		v4 = _mm_cvtsi32_si128(*(_DWORD*)qword_140C658C8);
		*(_DWORD*)(v2 + 8) = 3;
		*(_QWORD*)v2 = *(_OWORD*)&_mm_cvtepi32_pd(v4);
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	else
	{
		*(_DWORD*)(v2 + 8) = qword_140C658C8;
		*(_QWORD*)(a1 + 16) += 16i64;
		return (unsigned int)(v1 + 1);
	}
}
// 140C658C8: using guessed type __int64 qword_140C658C8;

