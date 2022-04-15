#include "../winhttp.h"

//----- (0000000140867A50) ----------------------------------------------------
__int64 __fastcall sub_140867A50(__int64 a1, float* a2)
{
	__m128i v4; // xmm0
	__int64 result; // rax

	*a2 = (float)((float)((float)((float)(int)sub_1407DDB28() * 0.000061038882) - 1.0)
		* *(float*)(*(_QWORD*)(a1 + 24) + 12i64))
		+ *a2;
	v4 = _mm_cvtsi32_si128(sub_1407DDB28());
	result = *(_QWORD*)(a1 + 24);
	a2[2] = (float)((float)((float)(_mm_cvtepi32_ps(v4).m128_f32[0] * 0.000061038882) - 1.0) * *(float*)(result + 16))
		+ a2[2];
	return result;
}

