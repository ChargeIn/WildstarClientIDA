#include "../winhttp.h"

//----- (0000000140367C70) ----------------------------------------------------
__int64 __fastcall sub_140367C70(__int64 a1, _OWORD* a2)
{
	bool v3; // zf
	__m128 v4; // xmm2
	__m128 v5; // xmm1
	__int64 result; // rax

	*(_OWORD*)(a1 + 864) = *a2;
	v3 = *(_DWORD*)(a1 + 848) == 0;
	*(_QWORD*)(a1 + 6096) = a1 + 5792;
	if (v3)
	{
		*(_OWORD*)(a1 + 912) = *a2;
		*(_OWORD*)(a1 + 928) = *a2;
		*(_DWORD*)(a1 + 944) = *(_DWORD*)(a1 + 880);
	}
	v4 = _mm_sub_ps(*(__m128*)(a1 + 912), *(__m128*)(a1 + 864));
	v5 = _mm_mul_ps(v4, v4);
	*(float*)(a1 + 956) = fsqrt(
		(float)(v5.m128_f32[0] + _mm_shuffle_ps(v5, v5, 85).m128_f32[0])
		+ _mm_shuffle_ps(v5, v5, 170).m128_f32[0]);
	result = sub_140354F90(a1);
	if ((int)result >= 0)
	{
		if (!*(_QWORD*)(a1 + 32))
			return 0i64;
		result = sub_140355150((__m128*)a1);
		if ((int)result >= 0)
			return 0i64;
	}
	return result;
}

