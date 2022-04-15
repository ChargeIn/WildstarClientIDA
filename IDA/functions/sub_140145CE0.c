#include "../winhttp.h"

//----- (0000000140145CE0) ----------------------------------------------------
__int64 __fastcall sub_140145CE0(_QWORD* a1)
{
	__m128* v2; // rbx
	__m128 v3; // xmm1
	__m128 v4; // xmm6
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // r9
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	int v10; // [rsp+28h] [rbp-20h]

	v2 = (__m128*)sub_140056AB0(a1, 1u);
	v3 = 0i64;
	v3.m128_f32[0] = sub_140056C40(a1, 2u);
	v4 = _mm_mul_ps(*v2, _mm_shuffle_ps(v3, v3, 0));
	*(__m128*)sub_140059170(a1, 0x10ui64) = v4;
	v5 = a1[4];
	v6 = sub_140062650((__int64)a1, (unsigned __int64*)"Vector2", 7ui64);
	v7 = a1[2];
	v9 = v6;
	v10 = 4;
	sub_14005E8E0((__int64)a1, v5 + 160, (int*)&v9, v7);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}

