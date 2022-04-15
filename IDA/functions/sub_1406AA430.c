#include "../winhttp.h"

//----- (00000001406AA430) ----------------------------------------------------
__int64 __fastcall sub_1406AA430(_QWORD* a1)
{
	__int64 v2; // rax
	__m128i v4; // xmm0
	__int64 v5; // rax

	v2 = sub_1406A93C0(a1);
	if (v2)
	{
		if (qword_140C65B98 && *(_DWORD*)(qword_140C65B98 + 268) == 4)
			v4 = _mm_cvtsi32_si128(*(_DWORD*)(qword_140C65B98 + 404));
		else
			v4 = _mm_cvtsi32_si128(*(_DWORD*)(v2 + 440));
		v5 = a1[2];
		*(_DWORD*)(v5 + 8) = 3;
		*(_QWORD*)v5 = *(_OWORD*)&_mm_cvtepi32_pd(v4);
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140C65B98: using guessed type __int64 qword_140C65B98;

