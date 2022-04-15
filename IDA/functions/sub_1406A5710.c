#include "../winhttp.h"

//----- (00000001406A5710) ----------------------------------------------------
__int64 __fastcall sub_1406A5710(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	__m128i v6; // xmm0

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v4 = sub_140205FA0(*(_DWORD*)(*(_QWORD*)(v2 + 8) + 8i64));
		v5 = a1[2];
		if (v4)
		{
			v6 = _mm_cvtsi32_si128(*(_DWORD*)(v4 + 8));
			*(_DWORD*)(v5 + 8) = 3;
			*(_QWORD*)v5 = *(_OWORD*)&_mm_cvtepi32_pd(v6);
		}
		else
		{
			*(_DWORD*)(v5 + 8) = 0;
		}
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

