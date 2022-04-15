//----- (0000000140148440) ----------------------------------------------------
__int64 __fastcall sub_140148440(_QWORD* a1)
{
	__m128* v2; // rbp
	__m128* v3; // rdi
	__m128* v4; // rsi
	__m128* v5; // rbx
	__m128 v6; // xmm3
	__m128 v7; // xmm4
	__m128 v8; // xmm5
	__m128 v9; // xmm1
	__m128 v10; // xmm6
	__m128 v11; // xmm0
	__m128 v12; // xmm6
	__int64 v13; // rbx
	__int64 v14; // rax
	__int64 v15; // r9
	__int64 v17; // [rsp+20h] [rbp-28h] BYREF
	int v18; // [rsp+28h] [rbp-20h]

	v2 = (__m128*)sub_140056AB0(a1, 1u);
	v3 = (__m128*)sub_140056AB0(a1, 2u);
	v4 = (__m128*)sub_140056AB0(a1, 3u);
	v5 = (__m128*)sub_140056AB0(a1, 4u);
	v6 = 0i64;
	v6.m128_f32[0] = sub_140056C40(a1, 5u);
	v7 = v6;
	v7.m128_f32[0] = v6.m128_f32[0] * v6.m128_f32[0];
	v8 = v7;
	v8.m128_f32[0] = (float)(v6.m128_f32[0] * v6.m128_f32[0]) * v6.m128_f32[0];
	v9 = v8;
	v10 = v8;
	v8.m128_f32[0] = v8.m128_f32[0] * 2.0;
	v10.m128_f32[0] = v10.m128_f32[0] - (float)(v6.m128_f32[0] * v6.m128_f32[0]);
	v9.m128_f32[0] = (float)(v9.m128_f32[0] - (float)((float)(v6.m128_f32[0] * v6.m128_f32[0]) * 2.0)) + v6.m128_f32[0];
	v7.m128_f32[0] = (float)(v6.m128_f32[0] * v6.m128_f32[0]) * 3.0;
	v11 = v7;
	v11.m128_f32[0] = v7.m128_f32[0] - v8.m128_f32[0];
	v8.m128_f32[0] = (float)(v8.m128_f32[0] - v7.m128_f32[0]) + 1.0;
	v12 = _mm_add_ps(
		_mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), *v5),
		_mm_add_ps(
			_mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), *v3),
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), *v4), _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), *v2))));
	*(__m128*)sub_140059170(a1, 0x10ui64) = v12;
	v13 = a1[4];
	v14 = sub_140062650((__int64)a1, (unsigned __int64*)"Vector3", 7ui64);
	v15 = a1[2];
	v17 = v14;
	v18 = 4;
	sub_14005E8E0((__int64)a1, v13 + 160, (int*)&v17, v15);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}

