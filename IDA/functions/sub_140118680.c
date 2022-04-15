#include "../winhttp.h"

//----- (0000000140118680) ----------------------------------------------------
__int64 __fastcall sub_140118680(_QWORD* a1)
{
	float* v2; // rax
	__m128 v3; // xmm4
	__m128 v4; // xmm3
	__m128 v5; // xmm0
	__int64 v6; // rbx
	__int64 v7; // rax
	__int64 v8; // r9
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	int v11; // [rsp+28h] [rbp-20h]

	v2 = (float*)sub_140056AB0(a1, 1u);
	v3 = (__m128)0x3F800000u;
	v4 = (__m128)0x3F800000u;
	v5 = (__m128)0x3F800000u;
	v5.m128_f32[0] = 1.0 - v2[2];
	v3.m128_f32[0] = 1.0 - *v2;
	v4.m128_f32[0] = 1.0 - v2[1];
	*(__m128*)sub_140059170(a1, 0x10ui64) = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v3, v5),
		_mm_unpacklo_ps(v4, (__m128)0x3F800000u));
	v6 = a1[4];
	v7 = sub_140062650((__int64)a1, (unsigned __int64*)"CColor", 6ui64);
	v8 = a1[2];
	v10 = v7;
	v11 = 4;
	sub_14005E8E0((__int64)a1, v6 + 160, (int*)&v10, v8);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}

