//----- (00000001401485E0) ----------------------------------------------------
__int64 __fastcall sub_1401485E0(_QWORD* a1)
{
	__m128* v2; // rbp
	__m128* v3; // rsi
	__m128* v4; // rdi
	__m128* v5; // rbx
	double v6; // xmm0_8
	__m128 v7; // xmm5
	__m128 v8; // xmm6
	__m128 v9; // xmm3
	__m128 v10; // xmm0
	float v11; // xmm1_4
	__m128 v12; // xmm4
	__m128 v13; // xmm7
	__m128 v14; // xmm2
	__m128 v15; // xmm7
	__int64 v16; // rbx
	__int64 v17; // rax
	__int64 v18; // r9
	__int64 v20; // [rsp+20h] [rbp-38h] BYREF
	int v21; // [rsp+28h] [rbp-30h]

	v2 = (__m128*)sub_140056AB0(a1, 1u);
	v3 = (__m128*)sub_140056AB0(a1, 2u);
	v4 = (__m128*)sub_140056AB0(a1, 3u);
	v5 = (__m128*)sub_140056AB0(a1, 4u);
	v6 = sub_140056C40(a1, 5u);
	v7 = 0i64;
	v7.m128_f32[0] = v6;
	v8 = v7;
	v8.m128_f32[0] = v7.m128_f32[0] * v7.m128_f32[0];
	v9 = v8;
	v10 = v8;
	v10.m128_f32[0] = (float)(v7.m128_f32[0] * v7.m128_f32[0]) * 2.0;
	v11 = (float)(v7.m128_f32[0] * v7.m128_f32[0]) * 0.5;
	v9.m128_f32[0] = (float)(v7.m128_f32[0] * v7.m128_f32[0]) * v7.m128_f32[0];
	v12 = v9;
	v9.m128_f32[0] = v9.m128_f32[0] * 1.5;
	v7.m128_f32[0] = v7.m128_f32[0] * 0.5;
	v12.m128_f32[0] = v12.m128_f32[0] * 0.5;
	v13 = v12;
	v10.m128_f32[0] = (float)(v10.m128_f32[0] - v9.m128_f32[0]) + v7.m128_f32[0];
	v13.m128_f32[0] = v12.m128_f32[0] - v11;
	v14 = v10;
	v10.m128_f32[0] = v8.m128_f32[0] * 2.5;
	v8.m128_f32[0] = (float)(v8.m128_f32[0] - v12.m128_f32[0]) - v7.m128_f32[0];
	v9.m128_f32[0] = (float)(v9.m128_f32[0] - v10.m128_f32[0]) + 1.0;
	v15 = _mm_add_ps(
		_mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), *v5),
		_mm_add_ps(
			_mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), *v4),
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), *v3), _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), *v2))));
	*(__m128*)sub_140059170(a1, 0x10ui64) = v15;
	v16 = a1[4];
	v17 = sub_140062650((__int64)a1, (unsigned __int64*)"Vector3", 7ui64);
	v18 = a1[2];
	v20 = v17;
	v21 = 4;
	sub_14005E8E0((__int64)a1, v16 + 160, (int*)&v20, v18);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}

