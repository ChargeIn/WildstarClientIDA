//----- (00000001407AB450) ----------------------------------------------------
__int64 __fastcall sub_1407AB450(__m128* a1, unsigned int a2, unsigned int a3)
{
	unsigned int v5; // ebx
	__int64 v6; // rbp
	unsigned int v7; // r14d
	unsigned int v8; // r15d
	int v9; // r12d
	__int64 v10; // rsi
	int v11; // r9d
	int v12; // r8d
	__int64 v13; // rdx
	__m128 v14; // xmm6
	__m128 v15; // xmm6
	float v16; // xmm6_4
	int v17; // eax
	float v18; // xmm5_4
	int v19; // r9d
	int v20; // eax
	__int64 v22; // [rsp+30h] [rbp-B8h]
	__int64 v23; // [rsp+40h] [rbp-A8h]
	int v24[8]; // [rsp+48h] [rbp-A0h] BYREF
	__int64 v25; // [rsp+68h] [rbp-80h]
	int v26[8]; // [rsp+70h] [rbp-78h] BYREF

	v26[0] = 2;
	v24[0] = 2;
	v22 = a2;
	v5 = 0;
	v6 = 22 * (a1[27126].m128_u32[a2] + 8i64 * a2);
	v7 = a1[27126].m128_u32[a1[26690].m128_u32[v6 + 2]];
	v26[1] = v7;
	v24[1] = v7;
	v8 = a1[26690].m128_u32[v6 + 2];
	v26[2] = v8;
	v24[2] = v8;
	v9 = a1[27255].m128_i32[a1[26690].m128_u32[v6 + 2] + 3];
	v26[4] = v9;
	v24[4] = v9;
	v26[5] = -1;
	v24[5] = -1;
	v26[6] = 1;
	v24[6] = 1;
	v25 = sub_1407ABE40((__int64)a1, v7, v8, 0, v9, a3);
	v10 = v25;
	v26[3] = a1[26691].m128_i32[v6];
	v11 = a1[26690].m128_i32[v6 + 3];
	if (v11 == 5)
	{
		v13 = 0i64;
		v12 = 6;
	}
	else
	{
		v23 = sub_1407ABE40((__int64)a1, v7, v8, v11, v9, a3);
		v12 = a1[26690].m128_i32[v6 + 3];
		v13 = v23;
	}
	v24[3] = v12;
	v14 = _mm_sub_ps(a1[v22 + 27263], a1[27262]);
	v15 = _mm_mul_ps(v14, v14);
	v16 = v15.m128_f32[0] + _mm_shuffle_ps(v15, v15, 85).m128_f32[0];
	if (v13)
	{
		v17 = dword_140C54A60;
		if (*(_DWORD*)qword_140C63750 < dword_140C54A60)
			v17 = *(_DWORD*)qword_140C63750;
		v18 = fmaxf(
			5.0,
			5.0
			/ (float)((float)(a1[26692].m128_i32[v6 + 2] - a1[26691].m128_i32[v6 + 3]) / (float)(8 * dword_140C54A70[v17])));
		v19 = ((v12 - 1) & 0xFFFFFFFD) != 0 || a1[27271].m128_i32[1] && v16 <= (float)(v18 * v18);
		v20 = sub_1407AC430((__int64)a1, v13, (__int64)v24, v19);
		v10 = v25;
		if (v20)
			v5 = 1;
	}
	if (v10 && (unsigned int)sub_1407AC430((__int64)a1, v10, (__int64)v26, 1))
		return 1;
	return v5;
}
// 140C54A60: using guessed type int dword_140C54A60;
// 140C54A70: using guessed type int dword_140C54A70[];
// 140C63750: using guessed type __int64 qword_140C63750;

