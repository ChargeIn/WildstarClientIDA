//----- (000000014013ED70) ----------------------------------------------------
__int64 __fastcall sub_14013ED70(_QWORD* a1, __m128* a2)
{
	__m128 v2; // xmm6
	__int64 v3; // rsi
	unsigned __int64 v4; // rbp
	unsigned __int64 v7; // rbx
	__m128 v8; // xmm9
	float v9; // xmm7_4
	float v10; // xmm8_4
	float v11; // xmm1_4
	float v12; // xmm2_4
	float v13; // xmm1_4
	__int64 v14; // rcx
	__m128 v16; // [rsp+20h] [rbp-88h]
	__m128 v17; // [rsp+30h] [rbp-78h] BYREF
	__m128 v18; // [rsp+50h] [rbp-58h]

	v2 = 0i64;
	v3 = 0i64;
	v4 = 0i64;
	v16 = 0i64;
	if (!a1[9])
		return 0i64;
	while (1)
	{
		v7 = 0i64;
		v8 = v2;
		v9 = 0.0;
		if (*(_QWORD*)(a1[8] + 8 * v4))
			break;
	LABEL_10:
		v16 = v8;
		++v4;
		v16.m128_f32[1] = _mm_shuffle_ps(v8, v8, 85).m128_f32[0] + v9;
		if (v4 >= a1[9])
			return 0i64;
		v2 = v16;
	}
	v10 = v16.m128_f32[0];
	while (1)
	{
		sub_140141910(*(_QWORD*)(a1[12] + 8 * v3), v17.m128_f32);
		v11 = a2->m128_f32[0];
		v12 = *(float*)(a1[10] + 4 * v7);
		v17.m128_f32[0] = v12;
		v18 = _mm_add_ps(v17, v2);
		if (v11 >= v2.m128_f32[0] && v11 < v18.m128_f32[0])
		{
			v13 = a2->m128_f32[1];
			if (v13 >= _mm_shuffle_ps(v2, v2, 85).m128_f32[0] && v13 < v18.m128_f32[1])
				break;
		}
		v9 = fmaxf(v9, v17.m128_f32[1]);
		v10 = v10 + v12;
		++v7;
		++v3;
		v16.m128_f32[0] = v10;
		if (v7 >= *(_QWORD*)(a1[8] + 8 * v4))
			goto LABEL_10;
		v2 = v16;
	}
	v14 = *(_QWORD*)(a1[12] + 8 * v3);
	v17 = _mm_sub_ps(*a2, v2);
	return sub_140141B00(v14, &v17);
}
// 14013ED70: using guessed type __m128 var_78;
// 14013ED70: using guessed type __m128 var_58;

