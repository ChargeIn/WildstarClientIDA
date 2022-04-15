//----- (00000001401496E0) ----------------------------------------------------
__int64 __fastcall sub_1401496E0(_QWORD* a1)
{
	__m128* v2; // rbx
	float* v3; // rax
	__m128 v4; // xmm2
	__m128 v5; // xmm3
	__int64 v6; // rbx
	__int64 v7; // rax
	__int64 v8; // r9
	__m128 v10; // [rsp+20h] [rbp-28h] BYREF

	v2 = (__m128*)sub_140056AB0(a1, 1u);
	v3 = (float*)sub_140056AB0(a1, 2u);
	v10 = _mm_mul_ps(_mm_add_ps(v2[1], *v2), (__m128)xmmword_140B7AC50);
	if (_mm_shuffle_ps(v10, v10, 85).m128_f32[0] >= v3[1])
		v4 = (__m128)v2[1].m128_u32[1];
	else
		v4 = (__m128)v2->m128_u32[1];
	if (v10.m128_f32[0] >= *v3)
		v5 = (__m128)v2[1].m128_u32[0];
	else
		v5 = (__m128)v2->m128_u32[0];
	*(__m128*)sub_140059170(a1, 0x10ui64) = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v5, (__m128)0i64),
		_mm_unpacklo_ps(v4, (__m128)0i64));
	v6 = a1[4];
	v7 = sub_140062650((__int64)a1, (unsigned __int64*)"Vector2", 7ui64);
	v8 = a1[2];
	v10.m128_u64[0] = v7;
	v10.m128_i32[2] = 4;
	sub_14005E8E0((__int64)a1, v6 + 160, (int*)&v10, v8);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;

