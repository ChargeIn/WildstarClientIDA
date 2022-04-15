#include "../winhttp.h"

//----- (00000001404826C0) ----------------------------------------------------
float sub_1404826C0()
{
	__int64 v0; // rax
	__m128i v1; // xmm0
	float result; // xmm0_4

	if ((dword_140C8ACB4 & 1) != 0)
		return *(float*)&dword_140C8ACB0;
	dword_140C8ACB4 |= 1u;
	v0 = sub_140200220(0x37u);
	if (v0)
		v1 = _mm_cvtsi32_si128(*(_DWORD*)(v0 + 4));
	else
		v1 = _mm_cvtsi32_si128(0);
	LODWORD(result) = _mm_cvtepi32_ps(v1).m128_u32[0];
	dword_140C8ACB0 = LODWORD(result);
	return result;
}
// 140C8ACB0: using guessed type int dword_140C8ACB0;
// 140C8ACB4: using guessed type int dword_140C8ACB4;

