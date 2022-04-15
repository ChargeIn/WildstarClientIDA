#include "../winhttp.h"

//----- (0000000140485E90) ----------------------------------------------------
_BOOL8 __fastcall sub_140485E90(__int64 a1)
{
	unsigned int* v1; // rax
	unsigned int v3; // edx
	__int64 v5; // rax
	float v6; // xmm1_4
	float v7; // xmm5_4
	__m128 v8; // xmm2
	__m128 v9; // xmm1
	__m128 v10; // [rsp+20h] [rbp-28h]
	__m128 v11; // [rsp+30h] [rbp-18h] BYREF

	v1 = *(unsigned int**)(a1 + 104);
	if (!v1)
		return 0i64;
	v3 = *(_DWORD*)(a1 + 112);
	if (v3 && (unsigned int)sub_14043E6D0(qword_140C65898, v3, *v1, v11.m128_f32))
		return sub_1404860D0(&v11, *(float*)(*(_QWORD*)(a1 + 104) + 4i64), *(float*)(*(_QWORD*)(a1 + 104) + 8i64));
	v5 = *(_QWORD*)(a1 + 104);
	v6 = *(float*)(v5 + 8);
	v7 = *(float*)(v5 + 4);
	v10 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128) * (unsigned int*)(v5 + 12), (__m128) * (unsigned int*)(v5 + 20)),
		_mm_unpacklo_ps((__m128) * (unsigned int*)(v5 + 16), (__m128)0i64));
	v11 = *(__m128*)(*(_QWORD*)(qword_140C65898 + 120) + 4576i64);
	if (v6 > 0.0 && fabs(v11.m128_f32[1] - v10.m128_f32[1]) > v6)
		return 0i64;
	v10.m128_i32[1] = 0;
	v11.m128_i32[1] = 0;
	v8 = _mm_sub_ps(v10, v11);
	v9 = _mm_mul_ps(v8, v8);
	return (float)(v7 * v7) >= (float)((float)(v9.m128_f32[0] + _mm_shuffle_ps(v9, v9, 85).m128_f32[0])
		+ _mm_shuffle_ps(v9, v9, 170).m128_f32[0]);
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140485E90: using guessed type __m128 var_18;

