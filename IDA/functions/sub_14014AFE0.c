#include "../winhttp.h"

//----- (000000014014AFE0) ----------------------------------------------------
__int64 __fastcall sub_14014AFE0(_QWORD* a1)
{
	__m128* v2; // rax
	__m128 v3; // xmm7
	__m128 v4; // xmm1
	__m128 v5; // xmm1
	float v6; // xmm0_4
	__m128 v7; // xmm7
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // r9
	__int64 v12; // [rsp+20h] [rbp-38h] BYREF
	int v13; // [rsp+28h] [rbp-30h]

	v2 = (__m128*)sub_140056AB0(a1, 1u);
	v3 = (__m128)0x40400000u;
	v4 = _mm_mul_ps(*v2, *v2);
	v5 = _mm_add_ps(v4, _mm_shuffle_ps(v4, v4, 78));
	v5.m128_f32[0] = v5.m128_f32[0] + _mm_shuffle_ps(v5, v5, 177).m128_f32[0];
	v6 = 1.0 / fsqrt(v5.m128_f32[0]);
	v3.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v5.m128_f32[0] * v6) * v6)) * 0.5) * v6, 0.0);
	v7 = _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), *v2);
	*(__m128*)sub_140059170(a1, 0x10ui64) = v7;
	v8 = a1[4];
	v9 = sub_140062650((__int64)a1, (unsigned __int64*)"Quaternion", 0xAui64);
	v10 = a1[2];
	v12 = v9;
	v13 = 4;
	sub_14005E8E0((__int64)a1, v8 + 160, (int*)&v12, v10);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}

