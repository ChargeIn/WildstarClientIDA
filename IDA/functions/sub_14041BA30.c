#include "../winhttp.h"

//----- (000000014041BA30) ----------------------------------------------------
__int64 __fastcall sub_14041BA30(__int64 a1)
{
	__int64** v2; // rax
	__int64* v3; // rax
	__m128i v4; // xmm0
	__int64 v5; // rcx
	__int64 result; // rax
	__int64 v7; // rax

	v2 = (__int64**)sub_140417660(a1, 1);
	if (!v2)
		goto LABEL_6;
	v3 = *v2;
	if (v3)
		v3 = (__int64*)*v3;
	if (v3)
	{
		v4 = _mm_cvtsi32_si128(*((_DWORD*)v3 + 31));
		v5 = *(_QWORD*)(a1 + 16);
		result = 1i64;
		*(_DWORD*)(v5 + 8) = 3;
		*(_QWORD*)v5 = *(_OWORD*)&_mm_cvtepi32_pd(v4);
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
	LABEL_6:
		v7 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v7 = 0i64;
		*(_DWORD*)(v7 + 8) = 3;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}

