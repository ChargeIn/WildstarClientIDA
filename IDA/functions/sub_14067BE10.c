#include "../winhttp.h"

//----- (000000014067BE10) ----------------------------------------------------
__int64 __fastcall sub_14067BE10(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v4; // rdx
	__m128i v5; // xmm0
	__int64 v6; // rax

	v2 = sub_14067B760(a1);
	v3 = v2;
	if (v2 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) >= 2)
	{
		v4 = a1[2];
		v5 = _mm_cvtsi32_si128(*(_DWORD*)(**(_QWORD**)(v3 + 48) + 16i64));
		*(_DWORD*)(v4 + 8) = 3;
		*(_QWORD*)v4 = *(_OWORD*)&_mm_cvtepi32_pd(v5);
	}
	else
	{
		v6 = a1[2];
		*(_QWORD*)v6 = 0xBFF0000000000000ui64;
		*(_DWORD*)(v6 + 8) = 3;
	}
	a1[2] += 16i64;
	return 1i64;
}

