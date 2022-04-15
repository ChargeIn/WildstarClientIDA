//----- (0000000140146480) ----------------------------------------------------
__int64 __fastcall sub_140146480(_QWORD* a1)
{
	__m128 v1; // xmm0
	__m128* v3; // rdi
	__m128* v4; // rbx
	float v5; // xmm1_4
	__m128 v6; // xmm6
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // r9
	__int64 v11; // [rsp+20h] [rbp-28h] BYREF
	int v12; // [rsp+28h] [rbp-20h]

	v3 = (__m128*)sub_140056AB0(a1, 1u);
	v4 = (__m128*)sub_140056AB0(a1, 2u);
	*(double*)v1.m128_u64 = sub_140056C40(a1, 3u);
	v5 = *(double*)v1.m128_u64;
	v1.m128_f32[0] = v5;
	v6 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(*v4, *v3), _mm_shuffle_ps(v1, v1, 0)), *v3);
	*(__m128*)sub_140059170(a1, 0x10ui64) = v6;
	v7 = a1[4];
	v8 = sub_140062650((__int64)a1, (unsigned __int64*)"Vector2", 7ui64);
	v9 = a1[2];
	v11 = v8;
	v12 = 4;
	sub_14005E8E0((__int64)a1, v7 + 160, (int*)&v11, v9);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}
// 1401464E8: variable 'v1' is possibly undefined

