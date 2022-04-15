#include "../winhttp.h"

//----- (00000001400DDF30) ----------------------------------------------------
__int64 __fastcall sub_1400DDF30(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rax
	__m128i v4; // xmm0
	__int64 v5; // rax
	__m128i v6; // xmm0
	unsigned int v7[6]; // [rsp+20h] [rbp-18h] BYREF

	result = sub_1400D66A0(a1, 1u);
	if (result)
	{
		sub_1400CB3D0(result, v7);
		v3 = a1[2];
		v4 = _mm_cvtsi32_si128(v7[0]);
		*(_DWORD*)(v3 + 8) = 3;
		*(_QWORD*)v3 = *(_OWORD*)&_mm_cvtepi32_pd(v4);
		a1[2] += 16i64;
		v5 = a1[2];
		v6 = _mm_cvtsi32_si128(v7[1]);
		*(_DWORD*)(v5 + 8) = 3;
		*(_QWORD*)v5 = *(_OWORD*)&_mm_cvtepi32_pd(v6);
		a1[2] += 16i64;
		return 2i64;
	}
	return result;
}

