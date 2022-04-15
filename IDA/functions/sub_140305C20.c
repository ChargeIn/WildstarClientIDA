//----- (0000000140305C20) ----------------------------------------------------
__int64 __fastcall sub_140305C20(__m128* a1, int a2)
{
	__int64 result; // rax
	unsigned int v4; // esi
	int v5; // r10d
	__m128* v6; // rax
	__m128 v7; // xmm0
	__m128 v8; // xmm1
	__m128* v9; // rax
	__m128* v10; // rax
	float v11; // xmm1_4
	float v12; // xmm0_4
	float v13; // xmm2_4
	float v14; // xmm1_4
	__m128 v15; // xmm0
	unsigned __int64 v16; // rax
	float v17; // xmm1_4
	float* v18; // r11
	__m128 v19; // xmm5
	__int64 v20; // rdx
	__m128* v21; // rcx
	__m128* v22; // rax
	float v23; // xmm1_4
	float v24; // xmm2_4
	float v25; // xmm0_4
	float v26; // xmm2_4
	__m128 v27; // xmm1
	unsigned __int64 v28; // rdi
	unsigned __int64 i; // [rsp+20h] [rbp-18h]
	__int16 v30; // [rsp+40h] [rbp+8h] BYREF

	if ((a1[3].m128_i8[0] & 1) == 0)
		return 2147483658i64;
	v4 = a2 & 0x10002;
	v5 = a2 & 0x10002 & ~a1[88].m128_i32[0];
	if (!v5)
		return 0i64;
	if ((v5 & 2) != 0)
	{
		v6 = (__m128*)a1[76].m128_u64[0];
		if (v6 && (a1[2].m128_i8[8] & 1) == 0)
		{
			a1[32] = _mm_mul_ps(v6[32], a1[32]);
			a1[33] = _mm_add_ps(v6[33], a1[33]);
			a1[34].m128_f32[0] = v6[34].m128_f32[0] * a1[34].m128_f32[0];
			v7 = (__m128)0x3F800000u;
			v7.m128_f32[0] = 1.0 - a1[35].m128_f32[3];
			a1[34].m128_f32[1] = (float)(a1[34].m128_f32[1] + v6[34].m128_f32[1])
				- (float)(a1[34].m128_f32[1] * v6[34].m128_f32[1]);
			v8 = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), v6[35]);
			v9 = a1 + 36;
			a1[35] = _mm_add_ps(a1[35], v8);
			if (a1[36].m128_f32[0] < *(float*)(a1[76].m128_u64[0] + 576))
				v9 = (__m128*)(a1[76].m128_u64[0] + 576);
			a1[36].m128_i32[0] = v9->m128_i32[0];
		}
		v10 = a1 + 30;
		a1[25] = _mm_mul_ps(a1[25], a1[32]);
		a1[26] = _mm_add_ps(a1[26], a1[33]);
		v11 = a1[27].m128_f32[1];
		a1[27].m128_f32[0] = a1[27].m128_f32[0] * a1[34].m128_f32[0];
		v12 = a1[34].m128_f32[1];
		v13 = v11 + v12;
		v14 = v11 * v12;
		v15 = (__m128)0x3F800000u;
		v15.m128_f32[0] = 1.0 - a1[29].m128_f32[3];
		a1[27].m128_f32[1] = v13 - v14;
		a1[29] = _mm_add_ps(a1[29], _mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), a1[35]));
		if (a1[30].m128_f32[0] < a1[36].m128_f32[0])
			v10 = a1 + 36;
		a1[30].m128_i32[0] = v10->m128_i32[0];
		v16 = a1[76].m128_u64[0];
		if (v16)
			v17 = *(float*)(v16 + 1684);
		else
			v17 = a1[105].m128_f32[0];
		a1[105].m128_f32[1] = v17;
		sub_1401C96D0(&v30, v17);
		v20 = 0i64;
		for (i = _mm_add_ps(
			(__m128)xmmword_140B7AB50,
			_mm_mul_ps(
				_mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)(unsigned __int8)v30), (__m128)0i64),
					_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)HIBYTE(v30)), (__m128)0i64)),
				(__m128)xmmword_140B7AB60)).m128_u64[0];
			(unsigned int)v20 < *(_DWORD*)(a1[4].m128_u64[0] + 240);
			v21[5].m128_i32[0] = v22->m128_i32[0])
		{
			v21 = (__m128*)(a1[31].m128_u64[0] + 96 * v20);
			v22 = v21 + 5;
			*v21 = _mm_mul_ps(a1[32], *v21);
			v21[1] = _mm_add_ps(v21[1], a1[33]);
			v21[2].m128_f32[0] = v21[2].m128_f32[0] * a1[34].m128_f32[0];
			v23 = a1[34].m128_f32[1];
			v24 = v21[2].m128_f32[1];
			v25 = v24 * v23;
			v21[3].m128_u64[1] = i;
			v26 = v24 + v23;
			v27 = v19;
			v27.m128_f32[0] = v19.m128_f32[0] - v21[4].m128_f32[3];
			v21[2].m128_f32[1] = v26 - v25;
			v21[4] = _mm_add_ps(v21[4], _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), a1[35]));
			if (v21[5].m128_f32[0] < *v18)
				v22 = (__m128*)v18;
			v20 = (unsigned int)(v20 + 1);
		}
		a1[88].m128_i32[0] |= 2u;
	}
	if ((v5 & 0x10000) == 0 || (~a1[88].m128_i32[1] & v4) == 0)
		return 0i64;
	v28 = a1[77].m128_u64[0];
	if (!v28)
	{
	LABEL_26:
		a1[88].m128_i32[1] |= v4;
		return 0i64;
	}
	while (1)
	{
		result = sub_140305C20(v28, v4);
		if ((int)result < 0)
			return result;
		v28 = *(_QWORD*)(v28 + 1248);
		if (!v28)
			goto LABEL_26;
	}
}
// 140305F03: variable 'v19' is possibly undefined
// 140305F2F: variable 'v18' is possibly undefined
// 140305F5A: variable 'v5' is possibly undefined
// 140B7AB50: using guessed type __int128 xmmword_140B7AB50;
// 140B7AB60: using guessed type __int128 xmmword_140B7AB60;

