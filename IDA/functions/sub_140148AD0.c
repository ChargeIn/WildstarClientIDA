#include "../winhttp.h"

//----- (0000000140148AD0) ----------------------------------------------------
__int64 __fastcall sub_140148AD0(_QWORD* a1)
{
	__m128 v1; // xmm0
	__m128* v3; // rdi
	__m128* v4; // rsi
	__m128* v5; // rbx
	float v6; // xmm6_4
	float v7; // xmm1_4
	__m128 v8; // xmm0
	__m128 v9; // xmm7
	__m128 v10; // xmm7
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // r9
	__int64 v15; // [rsp+20h] [rbp-38h] BYREF
	int v16; // [rsp+28h] [rbp-30h]

	v3 = (__m128*)sub_140056AB0(a1, 1u);
	v4 = (__m128*)sub_140056AB0(a1, 2u);
	v5 = (__m128*)sub_140056AB0(a1, 3u);
	v6 = sub_140056C40(a1, 4u);
	*(double*)v1.m128_u64 = sub_140056C40(a1, 5u);
	v7 = *(double*)v1.m128_u64;
	v1.m128_f32[0] = v7;
	v8 = _mm_shuffle_ps(v1, v1, 0);
	v9 = _mm_mul_ps(_mm_sub_ps(*v5, *v3), v8);
	v8.m128_f32[0] = v6;
	v10 = _mm_add_ps(v9, _mm_add_ps(_mm_mul_ps(_mm_sub_ps(*v4, *v3), _mm_shuffle_ps(v8, v8, 0)), *v3));
	*(__m128*)sub_140059170(a1, 0x10ui64) = v10;
	v11 = a1[4];
	v12 = sub_140062650((__int64)a1, (unsigned __int64*)"Vector3", 7ui64);
	v13 = a1[2];
	v15 = v12;
	v16 = 4;
	sub_14005E8E0((__int64)a1, v11 + 160, (int*)&v15, v13);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}
// 140148B73: variable 'v1' is possibly undefined

