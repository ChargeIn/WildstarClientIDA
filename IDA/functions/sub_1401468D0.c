//----- (00000001401468D0) ----------------------------------------------------
__int64 __fastcall sub_1401468D0(_QWORD* a1)
{
	__m128* v2; // rbp
	__m128* v3; // rsi
	__m128* v4; // rdi
	__m128* v5; // rbx
	double v6; // xmm0_8
	__m128 v7; // xmm5
	__m128 v8; // xmm2
	__m128 v9; // xmm4
	__m128 v10; // xmm3
	__m128 v11; // xmm6
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
	v6 = sub_140056C40(a1, 5u);
	v7 = 0i64;
	v7.m128_f32[0] = v6;
	v8 = v7;
	v9 = v7;
	v8.m128_f32[0] = v7.m128_f32[0] * v7.m128_f32[0];
	v10 = v8;
	v8.m128_f32[0] = (float)(v7.m128_f32[0] * v7.m128_f32[0]) * 4.5;
	v10.m128_f32[0] = v10.m128_f32[0] * 1.5;
	v9.m128_f32[0] = (float)(v7.m128_f32[0] * 4.0) - v8.m128_f32[0];
	v8.m128_f32[0] = v8.m128_f32[0] - (float)(v7.m128_f32[0] * 5.0);
	v11 = v10;
	v9.m128_f32[0] = v9.m128_f32[0] + 0.5;
	v11.m128_f32[0] = v10.m128_f32[0] - v7.m128_f32[0];
	v7.m128_f32[0] = (float)((float)(v7.m128_f32[0] * 2.0) - v10.m128_f32[0]) - 0.5;
	v12 = _mm_add_ps(
		_mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), *v5),
		_mm_add_ps(
			_mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), *v4),
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), *v3), _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *v2))));
	*(__m128*)sub_140059170(a1, 0x10ui64) = v12;
	v13 = a1[4];
	v14 = sub_140062650((__int64)a1, (unsigned __int64*)"Vector2", 7ui64);
	v15 = a1[2];
	v17 = v14;
	v18 = 4;
	sub_14005E8E0((__int64)a1, v13 + 160, (int*)&v17, v15);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}

