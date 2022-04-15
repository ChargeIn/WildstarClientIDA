#include "../winhttp.h"

//----- (000000014067EDD0) ----------------------------------------------------
__int64 __fastcall sub_14067EDD0(_QWORD* a1)
{
	_QWORD** v2; // rax
	_QWORD** v3; // rdi
	__int64 v4; // rax
	__int64 v5; // rcx
	__m128i v6; // xmm0
	__int64 v7; // rax

	v2 = (_QWORD**)sub_14067B760(a1);
	v3 = v2;
	if (v2
		&& *(_DWORD*)(*v2[6] + 12i64) == 13
		&& ((int(__fastcall*)(_QWORD**))(*v2)[26])(v2) >= 2
		&& (v4 = sub_140721F50(*v3[6], *(_DWORD*)(*v3[6] + 20i64))) != 0)
	{
		v5 = a1[2];
		v6 = _mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(v4 + 8) + 4i64));
		*(_DWORD*)(v5 + 8) = 3;
		*(_QWORD*)v5 = *(_OWORD*)&_mm_cvtepi32_pd(v6);
	}
	else
	{
		v7 = a1[2];
		*(_QWORD*)v7 = 0i64;
		*(_DWORD*)(v7 + 8) = 3;
	}
	a1[2] += 16i64;
	return 1i64;
}

