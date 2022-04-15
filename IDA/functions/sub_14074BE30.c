#include "../winhttp.h"

//----- (000000014074BE30) ----------------------------------------------------
__int64 __fastcall sub_14074BE30(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__m128i v4; // xmm0
	__int64 result; // rax

	if (*(_DWORD*)qword_140C658C8 == 2)
	{
		v2 = sub_140200220(0x532u);
		if (v2)
			LODWORD(v2) = *(_DWORD*)(v2 + 4);
	}
	else
	{
		LODWORD(v2) = 1;
	}
	v3 = *(_QWORD*)(a1 + 16);
	v4 = _mm_cvtsi32_si128(v2);
	result = 1i64;
	*(_DWORD*)(v3 + 8) = 3;
	*(_QWORD*)v3 = *(_OWORD*)&_mm_cvtepi32_pd(v4);
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C658C8: using guessed type __int64 qword_140C658C8;

