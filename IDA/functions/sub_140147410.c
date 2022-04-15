#include "../winhttp.h"

//----- (0000000140147410) ----------------------------------------------------
__int64 __fastcall sub_140147410(_QWORD* a1)
{
	__m128* v2; // rax
	__m128 v3; // xmm6
	__m128 v4; // xmm6
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // r9
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	int v10; // [rsp+28h] [rbp-20h]

	v2 = (__m128*)sub_140056AB0(a1, 1u);
	v3 = _mm_mul_ps(*v2, *v2);
	v3.m128_f32[0] = 1.0
		/ fsqrt(
			(float)(v3.m128_f32[0] + _mm_shuffle_ps(v3, v3, 85).m128_f32[0])
			+ _mm_shuffle_ps(v3, v3, 170).m128_f32[0]);
	v4 = _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), *v2);
	*(__m128*)sub_140059170(a1, 0x10ui64) = v4;
	v5 = a1[4];
	v6 = sub_140062650((__int64)a1, (unsigned __int64*)"Vector3", 7ui64);
	v7 = a1[2];
	v9 = v6;
	v10 = 4;
	sub_14005E8E0((__int64)a1, v5 + 160, (int*)&v9, v7);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}

