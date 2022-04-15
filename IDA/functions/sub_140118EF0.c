//----- (0000000140118EF0) ----------------------------------------------------
__int64 __fastcall sub_140118EF0(_QWORD* a1)
{
	__m128 v1; // xmm0
	__m128* v3; // rbx
	float v4; // xmm1_4
	__m128 v5; // xmm6
	__int64 v6; // rbx
	__int64 v7; // rax
	__int64 v8; // r9
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	int v11; // [rsp+28h] [rbp-20h]

	v3 = (__m128*)sub_140056AB0(a1, 1u);
	*(double*)v1.m128_u64 = sub_140056C40(a1, 2u);
	v4 = *(double*)v1.m128_u64;
	v1.m128_f32[0] = v4;
	v5 = _mm_div_ps(*v3, _mm_shuffle_ps(v1, v1, 0));
	*(__m128*)sub_140059170(a1, 0x10ui64) = v5;
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
// 140118F39: variable 'v1' is possibly undefined

