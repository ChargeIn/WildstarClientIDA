#include "../winhttp.h"

//----- (00000001407563A0) ----------------------------------------------------
__int64 __fastcall sub_1407563A0(_QWORD* a1)
{
	unsigned int v3; // eax
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rcx
	__m128i v7; // xmm0

	if (!qword_140C659B0)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v3 = sub_140056D60(a1, 1u);
	if (!v3)
	{
		v5 = a1[2];
	LABEL_5:
		*(_DWORD*)(v5 + 8) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v6 = sub_1404A85E0(v4, v3);
	v5 = a1[2];
	if (!v6)
		goto LABEL_5;
	v7 = _mm_cvtsi32_si128(*(_DWORD*)(v6 + 16));
	*(_DWORD*)(v5 + 8) = 3;
	*(_QWORD*)v5 = *(_OWORD*)&_mm_cvtepi32_pd(v7);
	a1[2] += 16i64;
	return 1i64;
}
// 1407563F9: variable 'v4' is possibly undefined
// 140C659B0: using guessed type __int64 qword_140C659B0;

