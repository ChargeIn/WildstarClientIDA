#include "../winhttp.h"

//----- (0000000140501F10) ----------------------------------------------------
__int64 __fastcall sub_140501F10(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx
	__int64 result; // rax
	__m128i v5; // xmm0
	__int64 v6; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v5 = _mm_cvtsi32_si128(*(_DWORD*)(v2 + 20));
		v6 = a1[2];
		*(_DWORD*)(v6 + 8) = 3;
		*(_QWORD*)v6 = *(_OWORD*)&_mm_cvtepi32_pd(v5);
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v3 = a1[2];
		result = 1i64;
		*(_QWORD*)v3 = 0x41DFFFFFFFC00000i64;
		*(_DWORD*)(v3 + 8) = 3;
		a1[2] += 16i64;
	}
	return result;
}

