#include "../winhttp.h"

//----- (000000014047A140) ----------------------------------------------------
__int64 __fastcall sub_14047A140(__int64 a1)
{
	__int64 v2; // rax
	__m128i v3; // xmm0
	unsigned __int32 v4; // xmm0_4
	__int64 v5; // rdx
	__int64 result; // rax

	if ((dword_140DC3068 & 1) != 0)
	{
		v4 = dword_140DC306C;
	}
	else
	{
		dword_140DC3068 |= 1u;
		v2 = sub_140200220(0x178u);
		if (v2)
			v3 = _mm_cvtsi32_si128(*(_DWORD*)(v2 + 4));
		else
			v3 = _mm_cvtsi32_si128(0xBB8u);
		v4 = _mm_cvtepi32_ps(v3).m128_u32[0];
		dword_140DC306C = v4;
	}
	v5 = qword_140C65898;
	*(_DWORD*)(a1 + 6312) = 1;
	*(float*)(a1 + 13832) = *(float*)&v4 * 0.001;
	result = *(_QWORD*)(v5 + 120);
	if (result)
	{
		result = *(unsigned int*)(result + 8);
		if (*(_DWORD*)(a1 + 8) == (_DWORD)result)
			*(_DWORD*)(v5 + 28568) = 1;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC3068: using guessed type int dword_140DC3068;
// 140DC306C: using guessed type int dword_140DC306C;

