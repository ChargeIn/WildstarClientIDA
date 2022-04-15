#include "../winhttp.h"

//----- (0000000140487B40) ----------------------------------------------------
__int64 __fastcall sub_140487B40(__int64 a1, __m128* a2)
{
	__int64 result; // rax
	__m128 v4; // xmm4
	__m128 v5; // xmm1

	result = sub_14024B980(*(_DWORD*)(*(_QWORD*)(a1 + 32) + 4i64));
	if (result)
	{
		v4 = _mm_sub_ps(
			*a2,
			_mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128) * (unsigned int*)(result + 12), (__m128) * (unsigned int*)(result + 20)),
				_mm_unpacklo_ps((__m128) * (unsigned int*)(result + 16), (__m128)0i64)));
		v5 = _mm_mul_ps(v4, v4);
		return (float)(*(float*)(result + 4) * *(float*)(result + 4)) > (float)((float)(v5.m128_f32[0]
			+ _mm_shuffle_ps(v5, v5, 85).m128_f32[0])
			+ _mm_shuffle_ps(v5, v5, 170).m128_f32[0]);
	}
	return result;
}

