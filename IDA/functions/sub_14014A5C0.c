#include "../winhttp.h"

//----- (000000014014A5C0) ----------------------------------------------------
__int64 __fastcall sub_14014A5C0(_QWORD* a1)
{
	__m128 v1; // xmm0
	__m128* v3; // rbx
	float v4; // xmm1_4
	__m128 v5; // xmm0
	__m128 v6; // xmm7
	__m128 v7; // xmm6
	_OWORD* v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // r9
	__int64 v13; // [rsp+20h] [rbp-38h] BYREF
	int v14; // [rsp+28h] [rbp-30h]

	v3 = (__m128*)sub_140056AB0(a1, 1u);
	*(double*)v1.m128_u64 = sub_140056C40(a1, 2u);
	v4 = *(double*)v1.m128_u64;
	v1.m128_f32[0] = 1.0 / v4;
	v5 = _mm_shuffle_ps(v1, v1, 0);
	v6 = _mm_mul_ps(v3[1], v5);
	v7 = _mm_mul_ps(*v3, v5);
	v8 = (_OWORD*)sub_140059170(a1, 0x20ui64);
	*v8 = v7;
	v8[1] = v6;
	v9 = a1[4];
	v10 = sub_140062650((__int64)a1, (unsigned __int64*)"AaRect", 6ui64);
	v11 = a1[2];
	v13 = v10;
	v14 = 4;
	sub_14005E8E0((__int64)a1, v9 + 160, (int*)&v13, v11);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}
// 14014A61E: variable 'v1' is possibly undefined

