//----- (000000014013EB70) ----------------------------------------------------
__int64 __fastcall sub_14013EB70(_QWORD* a1, __m128* a2)
{
	__int64 v2; // r12
	__m128 v3; // xmm6
	__int64 v6; // rsi
	unsigned __int64 v7; // r14
	unsigned __int64 v8; // rbx
	__m128 v9; // xmm9
	float v10; // xmm7_4
	float v11; // xmm8_4
	float v12; // xmm1_4
	float v13; // xmm2_4
	float v14; // xmm1_4
	__int64 v15; // rax
	__int64 v16; // rbx
	__int64 v17; // rsi
	__m128 v18; // xmm8
	float v19; // xmm6_4
	float v20; // xmm7_4
	__int64* v21; // rdi
	float* v22; // rax
	__int64 v24; // rax
	__m128 v25; // [rsp+28h] [rbp-49h] BYREF
	__m128 v26; // [rsp+48h] [rbp-29h] BYREF
	__m128 v27; // [rsp+58h] [rbp-19h] BYREF
	__m128 v28; // [rsp+68h] [rbp-9h]

	v2 = 0i64;
	v3 = 0i64;
	v6 = 0i64;
	v7 = 0i64;
	v25 = 0i64;
	if (!a1[9])
		return 0i64;
	while (1)
	{
		v8 = 0i64;
		v9 = v3;
		v10 = 0.0;
		if (*(_QWORD*)(a1[8] + 8 * v7))
			break;
	LABEL_10:
		v25 = v9;
		++v7;
		v25.m128_f32[1] = _mm_shuffle_ps(v9, v9, 85).m128_f32[0] + v10;
		if (v7 >= a1[9])
			return 0i64;
		v3 = v25;
	}
	v11 = v25.m128_f32[0];
	while (1)
	{
		sub_140141910(*(_QWORD*)(a1[12] + 8 * v6), v26.m128_f32);
		v12 = a2->m128_f32[0];
		v13 = *(float*)(a1[10] + 4 * v8);
		v26.m128_f32[0] = v13;
		v28 = _mm_add_ps(v26, v3);
		if (v12 >= v3.m128_f32[0] && v12 < v28.m128_f32[0])
		{
			v14 = a2->m128_f32[1];
			if (v14 >= _mm_shuffle_ps(v3, v3, 85).m128_f32[0] && v14 < v28.m128_f32[1])
				break;
		}
		v15 = a1[8];
		v10 = fmaxf(v10, v26.m128_f32[1]);
		v11 = v11 + v13;
		++v8;
		++v6;
		v25.m128_f32[0] = v11;
		if (v8 >= *(_QWORD*)(v15 + 8 * v7))
			goto LABEL_10;
		v3 = v25;
	}
	v16 = 0i64;
	v17 = *(_QWORD*)(a1[12] + 8 * v6);
	v18 = _mm_sub_ps(*a2, v3);
	v26 = v18;
	if (*(_QWORD*)(v17 + 816))
	{
		v19 = v26.m128_f32[1];
		v20 = v26.m128_f32[0];
		while (1)
		{
			v21 = *(__int64**)(*(_QWORD*)(v17 + 808) + 8 * v16);
			(*(void(__fastcall**)(__int64*, __m128*))(*v21 + 16))(v21, &v27);
			v22 = (float*)(*(__int64(__fastcall**)(__int64*, __m128*))(*v21 + 16))(v21, &v25);
			if (v20 >= *v22 && v20 < v22[4] && v19 >= v22[1] && v19 < v22[5])
				break;
			if ((unsigned __int64)++v16 >= *(_QWORD*)(v17 + 816))
				return 0i64;
		}
		v24 = *v21;
		v26 = _mm_sub_ps(v18, v27);
		return (*(__int64(__fastcall**)(__int64*, __m128*))(v24 + 48))(v21, &v26);
	}
	return v2;
}
// 14013EB70: using guessed type __m128 var_A0;
// 14013EB70: using guessed type __m128 var_60;

