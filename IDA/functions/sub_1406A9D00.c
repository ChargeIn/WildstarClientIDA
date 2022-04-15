#include "../winhttp.h"

//----- (00000001406A9D00) ----------------------------------------------------
__int64 __fastcall sub_1406A9D00(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__m128i v4; // xmm0
	__int64* v5; // rax
	unsigned int v6; // edx
	__int64 i; // rcx

	v2 = sub_1406A93C0(a1);
	if (v2)
	{
		if (qword_140C65B98 && *(_DWORD*)(qword_140C65B98 + 268) == 4)
		{
			v4 = _mm_cvtsi32_si128(*(_DWORD*)(qword_140C65B98 + 408));
		}
		else
		{
			v5 = (__int64*)sub_1404BC9B0(qword_140C65B98, (_QWORD*)(v2 + 8));
			v6 = 0;
			for (i = *v5; i; ++v6)
				i = *(_QWORD*)(i + 72);
			v4 = _mm_cvtsi32_si128(v6);
		}
		v3 = a1[2];
		*(_QWORD*)v3 = *(_OWORD*)&_mm_cvtepi32_pd(v4);
	}
	else
	{
		v3 = a1[2];
		*(_QWORD*)v3 = 0i64;
	}
	*(_DWORD*)(v3 + 8) = 3;
	a1[2] += 16i64;
	return 1i64;
}
// 140C65B98: using guessed type __int64 qword_140C65B98;

