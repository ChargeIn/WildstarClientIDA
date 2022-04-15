#include "../winhttp.h"

//----- (000000014049E540) ----------------------------------------------------
__int64 __fastcall sub_14049E540(__int64 a1, __m128* a2, int a3, unsigned int a4)
{
	__int64 v6; // rdi
	unsigned int v8; // ecx
	__m128 v9; // xmm2
	__m128 v10; // xmm1
	BOOL v11; // edx
	int v12; // ebx

	v6 = sub_14024B980(a4);
	if (!v6
		|| *(_DWORD*)(v6 + 40) != (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72))
	{
		return 0i64;
	}
	v8 = 0;
	v9 = _mm_sub_ps(
		a2[286],
		_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v6 + 12), (__m128) * (unsigned int*)(v6 + 20)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v6 + 16), (__m128)0i64)));
	v10 = _mm_mul_ps(v9, v9);
	v11 = fsqrt(
		(float)(v10.m128_f32[0] + _mm_shuffle_ps(v10, v10, 85).m128_f32[0])
		+ _mm_shuffle_ps(v10, v10, 170).m128_f32[0]) < *(float*)(v6 + 4);
	v12 = a3 - 1;
	if (v12)
	{
		if (v12 == 1)
		{
			LOBYTE(v8) = !v11;
			return v8;
		}
	}
	else
	{
		return v11;
	}
	return v8;
}
// 140C65898: using guessed type __int64 qword_140C65898;

