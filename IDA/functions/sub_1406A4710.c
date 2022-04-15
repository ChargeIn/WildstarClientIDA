#include "../winhttp.h"

//----- (00000001406A4710) ----------------------------------------------------
__int64 __fastcall sub_1406A4710(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 result; // rax
	__m128i v6; // xmm0

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
		v3 = *(_QWORD*)(v2 + 8);
	else
		v3 = 0i64;
	v4 = a1[2];
	result = 1i64;
	v6 = _mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(v3 + 104) + 40i64));
	*(_DWORD*)(v4 + 8) = 3;
	*(_QWORD*)v4 = *(_OWORD*)&_mm_cvtepi32_pd(v6);
	a1[2] += 16i64;
	return result;
}

