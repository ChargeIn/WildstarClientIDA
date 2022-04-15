#include "../winhttp.h"

//----- (00000001403C93A0) ----------------------------------------------------
_BOOL8 __fastcall sub_1403C93A0(__int64 a1, unsigned int a2)
{
	__int64 v2; // rdi
	__int64 v3; // rbx
	__m128 v5; // xmm2
	__m128 v6; // xmm1

	v2 = qword_140C65898;
	v3 = sub_14024B980(a2);
	if (!v3
		|| *(_DWORD*)(v3 + 40) != (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72))
	{
		return 0i64;
	}
	v5 = _mm_sub_ps(
		*(__m128*)(*(_QWORD*)(v2 + 120) + 4576i64),
		_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v3 + 12), (__m128) * (unsigned int*)(v3 + 20)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v3 + 16), (__m128)0i64)));
	v6 = _mm_mul_ps(v5, v5);
	return (float)(*(float*)(v3 + 4) * *(float*)(v3 + 4)) > (float)((float)(v6.m128_f32[0]
		+ _mm_shuffle_ps(v6, v6, 85).m128_f32[0])
		+ _mm_shuffle_ps(v6, v6, 170).m128_f32[0]);
}
// 140C65898: using guessed type __int64 qword_140C65898;

