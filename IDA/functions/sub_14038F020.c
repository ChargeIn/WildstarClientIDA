//----- (000000014038F020) ----------------------------------------------------
__m128* __fastcall sub_14038F020(__m128* a1)
{
	float v1; // xmm1_4
	__m128* v3; // rcx
	__m128 v4; // xmm1
	__m128 v5; // xmm0
	__m128** v6; // rcx
	unsigned __int64 v7; // rax
	void(__fastcall * **v8)(unsigned __int64); // rcx
	void(__fastcall * **v9)(unsigned __int64); // rdi
	unsigned __int64 v10; // rcx
	void(__fastcall * **v11)(unsigned __int64); // rdi
	unsigned __int64 v12; // rcx
	__m128** v13; // rcx
	unsigned __int64 v14; // rax
	__m128 v15; // xmm0
	__m128 v16; // xmm3
	__m128 v17; // xmm5
	__m128 v18; // xmm0
	__m128 v19; // xmm2
	__m128 v20; // xmm2
	__m128 v22; // [rsp+30h] [rbp-F8h] BYREF
	__m128 v23; // [rsp+40h] [rbp-E8h]
	__m128 v24; // [rsp+50h] [rbp-D8h]
	__m128 v25; // [rsp+60h] [rbp-C8h]
	__m128* v26; // [rsp+70h] [rbp-B8h] BYREF
	double v27[8]; // [rsp+80h] [rbp-A8h] BYREF
	__m128* v28[10]; // [rsp+C0h] [rbp-68h] BYREF

	v1 = a1[18].m128_f32[1];
	a1[3].m128_f32[1] = v1;
	v3 = a1 + 2;
	v3->m128_f32[1] = -v1;
	sub_140252A70(v3, &v22);
	v4 = v23;
	if ((_mm_movemask_ps(_mm_cmpneq_ps(a1[22], v22)) & 7) != 0 || (_mm_movemask_ps(_mm_cmpneq_ps(a1[23], v23)) & 7) != 0)
	{
		v5 = v24;
		a1[22] = v22;
		a1[23] = v4;
		a1[24] = v5;
		a1[25].m128_i32[0] = v25.m128_i32[0];
		if (!a1[29].m128_u64[1])
		{
			v6 = (__m128**)(a1[1].m128_u64[0] + 5376);
			a1[29].m128_u64[1] = (unsigned __int64)v6;
			a1[30].m128_u64[0] = (unsigned __int64)*v6;
			*v6 = a1;
			v7 = a1[30].m128_u64[0];
			if (v7)
				*(_QWORD*)(v7 + 472) = a1 + 30;
		}
	}
	v8 = (void(__fastcall***)(unsigned __int64))a1[21].m128_u64[0];
	v9 = (void(__fastcall***)(unsigned __int64))a1[20].m128_u64[0];
	if (v8 != v9)
		goto LABEL_9;
	if (a1[21].m128_u64[1] == a1[20].m128_u64[1])
		goto LABEL_23;
	if (v8 != v9)
	{
	LABEL_9:
		if (v9)
			(**v9)(a1[20].m128_u64[0]);
		v10 = a1[21].m128_u64[0];
		if (v10)
			(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v10 + 8i64))(v10);
		a1[21].m128_u64[0] = (unsigned __int64)v9;
	}
	v11 = (void(__fastcall***)(unsigned __int64))a1[20].m128_u64[1];
	if ((void(__fastcall***)(unsigned __int64))a1[21].m128_u64[1] != v11)
	{
		if (v11)
			(**v11)(a1[20].m128_u64[1]);
		v12 = a1[21].m128_u64[1];
		if (v12)
			(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v12 + 8i64))(v12);
		a1[21].m128_u64[1] = (unsigned __int64)v11;
	}
	if (!a1[31].m128_u64[1])
	{
		v13 = (__m128**)(a1[1].m128_u64[0] + 5392);
		a1[31].m128_u64[1] = (unsigned __int64)v13;
		a1[32].m128_u64[0] = (unsigned __int64)*v13;
		*v13 = a1;
		v14 = a1[32].m128_u64[0];
		if (v14)
			*(_QWORD*)(v14 + 504) = a1 + 32;
	}
LABEL_23:
	v15 = a1[3];
	v16 = (__m128)0x3F800000u;
	v17 = (__m128)0x3F800000u;
	v26 = a1 + 4;
	v18 = _mm_sub_ps(v15, a1[2]);
	v17.m128_f32[0] = 1.0 / v18.m128_f32[0];
	v19 = v17;
	v17.m128_f32[0] = (float)(1.0 / v18.m128_f32[0]) * a1[2].m128_f32[0];
	v16.m128_f32[0] = 1.0 / _mm_shuffle_ps(v18, v18, 170).m128_f32[0];
	v23 = (__m128)xmmword_140B7A700;
	v22 = _mm_unpacklo_ps(_mm_unpacklo_ps(v19, (__m128)0i64), (__m128)0i64);
	v20 = v16;
	v16.m128_f32[0] = v16.m128_f32[0] * a1[2].m128_f32[2];
	v24 = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps(v20, (__m128)0i64));
	v25 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(_mm_xor_ps(v17, (__m128)xmmword_140B7B530), (__m128)0i64),
		_mm_unpacklo_ps(_mm_xor_ps(v16, (__m128)xmmword_140B7B530), (__m128)0x3F800000u));
	sub_1401AFC20((__int64*)&v26, v27);
	v28[0] = (__m128*)v27;
	v28[1] = &v22;
	return sub_1401AFB10(v28, a1 + 8);
}
// 140B7A700: using guessed type __int128 xmmword_140B7A700;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 14038F020: using guessed type double var_A8[8];

